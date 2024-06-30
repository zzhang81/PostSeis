# extension name
EXTENSION = postseis

# version
EXTVERSION = 1.0

# specify the source file
MODULES = postseis

# Specify SQL installation script
DATA = $(EXTENSION)--$(EXTVERSION).sql

# PostgreSQL config
PG_CONFIG = pg_config

# get compile flags
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)
