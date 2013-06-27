REGISTER_LONG_CONSTANT("RADIUS_ACCESS_REQUEST", 1, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_ACCESS_ACCEPT", 2, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_ACCESS_REJECT", 3, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_ACCOUNTING_REQUEST", 4, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_ACCOUNTING_RESPONSE", 5, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_ACCESS_CHALLENGE", 11, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_DISCONNECT_REQUEST", 40, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_DISCONNECT_ACK", 41, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_DISCONNECT_NAK", 42, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_COA_REQUEST", 43, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_COA_ACK", 44, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_COA_NAK", 45, CONST_PERSISTENT);

REGISTER_LONG_CONSTANT("RADIUS_USER_NAME", 1, CONST_PERSISTENT);	/* String */
REGISTER_LONG_CONSTANT("RADIUS_USER_PASSWORD", 2, CONST_PERSISTENT);	/* String */
REGISTER_LONG_CONSTANT("RADIUS_CHAP_PASSWORD", 3, CONST_PERSISTENT);	/* String */
REGISTER_LONG_CONSTANT("RADIUS_NAS_IP_ADDRESS", 4, CONST_PERSISTENT);	/* IP address */
REGISTER_LONG_CONSTANT("RADIUS_NAS_PORT", 5, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_SERVICE_TYPE", 6, CONST_PERSISTENT);	/* Integer */
	REGISTER_LONG_CONSTANT("RADIUS_LOGIN", 1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_FRAMED", 2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_CALLBACK_LOGIN", 3, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_CALLBACK_FRAMED", 4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_OUTBOUND", 5, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ADMINISTRATIVE", 6, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_NAS_PROMPT", 7, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_AUTHENTICATE_ONLY", 8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_CALLBACK_NAS_PROMPT", 9, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_FRAMED_PROTOCOL", 7, CONST_PERSISTENT);	/* Integer */
	REGISTER_LONG_CONSTANT("RADIUS_PPP", 1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_SLIP", 2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ARAP", 3, CONST_PERSISTENT);	/* Appletalk */
	REGISTER_LONG_CONSTANT("RADIUS_GANDALF", 4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_XYLOGICS", 5, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_FRAMED_IP_ADDRESS", 8, CONST_PERSISTENT);	/* IP address */
REGISTER_LONG_CONSTANT("RADIUS_FRAMED_IP_NETMASK", 9, CONST_PERSISTENT);	/* IP address */
REGISTER_LONG_CONSTANT("RADIUS_FRAMED_ROUTING", 10, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_FILTER_ID", 11, CONST_PERSISTENT);	/* String */
REGISTER_LONG_CONSTANT("RADIUS_FRAMED_MTU", 12, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_FRAMED_COMPRESSION", 13, CONST_PERSISTENT);	/* Integer */
	REGISTER_LONG_CONSTANT("RADIUS_COMP_NONE", 0, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_COMP_VJ", 1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_COMP_IPXHDR", 2, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_LOGIN_IP_HOST", 14, CONST_PERSISTENT);	/* IP address */
REGISTER_LONG_CONSTANT("RADIUS_LOGIN_SERVICE", 15, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_LOGIN_TCP_PORT", 16, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_REPLY_MESSAGE", 18, CONST_PERSISTENT);	/* String */
REGISTER_LONG_CONSTANT("RADIUS_CALLBACK_NUMBER", 19, CONST_PERSISTENT);	/* String */
REGISTER_LONG_CONSTANT("RADIUS_CALLBACK_ID", 20, CONST_PERSISTENT);	/* String */
REGISTER_LONG_CONSTANT("RADIUS_FRAMED_ROUTE", 22, CONST_PERSISTENT);	/* String */
REGISTER_LONG_CONSTANT("RADIUS_FRAMED_IPX_NETWORK", 23, CONST_PERSISTENT);	/* IP address */
REGISTER_LONG_CONSTANT("RADIUS_STATE", 24, CONST_PERSISTENT);	/* String */
REGISTER_LONG_CONSTANT("RADIUS_CLASS", 25, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_VENDOR_SPECIFIC", 26, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_SESSION_TIMEOUT", 27, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_IDLE_TIMEOUT", 28, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_TERMINATION_ACTION", 29, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_CALLED_STATION_ID", 30, CONST_PERSISTENT);	/* String */
REGISTER_LONG_CONSTANT("RADIUS_CALLING_STATION_ID", 31, CONST_PERSISTENT);	/* String */
REGISTER_LONG_CONSTANT("RADIUS_NAS_IDENTIFIER", 32, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_PROXY_STATE", 33, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_LOGIN_LAT_SERVICE", 34, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_LOGIN_LAT_NODE", 35, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_LOGIN_LAT_GROUP", 36, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_FRAMED_APPLETALK_LINK", 37, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_FRAMED_APPLETALK_NETWORK", 38, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_FRAMED_APPLETALK_ZONE", 39, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_CHAP_CHALLENGE", 60, CONST_PERSISTENT);	/* String */
REGISTER_LONG_CONSTANT("RADIUS_NAS_PORT_TYPE", 61, CONST_PERSISTENT);	/* Integer */
	REGISTER_LONG_CONSTANT("RADIUS_ASYNC", 0, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_SYNC", 1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ISDN_SYNC", 2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ISDN_ASYNC_V120", 3, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ISDN_ASYNC_V110", 4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_VIRTUAL", 5, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_PIAFS", 6, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_HDLC_CLEAR_CHANNEL", 7, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_X_25", 8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_X_75", 9, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_G_3_FAX", 10, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_SDSL", 11, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ADSL_CAP", 12, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ADSL_DMT", 13, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_IDSL", 14, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ETHERNET", 15, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_XDSL", 16, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_CABLE", 17, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_WIRELESS_OTHER", 18, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_WIRELESS_IEEE_802_11", 19, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_PORT_LIMIT", 62, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_LOGIN_LAT_PORT", 63, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_CONNECT_INFO", 77, CONST_PERSISTENT);	/* String */

REGISTER_LONG_CONSTANT("RADIUS_NAS_IPV6_ADDRESS", 95, CONST_PERSISTENT);		/* IPv6 address */
REGISTER_LONG_CONSTANT("RADIUS_FRAMED_INTERFACE_ID", 96, CONST_PERSISTENT);	/* 8 octets */
REGISTER_LONG_CONSTANT("RADIUS_FRAMED_IPV6_PREFIX", 97, CONST_PERSISTENT);		/* Octets */
REGISTER_LONG_CONSTANT("RADIUS_LOGIN_IPV6_HOST", 98, CONST_PERSISTENT);		/* IPv6 address */
REGISTER_LONG_CONSTANT("RADIUS_FRAMED_IPV6_ROUTE", 99, CONST_PERSISTENT);		/* String */
REGISTER_LONG_CONSTANT("RADIUS_FRAMED_IPV6_POOL", 100, CONST_PERSISTENT);		/* String */
REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE", 101, CONST_PERSISTENT);			/* Integer */
	REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE_RESIDUAL_SESSION_CONTEXT_REMOVED", 201, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE_INVALID_EAP_PACKET", 202, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE_UNSUPPORTED_ATTRIBUTE", 401, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE_MISSING_ATTRIBUTE", 402, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE_NAS_IDENTIFICATION_MISMATCH", 403, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE_INVALID_REQUEST", 404, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE_UNSUPPORTED_SERVICE", 405, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE_UNSUPPORTED_EXCEPTION", 406, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE_ADMINISTRATIVELY_PROHIBITED", 501, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE_REQUEST_NOT_ROUTABLE", 502, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE_SESSION_CONTEXT_NOT_FOUND", 503, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE_SESSION_CONTEXT_NOT_REMOVABLE", 504, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE_OTHER_PROXY_PROCESSING_ERROR", 505, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE_RESOURCES_UNAVAILABLE", 506, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ERROR_CAUSE_REQUEST_INITIATED", 507, CONST_PERSISTENT);


REGISTER_LONG_CONSTANT("RADIUS_ACCT_STATUS_TYPE", 40, CONST_PERSISTENT);	/* Integer */
	REGISTER_LONG_CONSTANT("RADIUS_START", 1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_STOP", 2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ACCOUNTING_ON", 7, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_ACCOUNTING_OFF", 8, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_ACCT_DELAY_TIME", 41, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_ACCT_INPUT_OCTETS", 42, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_ACCT_OUTPUT_OCTETS", 43, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_ACCT_SESSION_ID", 44, CONST_PERSISTENT);	/* String */
REGISTER_LONG_CONSTANT("RADIUS_ACCT_AUTHENTIC", 45, CONST_PERSISTENT);	/* Integer */
	REGISTER_LONG_CONSTANT("RADIUS_AUTH_RADIUS", 1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_AUTH_LOCAL", 2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_AUTH_REMOTE", 3, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_ACCT_SESSION_TIME", 46, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_ACCT_INPUT_PACKETS", 47, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_ACCT_OUTPUT_PACKETS", 48, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_ACCT_TERMINATE_CAUSE", 49, CONST_PERSISTENT);	/* Integer */
	REGISTER_LONG_CONSTANT("RADIUS_TERM_USER_REQUEST", 1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_LOST_CARRIER", 2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_LOST_SERVICE", 3, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_IDLE_TIMEOUT", 4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_SESSION_TIMEOUT", 5, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_ADMIN_RESET", 6, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_ADMIN_REBOOT", 7, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_PORT_ERROR", 8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_NAS_ERROR", 9, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_NAS_REQUEST", 10, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_NAS_REBOOT", 11, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_PORT_UNNEEDED", 12, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_PORT_PREEMPTED", 13, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_PORT_SUSPENDED", 14, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_SERVICE_UNAVAILABLE", 15, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_CALLBACK", 16, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_USER_ERROR", 17, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_TERM_HOST_REQUEST", 18, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_ACCT_MULTI_SESSION_ID", 50, CONST_PERSISTENT);	/* String */
REGISTER_LONG_CONSTANT("RADIUS_ACCT_LINK_COUNT", 51, CONST_PERSISTENT);	/* Integer */
REGISTER_LONG_CONSTANT("RADIUS_VENDOR_MICROSOFT", 311, CONST_PERSISTENT);		/* rfc2548 */
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_CHAP_RESPONSE", 1, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_CHAP_ERROR", 2, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_CHAP_PW_1", 3, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_CHAP_PW_2", 4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_CHAP_LM_ENC_PW", 5, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_CHAP_NT_ENC_PW", 6, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_MPPE_ENCRYPTION_POLICY", 7, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_MPPE_ENCRYPTION_TYPES", 8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_RAS_VENDOR", 9, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_CHAP_DOMAIN", 10, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_CHAP_CHALLENGE", 11, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_CHAP_MPPE_KEYS", 12, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_BAP_USAGE", 13, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_LINK_UTILIZATION_THRESHOLD", 14, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_LINK_DROP_TIME_LIMIT", 15, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_MPPE_SEND_KEY", 16, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_MPPE_RECV_KEY", 17, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_RAS_VERSION", 18, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_OLD_ARAP_PASSWORD", 19, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_NEW_ARAP_PASSWORD", 20, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_ARAP_PASSWORD_CHANGE_REASON", 21, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_FILTER", 22, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_ACCT_AUTH_TYPE", 23, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_ACCT_EAP_TYPE", 24, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_CHAP2_RESPONSE", 25, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_CHAP2_SUCCESS", 26, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_CHAP2_PW", 27, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_PRIMARY_DNS_SERVER", 28, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_SECONDARY_DNS_SERVER", 29, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_PRIMARY_NBNS_SERVER", 30, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_SECONDARY_NBNS_SERVER", 31, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("RADIUS_MICROSOFT_MS_ARAP_CHALLENGE", 33, CONST_PERSISTENT);

REGISTER_LONG_CONSTANT("RADIUS_OPTION_NONE", RADIUS_OPTION_NONE, CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("RADIUS_OPTION_TAGGED", RADIUS_OPTION_TAGGED, CONST_PERSISTENT);

/* vim: set ts=8 sw=8 noet: */
