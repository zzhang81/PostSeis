CREATE FUNCTION hello_postseis() RETURNS text
AS 'postseis', 'hello_postseis'
LANGUAGE C IMMUTABLE STRICT;