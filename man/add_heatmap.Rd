% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/map_layer_heatmap.R
\name{add_heatmap}
\alias{add_heatmap}
\title{Add Heatmap}
\usage{
add_heatmap(
  map,
  data = get_map_data(map),
  lon = NULL,
  lat = NULL,
  polyline = NULL,
  weight = NULL,
  colour_range = NULL,
  radius_pixels = 30,
  intensity = 1,
  threshold = 0.05,
  layer_id = NULL,
  update_view = TRUE,
  focus_layer = FALSE,
  digits = 6,
  transitions = NULL,
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

\item{colour_range}{vector of 6 hex colours}

\item{radius_pixels}{Radius of the circle in pixels, to which the weight of an object is distributed}

\item{intensity}{Value that is multiplied with the total weight at a pixel to
obtain the final weight. A value larger than 1 biases the output color towards
the higher end of the spectrum, and a value less than 1 biases the output
color towards the lower end of the spectrum}

\item{threshold}{The HeatmapLayer reduces the opacity of the pixels with relatively
low weight to create a fading effect at the edge.
A larger threshold smoothens the boundaries of color blobs, while making pixels
with low relative weight harder to spot (due to low alpha value).
Threshold is defined as the ratio of the fading weight to the max weight, between 0 and 1.
For example, 0.1 affects all pixels with weight under 10\% of the max.}

\item{layer_id}{single value specifying an id for the layer. Use this value to
distinguish between shape layers of the same type. Layers with the same id are likely
to conflict and not plot correctly}

\item{update_view}{logical indicating if the map should update the bounds to include this layer}

\item{focus_layer}{logical indicating if the map should update the bounds to only include this layer}

\item{digits}{number of digits for rounding coordinates}

\item{transitions}{list specifying the duration of transitions.}

\item{...}{\code{clear_legend} and \code{clear_view} arguments passed to 'clear_()' functions}
}
\description{
The Heatmap Layer can be used to visualise spatial distribution of data.
It implements Gaussian Kernel Density Estimation to render the heatmaps.
}
\details{
\code{add_heatmap} supports POINT and MULTIPOINT sf objects
}
\section{note}{


The current version of this layer is supported only for WebGL2 enabled browswers
So you may find it doesn't render in the RStudio viewer.
}

\section{transitions}{


The transitions argument lets you specify the time it will take for the shapes to transition
from one state to the next. Only works in an interactive environment (Shiny)
and on WebGL-2 supported browsers and hardware.

The time is in milliseconds

Available transitions for heatmap

list(
intensity = 0,
threshold = 0,
radius_pixels = 0
)
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
add_heatmap(
  data = df
  , lat = "lat"
  , lon = "lng"
  , weight = "weight",
  , layer_id = "heatmap_layer"
)

## as an sf object
library(sfheaders)
sf <- sfheaders::sf_point( df, x = "lng", y = "lat")

mapdeck( style = mapdeck_style('dark'), pitch = 45 ) \%>\%
add_heatmap(
  data = sf
  , weight = "weight",
  , layer_id = "heatmap_layer"
)

}

}
