#define SPATIALITE_MAX_CONNECTIONS	512

struct splite_connection
{
/* connections pool */
	void *conn_ptr;
	char *gaia_geos_error_msg;
	char *gaia_geos_warning_msg;
	char *gaia_geosaux_error_msg;
} splite_connection_pool[SPATIALITE_MAX_CONNECTIONS];

