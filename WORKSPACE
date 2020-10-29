load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
	name = "com_github_zeux_pugixml",
	urls = ["https://github.com/zeux/pugixml/releases/download/v1.10/pugixml-1.10.tar.gz"],
	sha256 = "55f399fbb470942410d348584dc953bcaec926415d3462f471ef350f29b5870a",
	strip_prefix = "pugixml-1.10",
	build_file = "//third_party:pugixml.BUILD.bazel",
)
