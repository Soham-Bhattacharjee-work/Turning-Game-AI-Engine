#include <memory>
#include <application/application.h>
Application::Application(): m_engine(std::make_unique<Engine>()) {

}