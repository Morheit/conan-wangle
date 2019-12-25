#include <wangle/bootstrap/ServerBootstrap.h>

typedef wangle::Pipeline<folly::IOBufQueue&, std::string> EchoPipeline;

int main() {
    wangle::ServerBootstrap<EchoPipeline> server;

    return 0;
}
