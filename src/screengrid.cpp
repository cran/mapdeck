#include <Rcpp.h>

#include "mapdeck_defaults.hpp"
#include "layers/screengrid.hpp"
#include "spatialwidget/spatialwidget.hpp"

Rcpp::List screengrid_defaults(int n) {
	return Rcpp::List::create(
		_["weight"] = mapdeck::defaults::default_weight(n)
	);
}


// [[Rcpp::export]]
Rcpp::List rcpp_screengrid_geojson( Rcpp::DataFrame data,
                            Rcpp::List params, std::string geometry_columns ) {

	int data_rows = data.nrows();

	Rcpp::List lst_defaults = screengrid_defaults( data_rows );  // initialise with defaults
	std::unordered_map< std::string, std::string > screengrid_colours = mapdeck::screengrid::screengrid_colours;
	Rcpp::StringVector screengrid_legend = mapdeck::screengrid::screengrid_legend;
	Rcpp::StringVector parameter_exclusions = Rcpp::StringVector::create("legend","legend_options","palette","na_colour");

	return spatialwidget::api::create_geojson_downcast(
		data,
		params,
		lst_defaults,
		screengrid_colours,
		screengrid_legend,
		data_rows,
		parameter_exclusions,
		geometry_columns,
		true  // jsonify legend
	);
}


// [[Rcpp::export]]
Rcpp::List rcpp_screengrid_geojson_df( Rcpp::DataFrame data,
                                    Rcpp::List params, Rcpp::List geometry_columns ) {

	int data_rows = data.nrows();

	Rcpp::List lst_defaults = screengrid_defaults( data_rows );  // initialise with defaults
	std::unordered_map< std::string, std::string > screengrid_colours = mapdeck::screengrid::screengrid_colours;
	Rcpp::StringVector screengrid_legend = mapdeck::screengrid::screengrid_legend;
	Rcpp::StringVector parameter_exclusions = Rcpp::StringVector::create("legend","legend_options","palette","na_colour");

	return spatialwidget::api::create_geojson(
		data,
		params,
		lst_defaults,
		screengrid_colours,
		screengrid_legend,
		data_rows,
		parameter_exclusions,
		geometry_columns,
		true  // jsonify legend
	);
}

// [[Rcpp::export]]
Rcpp::List rcpp_screengrid_polyline( Rcpp::DataFrame data,
                                    Rcpp::List params, Rcpp::StringVector geometry_columns ) {

	int data_rows = data.nrows();

	Rcpp::List lst_defaults = screengrid_defaults( data_rows );  // initialise with defaults
	std::unordered_map< std::string, std::string > screengrid_colours = mapdeck::screengrid::screengrid_colours;
	Rcpp::StringVector screengrid_legend = mapdeck::screengrid::screengrid_legend;
	Rcpp::StringVector parameter_exclusions = Rcpp::StringVector::create("legend","legend_options","palette","na_colour");

	return spatialwidget::api::create_polyline(
		data,
		params,
		lst_defaults,
		screengrid_colours,
		screengrid_legend,
		data_rows,
		parameter_exclusions,
		geometry_columns,
		true  // jsonify legend
	);
}
