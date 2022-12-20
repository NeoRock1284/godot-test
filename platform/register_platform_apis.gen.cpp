#include "register_platform_apis.h"
#include "javascript/api/api.h"

void register_platform_apis() {
	register_javascript_api();
}

void unregister_platform_apis() {
	unregister_javascript_api();
}
