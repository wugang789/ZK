# -*- coding: utf-8 -*-

# Disable this in a production environment.
# This enables Flask's debugger.
# Good if something is going wrong and you want to yell at the ZK devs.
DEBUG = False

# --- Webserver Settings ---
# The port and host which the web front will bind to.
# Use IP 0.0.0.0 to bind to any address, incase you want forward facing.
WEB_HOST = "127.0.0.1"
WEB_PORT = "8080"

# Should we shrink the css/js/html? (IF POSSIBLE)
WEB_SHRINK = False

# --- ZK Server Settings ---
# The port and host which the ZK server replies on.
# The port for SSL should probably be ZK_PORT + 1, but it's not req.
ZK_HOST = "127.0.0.1"
ZK_PORT = "1111"
ZK_PORT_SSL = "1112"

# --- Database Settings ---
# Can be sqlite3 or MySQL
DATABASE_TYPE = "sqlite3"

# These are only needed if you picked MySQL above.
DATABASE_HOST = "localhost"
DATABASE_USER = "foo"
DATABASE_PASS = "baz"
DATABASE_NAME = "test"

# If you're using sqlite, give us a database file to work with.
# This has to be absolute, or else sqlite will bitch.
DATABASE_PATH = "/path/to/zk.db"

LOG_DIR = "/path/to/logs"

# --- Misc Settings ---

# This should be a random and long string of characters.
# Keep this secret, it's used for signing the authentication parts.
# To generate a secret key, you can run ZK and visit /secret, or /secret/<length>.
SECRET_KEY = "something_secret_and_hard_to_guess"

# This should be never change once you setup ZK.
# If you do, passwords will require a reset.
PASSWORD_SALT = "something_long_and_secret_ok?"

# The time that we check for expired keys and disable them.
# 60 * 10 (default) is 10 minutes. (SECONDS)
# Increase or decrease as needed.
EXPIRE_CHECK_TIME = 60 * 10

# How long constitutes a worthless connection?
# If a user takes more than TWIST_TIMEOUT seconds,
# without closing the connection or sending anything,
# we'll just have to kill them. (SECONDS)
TWIST_TIMEOUT = 10

# How often do we check for worthless connections? (SECONDS)
TWIST_TIMEOUT_CHECK = 10

# --- OpenSSL Settings ---
KEY_PRIV = "/path/to/privkey.pem"
KEY_PUB = "/path/to/ca.pem"
