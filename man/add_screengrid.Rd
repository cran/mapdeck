% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/map_layer_screengrid.R
\name{add_screengrid}
\alias{add_screengrid}
\title{Add Screengrid}
\usage{
add_screengrid(
  map,
  data = get_map_data(map),
  lon = NULL,
  lat = NULL,
  polyline = NULL,
  weight = NULL,
  aggregation = c("sum", "mean", "min", "max"),
  colour_range = NULL,
  opacity = 0.8,
  cell_size = 50,
  layer_id = NULL,
  update_view = TRUE,
  focus_layer = FALSE,
  digits = 6,
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

\item{weight}{the weight of each value. Default 1}

\item{aggregation}{one of 'min', 'mean', 'max', 'sum'.
If supplied it specifies how the weights used.}

\item{colour_range}{vector of 6 hex colours}

\item{opacity}{opacity of cells. Value between 0 and 1. Default 0.8}

\item{cell_size}{size of grid squares in pixels. Default 50}

\item{layer_id}{single value specifying an id for the layer. Use this value to
distinguish between shape layers of the same type. Layers with the same id are likely
to conflict and not plot correctly}

\item{update_view}{logical indicating if the map should update the bounds to include this layer}

\item{focus_layer}{logical indicating if the map should update the bounds to only include this layer}

\item{digits}{number of digits for rounding coordinates}

\item{...}{\code{clear_legend} and \code{clear_view} arguments passed to 'clear_()' functions}
}
\description{
The Screen Grid Layer takes in an array of latitude and longitude coordinated points,
aggregates them into histogram bins and renders as a grid
}
\details{
\code{add_screengrid} supports POINT and MULTIPOINT sf objects
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

df <- df[ !is.na(df$lng), ]
df$weight <- sample(1:10, size = nrow(df), replace = TRUE)

mapdeck( style = mapdeck_style('dark'), pitch = 45 ) \%>\%
add_screengrid(
  data = df
  , lat = "lat"
  , lon = "lng"
  , weight = "weight",
  , layer_id = "screengrid_layer"
  , cell_size = 10
  , opacity = 0.3
)

## as an sf object
library(sfheaders)
sf <- sfheaders::sf_point( df, x = "lng", y = "lat")

mapdeck( style = mapdeck_style('dark'), pitch = 45 ) \%>\%
add_screengrid(
  data = sf
  , weight = "weight",
  , layer_id = "screengrid_layer"
  , cell_size = 10
  , opacity = 0.3
)

}

}
