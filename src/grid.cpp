#include <Rcpp.h>

#include "mapdeck_defaults.hpp"
#include "layers/grid.hpp"
#include "spatialwidget/spatialwidget.hpp"

Rcpp::List grid_defaults(int n) {
	return Rcpp::List::create();
}


// [[Rcpp::export]]
Rcpp::List rcpp_grid_geojson( Rcpp::DataFrame data,
                              Rcpp::List params, std::string geometry_column ) {

	int data_rows = data.nrows();

	Rcpp::List lst_defaults = grid_defaults( data_rows );  // initialise with defaults

	std::unordered_map< std::string, std::string > grid_colours = mapdeck::grid::grid_colours;
	Rcpp::StringVector grid_legend = mapdeck::grid::grid_legend;
	Rcpp::StringVector parameter_exclusions = Rcpp::StringVector::create("legend","legend_options","palette","na_colour");

	return spatialwidget::api::create_geojson_downcast(
		data,
		params,
		lst_defaults,
		grid_colours,
		grid_legend,
		data_rows,
		parameter_exclusions,
		geometry_column,
		true  // jsonify legend
	);
}

// [[Rcpp::export]]
Rcpp::List rcpp_grid_geojson_df( Rcpp::DataFrame data,
                              Rcpp::List params, Rcpp::List geometry_columns ) {

	int data_rows = data.nrows();

	Rcpp::List lst_defaults = grid_defaults( data_rows );  // initialise with defaults

	std::unordered_map< std::string, std::string > grid_colours = mapdeck::grid::grid_colours;
	Rcpp::StringVector grid_legend = mapdeck::grid::grid_legend;
	Rcpp::StringVector parameter_exclusions = Rcpp::StringVector::create("legend","legend_options","palette","na_colour");

	return spatialwidget::api::create_geojson(
		data,
		params,
		lst_defaults,
		grid_colours,
		grid_legend,
		data_rows,
		parameter_exclusions,
		geometry_columns,
		true  // jsonify legend
	);
}

// [[Rcpp::export]]
Rcpp::List rcpp_grid_polyline( Rcpp::DataFrame data,
                              Rcpp::List params, Rcpp::StringVector geometry_columns ) {

	int data_rows = data.nrows();

	Rcpp::List lst_defaults = grid_defaults( data_rows );  // initialise with defaults

	std::unordered_map< std::string, std::string > grid_colours = mapdeck::grid::grid_colours;
	Rcpp::StringVector grid_legend = mapdeck::grid::grid_legend;
	Rcpp::StringVector parameter_exclusions = Rcpp::StringVector::create("legend","legend_options","palette","na_colour");

	return spatialwidget::api::create_polyline(
		data,
		params,
		lst_defaults,
		grid_colours,
		grid_legend,
		data_rows,
		parameter_exclusions,
		geometry_columns,
		true  // jsonify legend
	);
}

