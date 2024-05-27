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
                alignas(float) const unsigned char memory[] = {102, 120, 184, 62, 161, 97, 197, 189, 1, 78, 14, 191, 208, 177, 125, 62, 0, 224, 170, 189, 188, 52, 115, 62, 228, 90, 247, 62, 134, 102, 197, 190, 179, 30, 85, 190, 53, 223, 148, 190, 218, 120, 86, 63, 156, 230, 158, 61, 226, 115, 229, 190, 173, 134, 141, 190, 221, 196, 239, 189, 136, 206, 174, 190, 104, 77, 200, 62, 134, 120, 136, 188, 166, 79, 116, 190, 221, 19, 94, 191, 153, 84, 205, 62, 212, 120, 26, 62, 73, 76, 62, 63, 105, 227, 208, 61, 107, 42, 55, 62, 101, 120, 150, 62, 186, 163, 228, 187, 175, 76, 222, 60, 29, 190, 55, 62, 232, 65, 185, 62, 47, 254, 163, 189, 12, 232, 174, 190, 152, 2, 240, 189, 106, 243, 172, 62, 239, 106, 168, 190, 196, 168, 255, 62, 21, 147, 50, 189, 20, 41, 62, 63, 254, 217, 191, 61, 141, 251, 132, 62, 178, 88, 21, 62, 40, 215, 218, 62, 35, 240, 46, 62, 59, 244, 218, 62, 57, 24, 212, 190, 202, 139, 234, 62, 161, 51, 34, 191, 229, 167, 179, 190, 161, 29, 112, 190, 168, 177, 187, 190, 134, 159, 172, 190, 71, 242, 213, 61, 79, 75, 186, 60, 124, 242, 100, 189, 167, 252, 34, 63, 31, 230, 90, 190, 220, 148, 137, 190, 159, 220, 236, 62, 164, 100, 233, 62, 12, 57, 3, 63, 73, 171, 115, 189, 228, 54, 44, 190, 144, 182, 225, 190, 96, 17, 1, 191, 253, 17, 64, 63, 185, 117, 54, 190, 229, 98, 227, 190, 76, 160, 114, 190, 23, 145, 92, 62, 173, 56, 213, 62, 207, 12, 22, 62, 162, 173, 20, 62, 78, 62, 250, 188, 16, 4, 72, 190, 41, 193, 212, 60, 213, 238, 183, 189, 116, 46, 55, 191, 182, 239, 113, 190, 159, 23, 4, 191, 160, 247, 225, 189, 67, 50, 235, 190, 117, 140, 222, 190, 156, 247, 137, 190, 103, 211, 40, 190, 223, 126, 142, 190, 151, 163, 75, 63, 198, 19, 70, 190, 29, 17, 42, 190, 67, 1, 112, 191, 183, 34, 136, 62, 90, 111, 188, 57, 122, 69, 9, 191, 75, 42, 23, 62, 68, 90, 8, 63, 63, 4, 46, 62, 187, 151, 212, 189};
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
                alignas(float) const unsigned char memory[] = {221, 160, 60, 191, 46, 12, 202, 60, 233, 54, 64, 62, 149, 111, 89, 190, 95, 176, 154, 60, 106, 153, 173, 61, 222, 99, 194, 62, 99, 40, 160, 62, 85, 159, 190, 190, 220, 239, 225, 190, 223, 116, 6, 62, 63, 241, 227, 61, 168, 65, 7, 62, 157, 90, 90, 190, 75, 202, 44, 191, 125, 104, 69, 62, 6, 58, 118, 62, 40, 150, 197, 190, 183, 201, 61, 62, 246, 212, 247, 62, 86, 38, 36, 63, 198, 109, 73, 61, 160, 63, 29, 63, 22, 140, 179, 190, 228, 183, 179, 189, 1, 230, 4, 63, 59, 184, 156, 190, 162, 251, 178, 62, 2, 202, 54, 187, 129, 162, 182, 62, 206, 159, 156, 190, 157, 160, 55, 63};
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
                alignas(float) const unsigned char memory[] = {44, 119, 137, 189, 34, 234, 239, 189, 207, 181, 7, 62, 244, 35, 36, 60, 181, 62, 136, 189, 23, 113, 37, 59, 76, 255, 239, 60, 70, 20, 175, 61, 180, 92, 239, 189, 170, 209, 213, 60, 7, 51, 56, 189, 78, 243, 152, 61, 15, 187, 190, 60, 118, 200, 49, 60, 219, 41, 173, 187, 10, 139, 32, 188, 19, 217, 174, 189, 219, 223, 39, 62, 253, 136, 20, 62, 85, 164, 37, 62, 218, 250, 21, 190, 237, 12, 26, 61, 151, 253, 116, 61, 74, 135, 5, 189, 221, 4, 216, 61, 245, 183, 63, 190, 174, 184, 28, 190, 245, 217, 214, 189, 150, 169, 131, 62, 52, 37, 140, 61, 73, 117, 221, 189, 216, 217, 49, 62, 14, 62, 42, 189, 204, 172, 247, 189, 31, 177, 19, 62, 129, 132, 145, 61, 79, 108, 47, 62, 238, 8, 66, 62, 170, 243, 98, 190, 255, 26, 203, 60, 255, 119, 207, 60, 103, 217, 57, 62, 29, 14, 227, 189, 179, 120, 123, 60, 130, 175, 161, 60, 143, 254, 230, 61, 145, 166, 58, 61, 162, 62, 61, 61, 147, 250, 130, 188, 35, 83, 29, 62, 220, 146, 37, 190, 144, 191, 208, 61, 67, 238, 73, 189, 217, 125, 241, 61, 239, 105, 103, 61, 127, 23, 227, 59, 78, 64, 196, 61, 143, 74, 187, 61, 240, 1, 173, 61, 70, 111, 240, 189, 136, 81, 204, 61, 90, 28, 10, 190, 172, 19, 47, 190, 106, 72, 166, 61, 177, 188, 232, 189, 38, 18, 30, 189, 193, 53, 134, 190, 10, 15, 162, 189, 28, 9, 25, 61, 216, 141, 75, 190, 208, 115, 136, 61, 27, 171, 128, 60, 124, 68, 10, 189, 5, 220, 9, 62, 210, 40, 136, 188, 39, 189, 7, 62, 105, 72, 49, 190, 72, 96, 137, 61, 46, 155, 80, 187, 251, 48, 7, 190, 138, 174, 92, 62, 34, 219, 14, 189, 95, 210, 203, 189, 189, 24, 85, 188, 200, 202, 140, 189, 68, 144, 165, 190, 165, 1, 194, 61, 18, 80, 8, 62, 10, 184, 219, 61, 200, 216, 20, 190, 219, 91, 209, 188, 254, 180, 56, 190, 39, 147, 109, 189, 130, 22, 94, 62, 134, 27, 251, 60, 248, 144, 152, 189, 205, 29, 46, 62, 90, 185, 54, 190, 102, 144, 16, 190, 4, 179, 208, 189, 192, 110, 119, 190, 17, 3, 212, 61, 138, 157, 30, 61, 9, 153, 100, 61, 167, 171, 124, 60, 65, 218, 160, 60, 183, 18, 94, 190, 37, 104, 95, 190, 100, 123, 12, 62, 110, 159, 92, 189, 57, 102, 43, 189, 212, 245, 14, 190, 28, 165, 172, 61, 247, 59, 12, 189, 21, 35, 222, 61, 205, 165, 129, 189, 252, 219, 65, 190, 214, 7, 96, 186, 156, 251, 107, 190, 105, 201, 54, 190, 205, 113, 29, 190, 88, 30, 142, 189, 0, 28, 0, 190, 160, 107, 28, 189, 144, 76, 17, 62, 84, 195, 143, 61, 171, 70, 228, 189, 67, 114, 183, 189, 229, 101, 56, 190, 208, 11, 209, 188, 148, 204, 232, 61, 138, 243, 79, 62, 181, 235, 107, 190, 244, 164, 92, 60, 140, 184, 19, 188, 31, 125, 103, 62, 149, 175, 150, 61, 210, 121, 108, 189, 188, 186, 68, 190, 130, 248, 143, 61, 161, 125, 225, 60, 14, 26, 160, 189, 175, 121, 58, 62, 147, 234, 12, 190, 55, 215, 55, 189, 55, 226, 211, 61, 186, 241, 16, 62, 220, 164, 24, 62, 26, 227, 48, 189, 241, 169, 10, 62, 233, 126, 159, 188, 70, 104, 106, 60, 59, 154, 41, 188, 75, 28, 227, 60, 212, 222, 5, 62, 138, 33, 68, 190, 149, 185, 98, 60, 152, 183, 253, 61, 11, 211, 216, 59, 244, 231, 237, 61, 122, 28, 47, 190, 222, 103, 85, 187, 200, 44, 175, 188, 64, 158, 9, 60, 228, 186, 198, 189, 117, 150, 27, 62, 30, 117, 172, 189, 207, 43, 83, 60, 139, 104, 193, 188, 52, 114, 13, 190, 234, 46, 230, 61, 95, 220, 4, 62, 202, 213, 114, 62, 187, 4, 11, 190, 38, 103, 81, 189, 129, 78, 94, 190, 64, 89, 248, 60, 210, 43, 248, 188, 227, 178, 2, 190, 239, 29, 113, 61, 205, 231, 89, 188, 90, 182, 139, 61, 234, 67, 29, 190, 78, 149, 18, 61, 187, 22, 48, 62, 9, 49, 69, 190, 104, 150, 69, 189, 203, 42, 220, 188, 202, 168, 34, 62, 61, 9, 89, 190, 138, 139, 174, 61, 247, 226, 60, 187, 163, 135, 230, 61, 78, 246, 69, 190, 23, 65, 98, 189, 46, 43, 218, 190, 86, 175, 54, 62, 236, 135, 218, 60, 70, 109, 34, 62, 10, 136, 185, 189, 69, 229, 247, 60, 205, 240, 206, 60, 254, 217, 17, 62, 169, 134, 58, 62, 210, 89, 28, 61, 83, 114, 125, 189, 121, 165, 1, 62, 3, 53, 135, 62, 175, 170, 105, 60, 191, 211, 198, 189, 243, 238, 219, 187, 12, 4, 16, 190, 16, 27, 39, 62, 168, 109, 91, 190, 151, 227, 120, 189, 212, 221, 16, 190, 81, 19, 50, 190, 180, 34, 146, 189, 84, 202, 213, 189, 230, 192, 57, 61, 84, 129, 143, 190, 77, 212, 130, 62, 253, 163, 139, 190, 61, 237, 58, 62, 56, 42, 46, 190, 209, 247, 158, 188, 237, 12, 238, 60, 166, 81, 198, 186, 8, 212, 28, 190, 237, 203, 42, 190, 246, 111, 184, 189, 39, 150, 16, 62, 25, 172, 43, 61, 27, 115, 164, 60, 14, 21, 223, 189, 188, 25, 11, 62, 13, 240, 139, 60, 105, 232, 187, 61, 118, 118, 31, 61, 43, 26, 158, 61, 151, 12, 192, 61, 56, 153, 157, 189, 164, 208, 15, 189, 152, 39, 195, 189, 244, 158, 128, 61, 178, 153, 87, 190, 80, 33, 102, 61, 231, 153, 85, 188, 237, 201, 78, 62, 23, 60, 31, 190, 236, 214, 125, 189, 124, 247, 200, 61, 253, 118, 106, 189, 255, 161, 132, 188, 77, 138, 10, 190, 251, 191, 59, 190, 181, 82, 201, 189, 241, 113, 23, 188, 66, 245, 247, 189, 127, 230, 72, 189, 211, 218, 68, 190, 59, 109, 238, 60, 198, 38, 195, 60, 76, 240, 181, 59, 191, 89, 31, 62, 98, 200, 246, 189, 193, 27, 179, 60, 33, 218, 5, 62, 41, 161, 230, 61, 64, 26, 53, 61, 71, 236, 46, 190, 25, 30, 66, 190, 101, 124, 240, 61, 90, 75, 122, 189, 183, 205, 178, 61, 55, 19, 189, 189, 197, 151, 38, 190, 242, 133, 27, 190, 172, 143, 16, 62, 49, 116, 66, 61, 132, 68, 127, 61, 9, 27, 6, 190, 155, 125, 195, 189, 197, 122, 156, 61, 108, 166, 154, 189, 25, 73, 66, 190, 56, 30, 82, 190, 41, 66, 7, 188, 6, 33, 50, 190, 0, 133, 232, 189, 197, 30, 93, 189, 129, 45, 201, 189, 226, 187, 246, 61, 251, 245, 3, 61, 164, 206, 48, 190, 212, 241, 108, 60, 209, 35, 47, 62, 131, 4, 32, 190, 129, 250, 40, 62, 151, 21, 43, 190, 20, 229, 206, 189, 126, 32, 3, 190, 145, 205, 241, 189, 2, 159, 3, 62, 159, 76, 200, 61, 81, 5, 195, 61, 49, 58, 184, 189, 21, 177, 153, 189, 202, 153, 28, 190, 205, 212, 1, 61, 75, 153, 147, 189, 136, 233, 1, 187, 188, 36, 169, 189, 52, 189, 5, 189, 68, 248, 88, 189, 74, 218, 29, 189, 113, 177, 48, 187, 224, 8, 113, 189, 9, 61, 17, 190, 151, 78, 29, 190, 151, 28, 208, 61, 141, 244, 72, 60, 99, 174, 187, 189, 160, 146, 92, 190, 216, 150, 80, 60, 247, 157, 183, 189, 169, 170, 61, 62, 169, 114, 107, 190, 147, 40, 150, 189, 166, 172, 81, 190, 213, 68, 141, 189, 191, 221, 104, 62, 82, 135, 74, 190, 162, 11, 243, 189, 244, 33, 4, 190, 164, 75, 222, 61, 36, 253, 34, 190, 173, 96, 12, 62, 9, 215, 97, 190, 19, 171, 234, 189, 212, 137, 1, 190, 9, 180, 62, 190, 197, 118, 198, 189, 163, 54, 16, 190, 252, 8, 234, 61, 80, 168, 192, 189, 14, 36, 232, 61, 177, 238, 75, 61, 28, 193, 151, 60, 209, 199, 212, 61, 191, 180, 103, 62, 136, 88, 6, 190, 95, 150, 141, 188, 112, 26, 53, 62, 195, 189, 241, 58, 35, 45, 30, 61, 146, 72, 68, 190, 34, 143, 194, 61, 237, 171, 37, 60, 250, 194, 105, 62, 129, 127, 129, 61, 1, 23, 36, 190, 185, 209, 159, 61, 27, 129, 194, 189, 30, 231, 50, 62, 50, 206, 15, 62, 45, 65, 22, 190, 182, 12, 253, 60, 237, 38, 136, 61, 170, 27, 235, 189, 107, 53, 111, 189, 201, 207, 107, 189, 238, 38, 53, 62, 38, 1, 62, 62, 196, 123, 253, 61, 1, 135, 142, 61, 247, 216, 133, 61, 173, 40, 14, 190, 110, 174, 188, 188, 15, 41, 224, 61, 6, 220, 41, 62, 179, 12, 157, 190, 107, 167, 210, 189, 24, 169, 0, 61, 24, 179, 146, 190, 95, 243, 157, 60, 140, 31, 122, 189, 155, 247, 63, 62, 30, 208, 66, 190, 48, 242, 151, 189, 94, 153, 20, 62, 116, 39, 52, 189, 166, 57, 5, 62, 217, 67, 25, 62, 85, 245, 16, 62, 209, 158, 186, 187, 64, 169, 150, 60, 56, 80, 206, 60, 127, 18, 223, 189, 60, 135, 81, 190, 254, 202, 157, 61, 187, 229, 128, 188, 42, 176, 254, 60, 197, 74, 32, 62, 125, 152, 176, 59, 230, 74, 135, 62, 237, 241, 203, 189, 171, 77, 119, 188, 85, 40, 92, 60, 3, 255, 194, 189, 205, 109, 18, 188, 233, 210, 208, 60, 25, 189, 129, 62, 82, 137, 52, 190, 138, 109, 76, 62, 57, 40, 67, 62, 73, 91, 157, 190, 116, 6, 84, 188, 77, 245, 233, 61, 108, 255, 4, 62, 234, 206, 128, 189, 235, 169, 243, 189, 84, 202, 241, 187, 107, 90, 176, 61, 195, 7, 28, 190, 189, 61, 47, 189, 193, 12, 181, 189, 9, 125, 200, 189, 28, 28, 188, 60, 24, 221, 13, 62, 68, 29, 14, 190, 106, 94, 151, 189, 231, 217, 15, 62, 78, 210, 19, 190, 36, 129, 39, 190, 214, 78, 8, 62, 14, 216, 99, 189, 60, 241, 185, 59, 47, 244, 180, 189, 0, 18, 212, 189, 41, 236, 105, 61, 62, 199, 235, 188, 210, 255, 15, 62, 15, 103, 15, 61, 32, 189, 156, 62, 100, 51, 116, 190, 234, 87, 27, 62, 20, 7, 45, 61, 86, 150, 244, 189, 156, 225, 190, 189, 0, 196, 244, 61, 67, 93, 18, 62, 246, 226, 215, 189, 182, 191, 215, 188, 253, 239, 46, 60, 148, 155, 26, 190, 8, 147, 12, 190, 15, 195, 251, 60, 209, 163, 145, 188, 203, 2, 66, 189, 81, 116, 251, 61, 202, 192, 245, 189, 176, 225, 234, 189, 4, 132, 234, 59, 101, 225, 157, 61, 229, 102, 246, 189, 85, 122, 11, 190, 203, 152, 122, 187, 6, 191, 163, 61, 50, 17, 136, 189, 246, 142, 244, 189, 168, 159, 18, 62, 115, 56, 186, 189, 46, 218, 44, 190, 30, 224, 1, 190, 239, 86, 171, 189, 80, 167, 195, 188, 224, 196, 1, 190, 198, 205, 214, 189, 3, 124, 168, 60, 112, 252, 163, 190, 119, 77, 194, 189, 110, 13, 179, 189, 253, 131, 135, 62, 45, 9, 149, 61, 255, 4, 232, 61, 155, 74, 155, 190, 110, 128, 155, 62, 210, 20, 27, 190, 50, 237, 2, 190, 142, 222, 135, 186, 84, 198, 135, 61, 70, 6, 73, 62, 98, 38, 232, 188, 184, 177, 46, 189, 92, 219, 64, 190, 210, 106, 32, 62, 47, 250, 40, 189, 88, 61, 243, 189, 217, 227, 176, 61, 185, 249, 112, 60, 157, 182, 145, 62, 38, 7, 38, 62, 137, 98, 57, 190, 101, 182, 1, 189, 191, 65, 34, 190, 100, 42, 72, 60, 92, 226, 207, 60, 158, 138, 130, 62, 114, 185, 245, 190, 207, 32, 219, 61, 153, 92, 160, 62, 172, 146, 37, 62, 161, 39, 17, 60, 177, 33, 106, 62, 252, 185, 239, 190, 200, 124, 132, 61, 17, 44, 133, 61, 54, 81, 251, 61, 63, 81, 71, 189, 204, 244, 77, 61, 71, 251, 61, 190, 72, 49, 127, 189, 178, 228, 228, 188, 224, 140, 21, 189, 55, 120, 75, 190, 17, 101, 238, 61, 237, 94, 234, 187, 59, 27, 23, 58, 126, 166, 252, 61, 41, 209, 129, 62, 56, 238, 220, 189, 102, 112, 116, 61, 178, 10, 60, 61, 51, 220, 89, 62, 86, 159, 47, 62, 126, 157, 193, 189, 97, 101, 218, 61, 239, 183, 36, 190, 211, 162, 194, 61, 5, 12, 174, 190, 133, 8, 140, 62, 222, 136, 50, 190, 186, 161, 154, 189, 208, 184, 232, 189, 86, 194, 88, 61, 234, 65, 243, 189, 224, 222, 15, 190, 155, 192, 184, 60, 50, 192, 16, 61, 5, 41, 146, 188, 51, 247, 93, 189, 247, 33, 2, 189, 152, 11, 213, 189, 145, 213, 51, 189, 195, 135, 47, 189, 253, 18, 119, 189, 71, 17, 51, 190, 248, 220, 32, 61, 89, 130, 156, 188, 23, 46, 150, 189, 78, 151, 230, 60, 135, 136, 13, 61, 59, 237, 13, 190, 189, 253, 221, 61, 240, 237, 164, 189, 25, 242, 200, 189, 250, 156, 197, 189, 202, 166, 231, 60, 74, 249, 181, 61, 167, 43, 11, 189, 30, 168, 134, 189, 248, 35, 17, 62, 14, 239, 32, 189, 138, 74, 169, 61, 11, 101, 45, 190, 74, 149, 170, 189, 214, 157, 228, 60, 34, 252, 90, 61, 11, 219, 49, 190, 0, 216, 21, 190, 143, 137, 103, 61, 223, 56, 66, 62, 133, 135, 168, 186, 152, 58, 164, 61, 127, 235, 52, 190, 223, 63, 31, 62, 110, 184, 76, 61, 164, 87, 13, 189, 41, 78, 100, 61, 163, 57, 83, 188, 166, 210, 162, 61, 125, 91, 47, 62, 175, 165, 6, 189, 18, 174, 13, 61, 21, 6, 219, 61, 151, 69, 254, 61, 189, 28, 184, 189, 53, 156, 4, 190, 88, 59, 23, 190, 76, 111, 153, 189, 94, 29, 55, 62, 163, 15, 1, 62, 135, 67, 158, 189, 105, 253, 234, 188, 24, 100, 119, 62, 9, 121, 168, 190, 110, 96, 26, 62, 9, 214, 172, 61, 149, 171, 168, 189, 11, 249, 221, 60, 137, 163, 197, 60, 24, 151, 163, 189, 254, 199, 156, 61, 39, 103, 197, 61, 199, 70, 75, 188, 218, 95, 161, 188, 60, 183, 41, 190, 38, 55, 148, 189, 144, 130, 29, 188, 122, 143, 223, 61, 122, 241, 125, 60, 50, 140, 33, 62, 122, 97, 41, 190, 199, 151, 47, 62, 197, 145, 21, 190, 71, 160, 50, 190, 196, 171, 30, 190, 181, 252, 198, 189, 163, 119, 238, 189, 213, 129, 220, 61, 77, 78, 245, 189, 114, 202, 85, 61, 212, 222, 212, 59, 112, 203, 51, 190, 188, 253, 199, 189, 186, 51, 61, 189, 129, 89, 165, 189, 172, 126, 39, 62, 58, 87, 255, 61, 55, 121, 63, 62, 151, 245, 142, 61, 61, 152, 70, 189, 141, 170, 177, 190, 72, 132, 237, 187, 154, 45, 77, 190, 132, 203, 117, 62, 178, 180, 165, 188, 87, 54, 35, 62, 244, 65, 168, 190, 178, 200, 129, 189, 160, 72, 85, 189, 125, 144, 152, 190, 72, 255, 118, 190, 221, 107, 2, 62, 217, 29, 141, 61, 99, 186, 226, 60, 118, 178, 41, 61, 32, 68, 229, 61, 205, 113, 22, 188, 155, 52, 33, 62, 43, 77, 142, 189, 47, 104, 30, 62, 0, 170, 12, 60, 253, 129, 154, 61, 26, 116, 94, 62, 23, 23, 75, 61, 234, 49, 11, 190, 25, 94, 166, 190, 49, 229, 11, 63, 225, 244, 52, 61, 231, 232, 15, 62, 7, 224, 24, 189, 127, 189, 98, 190, 223, 146, 247, 61, 136, 242, 102, 190, 208, 103, 36, 62, 193, 210, 5, 61, 241, 117, 255, 61, 147, 161, 22, 190, 168, 173, 172, 61, 138, 141, 1, 61, 62, 159, 165, 61, 182, 119, 128, 189, 185, 219, 13, 187, 234, 131, 139, 190, 154, 148, 94, 61, 86, 191, 105, 59, 132, 85, 128, 188, 163, 103, 29, 190, 206, 87, 12, 188, 248, 172, 206, 60, 75, 43, 47, 190, 194, 92, 249, 189, 210, 82, 44, 62, 198, 106, 133, 189, 72, 184, 80, 188, 84, 33, 205, 61, 139, 172, 132, 190, 165, 219, 119, 62, 218, 190, 177, 190, 203, 111, 125, 62, 134, 31, 131, 190, 126, 231, 190, 60, 204, 23, 211, 60, 131, 136, 205, 188, 135, 175, 29, 62, 11, 191, 186, 61, 77, 242, 138, 187, 137, 102, 20, 62, 10, 156, 42, 61, 199, 213, 197, 187, 84, 183, 10, 190, 215, 75, 234, 61, 111, 98, 225, 61, 162, 193, 51, 190, 6, 208, 169, 189, 184, 56, 134, 189, 233, 126, 152, 61, 28, 203, 237, 189, 132, 176, 28, 62, 173, 132, 56, 60, 197, 58, 6, 62, 110, 216, 240, 61, 250, 80, 254, 189, 66, 58, 3, 189, 31, 147, 42, 188, 103, 70, 3, 190, 86, 186, 7, 62, 172, 50, 44, 189, 165, 86, 51, 190, 33, 153, 41, 190, 228, 160, 216, 189, 133, 148, 198, 188, 40, 53, 243, 61, 142, 1, 196, 188, 108, 186, 162, 61, 64, 213, 132, 61, 58, 83, 194, 61, 146, 70, 17, 190, 249, 24, 109, 189, 207, 156, 211, 61, 168, 144, 64, 189, 139, 101, 56, 61, 154, 223, 206, 60, 223, 201, 40, 62, 17, 158, 211, 189, 123, 119, 214, 59, 112, 231, 63, 61, 64, 89, 145, 61, 243, 122, 162, 189, 115, 42, 27, 190, 38, 197, 214, 189, 241, 190, 103, 189, 93, 210, 17, 62, 175, 200, 47, 190, 145, 187, 36, 190, 54, 132, 24, 190, 43, 107, 220, 189, 90, 51, 196, 189, 96, 139, 62, 189, 3, 144, 24, 190, 253, 195, 32, 190, 194, 224, 184, 189, 228, 22, 228, 189, 131, 97, 233, 189, 205, 230, 83, 189, 27, 196, 208, 189, 18, 17, 250, 189, 196, 240, 206, 189, 254, 132, 193, 60, 241, 36, 129, 61, 61, 74, 49, 190, 104, 40, 149, 59, 157, 86, 70, 62, 115, 35, 6, 62, 223, 234, 12, 190, 68, 67, 40, 188, 137, 219, 229, 189, 133, 249, 247, 189, 250, 37, 37, 189, 154, 239, 214, 188, 208, 129, 174, 189, 165, 142, 168, 188, 129, 255, 111, 190, 94, 28, 182, 61, 136, 96, 157, 61, 61, 11, 160, 189, 58, 125, 62, 61, 20, 210, 65, 190, 62, 127, 54, 62, 102, 85, 82, 189, 81, 165, 104, 190, 209, 115, 53, 189, 5, 216, 229, 189, 243, 250, 139, 60, 148, 243, 173, 188, 79, 252, 123, 62, 122, 157, 60, 190, 252, 225, 63, 62, 40, 101, 72, 190, 222, 36, 109, 61, 101, 146, 74, 61, 50, 177, 127, 189, 191, 145, 128, 189, 44, 49, 206, 189, 36, 78, 128, 62, 201, 167, 175, 61, 172, 150, 107, 189, 44, 73, 169, 190, 183, 45, 204, 58, 253, 255, 199, 189, 98, 31, 61, 190, 119, 85, 187, 189, 218, 226, 66, 190, 41, 232, 8, 62, 224, 200, 248, 61, 73, 244, 138, 189, 195, 5, 215, 61, 59, 111, 62, 189, 227, 12, 128, 61, 56, 208, 55, 190, 140, 124, 8, 62, 70, 145, 236, 188, 104, 225, 61, 189, 27, 102, 175, 61, 58, 127, 41, 190, 52, 94, 17, 62, 131, 191, 184, 190, 84, 223, 151, 62, 85, 184, 163, 189, 46, 144, 54, 59, 100, 250, 27, 61, 54, 59, 34, 60, 67, 46, 242, 189, 47, 183, 19, 62, 150, 54, 163, 190, 95, 247, 17, 61, 194, 190, 151, 61, 187, 60, 200, 61, 74, 39, 187, 61, 51, 238, 202, 61, 185, 67, 178, 189, 116, 182, 154, 189, 156, 79, 133, 61, 175, 7, 96, 62, 166, 17, 33, 62, 5, 153, 27, 189, 45, 77, 2, 61, 146, 52, 40, 190, 242, 242, 31, 62, 163, 96, 13, 62, 198, 208, 129, 188, 236, 87, 141, 60, 82, 125, 225, 61, 163, 7, 168, 188, 224, 178, 218, 59, 52, 245, 235, 188, 206, 155, 183, 189, 109, 154, 30, 190, 165, 234, 151, 61, 125, 93, 68, 190, 132, 41, 82, 62, 53, 50, 237, 61, 252, 82, 14, 190, 101, 35, 14, 190, 92, 8, 155, 189, 72, 233, 26, 62, 96, 16, 43, 62, 2, 130, 253, 189, 191, 64, 237, 189, 213, 16, 23, 190, 137, 188, 32, 190, 137, 105, 203, 61, 159, 197, 28, 188, 233, 100, 252, 189, 179, 121, 224, 189, 148, 214, 40, 189, 65, 5, 169, 61, 208, 53, 201, 61, 133, 230, 1, 190, 110, 209, 229, 189, 253, 179, 38, 190, 132, 94, 17, 62, 154, 85, 104, 189, 187, 184, 211, 189, 33, 150, 23, 190, 53, 74, 18, 190, 223, 104, 2, 62, 184, 179, 180, 59, 204, 209, 0, 190, 161, 217, 123, 60, 251, 157, 68, 189, 96, 136, 117, 61, 251, 20, 140, 188, 108, 64, 68, 61, 43, 60, 42, 190, 34, 153, 43, 188, 105, 113, 220, 189, 130, 243, 133, 62, 32, 124, 62, 189, 192, 62, 65, 61, 18, 92, 45, 190, 79, 136, 136, 62, 42, 48, 191, 59, 225, 64, 52, 62, 58, 101, 72, 189, 234, 245, 54, 62, 236, 224, 29, 62, 242, 90, 252, 60, 131, 29, 147, 190, 158, 87, 139, 189, 254, 203, 212, 188, 74, 11, 156, 61, 9, 105, 3, 190, 141, 189, 10, 62, 26, 154, 67, 61, 29, 84, 166, 62, 226, 129, 185, 188, 147, 237, 113, 60, 5, 236, 34, 61, 214, 152, 108, 190, 200, 132, 120, 189, 252, 215, 21, 62, 80, 253, 196, 62, 102, 64, 195, 188, 29, 29, 61, 62, 152, 202, 61, 62, 184, 48, 139, 189, 146, 105, 41, 189, 233, 98, 12, 190, 215, 126, 191, 60, 226, 3, 119, 190, 254, 101, 184, 61, 5, 74, 203, 61, 250, 13, 144, 60, 71, 215, 241, 189, 30, 218, 255, 189, 119, 26, 62, 190, 14, 249, 26, 62, 137, 90, 116, 189, 46, 154, 211, 60, 235, 74, 213, 189, 157, 16, 249, 59, 253, 65, 94, 61, 160, 188, 8, 62, 151, 95, 31, 190, 79, 66, 32, 62, 69, 123, 196, 60, 212, 5, 122, 187, 29, 202, 221, 61, 10, 108, 221, 189, 143, 30, 49, 189, 208, 122, 72, 189, 36, 126, 221, 61, 90, 82, 137, 190, 255, 126, 20, 61, 8, 182, 65, 190, 14, 40, 239, 188, 239, 48, 137, 186, 93, 161, 245, 189, 223, 170, 140, 60, 225, 171, 101, 61, 51, 155, 176, 190, 136, 124, 2, 61, 83, 37, 97, 62, 145, 171, 235, 188, 2, 187, 11, 190, 221, 82, 254, 188, 69, 105, 10, 189, 28, 138, 101, 61, 145, 173, 93, 190, 128, 19, 35, 189, 128, 30, 241, 188, 248, 167, 169, 61, 134, 147, 10, 62, 253, 221, 36, 61, 118, 121, 198, 188, 252, 12, 40, 61, 234, 0, 56, 190, 25, 28, 71, 190, 116, 69, 209, 189, 136, 202, 130, 62, 107, 30, 43, 190, 129, 60, 28, 190, 188, 212, 71, 61, 181, 230, 59, 189, 64, 103, 151, 61, 238, 37, 176, 190, 16, 25, 17, 62, 60, 171, 214, 189, 56, 34, 174, 188, 231, 98, 161, 61, 0, 114, 221, 60, 44, 111, 57, 190, 204, 13, 53, 62, 144, 228, 169, 187, 143, 84, 179, 189, 118, 215, 13, 62, 30, 245, 48, 190, 74, 55, 236, 189, 150, 127, 24, 61, 22, 1, 205, 189, 30, 45, 94, 61, 165, 50, 223, 57, 1, 127, 155, 189, 173, 186, 116, 189, 54, 115, 230, 189, 138, 161, 188, 61, 125, 143, 239, 189, 217, 96, 17, 62, 57, 241, 15, 190, 211, 183, 66, 189, 83, 45, 70, 190, 8, 115, 5, 62, 115, 11, 5, 190, 86, 29, 5, 62, 37, 93, 84, 190, 118, 72, 158, 189, 12, 223, 211, 189, 229, 65, 46, 190, 119, 177, 170, 61, 244, 44, 18, 190, 224, 193, 185, 189};
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
                alignas(float) const unsigned char memory[] = {195, 193, 92, 60, 223, 242, 95, 61, 218, 41, 164, 188, 155, 209, 152, 61, 228, 161, 53, 62, 235, 60, 42, 190, 60, 87, 76, 62, 154, 129, 43, 190, 196, 97, 17, 190, 206, 31, 173, 189, 212, 96, 216, 61, 237, 2, 138, 189, 196, 152, 112, 61, 148, 2, 103, 62, 161, 60, 193, 189, 167, 52, 210, 61, 65, 147, 61, 188, 225, 8, 234, 189, 19, 136, 100, 62, 239, 103, 162, 189, 186, 181, 214, 61, 106, 23, 31, 62, 52, 107, 56, 190, 31, 77, 18, 190, 175, 129, 28, 62, 164, 14, 18, 61, 128, 207, 46, 189, 89, 76, 12, 62, 30, 251, 153, 59, 126, 120, 85, 190, 154, 168, 25, 62, 47, 133, 20, 190};
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
                alignas(float) const unsigned char memory[] = {171, 110, 207, 189, 127, 184, 87, 189, 58, 237, 51, 190, 97, 13, 11, 62, 187, 65, 214, 189, 3, 49, 76, 62, 185, 183, 134, 62, 160, 36, 250, 61, 162, 88, 4, 62, 137, 38, 104, 189, 8, 45, 120, 190, 83, 191, 28, 190, 74, 101, 129, 190, 193, 161, 13, 190, 167, 125, 13, 190, 191, 200, 30, 191, 219, 150, 156, 62, 182, 56, 38, 190, 79, 28, 54, 62, 81, 178, 23, 62, 25, 200, 181, 62, 21, 254, 188, 62, 79, 139, 9, 62, 105, 162, 3, 60, 187, 111, 178, 61, 56, 209, 168, 62, 158, 234, 60, 190, 250, 42, 187, 61, 25, 57, 146, 190, 31, 238, 177, 189, 67, 114, 123, 62, 128, 160, 3, 190, 95, 146, 52, 190, 69, 230, 72, 188, 162, 106, 24, 62, 43, 58, 17, 62, 188, 20, 126, 190, 83, 57, 127, 61, 10, 109, 194, 189, 60, 69, 151, 61, 93, 193, 205, 61, 186, 12, 43, 62, 19, 11, 16, 190, 104, 103, 13, 190, 154, 13, 47, 61, 71, 154, 116, 189, 161, 211, 35, 61, 145, 128, 73, 189, 48, 102, 238, 61, 121, 93, 155, 60, 244, 3, 70, 190, 250, 150, 19, 62, 76, 235, 34, 188, 177, 47, 194, 189, 163, 227, 224, 187, 171, 69, 33, 61, 167, 56, 45, 190, 228, 61, 221, 189, 3, 140, 157, 61, 178, 26, 208, 61, 110, 254, 172, 188, 121, 255, 26, 62, 99, 89, 52, 62, 117, 88, 178, 189};
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
                alignas(float) const unsigned char memory[] = {195, 88, 252, 189, 124, 80, 18, 190};
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
    alignas(float) const unsigned char memory[] = {27, 28, 47, 61, 244, 86, 34, 63, 159, 87, 222, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {230, 126, 209, 191, 75, 59, 39, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0034/steps/000000000002000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}