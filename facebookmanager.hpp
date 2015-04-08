#pragma once

class FacebookManager {
public:

    static constexpr const char* appId = "1497042670584041";

    static void initialize();
    static void login();

private:

    static void createSessionIfNeeded();

};
