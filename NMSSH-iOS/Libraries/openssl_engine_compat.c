/* Compatibility stubs for ENGINE functions in OpenSSL 1.1.1+
 * These functions were deprecated/removed in OpenSSL 1.1.0+
 * libssh2 1.11.0 still references them, so we provide stubs
 */
void ENGINE_load_builtin_engines(void) {
    /* ENGINE API is deprecated in OpenSSL 1.1.0+
     * This stub does nothing as engines are no longer needed
     */
}

void ENGINE_register_all_complete(void) {
    /* Stub for ENGINE_register_all_complete */
}
