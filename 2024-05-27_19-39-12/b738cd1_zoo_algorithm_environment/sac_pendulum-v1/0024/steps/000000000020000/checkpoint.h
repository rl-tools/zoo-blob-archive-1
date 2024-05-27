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
                alignas(float) const unsigned char memory[] = {237, 41, 104, 190, 160, 144, 219, 62, 118, 71, 91, 188, 76, 30, 40, 191, 202, 114, 10, 62, 107, 103, 59, 63, 106, 109, 32, 190, 8, 234, 172, 63, 139, 29, 196, 62, 136, 31, 11, 63, 147, 179, 158, 191, 214, 111, 132, 190, 121, 103, 15, 191, 82, 37, 203, 62, 94, 209, 12, 62, 34, 158, 112, 190, 74, 35, 225, 191, 26, 118, 115, 190, 133, 139, 162, 62, 38, 76, 158, 190, 37, 221, 79, 190, 44, 24, 46, 191, 251, 93, 206, 62, 140, 57, 178, 190, 47, 166, 105, 62, 216, 167, 150, 191, 208, 232, 137, 190, 155, 118, 228, 62, 77, 231, 148, 62, 58, 191, 207, 190, 109, 130, 220, 190, 23, 69, 44, 191, 180, 142, 28, 63, 68, 243, 14, 63, 141, 201, 212, 61, 127, 165, 3, 191, 86, 190, 165, 62, 227, 154, 92, 190, 54, 237, 157, 62, 125, 139, 2, 61, 100, 105, 30, 63, 255, 210, 214, 190, 128, 230, 132, 189, 92, 168, 137, 62, 240, 216, 97, 60, 210, 24, 32, 63, 39, 252, 190, 63, 54, 100, 214, 62, 197, 97, 156, 190, 213, 26, 128, 190, 112, 95, 146, 190, 236, 81, 124, 63, 138, 105, 79, 63, 143, 159, 48, 62, 205, 240, 13, 63, 234, 200, 128, 190, 98, 224, 117, 188, 68, 146, 197, 189, 39, 238, 220, 191, 122, 186, 175, 190, 19, 224, 184, 190, 137, 164, 36, 191, 201, 152, 108, 189, 45, 32, 10, 63, 31, 15, 65, 191, 37, 66, 253, 190, 28, 27, 85, 190, 191, 102, 166, 63, 255, 102, 110, 62, 82, 159, 46, 62, 186, 250, 52, 63, 121, 133, 142, 190, 116, 85, 219, 189, 238, 205, 101, 62, 99, 93, 9, 191, 184, 147, 57, 62, 159, 224, 138, 191, 17, 152, 61, 190, 208, 3, 124, 190, 106, 12, 142, 191, 142, 236, 75, 62, 1, 242, 54, 190, 84, 137, 185, 63, 115, 16, 102, 62, 177, 225, 188, 190, 76, 37, 196, 190, 126, 215, 221, 190, 115, 86, 138, 187, 14, 45, 71, 63, 20, 128, 199, 190, 194, 230, 77, 63, 55, 111, 48, 191, 83, 97, 241, 189, 14, 184, 79, 63, 129, 131, 167, 62, 141, 122, 33, 63};
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
                alignas(float) const unsigned char memory[] = {221, 102, 25, 191, 231, 222, 175, 189, 69, 32, 112, 62, 192, 154, 170, 62, 187, 111, 251, 62, 175, 70, 200, 190, 248, 77, 112, 191, 71, 141, 161, 190, 108, 208, 84, 190, 75, 151, 67, 190, 191, 118, 219, 190, 80, 56, 85, 190, 28, 223, 43, 63, 168, 40, 96, 189, 145, 151, 198, 190, 45, 111, 47, 190, 238, 193, 21, 190, 183, 232, 104, 62, 94, 158, 215, 62, 224, 4, 172, 190, 42, 32, 207, 62, 34, 51, 33, 190, 44, 121, 203, 62, 228, 105, 25, 62, 109, 229, 39, 191, 117, 56, 216, 61, 136, 14, 37, 63, 181, 139, 105, 62, 82, 163, 130, 62, 233, 172, 136, 62, 212, 57, 207, 190, 149, 27, 57, 190};
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
                alignas(float) const unsigned char memory[] = {77, 30, 42, 62, 219, 3, 174, 61, 128, 69, 168, 190, 55, 231, 135, 62, 241, 139, 22, 190, 121, 246, 119, 189, 196, 111, 156, 189, 141, 151, 218, 59, 224, 195, 135, 188, 242, 23, 83, 61, 214, 26, 176, 188, 53, 115, 207, 61, 81, 98, 220, 62, 185, 89, 220, 61, 29, 143, 147, 61, 62, 26, 233, 190, 212, 31, 112, 189, 16, 172, 182, 190, 130, 161, 46, 61, 112, 221, 5, 189, 163, 88, 153, 62, 69, 218, 6, 61, 146, 127, 131, 191, 97, 92, 189, 189, 40, 184, 5, 62, 185, 98, 41, 63, 44, 84, 20, 63, 227, 245, 182, 191, 13, 91, 240, 188, 222, 154, 162, 188, 27, 195, 104, 62, 139, 254, 185, 190, 191, 154, 168, 61, 76, 236, 48, 190, 152, 244, 72, 61, 232, 223, 60, 188, 58, 77, 226, 60, 137, 105, 150, 188, 193, 193, 133, 61, 161, 45, 195, 189, 218, 130, 209, 189, 151, 108, 3, 190, 144, 217, 187, 189, 234, 55, 33, 190, 139, 72, 157, 61, 51, 194, 13, 190, 173, 89, 123, 189, 184, 84, 91, 189, 98, 158, 38, 188, 158, 36, 100, 189, 178, 45, 126, 61, 34, 108, 163, 189, 48, 111, 14, 190, 207, 27, 195, 189, 106, 192, 199, 189, 2, 61, 72, 189, 167, 151, 13, 62, 222, 75, 80, 61, 157, 161, 244, 189, 172, 107, 21, 59, 149, 5, 123, 61, 246, 250, 253, 60, 183, 72, 75, 190, 170, 104, 30, 189, 219, 146, 188, 60, 88, 31, 93, 189, 135, 247, 85, 62, 33, 209, 138, 188, 2, 128, 122, 62, 142, 167, 211, 191, 66, 217, 71, 187, 11, 248, 169, 189, 61, 178, 129, 60, 12, 119, 154, 190, 106, 250, 97, 190, 252, 81, 49, 190, 255, 253, 147, 190, 124, 3, 142, 188, 38, 49, 88, 189, 37, 173, 172, 61, 169, 22, 182, 189, 188, 126, 153, 190, 36, 83, 126, 191, 67, 187, 176, 191, 221, 163, 140, 190, 197, 241, 142, 190, 128, 78, 137, 62, 2, 2, 59, 61, 119, 227, 35, 191, 163, 18, 238, 190, 61, 181, 197, 190, 158, 26, 193, 62, 111, 0, 166, 60, 201, 123, 167, 62, 175, 243, 48, 190, 214, 36, 40, 189, 70, 253, 48, 62, 89, 182, 64, 62, 248, 60, 186, 61, 141, 171, 29, 62, 168, 6, 199, 189, 35, 37, 91, 62, 175, 140, 18, 63, 193, 237, 73, 61, 17, 16, 11, 63, 213, 249, 111, 190, 118, 128, 77, 62, 216, 86, 8, 62, 65, 213, 60, 190, 126, 241, 135, 61, 167, 129, 137, 61, 243, 61, 77, 190, 194, 60, 2, 190, 204, 51, 82, 189, 213, 99, 133, 62, 220, 113, 36, 63, 140, 200, 206, 61, 76, 106, 225, 62, 56, 130, 84, 190, 100, 243, 10, 191, 69, 158, 136, 188, 178, 10, 211, 61, 165, 74, 149, 62, 46, 119, 73, 190, 173, 153, 128, 62, 172, 231, 4, 191, 247, 33, 233, 61, 183, 253, 40, 62, 152, 161, 157, 61, 77, 122, 92, 61, 90, 246, 43, 190, 157, 90, 144, 61, 33, 177, 44, 62, 43, 253, 190, 191, 15, 136, 251, 190, 136, 173, 8, 191, 92, 155, 164, 189, 123, 137, 71, 62, 12, 42, 16, 62, 24, 236, 187, 62, 143, 113, 163, 61, 251, 242, 189, 189, 179, 39, 17, 190, 89, 161, 191, 189, 43, 163, 52, 190, 219, 162, 115, 189, 34, 1, 23, 189, 193, 107, 116, 191, 8, 140, 76, 190, 177, 161, 140, 62, 74, 25, 133, 61, 33, 248, 175, 188, 106, 118, 3, 191, 141, 168, 79, 62, 142, 209, 93, 62, 2, 146, 154, 189, 29, 31, 197, 190, 241, 9, 1, 62, 7, 142, 165, 62, 84, 229, 157, 188, 176, 131, 235, 61, 102, 154, 221, 61, 243, 250, 190, 190, 153, 140, 110, 62, 138, 1, 23, 191, 117, 170, 201, 189, 2, 253, 140, 190, 95, 118, 9, 62, 20, 74, 173, 60, 38, 97, 17, 62, 137, 10, 128, 61, 84, 228, 71, 62, 70, 169, 116, 62, 185, 176, 21, 62, 51, 206, 191, 186, 97, 39, 233, 60, 141, 2, 54, 190, 248, 91, 91, 190, 198, 29, 61, 62, 125, 87, 194, 189, 170, 189, 10, 190, 136, 142, 141, 61, 99, 43, 101, 191, 73, 24, 213, 189, 39, 40, 241, 189, 232, 114, 38, 62, 92, 248, 91, 61, 64, 12, 186, 191, 128, 54, 23, 189, 49, 15, 41, 62, 228, 189, 0, 61, 22, 125, 115, 188, 146, 184, 130, 61, 189, 226, 54, 188, 110, 29, 50, 190, 218, 79, 102, 189, 189, 252, 178, 190, 97, 186, 221, 62, 30, 188, 90, 190, 161, 68, 3, 62, 46, 28, 65, 61, 36, 17, 130, 62, 105, 179, 209, 189, 192, 218, 165, 189, 76, 145, 218, 189, 97, 48, 91, 62, 198, 111, 19, 62, 13, 207, 243, 61, 125, 230, 133, 189, 59, 75, 158, 62, 61, 64, 19, 62, 115, 200, 187, 61, 181, 17, 144, 189, 82, 2, 31, 190, 150, 0, 73, 62, 37, 38, 92, 62, 126, 195, 10, 62, 82, 127, 35, 191, 50, 141, 57, 191, 227, 71, 6, 62, 229, 16, 35, 62, 26, 28, 87, 62, 200, 162, 186, 190, 160, 39, 239, 61, 174, 221, 166, 61, 100, 96, 205, 189, 113, 127, 252, 61, 2, 95, 212, 190, 26, 236, 236, 61, 87, 23, 51, 61, 220, 4, 50, 191, 11, 127, 162, 189, 10, 41, 56, 191, 183, 153, 94, 189, 5, 88, 29, 190, 199, 66, 23, 190, 108, 109, 204, 61, 207, 247, 88, 62, 123, 144, 45, 190, 93, 170, 113, 62, 129, 176, 240, 61, 76, 179, 36, 63, 154, 27, 8, 62, 157, 16, 165, 190, 156, 168, 135, 61, 102, 49, 63, 190, 240, 32, 190, 62, 124, 127, 85, 62, 78, 219, 189, 61, 4, 66, 57, 191, 208, 211, 62, 189, 232, 16, 66, 62, 70, 218, 101, 60, 60, 71, 106, 62, 210, 70, 83, 190, 16, 247, 140, 62, 238, 100, 248, 189, 243, 153, 30, 191, 119, 57, 215, 190, 143, 102, 88, 191, 15, 244, 174, 62, 101, 58, 72, 61, 14, 25, 163, 190, 35, 209, 1, 189, 59, 203, 20, 191, 8, 171, 209, 189, 137, 150, 107, 191, 164, 125, 73, 190, 97, 229, 85, 190, 58, 24, 90, 188, 72, 115, 146, 189, 245, 26, 40, 191, 206, 184, 52, 62, 145, 239, 253, 190, 154, 245, 4, 191, 237, 250, 153, 189, 8, 151, 131, 62, 86, 75, 195, 190, 22, 27, 250, 61, 105, 77, 228, 58, 145, 156, 145, 60, 32, 129, 145, 191, 24, 181, 228, 61, 128, 123, 143, 190, 137, 53, 175, 62, 221, 165, 244, 61, 92, 203, 49, 62, 70, 49, 205, 190, 209, 224, 234, 189, 136, 231, 98, 62, 164, 254, 139, 189, 120, 29, 156, 62, 41, 244, 10, 189, 102, 62, 190, 190, 131, 57, 129, 62, 159, 109, 252, 61, 78, 34, 128, 61, 100, 95, 45, 190, 212, 2, 141, 61, 226, 117, 74, 62, 216, 222, 36, 61, 192, 32, 102, 190, 246, 174, 20, 189, 200, 199, 179, 190, 77, 12, 166, 61, 42, 91, 20, 191, 234, 26, 76, 62, 211, 100, 144, 190, 78, 212, 231, 61, 8, 92, 65, 62, 106, 20, 86, 190, 164, 70, 32, 189, 93, 210, 233, 190, 239, 193, 129, 62, 148, 103, 124, 62, 108, 50, 76, 190, 198, 237, 19, 61, 226, 138, 191, 61, 212, 112, 232, 62, 57, 218, 58, 190, 39, 77, 9, 61, 90, 176, 123, 189, 33, 50, 240, 188, 167, 177, 26, 190, 94, 57, 49, 190, 72, 162, 118, 189, 24, 82, 180, 189, 152, 77, 138, 60, 234, 18, 10, 61, 227, 221, 6, 62, 68, 241, 188, 189, 99, 71, 216, 61, 31, 132, 124, 61, 157, 218, 12, 190, 87, 191, 17, 189, 125, 205, 35, 62, 10, 248, 185, 61, 18, 36, 34, 190, 36, 62, 254, 189, 13, 240, 100, 189, 124, 71, 3, 62, 21, 86, 35, 190, 195, 82, 135, 189, 207, 35, 144, 61, 166, 114, 65, 190, 40, 78, 79, 189, 48, 52, 191, 189, 190, 199, 112, 189, 185, 157, 208, 189, 32, 43, 35, 62, 44, 173, 217, 189, 255, 255, 206, 185, 144, 63, 215, 61, 167, 71, 66, 190, 158, 115, 33, 62, 153, 92, 10, 190, 99, 170, 44, 62, 7, 249, 61, 189, 127, 148, 93, 191, 130, 134, 131, 189, 142, 126, 17, 191, 64, 170, 80, 189, 75, 235, 231, 188, 219, 58, 1, 60, 209, 117, 218, 61, 3, 147, 31, 60, 207, 105, 22, 61, 50, 55, 190, 62, 245, 85, 131, 189, 95, 23, 11, 63, 98, 147, 222, 189, 197, 139, 171, 190, 101, 37, 20, 190, 85, 47, 35, 190, 45, 145, 153, 62, 159, 86, 135, 60, 162, 128, 137, 62, 106, 18, 55, 191, 254, 200, 56, 60, 250, 68, 134, 189, 132, 130, 21, 189, 142, 230, 167, 62, 34, 138, 15, 191, 221, 66, 157, 62, 194, 44, 204, 188, 51, 34, 140, 61, 14, 27, 198, 189, 85, 178, 254, 189, 67, 15, 237, 60, 226, 172, 4, 190, 248, 12, 156, 189, 28, 104, 135, 189, 86, 16, 31, 187, 95, 28, 9, 190, 13, 143, 54, 189, 87, 22, 187, 61, 41, 47, 18, 190, 190, 79, 247, 189, 66, 68, 52, 190, 118, 68, 32, 62, 18, 182, 59, 61, 47, 193, 38, 190, 32, 12, 207, 189, 172, 217, 12, 61, 183, 52, 231, 189, 250, 55, 245, 61, 222, 115, 233, 188, 165, 32, 215, 61, 78, 36, 37, 62, 248, 57, 22, 62, 72, 3, 242, 186, 245, 1, 164, 61, 190, 69, 44, 189, 146, 79, 2, 190, 23, 41, 34, 190, 39, 118, 143, 187, 24, 180, 37, 190, 88, 8, 49, 190, 48, 15, 37, 190, 217, 246, 34, 59, 216, 65, 164, 61, 45, 68, 233, 189, 248, 230, 51, 61, 202, 210, 115, 189, 239, 55, 39, 190, 225, 247, 9, 190, 87, 170, 159, 61, 129, 29, 118, 60, 138, 37, 24, 190, 182, 6, 139, 61, 180, 156, 4, 61, 227, 15, 110, 60, 190, 147, 69, 190, 192, 33, 86, 188, 205, 61, 210, 61, 8, 15, 1, 62, 100, 110, 213, 189, 45, 126, 36, 190, 233, 225, 203, 60, 165, 42, 51, 60, 217, 239, 254, 60, 5, 21, 119, 61, 227, 254, 22, 190, 129, 255, 148, 189, 202, 111, 198, 61, 87, 32, 141, 60, 125, 27, 160, 189, 177, 22, 3, 190, 197, 63, 112, 61, 124, 123, 216, 61, 152, 21, 110, 62, 186, 45, 116, 191, 159, 205, 152, 62, 70, 93, 0, 192, 193, 5, 188, 189, 214, 6, 158, 189, 184, 247, 117, 61, 122, 54, 92, 190, 160, 23, 166, 60, 192, 207, 43, 62, 131, 227, 33, 190, 49, 41, 169, 61, 115, 149, 46, 62, 174, 27, 249, 189, 52, 241, 195, 61, 219, 43, 81, 191, 210, 20, 18, 191, 135, 150, 208, 191, 43, 250, 228, 189, 153, 70, 38, 190, 219, 219, 104, 62, 189, 254, 91, 62, 36, 41, 81, 61, 31, 221, 203, 190, 204, 184, 12, 62, 122, 227, 204, 62, 96, 202, 172, 189, 115, 24, 200, 61, 147, 238, 68, 190, 104, 20, 17, 190, 166, 225, 18, 190, 22, 112, 196, 61, 76, 195, 41, 62, 186, 121, 56, 191, 161, 89, 89, 62, 167, 129, 223, 191, 117, 5, 149, 61, 77, 151, 108, 62, 18, 22, 48, 190, 105, 71, 54, 191, 71, 90, 77, 61, 178, 47, 213, 190, 25, 239, 156, 190, 10, 13, 128, 61, 140, 19, 210, 61, 39, 65, 13, 190, 146, 209, 244, 60, 149, 125, 17, 191, 61, 8, 15, 191, 109, 169, 157, 191, 94, 158, 19, 62, 150, 176, 30, 191, 134, 113, 92, 62, 92, 90, 178, 188, 4, 121, 230, 190, 119, 175, 20, 190, 223, 197, 82, 189, 182, 97, 202, 62, 69, 175, 220, 190, 167, 181, 211, 62, 202, 103, 78, 61, 164, 203, 120, 190, 249, 67, 90, 60, 25, 210, 31, 190, 230, 61, 176, 188, 61, 215, 88, 62, 254, 59, 5, 62, 213, 186, 58, 190, 29, 10, 138, 190, 217, 25, 1, 189, 224, 107, 114, 61, 93, 128, 107, 60, 180, 95, 51, 61, 143, 13, 220, 60, 115, 223, 178, 189, 119, 45, 127, 190, 42, 15, 113, 60, 143, 140, 173, 189, 95, 116, 87, 189, 154, 149, 131, 190, 207, 164, 222, 61, 58, 145, 179, 190, 122, 246, 85, 190, 213, 247, 34, 62, 121, 7, 90, 62, 27, 203, 16, 61, 11, 245, 143, 190, 6, 19, 220, 60, 14, 164, 250, 61, 80, 130, 162, 61, 32, 70, 143, 61, 63, 166, 62, 62, 162, 31, 41, 190, 95, 110, 91, 190, 66, 248, 184, 189, 180, 193, 18, 191, 116, 86, 133, 189, 85, 77, 40, 190, 16, 89, 210, 189, 229, 28, 184, 62, 22, 25, 234, 190, 232, 243, 6, 190, 196, 0, 123, 190, 225, 236, 119, 60, 102, 69, 69, 191, 107, 237, 25, 190, 141, 227, 13, 61, 95, 241, 148, 189, 8, 228, 160, 61, 143, 110, 132, 60, 183, 242, 178, 61, 13, 54, 0, 63, 68, 59, 216, 61, 108, 54, 175, 62, 42, 82, 71, 189, 94, 158, 179, 190, 66, 174, 117, 62, 99, 243, 16, 61, 33, 73, 205, 189, 117, 229, 185, 190, 90, 234, 54, 62, 64, 252, 200, 62, 245, 97, 43, 62, 198, 174, 191, 189, 242, 58, 157, 190, 34, 90, 43, 62, 154, 3, 233, 189, 87, 166, 11, 61, 122, 218, 55, 190, 239, 123, 141, 188, 112, 64, 66, 61, 242, 87, 116, 62, 77, 212, 32, 62, 36, 13, 49, 190, 238, 177, 133, 62, 229, 228, 255, 189, 11, 248, 11, 190, 143, 139, 198, 187, 192, 164, 31, 189, 251, 66, 93, 189, 212, 104, 11, 62, 8, 198, 102, 190, 207, 243, 24, 61, 162, 194, 18, 192, 5, 5, 213, 189, 94, 226, 149, 61, 132, 57, 162, 62, 126, 71, 251, 188, 113, 80, 207, 61, 139, 57, 183, 186, 114, 31, 71, 190, 192, 38, 196, 62, 244, 107, 175, 62, 120, 203, 143, 191, 91, 12, 133, 61, 91, 0, 18, 62, 232, 189, 51, 190, 14, 237, 223, 191, 161, 232, 118, 61, 230, 200, 227, 187, 61, 224, 95, 190, 238, 192, 233, 62, 16, 50, 158, 62, 17, 206, 75, 191, 212, 180, 184, 61, 12, 228, 138, 187, 142, 244, 158, 189, 189, 127, 22, 62, 134, 112, 31, 62, 184, 166, 8, 63, 152, 128, 0, 189, 207, 185, 233, 189, 204, 163, 39, 189, 87, 111, 4, 191, 138, 1, 20, 191, 25, 147, 29, 191, 169, 17, 134, 62, 220, 148, 244, 190, 54, 241, 56, 62, 228, 233, 138, 62, 2, 158, 80, 190, 154, 85, 96, 189, 166, 13, 96, 191, 37, 119, 25, 63, 46, 134, 33, 62, 110, 219, 125, 190, 250, 114, 134, 190, 234, 117, 173, 61, 23, 225, 162, 62, 3, 214, 72, 190, 35, 46, 144, 189, 233, 159, 129, 61, 166, 183, 246, 61, 229, 167, 247, 60, 90, 75, 142, 61, 253, 216, 176, 191, 15, 91, 179, 60, 207, 125, 140, 189, 183, 229, 241, 61, 58, 100, 69, 187, 68, 31, 150, 61, 36, 6, 228, 189, 45, 85, 133, 190, 131, 123, 54, 62, 63, 45, 27, 62, 170, 228, 143, 61, 127, 220, 11, 60, 225, 102, 52, 190, 202, 62, 147, 190, 110, 15, 178, 191, 54, 122, 28, 190, 176, 108, 179, 190, 13, 71, 29, 62, 197, 201, 140, 62, 131, 238, 103, 190, 49, 230, 30, 62, 16, 162, 17, 61, 29, 253, 249, 62, 8, 47, 23, 190, 2, 91, 158, 62, 161, 63, 14, 191, 241, 162, 194, 188, 144, 14, 36, 62, 49, 94, 253, 190, 146, 24, 195, 190, 76, 29, 83, 189, 229, 60, 30, 191, 190, 204, 5, 63, 208, 240, 173, 62, 58, 20, 123, 190, 76, 151, 207, 62, 90, 211, 58, 190, 122, 240, 77, 190, 213, 249, 108, 190, 233, 137, 40, 62, 116, 56, 74, 190, 97, 154, 236, 61, 182, 131, 72, 62, 25, 216, 254, 61, 90, 205, 251, 61, 51, 253, 111, 60, 5, 163, 35, 63, 169, 159, 173, 59, 81, 167, 71, 62, 77, 243, 40, 189, 169, 215, 170, 189, 119, 92, 211, 61, 73, 243, 234, 61, 144, 103, 52, 62, 92, 157, 91, 191, 187, 219, 61, 62, 200, 39, 129, 190, 28, 108, 27, 62, 75, 149, 104, 62, 144, 21, 219, 61, 134, 220, 128, 191, 57, 54, 49, 191, 138, 174, 62, 190, 211, 114, 218, 189, 158, 63, 145, 190, 133, 226, 48, 191, 49, 65, 14, 189, 104, 52, 2, 191, 77, 172, 60, 62, 79, 191, 80, 191, 13, 229, 134, 189, 31, 48, 195, 189, 242, 229, 148, 62, 158, 106, 24, 190, 160, 226, 153, 61, 219, 138, 186, 61, 156, 178, 223, 62, 174, 231, 139, 62, 34, 229, 9, 191, 123, 40, 48, 190, 8, 231, 109, 190, 124, 166, 128, 62, 161, 210, 82, 62, 99, 145, 83, 188, 186, 28, 128, 191, 162, 212, 19, 191, 103, 208, 186, 61, 202, 93, 124, 61, 12, 82, 128, 62, 24, 251, 184, 190, 73, 114, 175, 189, 157, 21, 194, 189, 184, 29, 50, 189, 120, 225, 51, 62, 166, 170, 221, 61, 244, 112, 3, 62, 90, 21, 124, 191, 188, 171, 1, 62, 123, 6, 90, 62, 29, 67, 218, 190, 75, 74, 3, 191, 132, 3, 41, 189, 84, 249, 78, 191, 215, 244, 147, 58, 211, 205, 178, 189, 201, 222, 103, 189, 28, 14, 85, 187, 27, 34, 218, 62, 98, 131, 7, 190, 199, 103, 56, 190, 183, 57, 16, 191, 206, 38, 174, 61, 244, 227, 22, 191, 243, 221, 111, 61, 57, 94, 173, 189, 172, 220, 242, 61, 105, 85, 166, 62, 53, 249, 255, 60, 141, 80, 197, 62, 2, 175, 63, 62, 233, 92, 13, 63, 229, 93, 154, 190, 19, 161, 76, 61, 142, 183, 142, 188, 165, 55, 234, 190, 66, 15, 178, 190, 105, 88, 147, 62, 203, 160, 66, 191, 79, 228, 3, 191, 71, 43, 178, 190, 85, 123, 182, 190, 40, 242, 160, 190, 123, 218, 112, 190, 239, 206, 12, 191, 167, 50, 253, 189, 189, 182, 135, 62, 247, 103, 197, 190, 137, 4, 216, 61, 15, 79, 179, 189, 96, 10, 93, 189, 198, 82, 249, 61, 89, 102, 176, 62, 31, 26, 243, 191, 40, 247, 10, 191, 187, 148, 182, 60, 144, 108, 225, 190, 5, 151, 181, 189, 169, 168, 25, 61, 205, 188, 5, 189, 25, 10, 79, 62, 232, 25, 251, 191, 92, 38, 24, 188, 44, 6, 206, 190, 106, 8, 67, 61, 94, 199, 211, 61, 238, 65, 13, 190, 212, 225, 205, 189, 162, 85, 186, 189, 23, 85, 81, 62, 157, 59, 221, 61, 217, 99, 245, 189, 233, 80, 235, 190, 103, 117, 75, 187, 30, 141, 240, 189, 106, 128, 31, 62, 102, 53, 66, 189, 168, 212, 134, 187, 202, 48, 16, 188, 156, 239, 32, 61, 55, 104, 39, 190, 165, 0, 233, 61, 116, 108, 131, 190, 27, 119, 145, 188, 58, 190, 191, 62, 233, 207, 208, 189, 19, 120, 74, 61, 59, 214, 91, 62, 19, 157, 169, 62, 124, 173, 185, 187, 40, 28, 49, 190, 71, 148, 62, 190, 136, 117, 29, 62, 172, 71, 0, 60, 124, 56, 23, 60, 164, 115, 132, 189, 156, 11, 247, 61, 65, 109, 23, 190, 190, 217, 22, 62, 84, 122, 254, 61, 224, 139, 204, 61, 237, 160, 62, 62, 128, 177, 143, 61, 78, 5, 195, 190, 189, 212, 144, 190, 88, 186, 28, 189, 151, 207, 149, 60, 118, 30, 221, 60, 165, 186, 134, 189, 186, 175, 1, 62, 82, 40, 84, 190, 36, 112, 69, 61, 8, 81, 23, 62, 174, 222, 110, 190, 143, 9, 220, 189, 198, 100, 222, 190, 180, 24, 56, 62, 103, 2, 234, 190, 14, 151, 231, 61, 128, 239, 234, 60, 101, 71, 147, 189, 194, 141, 135, 62, 233, 43, 124, 61, 25, 84, 163, 62, 8, 151, 46, 62, 16, 37, 185, 60, 29, 22, 22, 62, 212, 97, 206, 189, 13, 209, 157, 62, 203, 107, 93, 58, 38, 58, 65, 189, 156, 95, 202, 61, 51, 72, 84, 189, 82, 24, 102, 189, 63, 99, 179, 190, 182, 39, 110, 189, 234, 194, 33, 188, 141, 229, 138, 188, 155, 176, 160, 60, 167, 87, 222, 61, 93, 64, 97, 190, 19, 21, 65, 189, 103, 114, 15, 190, 198, 182, 216, 189, 8, 209, 224, 61, 84, 125, 193, 189, 115, 51, 69, 61, 154, 1, 38, 190, 54, 84, 5, 190, 189, 13, 221, 189, 206, 227, 123, 189, 70, 93, 235, 61, 53, 119, 169, 190, 106, 50, 108, 190, 246, 114, 150, 190, 106, 209, 227, 61, 251, 174, 87, 62, 33, 27, 41, 191, 16, 126, 133, 61, 1, 235, 208, 61, 229, 138, 230, 189, 27, 175, 170, 190, 95, 140, 187, 188, 117, 164, 52, 190, 31, 5, 22, 62, 165, 165, 164, 191, 227, 98, 251, 189, 141, 49, 115, 191, 129, 146, 188, 189, 125, 249, 159, 188, 40, 25, 102, 190, 247, 55, 126, 62, 233, 39, 231, 188, 114, 223, 76, 61, 193, 16, 33, 189, 131, 96, 124, 61, 94, 131, 38, 62, 66, 28, 159, 62, 67, 213, 173, 61, 183, 182, 0, 63, 90, 205, 85, 190, 135, 172, 70, 191, 5, 60, 181, 190, 78, 47, 2, 191, 15, 212, 14, 61, 96, 124, 192, 60, 91, 71, 48, 60, 237, 213, 53, 191, 78, 198, 155, 190, 252, 116, 131, 62, 133, 24, 159, 61, 171, 156, 117, 62, 69, 190, 162, 191, 191, 229, 35, 61, 252, 86, 122, 61, 43, 185, 245, 61, 2, 130, 53, 188, 232, 43, 233, 62, 95, 180, 14, 62, 176, 244, 10, 191, 138, 157, 220, 189, 42, 216, 150, 62, 76, 189, 35, 190, 219, 13, 224, 189, 36, 222, 10, 62, 49, 119, 80, 62, 239, 170, 33, 62, 57, 139, 30, 189, 67, 82, 254, 61, 231, 179, 146, 190, 223, 242, 173, 189, 74, 230, 75, 191, 222, 192, 97, 61, 103, 202, 6, 191, 216, 244, 241, 61, 185, 89, 128, 62, 136, 102, 41, 190, 44, 209, 26, 62, 167, 162, 213, 190, 120, 174, 45, 62, 90, 241, 120, 62, 244, 101, 223, 190, 100, 24, 206, 189, 175, 23, 52, 62, 252, 9, 221, 62, 79, 131, 143, 190, 44, 125, 71, 61, 89, 230, 160, 190, 123, 143, 6, 191, 186, 107, 190, 61, 135, 182, 65, 190, 173, 214, 194, 190, 17, 4, 103, 190, 236, 189, 12, 190, 231, 104, 140, 190, 240, 72, 188, 189, 191, 23, 84, 190, 103, 56, 114, 188, 95, 51, 19, 62, 104, 240, 170, 61, 93, 4, 34, 62, 110, 212, 167, 190, 246, 12, 18, 188, 238, 61, 38, 189, 37, 1, 36, 62, 94, 176, 112, 190, 141, 103, 45, 62, 141, 8, 220, 60, 28, 132, 135, 190, 193, 228, 77, 61, 236, 21, 21, 189, 93, 122, 118, 60, 31, 228, 174, 61, 210, 21, 57, 191, 111, 213, 17, 62, 2, 23, 245, 61, 166, 114, 115, 62, 2, 162, 57, 190, 221, 19, 33, 62, 95, 96, 176, 61, 116, 142, 37, 190, 60, 151, 140, 62, 156, 76, 157, 187, 1, 100, 1, 191, 2, 115, 65, 191, 116, 40, 202, 188, 110, 165, 19, 189, 249, 27, 242, 189, 235, 183, 40, 62, 82, 170, 69, 62, 203, 79, 13, 190, 18, 131, 202, 61, 106, 255, 220, 61, 246, 15, 170, 190, 105, 8, 3, 191, 125, 130, 95, 189, 2, 72, 24, 62, 230, 193, 174, 190, 117, 122, 169, 62, 248, 63, 44, 62, 152, 191, 108, 190, 243, 249, 189, 60, 83, 92, 4, 191, 255, 200, 235, 62, 242, 104, 54, 62, 173, 159, 31, 191, 98, 253, 131, 190, 217, 141, 249, 61, 49, 232, 102, 62, 236, 182, 152, 190};
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
                alignas(float) const unsigned char memory[] = {66, 251, 10, 62, 38, 137, 223, 61, 253, 150, 220, 61, 5, 119, 147, 190, 54, 251, 120, 62, 98, 87, 0, 189, 64, 8, 145, 61, 11, 47, 50, 189, 248, 78, 180, 62, 160, 171, 79, 62, 163, 192, 179, 189, 110, 73, 13, 62, 156, 195, 27, 190, 80, 171, 162, 189, 229, 146, 227, 188, 32, 29, 7, 62, 69, 44, 141, 62, 57, 174, 184, 62, 6, 175, 213, 62, 119, 60, 178, 62, 46, 121, 223, 189, 95, 74, 114, 62, 231, 133, 55, 62, 209, 232, 132, 60, 8, 25, 160, 189, 54, 56, 115, 62, 109, 163, 112, 62, 167, 202, 195, 189, 9, 10, 185, 189, 109, 84, 163, 62, 81, 110, 79, 62, 204, 221, 133, 62};
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
                alignas(float) const unsigned char memory[] = {252, 187, 233, 62, 180, 198, 147, 61, 222, 216, 119, 63, 242, 212, 216, 190, 10, 65, 145, 62, 1, 115, 241, 61, 0, 111, 149, 190, 216, 63, 238, 190, 197, 103, 134, 191, 141, 70, 177, 62, 116, 103, 33, 190, 76, 106, 153, 190, 21, 202, 23, 61, 51, 198, 249, 189, 198, 189, 72, 63, 49, 59, 83, 63, 234, 100, 206, 60, 47, 91, 58, 191, 42, 160, 102, 62, 13, 105, 154, 63, 229, 208, 205, 62, 7, 228, 247, 190, 149, 99, 81, 191, 127, 19, 225, 61, 179, 139, 178, 189, 255, 106, 30, 189, 63, 206, 71, 60, 144, 102, 235, 61, 157, 213, 17, 63, 99, 101, 48, 63, 197, 248, 55, 188, 141, 59, 7, 63, 60, 174, 213, 61, 173, 243, 35, 61, 171, 63, 65, 190, 35, 40, 14, 62, 247, 127, 161, 190, 209, 4, 7, 191, 179, 211, 81, 190, 47, 84, 181, 61, 207, 247, 137, 61, 242, 27, 162, 60, 7, 46, 140, 188, 87, 205, 92, 59, 236, 28, 251, 61, 118, 184, 167, 189, 131, 1, 85, 61, 154, 18, 57, 62, 57, 117, 31, 190, 8, 204, 75, 62, 231, 71, 112, 190, 23, 48, 5, 190, 66, 144, 124, 189, 148, 229, 68, 190, 15, 251, 128, 61, 131, 147, 211, 190, 195, 181, 100, 191, 149, 14, 144, 190, 71, 248, 139, 190, 228, 77, 221, 59, 25, 148, 186, 189, 252, 232, 92, 190, 206, 168, 232, 190, 134, 174, 98, 190};
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
                alignas(float) const unsigned char memory[] = {115, 11, 47, 190, 143, 201, 83, 190};
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
    alignas(float) const unsigned char memory[] = {119, 12, 150, 63, 221, 55, 151, 63, 136, 24, 220, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {31, 226, 144, 192, 32, 175, 61, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0024/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}