% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/map_layer_grid.R
\name{add_grid}
\alias{add_grid}
\title{Add Grid}
\usage{
add_grid(
  map,
  data = get_map_data(map),
  lon = NULL,
  lat = NULL,
  polyline = NULL,
  cell_size = 1000,
  extruded = TRUE,
  elevation = NULL,
  elevation_function = c("sum", "mean", "min", "max"),
  colour = NULL,
  colour_function = c("sum", "mean", "min", "max"),
  elevation_scale = 1,
  colour_range = NULL,
  legend = FALSE,
  legend_options = NULL,
  auto_highlight = FALSE,
  highlight_colour = "#AAFFFFFF",
  layer_id = NULL,
  update_view = TRUE,
  focus_layer = FALSE,
  digits = 6,
  transitions = NULL,
  brush_radius = NULL,
  ...
)
}
\arguments{
\item{map}{a mapdeck map object}

\item{data}{data to be used in the layer. All coordinates are expected to be
EPSG:4326 (WGS 84) coordinate system}

\item{lon}{column containing longitude values}

\item{lat}{column containing latitude values}

\item{polyline}{optional column of \code{data} containing the polylines, if using encoded polylines}

\item{cell_size}{size of each cell in meters. Default 1000}

\item{extruded}{logical indicating if cells are elevated or not. Default TRUE}

\item{elevation}{the height the polygon extrudes from the map. Only available if neither
\code{stroke_colour} or \code{stroke_width} are supplied. Default 0}

\item{elevation_function}{one of 'min', 'mean', 'max', 'sum'.
IF supplied it specifies how the elevation values are calcualted. Defaults to sum.}

\item{colour}{column containing numeric values to colour by.}

\item{colour_function}{one of 'min', 'mean', 'max', 'sum'.
If supplied it specifies how the colour values are calculated. Defaults to sum.}

\item{elevation_scale}{elevation multiplier.}

\item{colour_range}{vector of 6 hex colours}

\item{legend}{either a logical indiciating if the legend(s) should be displayed, or
a named list indicating which colour attributes should be included in the legend.}

\item{legend_options}{A list of options for controlling the legend.}

\item{auto_highlight}{logical indicating if the shape under the mouse should auto-highlight}

\item{highlight_colour}{hex string colour to use for highlighting. Must contain the alpha component.}

\item{layer_id}{single value specifying an id for the layer. Use this value to
distinguish between shape layers of the same type. Layers with the same id are likely
to conflict and not plot correctly}

\item{update_view}{logical indicating if the map should update the bounds to include this layer}

\item{focus_layer}{logical indicating if the map should update the bounds to only include this layer}

\item{digits}{number of digits for rounding coordinates}

\item{transitions}{list specifying the duration of transitions.}

\item{brush_radius}{radius of the brush in metres. Default NULL. If supplied,
the arcs will only show if the origin or destination are within the radius of the mouse.
If NULL, all arcs are displayed}

\item{...}{\code{clear_legend} and \code{clear_view} arguments passed to 'clear_()' functions}
}
\description{
The Grid Layer renders a grid heatmap based on an array of points.
It takes the constant size all each cell, projects points into cells.
The color and height of the cell is scaled by number of points it contains.
}
\details{
\code{add_grid} supports POINT and MULTIPOINT sf objects
}
\section{data}{


If the \code{data} is a simple feature object, the geometry column is automatically
detected. If the sf object contains more than one geometry column and you want to use a specific one,
you'll need to set the active geometry using \code{sf::st_geometry( x ) <- "your_column" },
where \code{"your_column"} is the name of the column you're activating. See \code{?sf::st_geometry}
}

\examples{
\donttest{
## You need a valid access token from Mapbox
key <- 'abc'
set_token( key )

df <- read.csv(paste0(
'https://raw.githubusercontent.com/uber-common/deck.gl-data/master/',
'examples/3d-heatmap/heatmap-data.csv'
))

df <- df[ !is.na(df$lng ), ]

mapdeck( style = mapdeck_style("dark"), pitch = 45 ) \%>\%
add_grid(
  data = df
  , lat = "lat"
  , lon = "lng"
  , cell_size = 5000
  , elevation_scale = 50
  , layer_id = "grid_layer"
  , auto_highlight = TRUE
)

## using sf object
library(sfheaders)
sf <- sfheaders::sf_point( df, x = "lng", y = "lat")

mapdeck( style = mapdeck_style("dark"), pitch = 45 ) \%>\%
add_grid(
  data = sf
  , cell_size = 5000
  , elevation_scale = 50
  , layer_id = "grid_layer"
  , auto_highlight = TRUE
)

## using colour and elevation functions, and legends
df$val <- sample(1:10, size = nrow(df), replace = TRUE)

mapdeck( style = mapdeck_style("dark"), pitch = 45) \%>\%
add_grid(
	data = df
	, lat = "lat"
	, lon = "lng"
	, layer_id = "hex_layer"
	, elevation_scale = 100
	, legend = TRUE
	, colour_function = "max"
	, colour = "val"
)

mapdeck( style = mapdeck_style("dark"), pitch = 45) \%>\%
add_grid(
	data = df
	, lat = "lat"
	, lon = "lng"
	, layer_id = "hex_layer"
	, elevation_scale = 10
	, legend = TRUE
	, elevation_function = "mean"
	, elevation = "val"
)

}

}
\seealso{
add_hexagon
}
