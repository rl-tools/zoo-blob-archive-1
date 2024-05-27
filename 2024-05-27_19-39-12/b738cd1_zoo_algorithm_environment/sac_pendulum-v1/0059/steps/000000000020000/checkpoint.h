// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
#include <rl_tools/nn/parameters/parameters.h>
#include <rl_tools/nn/layers/dense/layer.h>
#include <rl_tools/nn_models/sequential/model.h>
namespace rl_tools::checkpoint::actor {
    namespace layer_0 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {71, 29, 219, 62, 151, 63, 54, 190, 144, 144, 171, 59, 54, 121, 52, 191, 149, 57, 248, 62, 158, 201, 228, 61, 182, 239, 16, 191, 125, 85, 141, 191, 243, 249, 81, 189, 27, 192, 111, 190, 34, 168, 37, 191, 66, 119, 174, 62, 3, 2, 185, 62, 160, 126, 151, 191, 106, 128, 253, 190, 171, 90, 155, 61, 53, 86, 200, 63, 183, 76, 217, 62, 215, 42, 49, 189, 118, 179, 208, 190, 160, 241, 200, 190, 0, 62, 8, 191, 255, 185, 156, 62, 47, 110, 33, 62, 142, 80, 12, 63, 220, 26, 40, 191, 84, 181, 33, 62, 187, 204, 42, 191, 193, 104, 149, 62, 125, 25, 35, 62, 59, 222, 74, 63, 193, 60, 50, 191, 253, 2, 108, 190, 199, 20, 1, 62, 165, 69, 14, 189, 21, 245, 8, 191, 99, 127, 248, 190, 240, 163, 81, 63, 195, 67, 97, 62, 242, 176, 8, 190, 30, 43, 218, 62, 7, 164, 255, 62, 69, 63, 78, 63, 219, 105, 49, 63, 20, 148, 139, 62, 11, 211, 44, 191, 17, 31, 255, 62, 2, 251, 4, 191, 80, 175, 217, 190, 184, 53, 131, 63, 1, 40, 87, 189, 254, 211, 27, 191, 170, 70, 223, 191, 220, 134, 234, 190, 37, 49, 9, 63, 134, 28, 67, 63, 187, 3, 252, 62, 6, 244, 57, 191, 85, 1, 168, 191, 76, 187, 154, 190, 13, 199, 115, 62, 233, 237, 89, 62, 115, 167, 159, 190, 246, 217, 147, 62, 57, 1, 172, 190, 158, 189, 30, 60, 134, 103, 140, 190, 244, 42, 139, 63, 162, 224, 181, 190, 167, 139, 62, 63, 96, 129, 101, 62, 36, 253, 107, 62, 240, 190, 133, 62, 197, 28, 209, 61, 211, 95, 26, 63, 189, 241, 255, 61, 18, 171, 160, 63, 116, 244, 247, 62, 56, 239, 12, 190, 228, 120, 209, 189, 14, 214, 54, 63, 33, 200, 169, 62, 35, 185, 50, 62, 160, 150, 20, 63, 172, 12, 123, 189, 251, 80, 6, 188, 201, 18, 136, 60, 82, 69, 63, 63, 181, 164, 161, 63, 184, 13, 77, 62, 28, 235, 249, 190, 16, 77, 196, 189, 233, 27, 4, 63, 205, 79, 6, 63, 124, 43, 97, 191, 205, 237, 44, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {206, 126, 25, 191, 209, 54, 58, 63, 3, 135, 4, 63, 217, 92, 247, 62, 48, 152, 219, 190, 159, 131, 22, 191, 162, 224, 127, 62, 129, 81, 71, 63, 32, 27, 156, 62, 180, 32, 91, 63, 238, 80, 5, 63, 246, 7, 72, 191, 14, 99, 191, 62, 73, 74, 162, 190, 221, 92, 5, 191, 185, 32, 190, 190, 125, 55, 213, 190, 26, 199, 12, 62, 207, 215, 4, 62, 43, 242, 239, 61, 190, 11, 67, 190, 123, 91, 1, 191, 239, 176, 214, 62, 176, 139, 110, 191, 188, 43, 24, 62, 243, 253, 27, 191, 243, 255, 115, 190, 171, 154, 186, 190, 183, 241, 134, 190, 252, 248, 7, 190, 150, 112, 184, 190, 60, 6, 175, 61};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_0 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 3, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Input, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_1 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {77, 157, 32, 190, 114, 241, 207, 60, 150, 236, 80, 188, 192, 0, 114, 189, 219, 190, 49, 189, 59, 42, 129, 190, 60, 249, 185, 189, 136, 235, 139, 62, 248, 70, 166, 62, 162, 185, 20, 189, 191, 131, 199, 61, 37, 133, 22, 190, 140, 141, 5, 188, 204, 249, 114, 189, 174, 178, 137, 62, 106, 76, 107, 62, 161, 49, 12, 62, 246, 221, 67, 61, 84, 85, 117, 62, 104, 249, 165, 189, 0, 67, 88, 188, 209, 233, 175, 61, 57, 4, 146, 62, 135, 254, 86, 63, 164, 46, 110, 62, 129, 78, 139, 190, 153, 173, 22, 61, 223, 54, 103, 60, 0, 201, 25, 190, 240, 208, 224, 61, 3, 97, 11, 190, 0, 17, 247, 61, 203, 53, 76, 189, 122, 230, 136, 190, 120, 125, 178, 62, 116, 51, 31, 190, 83, 14, 244, 190, 200, 142, 10, 191, 177, 105, 47, 62, 70, 57, 156, 60, 117, 93, 129, 62, 254, 101, 176, 190, 251, 29, 147, 62, 191, 33, 22, 62, 196, 48, 226, 190, 222, 3, 65, 190, 79, 149, 149, 189, 52, 139, 166, 60, 247, 10, 146, 62, 175, 0, 251, 190, 34, 23, 206, 61, 213, 105, 22, 62, 144, 164, 52, 62, 151, 112, 17, 62, 121, 206, 52, 190, 155, 241, 51, 190, 112, 82, 25, 62, 156, 146, 25, 191, 117, 140, 235, 190, 147, 142, 219, 189, 190, 97, 162, 189, 253, 87, 175, 189, 69, 150, 189, 190, 78, 99, 188, 189, 168, 240, 169, 61, 173, 80, 23, 190, 62, 26, 40, 62, 225, 0, 75, 189, 206, 89, 210, 187, 250, 92, 105, 189, 247, 21, 5, 190, 163, 107, 196, 189, 29, 60, 170, 189, 111, 112, 25, 190, 230, 58, 76, 189, 215, 62, 184, 189, 253, 136, 4, 62, 87, 218, 212, 189, 123, 108, 247, 61, 87, 40, 21, 61, 78, 11, 8, 61, 215, 116, 13, 189, 227, 66, 206, 61, 184, 53, 249, 189, 187, 196, 30, 62, 70, 95, 37, 190, 244, 54, 28, 189, 204, 226, 136, 58, 162, 83, 0, 190, 156, 213, 244, 189, 204, 18, 140, 185, 65, 195, 216, 61, 222, 6, 21, 62, 214, 22, 221, 61, 193, 164, 108, 189, 23, 7, 31, 190, 186, 155, 43, 62, 130, 85, 199, 61, 117, 5, 15, 188, 247, 16, 37, 59, 240, 75, 106, 61, 106, 110, 106, 62, 152, 235, 144, 190, 145, 112, 148, 189, 165, 36, 139, 62, 137, 171, 221, 61, 48, 248, 176, 62, 190, 242, 145, 62, 126, 101, 74, 62, 156, 155, 6, 189, 209, 11, 65, 191, 195, 139, 15, 191, 116, 59, 174, 62, 206, 111, 99, 191, 88, 222, 60, 189, 172, 123, 202, 191, 231, 107, 135, 62, 250, 232, 43, 62, 173, 153, 110, 190, 247, 194, 28, 191, 141, 110, 149, 61, 52, 12, 174, 62, 29, 67, 137, 61, 153, 81, 83, 190, 135, 244, 34, 62, 7, 92, 164, 190, 95, 93, 28, 62, 172, 243, 37, 62, 53, 23, 161, 61, 186, 75, 189, 61, 18, 53, 157, 62, 245, 97, 19, 63, 236, 101, 178, 189, 27, 227, 120, 191, 220, 216, 235, 61, 150, 64, 34, 62, 20, 234, 120, 190, 6, 110, 81, 190, 194, 73, 149, 61, 238, 7, 27, 190, 89, 207, 179, 189, 231, 1, 137, 62, 62, 41, 107, 191, 141, 43, 83, 61, 28, 126, 30, 191, 190, 28, 130, 60, 244, 34, 33, 191, 80, 58, 0, 61, 190, 161, 25, 61, 56, 254, 139, 187, 191, 78, 70, 62, 191, 184, 151, 190, 141, 184, 159, 190, 209, 196, 162, 191, 216, 17, 6, 190, 194, 253, 25, 188, 69, 98, 35, 61, 106, 176, 134, 59, 224, 38, 90, 190, 95, 67, 41, 190, 135, 62, 47, 190, 224, 246, 146, 191, 81, 54, 164, 190, 16, 98, 44, 191, 29, 100, 163, 62, 93, 218, 172, 62, 163, 189, 75, 62, 111, 174, 164, 191, 199, 156, 2, 62, 135, 139, 141, 191, 235, 143, 190, 61, 33, 93, 99, 62, 208, 248, 154, 190, 63, 140, 111, 62, 173, 183, 123, 62, 149, 40, 197, 189, 13, 216, 177, 62, 27, 95, 110, 59, 68, 72, 221, 61, 104, 161, 47, 190, 214, 164, 99, 62, 45, 42, 232, 189, 235, 22, 64, 61, 152, 53, 255, 62, 115, 99, 48, 190, 147, 50, 156, 62, 195, 99, 186, 62, 73, 121, 156, 62, 216, 255, 103, 189, 190, 47, 128, 190, 135, 229, 47, 61, 225, 41, 165, 62, 47, 31, 154, 189, 73, 33, 121, 188, 97, 248, 106, 62, 92, 167, 112, 62, 7, 161, 183, 190, 233, 204, 176, 191, 243, 204, 183, 61, 18, 15, 170, 61, 218, 53, 32, 61, 187, 81, 183, 61, 203, 74, 109, 61, 16, 65, 136, 190, 163, 184, 188, 61, 114, 90, 41, 61, 88, 1, 4, 63, 96, 140, 44, 62, 125, 252, 236, 190, 84, 57, 0, 189, 202, 238, 24, 62, 86, 203, 206, 61, 197, 149, 141, 60, 218, 241, 152, 189, 52, 157, 207, 61, 68, 26, 73, 59, 194, 151, 90, 189, 68, 93, 231, 191, 70, 248, 14, 191, 97, 180, 153, 60, 145, 118, 44, 190, 179, 232, 3, 62, 43, 183, 5, 191, 197, 60, 98, 190, 9, 69, 183, 61, 11, 143, 27, 189, 42, 21, 81, 62, 86, 168, 251, 61, 160, 139, 10, 62, 230, 249, 54, 190, 206, 125, 56, 189, 81, 188, 53, 190, 63, 186, 84, 62, 144, 91, 33, 189, 48, 253, 224, 61, 251, 31, 202, 60, 246, 85, 107, 190, 109, 87, 92, 190, 188, 36, 78, 191, 213, 185, 10, 190, 110, 163, 26, 189, 143, 148, 49, 191, 82, 194, 77, 189, 123, 226, 146, 191, 185, 55, 34, 190, 129, 237, 222, 61, 139, 124, 131, 190, 165, 101, 11, 191, 57, 152, 100, 189, 187, 221, 139, 190, 228, 232, 6, 61, 182, 166, 78, 61, 56, 170, 206, 61, 122, 244, 74, 191, 190, 193, 6, 62, 124, 215, 229, 62, 108, 13, 45, 189, 30, 112, 21, 190, 182, 64, 35, 190, 42, 156, 49, 190, 43, 57, 205, 60, 40, 39, 40, 189, 133, 253, 7, 62, 84, 131, 0, 190, 215, 127, 138, 60, 47, 125, 124, 60, 79, 48, 36, 188, 89, 5, 143, 189, 125, 198, 229, 61, 116, 16, 37, 62, 239, 65, 134, 189, 227, 98, 246, 189, 148, 126, 31, 61, 239, 138, 154, 187, 227, 14, 200, 189, 223, 56, 181, 189, 216, 70, 131, 187, 11, 117, 187, 189, 78, 168, 172, 189, 55, 164, 189, 189, 218, 166, 30, 61, 77, 214, 214, 188, 82, 170, 232, 61, 249, 237, 39, 190, 67, 170, 115, 61, 11, 193, 207, 188, 49, 185, 217, 189, 106, 29, 160, 61, 119, 176, 248, 189, 76, 113, 45, 190, 208, 129, 172, 61, 76, 52, 113, 61, 16, 232, 5, 62, 102, 34, 6, 62, 223, 28, 149, 188, 62, 211, 207, 189, 124, 126, 124, 60, 52, 4, 17, 190, 77, 1, 58, 189, 231, 56, 189, 61, 80, 154, 93, 61, 41, 20, 47, 189, 223, 213, 203, 60, 120, 74, 107, 189, 248, 53, 188, 61, 187, 152, 234, 189, 153, 12, 4, 190, 207, 159, 88, 189, 137, 224, 14, 189, 172, 80, 147, 189, 135, 95, 24, 190, 180, 163, 251, 61, 191, 227, 122, 188, 141, 26, 162, 60, 164, 177, 237, 189, 170, 5, 187, 189, 242, 189, 244, 188, 159, 225, 154, 189, 141, 237, 129, 188, 42, 163, 108, 60, 78, 210, 102, 188, 157, 146, 224, 60, 141, 216, 183, 62, 245, 178, 0, 63, 254, 235, 171, 61, 78, 37, 165, 191, 208, 85, 129, 190, 236, 12, 185, 61, 180, 137, 222, 62, 225, 138, 230, 61, 168, 105, 151, 59, 206, 222, 190, 61, 253, 100, 156, 62, 159, 119, 162, 62, 231, 240, 29, 190, 249, 183, 65, 190, 231, 186, 44, 191, 30, 146, 90, 62, 10, 81, 133, 191, 16, 127, 157, 190, 63, 17, 252, 190, 34, 212, 41, 189, 236, 18, 228, 190, 70, 120, 147, 190, 242, 77, 63, 189, 181, 34, 100, 191, 125, 81, 3, 191, 36, 236, 188, 188, 127, 165, 49, 190, 124, 152, 6, 190, 3, 62, 136, 190, 224, 100, 93, 62, 11, 135, 134, 189, 229, 96, 52, 191, 120, 16, 92, 190, 158, 106, 95, 191, 84, 70, 150, 62, 246, 60, 160, 189, 61, 100, 86, 62, 201, 166, 147, 191, 182, 230, 145, 62, 147, 22, 163, 191, 48, 67, 82, 62, 84, 202, 76, 189, 59, 76, 150, 191, 129, 140, 144, 62, 252, 202, 254, 62, 201, 241, 228, 61, 113, 123, 219, 62, 127, 0, 101, 61, 39, 100, 30, 63, 84, 220, 250, 61, 212, 249, 242, 188, 115, 253, 175, 189, 158, 96, 39, 62, 53, 20, 36, 190, 202, 111, 177, 190, 224, 228, 219, 189, 74, 6, 84, 61, 145, 60, 233, 189, 67, 107, 61, 186, 120, 165, 17, 191, 129, 69, 247, 188, 214, 103, 166, 62, 227, 68, 63, 61, 211, 196, 56, 190, 160, 198, 74, 61, 197, 179, 25, 62, 119, 242, 177, 59, 30, 5, 35, 190, 63, 113, 232, 190, 106, 154, 218, 60, 109, 31, 22, 62, 248, 31, 247, 61, 44, 41, 182, 62, 46, 222, 59, 190, 187, 21, 76, 190, 241, 186, 27, 190, 6, 194, 47, 191, 56, 157, 136, 191, 211, 63, 70, 62, 139, 0, 146, 191, 86, 134, 163, 190, 15, 135, 246, 191, 50, 114, 92, 62, 55, 158, 2, 62, 171, 239, 105, 62, 195, 123, 0, 191, 67, 4, 54, 61, 132, 167, 20, 190, 56, 143, 53, 62, 138, 215, 140, 190, 120, 112, 11, 190, 89, 151, 237, 190, 63, 239, 252, 61, 162, 209, 223, 62, 252, 50, 16, 190, 190, 6, 64, 190, 219, 17, 50, 190, 97, 231, 239, 189, 222, 165, 89, 190, 107, 240, 159, 190, 64, 32, 197, 190, 0, 34, 50, 61, 148, 212, 123, 61, 90, 88, 151, 189, 112, 252, 107, 190, 161, 173, 229, 61, 129, 153, 16, 190, 191, 110, 236, 188, 237, 246, 49, 63, 55, 7, 179, 62, 181, 112, 143, 62, 28, 231, 121, 190, 149, 236, 152, 62, 12, 13, 51, 190, 25, 142, 59, 190, 188, 99, 177, 189, 144, 33, 240, 61, 107, 61, 92, 63, 89, 167, 197, 61, 63, 156, 191, 190, 146, 199, 24, 62, 33, 91, 89, 188, 181, 51, 182, 61, 100, 28, 151, 62, 55, 227, 84, 189, 141, 142, 219, 190, 216, 201, 250, 61, 207, 197, 54, 188, 5, 181, 115, 62, 17, 60, 200, 189, 34, 94, 99, 189, 162, 50, 129, 190, 130, 174, 59, 62, 161, 187, 71, 190, 112, 4, 43, 62, 187, 149, 1, 62, 87, 96, 12, 62, 222, 235, 178, 189, 38, 82, 176, 190, 37, 22, 151, 61, 119, 221, 0, 191, 117, 227, 115, 61, 233, 49, 200, 190, 206, 113, 72, 61, 73, 32, 36, 189, 20, 32, 115, 62, 45, 173, 175, 189, 248, 168, 135, 61, 146, 5, 161, 60, 85, 52, 115, 190, 196, 171, 20, 189, 16, 91, 1, 191, 179, 121, 2, 62, 130, 73, 233, 189, 27, 233, 238, 189, 32, 6, 63, 190, 161, 136, 122, 61, 163, 217, 73, 62, 246, 113, 213, 188, 236, 9, 244, 61, 59, 2, 4, 190, 39, 73, 227, 186, 112, 28, 145, 189, 105, 237, 198, 61, 138, 159, 234, 61, 22, 160, 6, 190, 248, 22, 244, 61, 105, 41, 215, 189, 1, 38, 241, 189, 217, 18, 81, 190, 173, 60, 52, 190, 190, 155, 34, 190, 255, 36, 142, 61, 62, 200, 210, 61, 210, 27, 222, 61, 232, 249, 142, 189, 71, 100, 26, 190, 20, 162, 235, 61, 71, 153, 69, 189, 194, 166, 25, 62, 179, 121, 29, 189, 247, 150, 62, 189, 148, 104, 153, 60, 64, 176, 155, 61, 3, 72, 159, 189, 84, 171, 125, 189, 8, 184, 77, 188, 177, 122, 22, 61, 236, 128, 18, 61, 91, 238, 188, 61, 109, 121, 97, 189, 245, 60, 72, 62, 204, 156, 92, 61, 218, 249, 101, 61, 111, 135, 88, 190, 222, 143, 14, 191, 118, 157, 31, 62, 129, 151, 128, 61, 136, 222, 134, 60, 153, 110, 79, 189, 135, 60, 35, 60, 123, 167, 151, 61, 210, 203, 225, 61, 35, 83, 6, 190, 210, 47, 8, 189, 21, 76, 33, 62, 43, 246, 35, 191, 146, 122, 187, 189, 65, 108, 156, 61, 118, 63, 28, 62, 159, 103, 164, 61, 106, 230, 200, 61, 165, 9, 227, 60, 137, 15, 65, 190, 236, 183, 46, 61, 216, 217, 0, 191, 162, 177, 177, 189, 55, 227, 45, 189, 245, 228, 7, 62, 39, 192, 156, 188, 161, 135, 127, 190, 152, 249, 53, 190, 162, 124, 163, 188, 61, 241, 154, 62, 187, 73, 11, 60, 132, 199, 176, 189, 4, 49, 181, 190, 172, 152, 227, 190, 228, 245, 93, 62, 102, 123, 171, 189, 132, 216, 9, 62, 158, 92, 71, 62, 133, 34, 125, 188, 28, 157, 192, 190, 235, 122, 113, 62, 165, 124, 210, 190, 129, 27, 130, 62, 131, 185, 41, 62, 1, 5, 97, 190, 176, 50, 118, 189, 118, 85, 152, 62, 220, 82, 0, 63, 75, 225, 91, 61, 27, 89, 213, 189, 167, 181, 211, 62, 245, 24, 140, 62, 21, 64, 57, 61, 229, 61, 80, 191, 62, 45, 177, 61, 178, 222, 83, 190, 222, 148, 238, 61, 76, 192, 173, 62, 165, 14, 253, 189, 153, 121, 239, 190, 77, 177, 216, 189, 95, 61, 138, 189, 98, 213, 202, 62, 136, 53, 45, 62, 82, 171, 10, 190, 45, 210, 173, 62, 195, 52, 166, 187, 171, 176, 9, 61, 20, 203, 206, 61, 0, 219, 48, 62, 91, 215, 81, 62, 98, 17, 216, 190, 137, 128, 78, 62, 148, 181, 29, 190, 1, 70, 143, 191, 92, 146, 127, 190, 170, 138, 173, 62, 128, 253, 218, 61, 171, 63, 96, 190, 148, 65, 221, 61, 103, 34, 129, 190, 5, 214, 127, 61, 78, 55, 174, 61, 45, 170, 13, 191, 87, 228, 130, 62, 110, 236, 227, 186, 116, 107, 247, 189, 183, 45, 97, 190, 11, 244, 248, 189, 100, 24, 205, 190, 18, 240, 125, 60, 240, 149, 151, 62, 54, 192, 253, 188, 139, 87, 147, 189, 159, 170, 182, 62, 178, 45, 30, 190, 195, 231, 152, 189, 179, 142, 135, 190, 109, 67, 141, 62, 114, 54, 189, 61, 237, 149, 202, 188, 238, 168, 203, 61, 209, 198, 56, 62, 155, 100, 60, 59, 80, 30, 9, 190, 59, 176, 195, 61, 94, 169, 209, 190, 173, 120, 19, 189, 176, 193, 247, 189, 124, 196, 235, 188, 105, 182, 191, 61, 248, 228, 12, 61, 22, 203, 193, 61, 55, 185, 57, 61, 222, 84, 56, 190, 162, 185, 131, 190, 58, 216, 55, 186, 132, 229, 156, 190, 89, 131, 145, 189, 148, 136, 43, 62, 240, 153, 21, 190, 150, 135, 26, 190, 96, 31, 24, 190, 92, 59, 220, 61, 182, 219, 21, 190, 228, 97, 43, 191, 253, 179, 49, 189, 253, 151, 51, 190, 151, 56, 52, 62, 62, 203, 219, 190, 255, 166, 73, 59, 55, 170, 25, 191, 246, 52, 5, 61, 34, 194, 29, 191, 52, 188, 154, 62, 20, 199, 152, 59, 215, 90, 196, 191, 146, 150, 215, 189, 25, 177, 31, 190, 244, 18, 158, 188, 122, 203, 150, 62, 108, 133, 200, 189, 17, 244, 0, 62, 250, 225, 128, 187, 248, 142, 231, 60, 253, 159, 114, 189, 43, 123, 8, 62, 2, 43, 29, 62, 76, 205, 119, 61, 100, 159, 181, 190, 48, 176, 243, 189, 116, 172, 245, 61, 221, 201, 3, 190, 48, 194, 165, 189, 38, 13, 97, 190, 148, 2, 110, 62, 112, 201, 181, 60, 51, 162, 165, 62, 19, 4, 39, 61, 41, 39, 99, 191, 92, 155, 147, 188, 100, 209, 32, 61, 76, 191, 20, 62, 179, 238, 213, 62, 24, 243, 152, 191, 134, 118, 233, 61, 139, 231, 138, 190, 166, 53, 58, 61, 111, 85, 14, 63, 235, 162, 197, 190, 88, 91, 172, 61, 180, 68, 3, 62, 176, 33, 68, 61, 96, 223, 129, 189, 18, 32, 193, 189, 191, 107, 180, 61, 94, 13, 227, 61, 119, 185, 112, 61, 3, 175, 147, 62, 237, 167, 169, 190, 161, 159, 219, 190, 27, 69, 180, 189, 213, 61, 96, 191, 124, 89, 237, 190, 246, 81, 248, 59, 67, 255, 233, 62, 17, 30, 144, 191, 65, 6, 115, 190, 201, 97, 1, 189, 148, 174, 184, 61, 245, 69, 82, 190, 169, 93, 79, 190, 94, 98, 118, 62, 58, 90, 40, 190, 74, 251, 37, 61, 103, 23, 81, 190, 149, 238, 56, 62, 61, 175, 31, 61, 114, 207, 171, 61, 0, 170, 170, 187, 3, 253, 64, 190, 61, 7, 229, 189, 251, 116, 7, 63, 244, 149, 94, 190, 203, 244, 155, 62, 80, 73, 190, 61, 209, 124, 26, 62, 137, 247, 166, 190, 78, 104, 153, 61, 250, 32, 5, 189, 37, 176, 165, 189, 23, 122, 72, 63, 87, 125, 46, 189, 130, 205, 28, 190, 12, 98, 38, 190, 77, 216, 9, 62, 232, 173, 26, 62, 165, 84, 6, 62, 43, 141, 232, 61, 200, 65, 243, 61, 90, 87, 37, 62, 14, 127, 159, 190, 96, 162, 179, 62, 75, 68, 108, 62, 167, 70, 230, 62, 138, 167, 23, 62, 180, 250, 73, 188, 43, 122, 151, 188, 31, 98, 174, 62, 223, 43, 233, 61, 180, 160, 79, 62, 5, 59, 188, 62, 103, 147, 143, 190, 215, 170, 51, 189, 101, 71, 204, 62, 61, 46, 115, 62, 233, 33, 234, 190, 119, 221, 149, 62, 238, 154, 2, 190, 190, 152, 131, 61, 64, 77, 119, 61, 60, 85, 17, 190, 117, 8, 43, 191, 152, 228, 204, 62, 69, 33, 174, 62, 26, 6, 148, 62, 152, 158, 129, 62, 71, 200, 81, 62, 43, 198, 103, 188, 152, 124, 109, 190, 188, 85, 75, 62, 141, 7, 145, 62, 242, 232, 195, 187, 19, 217, 62, 189, 170, 239, 240, 189, 52, 104, 164, 61, 227, 66, 187, 62, 89, 45, 224, 62, 0, 28, 194, 189, 222, 17, 228, 60, 194, 20, 120, 60, 43, 153, 60, 62, 245, 169, 10, 61, 159, 171, 130, 62, 226, 94, 187, 61, 95, 105, 18, 59, 165, 45, 23, 191, 196, 118, 69, 189, 39, 175, 22, 62, 224, 106, 88, 191, 166, 135, 36, 190, 255, 71, 124, 191, 24, 173, 217, 60, 211, 87, 30, 62, 56, 178, 115, 190, 146, 161, 103, 191, 67, 80, 47, 62, 198, 224, 3, 63, 55, 82, 37, 62, 55, 97, 68, 190, 134, 206, 66, 189, 206, 162, 12, 191, 119, 225, 119, 62, 219, 144, 5, 63, 53, 191, 84, 189, 183, 251, 142, 189, 70, 141, 252, 61, 176, 57, 61, 62, 2, 118, 120, 62, 205, 152, 0, 63, 210, 170, 33, 62, 8, 227, 14, 61, 121, 141, 108, 62, 150, 35, 245, 188, 167, 210, 96, 62, 195, 4, 76, 189, 169, 221, 131, 62, 225, 185, 50, 189, 212, 201, 16, 191, 93, 105, 122, 190, 183, 111, 108, 189, 157, 178, 12, 189, 209, 229, 243, 61, 211, 132, 40, 189, 25, 95, 116, 190, 96, 147, 168, 189, 83, 181, 141, 190, 218, 42, 2, 191, 106, 33, 139, 62, 108, 40, 226, 62, 57, 31, 163, 62, 50, 151, 49, 190, 208, 9, 253, 61, 90, 39, 2, 190, 83, 231, 169, 60, 221, 246, 57, 62, 185, 228, 16, 61, 85, 39, 109, 189, 196, 186, 167, 189, 198, 240, 188, 190, 161, 235, 78, 60, 120, 101, 10, 191, 179, 216, 132, 62, 219, 66, 44, 61, 9, 148, 142, 191, 233, 250, 200, 60, 65, 190, 167, 187, 132, 105, 86, 62, 91, 100, 160, 62, 91, 211, 249, 190, 10, 232, 241, 60, 224, 98, 85, 62, 81, 62, 173, 62, 33, 104, 157, 188, 227, 150, 130, 187, 179, 185, 146, 62, 230, 37, 196, 188, 40, 198, 0, 190, 15, 79, 21, 61, 6, 121, 105, 190, 250, 169, 218, 190, 204, 68, 168, 190, 169, 116, 248, 190, 53, 163, 4, 191, 251, 253, 29, 62, 158, 35, 12, 191, 91, 81, 244, 190, 190, 69, 9, 189, 134, 146, 81, 188, 133, 65, 155, 62, 18, 168, 246, 189, 243, 22, 12, 190, 196, 54, 246, 190, 125, 174, 175, 188, 72, 255, 211, 189, 10, 93, 5, 62, 10, 48, 5, 62, 35, 247, 74, 62, 170, 161, 154, 60, 251, 184, 178, 60, 144, 142, 241, 61, 120, 25, 251, 60, 108, 3, 58, 190, 207, 3, 132, 61, 8, 97, 205, 62, 161, 246, 24, 191, 234, 149, 151, 189, 169, 172, 163, 190, 165, 149, 77, 61, 251, 28, 28, 190, 30, 89, 78, 62, 174, 117, 32, 63, 210, 238, 251, 61, 232, 69, 26, 190, 56, 220, 19, 60, 21, 120, 205, 189, 253, 70, 220, 189, 159, 145, 32, 61, 217, 178, 235, 188, 218, 46, 62, 187, 78, 228, 34, 190, 71, 166, 45, 61, 31, 207, 58, 189, 129, 118, 2, 189, 144, 229, 164, 60, 90, 27, 128, 189, 254, 16, 186, 190, 195, 232, 139, 61, 162, 5, 106, 62, 226, 202, 91, 188, 187, 215, 45, 62, 226, 174, 15, 62, 122, 51, 84, 190, 20, 5, 1, 190, 2, 238, 84, 191, 232, 114, 124, 191, 142, 127, 248, 61, 145, 86, 126, 191, 111, 221, 140, 190, 43, 103, 234, 191, 152, 6, 165, 62, 107, 1, 19, 61, 128, 193, 85, 61, 28, 183, 5, 191, 192, 119, 56, 62, 105, 177, 204, 189, 111, 155, 42, 62, 54, 124, 138, 190, 215, 182, 112, 189, 57, 213, 207, 190, 182, 5, 207, 61, 35, 149, 236, 62, 64, 114, 46, 62, 184, 75, 174, 61, 40, 224, 52, 190, 163, 65, 83, 189, 139, 74, 166, 188, 4, 57, 22, 190, 245, 100, 123, 189, 114, 136, 236, 189, 7, 152, 219, 189, 27, 102, 6, 190, 168, 4, 113, 61, 60, 116, 0, 189, 143, 217, 242, 189, 73, 34, 24, 62, 110, 129, 53, 190, 148, 53, 227, 188, 74, 2, 232, 61, 22, 167, 0, 62, 132, 141, 216, 61, 94, 192, 8, 190, 70, 189, 82, 190, 196, 208, 29, 189, 210, 186, 224, 61, 204, 154, 70, 190, 81, 94, 171, 189, 91, 53, 226, 61, 199, 127, 153, 188, 138, 162, 115, 189, 198, 104, 227, 61, 222, 26, 75, 190, 110, 147, 25, 62, 213, 237, 129, 61, 84, 0, 46, 62, 57, 121, 96, 62, 35, 84, 132, 61, 15, 245, 58, 189, 207, 178, 116, 189, 169, 72, 19, 62, 42, 162, 53, 188, 191, 167, 189, 60, 155, 168, 34, 62, 178, 100, 8, 62, 228, 211, 133, 61, 190, 194, 203, 189, 179, 62, 143, 61, 75, 241, 77, 189, 63, 203, 137, 60, 138, 168, 12, 61, 102, 41, 111, 62, 132, 113, 152, 188, 19, 222, 223, 189, 41, 126, 134, 61, 210, 76, 215, 188, 70, 224, 87, 61, 105, 115, 82, 61, 165, 168, 71, 63, 23, 236, 17, 62, 225, 95, 242, 61, 113, 108, 50, 61, 27, 188, 130, 190, 57, 1, 3, 62, 9, 195, 203, 189, 107, 17, 21, 189, 244, 216, 101, 187, 119, 1, 115, 61, 107, 223, 207, 61, 176, 119, 43, 62, 206, 0, 152, 62, 76, 239, 229, 189, 178, 154, 155, 191, 36, 84, 1, 62, 242, 57, 28, 189, 44, 218, 199, 60, 242, 151, 226, 186, 146, 122, 140, 61, 6, 161, 141, 190, 134, 42, 188, 188, 177, 93, 134, 189, 55, 176, 3, 61, 179, 25, 93, 62, 226, 6, 214, 190, 108, 101, 85, 189, 45, 29, 25, 59, 217, 168, 222, 61, 73, 174, 16, 61, 61, 168, 209, 58, 161, 180, 2, 190, 48, 243, 80, 190, 182, 254, 239, 189, 41, 206, 113, 191, 6, 19, 194, 190, 82, 39, 24, 187, 117, 142, 232, 188, 183, 1, 138, 62, 205, 14, 174, 190, 29, 42, 40, 189};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {251, 37, 178, 62, 248, 90, 56, 62, 72, 86, 88, 189, 53, 26, 235, 61, 48, 82, 27, 61, 138, 126, 24, 190, 247, 222, 62, 62, 171, 245, 83, 189, 161, 30, 10, 190, 138, 64, 46, 190, 26, 226, 143, 189, 55, 101, 1, 62, 236, 218, 128, 62, 228, 70, 105, 190, 207, 88, 223, 61, 0, 178, 57, 190, 254, 217, 187, 189, 30, 144, 0, 189, 94, 17, 175, 62, 20, 148, 174, 189, 246, 212, 12, 62, 168, 60, 31, 62, 215, 193, 133, 61, 243, 127, 24, 190, 243, 225, 214, 61, 103, 128, 129, 62, 57, 192, 129, 190, 198, 15, 220, 61, 121, 24, 137, 62, 96, 118, 49, 190, 190, 87, 138, 61, 38, 208, 144, 62};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_1 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::RELU, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Normal, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace layer_2 {
        namespace weights {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {52, 116, 119, 190, 178, 157, 189, 190, 131, 185, 73, 60, 131, 43, 249, 62, 153, 182, 202, 190, 234, 99, 103, 63, 218, 180, 41, 191, 68, 146, 168, 63, 155, 154, 131, 189, 188, 180, 250, 189, 115, 147, 132, 191, 238, 183, 242, 62, 142, 29, 116, 63, 194, 235, 162, 190, 101, 165, 11, 62, 124, 135, 170, 61, 18, 45, 11, 189, 248, 9, 204, 190, 115, 178, 240, 62, 196, 130, 121, 61, 33, 146, 177, 62, 100, 75, 25, 191, 165, 150, 235, 189, 227, 244, 9, 191, 138, 7, 65, 63, 108, 63, 155, 62, 190, 196, 167, 62, 242, 63, 132, 189, 147, 221, 83, 63, 151, 12, 28, 190, 198, 111, 143, 188, 68, 141, 234, 190, 114, 204, 197, 190, 188, 170, 91, 191, 17, 194, 85, 189, 113, 53, 63, 190, 21, 177, 153, 189, 5, 109, 135, 62, 114, 45, 38, 62, 41, 36, 149, 62, 187, 23, 118, 189, 222, 106, 224, 61, 230, 255, 139, 62, 33, 11, 92, 190, 161, 240, 43, 190, 9, 9, 73, 62, 222, 231, 15, 189, 33, 26, 94, 188, 29, 234, 46, 61, 153, 201, 201, 62, 209, 157, 150, 61, 137, 238, 199, 189, 145, 162, 222, 190, 217, 250, 65, 190, 72, 56, 226, 188, 140, 37, 110, 59, 57, 37, 27, 63, 67, 126, 109, 190, 58, 155, 20, 62, 64, 163, 76, 190, 39, 133, 177, 190, 157, 103, 11, 61, 211, 107, 250, 189, 28, 64, 89, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 2, 32, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Weights>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
        namespace biases {
            namespace parameters_memory {
                static_assert(sizeof(unsigned char) == 1);
                alignas(float) const unsigned char memory[] = {241, 229, 35, 190, 132, 0, 203, 190};
                using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
                using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
                const CONTAINER_TYPE container = {(float*)memory}; 
            }
            using PARAMETER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::spec<parameters_memory::CONTAINER_TYPE, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::categories::Biases>;
            const RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::Plain::instance<PARAMETER_SPEC> parameters = {parameters_memory::container};
        }
    }
    namespace layer_2 {
        using SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Specification<float, unsigned long, 32, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::activation_functions::ActivationFunction::IDENTITY, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::parameters::groups::Output, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamicTag, true, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>; 
        template <typename CAPABILITY>
        using TEMPLATE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward;
        using TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layers::dense::Layer<CAPABILITY, SPEC>;
        const TYPE layer = {weights::parameters, biases::parameters};
    }
    namespace model_definition {
        using CAPABILITY = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn::layer_capability::Forward; 
        using IF = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::nn_models::sequential::Interface<CAPABILITY>;
        using MODEL = IF::Module<layer_0::TEMPLATE, IF::Module<layer_1::TEMPLATE, IF::Module<layer_2::TEMPLATE>>>;
    }
    using MODEL = model_definition::MODEL;
    const MODEL model = {layer_0::layer, {layer_1::layer, {layer_2::layer, {}}}};
}
// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::input {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {134, 63, 190, 63, 169, 227, 136, 191, 42, 173, 2, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {97, 5, 111, 190, 162, 86, 1, 192};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0059/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}