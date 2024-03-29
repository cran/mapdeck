// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_aggregate_geojson
Rcpp::List rcpp_aggregate_geojson(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_column, int digits, std::string layer_name);
RcppExport SEXP _mapdeck_rcpp_aggregate_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnSEXP, SEXP digitsSEXP, SEXP layer_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_column(geometry_columnSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< std::string >::type layer_name(layer_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_aggregate_geojson(data, params, geometry_column, digits, layer_name));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_aggregate_geojson_df
Rcpp::List rcpp_aggregate_geojson_df(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List geometry_columns, int digits, std::string layer_name);
RcppExport SEXP _mapdeck_rcpp_aggregate_geojson_df(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP digitsSEXP, SEXP layer_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< std::string >::type layer_name(layer_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_aggregate_geojson_df(data, params, geometry_columns, digits, layer_name));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_aggregate_polyline
Rcpp::List rcpp_aggregate_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns, std::string layer_name);
RcppExport SEXP _mapdeck_rcpp_aggregate_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP layer_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< std::string >::type layer_name(layer_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_aggregate_polyline(data, params, geometry_columns, layer_name));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_geojson_geojson
Rcpp::List rcpp_geojson_geojson(Rcpp::DataFrame data, Rcpp::List params, std::string geometry_column, int digits);
RcppExport SEXP _mapdeck_rcpp_geojson_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< std::string >::type geometry_column(geometry_columnSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_geojson_geojson(data, params, geometry_column, digits));
    return rcpp_result_gen;
END_RCPP
}
// mesh_to_sf
Rcpp::List mesh_to_sf(Rcpp::List& mesh, Rcpp::StringVector vertices);
RcppExport SEXP _mapdeck_mesh_to_sf(SEXP meshSEXP, SEXP verticesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type mesh(meshSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type vertices(verticesSEXP);
    rcpp_result_gen = Rcpp::wrap(mesh_to_sf(mesh, vertices));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mesh_geojson
Rcpp::List rcpp_mesh_geojson(Rcpp::List mesh, Rcpp::List params, Rcpp::StringVector vertices, int digits);
RcppExport SEXP _mapdeck_rcpp_mesh_geojson(SEXP meshSEXP, SEXP paramsSEXP, SEXP verticesSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type mesh(meshSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type vertices(verticesSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mesh_geojson(mesh, params, vertices, digits));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_mesh_geojson2
Rcpp::StringVector rcpp_mesh_geojson2(Rcpp::List mesh, Rcpp::StringVector vertices);
RcppExport SEXP _mapdeck_rcpp_mesh_geojson2(SEXP meshSEXP, SEXP verticesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type mesh(meshSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type vertices(verticesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_mesh_geojson2(mesh, vertices));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_od_geojson
Rcpp::List rcpp_od_geojson(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns, int digits, std::string layer_name);
RcppExport SEXP _mapdeck_rcpp_od_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP digitsSEXP, SEXP layer_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< std::string >::type layer_name(layer_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_od_geojson(data, params, geometry_columns, digits, layer_name));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_od_geojson_df
Rcpp::List rcpp_od_geojson_df(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List geometry_columns, int digits, std::string layer_name);
RcppExport SEXP _mapdeck_rcpp_od_geojson_df(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP digitsSEXP, SEXP layer_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< std::string >::type layer_name(layer_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_od_geojson_df(data, params, geometry_columns, digits, layer_name));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_od_polyline
Rcpp::List rcpp_od_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns, std::string layer_name);
RcppExport SEXP _mapdeck_rcpp_od_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP layer_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< std::string >::type layer_name(layer_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_od_polyline(data, params, geometry_columns, layer_name));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_path_geojson
Rcpp::List rcpp_path_geojson(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns, int digits, std::string layer_name);
RcppExport SEXP _mapdeck_rcpp_path_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP digitsSEXP, SEXP layer_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< std::string >::type layer_name(layer_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_path_geojson(data, params, geometry_columns, digits, layer_name));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_path_interleaved
SEXP rcpp_path_interleaved(Rcpp::DataFrame sf, Rcpp::List params, Rcpp::IntegerVector list_columns, int digits, std::string layer_name);
RcppExport SEXP _mapdeck_rcpp_path_interleaved(SEXP sfSEXP, SEXP paramsSEXP, SEXP list_columnsSEXP, SEXP digitsSEXP, SEXP layer_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type list_columns(list_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< std::string >::type layer_name(layer_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_path_interleaved(sf, params, list_columns, digits, layer_name));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_trips_interleaved
SEXP rcpp_trips_interleaved(Rcpp::DataFrame sf, Rcpp::List params, Rcpp::IntegerVector list_columns, int digits, std::string layer_name, int start_time);
RcppExport SEXP _mapdeck_rcpp_trips_interleaved(SEXP sfSEXP, SEXP paramsSEXP, SEXP list_columnsSEXP, SEXP digitsSEXP, SEXP layer_nameSEXP, SEXP start_timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type list_columns(list_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< std::string >::type layer_name(layer_nameSEXP);
    Rcpp::traits::input_parameter< int >::type start_time(start_timeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_trips_interleaved(sf, params, list_columns, digits, layer_name, start_time));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_path_polyline
Rcpp::List rcpp_path_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns, std::string layer_name);
RcppExport SEXP _mapdeck_rcpp_path_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP layer_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< std::string >::type layer_name(layer_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_path_polyline(data, params, geometry_columns, layer_name));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_point_df_columnar
Rcpp::List rcpp_point_df_columnar(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List geometry_columns, int digits, std::string layer_name);
RcppExport SEXP _mapdeck_rcpp_point_df_columnar(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP digitsSEXP, SEXP layer_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< std::string >::type layer_name(layer_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_point_df_columnar(data, params, geometry_columns, digits, layer_name));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_point_sf_columnar
Rcpp::List rcpp_point_sf_columnar(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List geometry_columns, int digits, std::string layer_name);
RcppExport SEXP _mapdeck_rcpp_point_sf_columnar(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP digitsSEXP, SEXP layer_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< std::string >::type layer_name(layer_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_point_sf_columnar(data, params, geometry_columns, digits, layer_name));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_point_geojson_df
Rcpp::List rcpp_point_geojson_df(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List geometry_columns, int digits, std::string layer_name);
RcppExport SEXP _mapdeck_rcpp_point_geojson_df(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP digitsSEXP, SEXP layer_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< std::string >::type layer_name(layer_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_point_geojson_df(data, params, geometry_columns, digits, layer_name));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_point_polyline
Rcpp::List rcpp_point_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns, std::string layer_name);
RcppExport SEXP _mapdeck_rcpp_point_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP layer_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< std::string >::type layer_name(layer_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_point_polyline(data, params, geometry_columns, layer_name));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_polygon_geojson
Rcpp::List rcpp_polygon_geojson(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns, int digits);
RcppExport SEXP _mapdeck_rcpp_polygon_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_polygon_geojson(data, params, geometry_columns, digits));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_polygon_polyline
Rcpp::List rcpp_polygon_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns);
RcppExport SEXP _mapdeck_rcpp_polygon_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_polygon_polyline(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_text_geojson
Rcpp::List rcpp_text_geojson(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns, int digits);
RcppExport SEXP _mapdeck_rcpp_text_geojson(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_text_geojson(data, params, geometry_columns, digits));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_text_geojson_df
Rcpp::List rcpp_text_geojson_df(Rcpp::DataFrame data, Rcpp::List params, Rcpp::List geometry_columns, int digits);
RcppExport SEXP _mapdeck_rcpp_text_geojson_df(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP, SEXP digitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type geometry_columns(geometry_columnsSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_text_geojson_df(data, params, geometry_columns, digits));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_text_polyline
Rcpp::List rcpp_text_polyline(Rcpp::DataFrame data, Rcpp::List params, Rcpp::StringVector geometry_columns);
RcppExport SEXP _mapdeck_rcpp_text_polyline(SEXP dataSEXP, SEXP paramsSEXP, SEXP geometry_columnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geometry_columns(geometry_columnsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_text_polyline(data, params, geometry_columns));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mapdeck_rcpp_aggregate_geojson", (DL_FUNC) &_mapdeck_rcpp_aggregate_geojson, 5},
    {"_mapdeck_rcpp_aggregate_geojson_df", (DL_FUNC) &_mapdeck_rcpp_aggregate_geojson_df, 5},
    {"_mapdeck_rcpp_aggregate_polyline", (DL_FUNC) &_mapdeck_rcpp_aggregate_polyline, 4},
    {"_mapdeck_rcpp_geojson_geojson", (DL_FUNC) &_mapdeck_rcpp_geojson_geojson, 4},
    {"_mapdeck_mesh_to_sf", (DL_FUNC) &_mapdeck_mesh_to_sf, 2},
    {"_mapdeck_rcpp_mesh_geojson", (DL_FUNC) &_mapdeck_rcpp_mesh_geojson, 4},
    {"_mapdeck_rcpp_mesh_geojson2", (DL_FUNC) &_mapdeck_rcpp_mesh_geojson2, 2},
    {"_mapdeck_rcpp_od_geojson", (DL_FUNC) &_mapdeck_rcpp_od_geojson, 5},
    {"_mapdeck_rcpp_od_geojson_df", (DL_FUNC) &_mapdeck_rcpp_od_geojson_df, 5},
    {"_mapdeck_rcpp_od_polyline", (DL_FUNC) &_mapdeck_rcpp_od_polyline, 4},
    {"_mapdeck_rcpp_path_geojson", (DL_FUNC) &_mapdeck_rcpp_path_geojson, 5},
    {"_mapdeck_rcpp_path_interleaved", (DL_FUNC) &_mapdeck_rcpp_path_interleaved, 5},
    {"_mapdeck_rcpp_trips_interleaved", (DL_FUNC) &_mapdeck_rcpp_trips_interleaved, 6},
    {"_mapdeck_rcpp_path_polyline", (DL_FUNC) &_mapdeck_rcpp_path_polyline, 4},
    {"_mapdeck_rcpp_point_df_columnar", (DL_FUNC) &_mapdeck_rcpp_point_df_columnar, 5},
    {"_mapdeck_rcpp_point_sf_columnar", (DL_FUNC) &_mapdeck_rcpp_point_sf_columnar, 5},
    {"_mapdeck_rcpp_point_geojson_df", (DL_FUNC) &_mapdeck_rcpp_point_geojson_df, 5},
    {"_mapdeck_rcpp_point_polyline", (DL_FUNC) &_mapdeck_rcpp_point_polyline, 4},
    {"_mapdeck_rcpp_polygon_geojson", (DL_FUNC) &_mapdeck_rcpp_polygon_geojson, 4},
    {"_mapdeck_rcpp_polygon_polyline", (DL_FUNC) &_mapdeck_rcpp_polygon_polyline, 3},
    {"_mapdeck_rcpp_text_geojson", (DL_FUNC) &_mapdeck_rcpp_text_geojson, 4},
    {"_mapdeck_rcpp_text_geojson_df", (DL_FUNC) &_mapdeck_rcpp_text_geojson_df, 4},
    {"_mapdeck_rcpp_text_polyline", (DL_FUNC) &_mapdeck_rcpp_text_polyline, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_mapdeck(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
