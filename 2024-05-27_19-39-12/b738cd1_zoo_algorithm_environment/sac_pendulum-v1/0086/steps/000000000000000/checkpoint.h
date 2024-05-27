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
                alignas(float) const unsigned char memory[] = {194, 238, 132, 189, 10, 130, 140, 62, 62, 255, 237, 62, 47, 47, 5, 191, 236, 176, 240, 190, 167, 179, 1, 191, 168, 221, 86, 190, 216, 0, 32, 190, 142, 187, 183, 190, 246, 128, 17, 191, 125, 188, 50, 62, 188, 253, 245, 190, 154, 180, 72, 62, 222, 228, 40, 190, 121, 100, 186, 62, 20, 88, 147, 62, 56, 36, 153, 190, 68, 108, 4, 63, 245, 170, 202, 62, 173, 133, 19, 191, 208, 33, 231, 62, 47, 190, 18, 191, 167, 152, 178, 190, 112, 52, 95, 190, 252, 23, 219, 190, 139, 60, 8, 191, 200, 82, 133, 61, 234, 235, 181, 62, 121, 99, 165, 190, 95, 45, 168, 62, 101, 115, 171, 188, 75, 155, 219, 62, 234, 113, 70, 61, 40, 126, 80, 190, 138, 173, 5, 63, 175, 202, 10, 63, 237, 71, 10, 63, 235, 204, 90, 62, 62, 48, 148, 61, 158, 120, 246, 62, 20, 57, 144, 190, 3, 60, 131, 188, 74, 202, 238, 190, 89, 212, 235, 190, 254, 130, 136, 190, 144, 162, 232, 62, 41, 197, 246, 62, 5, 69, 151, 62, 228, 178, 12, 63, 33, 56, 204, 190, 110, 203, 232, 62, 150, 62, 198, 189, 68, 122, 145, 61, 138, 81, 188, 189, 188, 60, 32, 59, 59, 144, 243, 190, 226, 110, 220, 189, 253, 184, 40, 190, 194, 197, 146, 190, 77, 127, 17, 191, 223, 126, 240, 62, 106, 79, 13, 190, 84, 227, 233, 62, 48, 202, 159, 62, 132, 145, 4, 191, 91, 18, 230, 190, 48, 165, 101, 190, 188, 185, 122, 190, 119, 92, 49, 62, 73, 13, 55, 62, 132, 233, 172, 189, 36, 107, 237, 61, 106, 155, 170, 190, 215, 28, 164, 189, 199, 58, 213, 190, 165, 230, 118, 62, 130, 25, 16, 63, 174, 65, 137, 60, 227, 82, 138, 62, 245, 219, 182, 62, 63, 26, 222, 62, 161, 89, 28, 190, 139, 203, 226, 190, 127, 158, 235, 190, 138, 239, 220, 187, 24, 78, 35, 190, 61, 102, 143, 190, 119, 125, 49, 60, 227, 82, 189, 190, 196, 180, 52, 190, 72, 20, 230, 62, 164, 81, 141, 190, 86, 240, 6, 191, 185, 88, 150, 62, 191, 138, 229, 61, 30, 18, 220, 62};
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
                alignas(float) const unsigned char memory[] = {179, 153, 19, 191, 194, 121, 48, 190, 26, 51, 237, 190, 67, 152, 115, 190, 217, 17, 2, 190, 57, 82, 83, 190, 47, 198, 9, 62, 238, 31, 182, 190, 78, 29, 197, 62, 229, 27, 8, 191, 58, 26, 16, 188, 32, 86, 87, 62, 156, 121, 133, 62, 135, 95, 92, 62, 253, 138, 76, 190, 69, 46, 114, 62, 79, 191, 199, 62, 158, 132, 82, 189, 209, 221, 232, 190, 25, 241, 215, 62, 200, 219, 13, 191, 53, 93, 49, 61, 20, 220, 5, 63, 119, 69, 53, 61, 142, 135, 207, 62, 246, 27, 145, 62, 128, 105, 21, 190, 229, 183, 88, 187, 162, 131, 148, 190, 108, 89, 236, 62, 64, 9, 246, 62, 56, 69, 63, 190};
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
                alignas(float) const unsigned char memory[] = {79, 97, 54, 61, 1, 66, 240, 189, 229, 227, 165, 61, 41, 93, 24, 190, 198, 97, 161, 189, 126, 206, 190, 60, 188, 15, 168, 61, 56, 130, 2, 188, 179, 213, 242, 61, 24, 41, 22, 190, 169, 127, 188, 60, 168, 128, 104, 189, 125, 94, 9, 190, 173, 243, 38, 189, 125, 230, 12, 62, 89, 179, 137, 60, 253, 154, 181, 60, 51, 35, 106, 189, 58, 24, 0, 190, 98, 124, 29, 62, 162, 243, 141, 57, 101, 79, 59, 189, 115, 240, 38, 61, 112, 59, 40, 62, 224, 103, 47, 189, 113, 235, 198, 61, 185, 108, 178, 61, 126, 88, 44, 190, 173, 93, 102, 61, 46, 70, 23, 190, 193, 254, 4, 62, 246, 62, 180, 60, 37, 19, 6, 62, 162, 88, 132, 61, 236, 166, 53, 188, 80, 147, 157, 188, 222, 231, 14, 190, 223, 199, 80, 189, 254, 212, 198, 188, 16, 208, 142, 61, 94, 208, 250, 188, 85, 104, 34, 190, 48, 26, 46, 190, 220, 187, 12, 190, 106, 223, 229, 189, 44, 255, 205, 61, 232, 58, 47, 190, 224, 73, 184, 61, 100, 99, 4, 190, 199, 206, 33, 61, 72, 92, 4, 189, 155, 14, 89, 189, 97, 106, 48, 189, 22, 221, 32, 190, 139, 229, 139, 61, 46, 21, 164, 61, 184, 238, 7, 190, 55, 110, 25, 190, 91, 238, 188, 61, 88, 239, 14, 62, 129, 244, 52, 62, 190, 113, 46, 190, 117, 107, 192, 189, 169, 187, 6, 190, 160, 34, 206, 189, 246, 192, 194, 61, 123, 139, 35, 190, 185, 123, 201, 189, 233, 14, 180, 61, 45, 200, 31, 62, 55, 184, 19, 190, 213, 44, 10, 62, 209, 172, 40, 190, 76, 33, 31, 190, 148, 147, 238, 189, 116, 100, 185, 61, 6, 59, 185, 61, 67, 145, 52, 62, 2, 155, 45, 190, 39, 204, 235, 189, 160, 229, 172, 189, 151, 220, 156, 189, 233, 118, 138, 187, 93, 99, 54, 61, 157, 35, 173, 189, 176, 145, 107, 61, 193, 247, 53, 188, 57, 160, 41, 60, 165, 53, 105, 61, 32, 90, 22, 190, 31, 215, 123, 61, 12, 62, 138, 189, 210, 227, 120, 61, 128, 126, 28, 190, 251, 111, 92, 60, 167, 33, 21, 190, 162, 233, 72, 189, 119, 244, 178, 61, 69, 151, 115, 189, 231, 8, 198, 188, 106, 152, 127, 189, 49, 53, 13, 190, 88, 138, 231, 189, 173, 8, 26, 190, 171, 242, 181, 61, 168, 37, 220, 61, 150, 49, 53, 188, 38, 100, 199, 61, 59, 50, 138, 61, 202, 149, 176, 189, 142, 207, 125, 61, 135, 194, 232, 189, 193, 152, 194, 61, 245, 179, 13, 189, 63, 50, 25, 62, 13, 139, 69, 189, 238, 56, 255, 61, 100, 95, 49, 61, 238, 70, 34, 190, 73, 85, 25, 190, 191, 30, 158, 189, 12, 164, 160, 189, 240, 96, 194, 61, 146, 220, 100, 189, 40, 32, 50, 189, 199, 200, 210, 189, 15, 136, 1, 62, 167, 111, 194, 61, 244, 175, 17, 190, 201, 148, 198, 189, 80, 197, 12, 190, 255, 234, 54, 188, 239, 125, 197, 61, 23, 66, 24, 61, 74, 145, 227, 60, 172, 22, 34, 190, 52, 57, 237, 61, 202, 168, 244, 61, 112, 37, 184, 188, 161, 16, 23, 62, 222, 212, 226, 188, 157, 174, 203, 189, 177, 208, 152, 61, 169, 236, 252, 60, 15, 236, 219, 189, 43, 235, 183, 61, 35, 193, 137, 60, 122, 211, 7, 62, 120, 105, 47, 62, 77, 157, 136, 61, 33, 122, 112, 60, 34, 136, 193, 189, 102, 27, 133, 189, 180, 134, 6, 62, 47, 146, 72, 61, 124, 151, 153, 189, 255, 85, 33, 189, 51, 208, 28, 190, 82, 48, 161, 61, 245, 26, 35, 62, 85, 17, 128, 189, 46, 246, 247, 61, 164, 229, 20, 190, 133, 112, 202, 189, 220, 114, 152, 60, 131, 136, 0, 190, 166, 202, 211, 60, 249, 193, 6, 59, 214, 64, 182, 189, 15, 198, 13, 190, 223, 142, 20, 62, 105, 200, 36, 190, 27, 200, 180, 61, 255, 50, 169, 61, 203, 153, 11, 62, 122, 231, 204, 189, 55, 106, 98, 189, 90, 121, 197, 61, 144, 65, 224, 189, 240, 199, 249, 189, 92, 10, 131, 61, 20, 33, 246, 189, 69, 122, 159, 188, 244, 210, 28, 190, 247, 91, 200, 189, 32, 236, 245, 61, 24, 0, 184, 61, 197, 32, 160, 188, 254, 24, 150, 189, 81, 146, 42, 187, 168, 83, 198, 61, 44, 30, 47, 62, 28, 148, 241, 189, 244, 125, 26, 190, 30, 43, 188, 187, 86, 211, 223, 59, 181, 53, 210, 189, 134, 161, 222, 189, 79, 156, 8, 62, 42, 131, 12, 189, 65, 187, 174, 61, 178, 231, 145, 189, 182, 170, 223, 61, 85, 183, 240, 189, 203, 252, 19, 190, 9, 168, 158, 188, 65, 214, 240, 61, 53, 215, 153, 61, 151, 217, 32, 189, 76, 189, 149, 61, 210, 238, 221, 189, 114, 208, 23, 190, 115, 4, 213, 61, 92, 59, 44, 62, 111, 26, 32, 190, 96, 254, 49, 62, 40, 180, 91, 60, 226, 87, 38, 62, 100, 12, 138, 61, 255, 218, 235, 61, 204, 130, 22, 190, 134, 219, 145, 189, 197, 52, 21, 62, 241, 100, 6, 190, 77, 248, 0, 190, 26, 79, 144, 189, 160, 249, 0, 62, 120, 254, 30, 62, 48, 218, 160, 59, 94, 107, 255, 61, 109, 149, 220, 189, 129, 96, 20, 189, 198, 51, 70, 188, 164, 189, 214, 188, 120, 177, 45, 189, 92, 201, 89, 61, 2, 58, 21, 190, 54, 133, 24, 62, 29, 165, 47, 62, 6, 74, 215, 58, 241, 70, 234, 60, 156, 130, 48, 62, 234, 27, 119, 61, 194, 149, 18, 189, 236, 85, 171, 189, 187, 133, 11, 60, 226, 32, 132, 189, 212, 64, 249, 60, 214, 31, 14, 62, 185, 32, 60, 189, 65, 184, 7, 190, 125, 235, 35, 62, 229, 223, 225, 189, 23, 145, 252, 60, 226, 118, 9, 190, 79, 238, 38, 62, 75, 209, 149, 60, 122, 77, 8, 62, 68, 14, 14, 190, 235, 193, 228, 61, 151, 56, 118, 189, 128, 55, 19, 62, 115, 118, 200, 61, 59, 102, 179, 60, 135, 249, 85, 60, 112, 31, 107, 189, 160, 167, 152, 61, 218, 156, 3, 62, 36, 87, 38, 189, 134, 252, 47, 62, 220, 83, 80, 189, 61, 47, 138, 61, 179, 122, 47, 62, 81, 206, 226, 61, 200, 6, 42, 190, 201, 143, 127, 189, 159, 59, 19, 58, 212, 129, 217, 189, 163, 236, 223, 61, 104, 112, 0, 190, 25, 175, 32, 62, 167, 59, 41, 62, 226, 218, 246, 61, 124, 77, 13, 189, 86, 198, 199, 60, 16, 188, 197, 61, 68, 252, 188, 189, 25, 131, 249, 61, 237, 123, 8, 62, 2, 200, 47, 60, 41, 246, 236, 59, 74, 16, 169, 189, 194, 212, 172, 189, 126, 18, 226, 61, 164, 228, 52, 190, 31, 232, 1, 62, 178, 195, 225, 189, 170, 208, 0, 190, 7, 62, 130, 187, 72, 48, 156, 60, 245, 43, 251, 61, 222, 96, 16, 61, 239, 5, 7, 190, 229, 123, 152, 189, 139, 32, 16, 190, 55, 196, 96, 61, 110, 55, 18, 190, 237, 243, 100, 61, 63, 189, 131, 61, 106, 201, 45, 189, 235, 122, 187, 60, 123, 222, 205, 188, 42, 33, 3, 62, 83, 37, 37, 62, 217, 44, 17, 190, 139, 216, 52, 190, 165, 5, 34, 190, 102, 48, 22, 62, 236, 57, 188, 61, 255, 78, 70, 60, 217, 12, 23, 62, 73, 73, 170, 61, 144, 26, 10, 190, 44, 5, 160, 189, 92, 67, 236, 189, 202, 140, 137, 188, 49, 207, 136, 189, 16, 121, 29, 62, 153, 97, 16, 62, 176, 185, 1, 190, 54, 28, 194, 189, 217, 29, 13, 62, 75, 110, 251, 60, 215, 111, 39, 60, 133, 191, 137, 189, 171, 202, 0, 190, 222, 45, 220, 60, 92, 26, 233, 189, 44, 227, 220, 61, 121, 21, 92, 61, 129, 255, 180, 61, 213, 176, 185, 61, 8, 37, 131, 61, 5, 178, 226, 60, 176, 168, 49, 62, 115, 194, 52, 62, 136, 173, 31, 62, 157, 78, 173, 189, 248, 204, 190, 61, 147, 227, 151, 189, 124, 126, 21, 62, 2, 23, 180, 186, 6, 151, 128, 188, 60, 64, 141, 189, 85, 119, 245, 61, 106, 77, 243, 189, 214, 98, 31, 190, 186, 162, 155, 189, 45, 155, 33, 62, 250, 94, 201, 61, 69, 35, 82, 61, 51, 33, 132, 189, 233, 32, 167, 60, 134, 129, 116, 189, 46, 235, 225, 61, 198, 62, 186, 188, 202, 167, 171, 61, 164, 108, 16, 62, 0, 175, 0, 190, 27, 79, 7, 61, 135, 7, 6, 62, 188, 16, 222, 60, 44, 60, 8, 190, 141, 206, 41, 190, 215, 183, 233, 59, 48, 45, 177, 60, 125, 135, 72, 61, 37, 70, 219, 61, 223, 80, 215, 189, 45, 59, 120, 61, 102, 206, 225, 188, 67, 61, 240, 189, 226, 206, 246, 189, 203, 172, 134, 61, 144, 180, 47, 190, 155, 27, 140, 61, 3, 49, 57, 61, 220, 64, 214, 61, 128, 180, 110, 61, 133, 8, 4, 62, 204, 111, 20, 62, 191, 118, 3, 189, 137, 113, 185, 61, 216, 10, 32, 62, 85, 195, 230, 189, 175, 224, 9, 190, 254, 1, 199, 61, 139, 253, 210, 61, 246, 172, 26, 62, 193, 88, 38, 190, 247, 164, 252, 189, 126, 212, 204, 189, 82, 133, 29, 190, 114, 5, 9, 62, 152, 190, 52, 188, 216, 148, 24, 190, 32, 17, 232, 189, 183, 34, 0, 62, 211, 53, 41, 62, 117, 165, 205, 61, 90, 60, 10, 62, 12, 39, 252, 61, 81, 6, 66, 189, 64, 181, 135, 61, 131, 109, 236, 57, 88, 45, 30, 62, 39, 233, 33, 62, 211, 114, 23, 62, 60, 158, 196, 189, 230, 104, 128, 61, 172, 225, 17, 190, 95, 54, 210, 189, 180, 29, 5, 190, 136, 193, 235, 61, 110, 146, 199, 61, 134, 46, 12, 62, 46, 94, 226, 189, 253, 114, 3, 190, 132, 173, 212, 189, 194, 6, 19, 62, 52, 209, 30, 62, 172, 218, 140, 189, 101, 212, 35, 190, 184, 201, 52, 62, 117, 49, 174, 189, 110, 90, 220, 189, 194, 188, 178, 61, 122, 164, 158, 189, 159, 182, 251, 189, 12, 114, 237, 61, 206, 252, 49, 62, 84, 77, 178, 189, 182, 108, 233, 61, 104, 189, 105, 61, 250, 169, 188, 189, 52, 143, 140, 189, 197, 96, 13, 62, 174, 211, 160, 61, 46, 55, 194, 189, 172, 30, 160, 188, 220, 81, 103, 189, 65, 209, 251, 61, 24, 69, 253, 60, 1, 211, 216, 189, 188, 214, 104, 61, 13, 182, 203, 61, 61, 197, 39, 62, 75, 250, 32, 62, 71, 255, 21, 61, 39, 0, 106, 189, 208, 232, 169, 61, 2, 89, 59, 189, 97, 39, 232, 189, 27, 80, 243, 61, 38, 49, 228, 189, 59, 8, 215, 61, 23, 125, 175, 61, 27, 21, 7, 62, 144, 92, 91, 188, 175, 28, 41, 190, 54, 237, 198, 61, 202, 61, 19, 62, 248, 71, 23, 62, 60, 114, 126, 188, 64, 136, 190, 189, 151, 110, 31, 62, 68, 204, 250, 61, 228, 64, 25, 62, 242, 223, 45, 190, 33, 199, 122, 61, 204, 91, 197, 60, 60, 226, 182, 61, 228, 74, 23, 60, 227, 91, 56, 188, 237, 136, 4, 61, 249, 13, 123, 61, 144, 227, 223, 189, 58, 219, 128, 61, 44, 175, 81, 188, 221, 161, 12, 190, 27, 210, 15, 62, 124, 41, 9, 190, 31, 161, 51, 62, 157, 32, 24, 188, 65, 82, 13, 190, 99, 108, 20, 62, 56, 195, 210, 61, 198, 155, 72, 61, 169, 27, 161, 61, 70, 75, 25, 190, 157, 210, 17, 190, 16, 112, 31, 62, 59, 236, 11, 190, 139, 246, 241, 61, 93, 187, 254, 61, 159, 152, 190, 189, 99, 177, 126, 188, 151, 96, 243, 59, 122, 228, 212, 60, 98, 198, 14, 62, 41, 163, 207, 60, 145, 130, 18, 189, 68, 164, 34, 62, 118, 195, 252, 61, 162, 170, 139, 60, 167, 133, 42, 62, 96, 250, 132, 61, 146, 109, 4, 190, 214, 163, 192, 61, 80, 17, 47, 62, 65, 176, 146, 61, 132, 65, 51, 189, 158, 33, 20, 190, 66, 131, 193, 61, 173, 242, 186, 189, 253, 86, 3, 190, 211, 81, 156, 189, 3, 176, 27, 190, 246, 255, 46, 62, 71, 208, 162, 60, 144, 238, 150, 189, 131, 173, 6, 190, 107, 254, 126, 189, 46, 229, 19, 190, 142, 133, 164, 61, 160, 26, 135, 189, 185, 101, 217, 59, 156, 234, 10, 62, 218, 72, 148, 188, 251, 2, 46, 190, 197, 220, 130, 189, 228, 112, 43, 62, 241, 30, 100, 189, 17, 134, 43, 62, 222, 152, 145, 61, 75, 70, 37, 190, 207, 204, 24, 62, 189, 235, 41, 62, 230, 143, 197, 61, 98, 122, 192, 189, 134, 205, 198, 61, 186, 247, 40, 190, 227, 93, 7, 188, 213, 209, 173, 61, 43, 113, 4, 190, 136, 28, 12, 190, 249, 137, 25, 190, 232, 220, 164, 61, 3, 36, 193, 189, 136, 36, 25, 189, 88, 45, 249, 189, 192, 75, 143, 61, 214, 78, 58, 61, 154, 0, 184, 61, 225, 141, 88, 187, 72, 23, 233, 188, 225, 82, 15, 62, 112, 218, 34, 190, 234, 249, 121, 189, 171, 218, 125, 189, 223, 151, 131, 189, 249, 179, 49, 190, 22, 62, 36, 62, 193, 100, 241, 189, 240, 198, 64, 189, 179, 97, 241, 189, 52, 225, 101, 189, 21, 1, 177, 60, 0, 194, 72, 61, 110, 16, 128, 188, 253, 170, 80, 189, 198, 148, 174, 61, 56, 218, 223, 61, 64, 46, 15, 188, 20, 76, 28, 190, 19, 167, 131, 61, 69, 172, 61, 189, 51, 48, 222, 189, 181, 140, 251, 189, 73, 130, 57, 61, 21, 72, 231, 187, 3, 155, 43, 62, 90, 239, 45, 62, 156, 35, 9, 190, 199, 150, 30, 190, 255, 64, 152, 189, 45, 191, 166, 188, 33, 92, 11, 62, 13, 231, 40, 190, 224, 49, 65, 57, 135, 251, 174, 189, 119, 77, 7, 62, 151, 156, 131, 61, 13, 185, 234, 188, 54, 23, 213, 188, 152, 252, 36, 62, 243, 246, 153, 61, 141, 221, 168, 189, 102, 58, 19, 190, 201, 95, 142, 61, 9, 17, 193, 189, 152, 97, 11, 190, 91, 223, 43, 62, 235, 131, 55, 189, 51, 169, 99, 61, 119, 89, 136, 61, 130, 48, 31, 189, 71, 28, 45, 62, 73, 129, 249, 61, 66, 137, 21, 62, 147, 216, 143, 188, 15, 212, 199, 61, 115, 140, 244, 61, 68, 214, 4, 62, 22, 211, 202, 189, 247, 226, 39, 61, 196, 71, 38, 62, 133, 62, 194, 61, 157, 255, 201, 189, 88, 22, 210, 61, 46, 192, 39, 62, 172, 27, 43, 190, 101, 145, 12, 190, 51, 210, 10, 62, 180, 23, 45, 190, 192, 138, 47, 62, 48, 202, 162, 61, 29, 35, 12, 190, 192, 104, 10, 62, 70, 173, 16, 62, 123, 131, 107, 61, 5, 245, 234, 61, 96, 196, 193, 189, 0, 63, 0, 62, 146, 53, 18, 190, 169, 127, 51, 62, 175, 46, 8, 189, 186, 220, 50, 62, 28, 18, 2, 62, 201, 254, 218, 61, 59, 20, 168, 61, 171, 33, 11, 62, 205, 254, 194, 188, 30, 239, 38, 62, 155, 239, 10, 190, 98, 104, 83, 61, 220, 98, 32, 190, 223, 151, 1, 62, 117, 90, 67, 61, 137, 239, 168, 61, 87, 165, 194, 61, 25, 228, 122, 60, 119, 127, 150, 188, 128, 224, 234, 189, 239, 172, 57, 61, 24, 233, 250, 188, 2, 219, 86, 187, 247, 16, 92, 61, 250, 52, 133, 60, 219, 176, 149, 187, 0, 70, 104, 189, 1, 168, 202, 61, 106, 109, 169, 189, 5, 177, 229, 61, 49, 145, 49, 190, 109, 217, 172, 189, 109, 85, 32, 189, 113, 145, 143, 61, 36, 232, 33, 62, 92, 54, 170, 61, 50, 237, 12, 189, 105, 62, 29, 62, 246, 179, 171, 189, 47, 37, 52, 62, 206, 31, 226, 188, 122, 50, 128, 189, 224, 29, 244, 61, 190, 5, 247, 61, 188, 146, 153, 189, 110, 46, 231, 61, 248, 70, 4, 61, 246, 220, 132, 61, 152, 138, 61, 188, 25, 145, 158, 60, 215, 25, 85, 61, 192, 96, 150, 61, 143, 234, 47, 190, 224, 103, 17, 62, 20, 197, 146, 61, 160, 170, 170, 189, 100, 183, 32, 190, 79, 230, 38, 60, 17, 34, 182, 61, 221, 6, 16, 190, 105, 102, 23, 189, 220, 136, 44, 189, 174, 236, 17, 190, 151, 35, 207, 189, 216, 176, 44, 188, 48, 92, 156, 188, 17, 21, 248, 189, 20, 251, 12, 190, 103, 150, 158, 61, 228, 100, 207, 60, 92, 174, 48, 62, 229, 174, 24, 61, 160, 131, 132, 59, 231, 2, 175, 61, 182, 142, 213, 61, 71, 208, 141, 59, 150, 92, 193, 189, 22, 60, 170, 189, 131, 130, 24, 190, 56, 4, 156, 58, 80, 147, 22, 190, 192, 104, 142, 189, 208, 64, 36, 62, 214, 43, 104, 61, 211, 215, 40, 190, 61, 164, 172, 189, 235, 221, 208, 189, 130, 194, 68, 189, 162, 237, 32, 62, 204, 170, 139, 189, 82, 154, 16, 61, 193, 211, 167, 61, 35, 47, 12, 62, 37, 163, 145, 189, 120, 61, 44, 190, 7, 231, 172, 60, 41, 53, 243, 61, 69, 80, 174, 61, 215, 249, 13, 61, 109, 148, 184, 189, 200, 153, 14, 190, 242, 166, 185, 59, 196, 110, 239, 61, 253, 127, 10, 190, 77, 241, 11, 62, 244, 91, 22, 190, 73, 127, 100, 189, 64, 158, 25, 61, 79, 210, 70, 189, 159, 11, 47, 190, 104, 134, 118, 189, 28, 131, 47, 189, 42, 252, 105, 60, 220, 11, 23, 189, 243, 47, 160, 187, 226, 104, 12, 190, 148, 113, 195, 189, 189, 168, 30, 62, 246, 76, 41, 62, 58, 163, 45, 62, 202, 132, 132, 189, 250, 166, 30, 60, 148, 37, 233, 61, 38, 157, 208, 189, 125, 107, 253, 61, 116, 241, 204, 61, 17, 130, 176, 60, 32, 219, 187, 61, 72, 45, 31, 62, 212, 223, 51, 190, 213, 19, 250, 189, 145, 230, 216, 61, 157, 33, 12, 190, 60, 184, 250, 189, 47, 89, 14, 62, 218, 8, 195, 61, 216, 158, 192, 60, 120, 91, 175, 189, 192, 102, 235, 189, 52, 143, 128, 188, 237, 131, 205, 187, 11, 204, 83, 189, 27, 73, 217, 188, 203, 198, 35, 61, 151, 78, 175, 189, 128, 247, 99, 189, 132, 193, 189, 61, 81, 70, 38, 190, 196, 232, 241, 186, 47, 46, 191, 61, 252, 25, 15, 190, 144, 73, 168, 189, 175, 173, 159, 189, 115, 116, 14, 190, 201, 223, 154, 189, 182, 146, 47, 61, 228, 88, 142, 189, 205, 138, 28, 189, 28, 60, 146, 61, 232, 73, 250, 61, 220, 180, 15, 190, 119, 150, 229, 189, 41, 65, 18, 189, 166, 100, 17, 190, 115, 58, 10, 62, 212, 106, 179, 58, 233, 246, 207, 60, 52, 134, 146, 189, 156, 252, 182, 188, 141, 252, 82, 61, 189, 74, 240, 189, 175, 59, 30, 62, 229, 19, 223, 189, 186, 59, 41, 59, 207, 59, 177, 189, 15, 226, 48, 61, 128, 105, 60, 189, 14, 35, 236, 61, 17, 29, 43, 61, 85, 4, 2, 189, 231, 230, 141, 60, 231, 127, 32, 62, 210, 189, 3, 189, 251, 69, 70, 60, 186, 84, 203, 61, 225, 241, 2, 190, 228, 215, 44, 61, 117, 171, 159, 187, 250, 165, 27, 190, 248, 14, 219, 61, 146, 114, 217, 189, 181, 140, 222, 189, 125, 163, 191, 61, 57, 51, 174, 61, 38, 67, 40, 62, 166, 39, 201, 61, 172, 167, 57, 61, 164, 20, 235, 189, 105, 249, 16, 62, 178, 163, 120, 61, 162, 140, 245, 189, 50, 97, 18, 62, 12, 55, 22, 62, 22, 82, 40, 62, 244, 245, 153, 187, 193, 122, 0, 190, 140, 150, 28, 190, 132, 159, 233, 189, 208, 204, 167, 61, 121, 108, 3, 189, 41, 55, 201, 189, 211, 92, 40, 62, 211, 232, 192, 188, 36, 95, 29, 190, 5, 115, 218, 61, 53, 144, 31, 190, 94, 26, 32, 190, 154, 192, 51, 190, 221, 5, 230, 61, 154, 235, 145, 61, 33, 120, 41, 62, 112, 155, 222, 61, 208, 21, 206, 60, 49, 38, 28, 189, 247, 184, 171, 189, 144, 236, 126, 60, 200, 217, 253, 189, 12, 70, 205, 189, 206, 151, 194, 61, 134, 75, 133, 189, 53, 107, 63, 59, 193, 84, 91, 189, 9, 50, 48, 62, 231, 48, 31, 190, 19, 253, 102, 189, 121, 233, 138, 61, 189, 109, 6, 62, 202, 208, 12, 190, 225, 4, 35, 189, 133, 172, 60, 60, 85, 243, 26, 62, 97, 124, 218, 61, 50, 154, 19, 62, 42, 25, 125, 61, 83, 80, 20, 62, 123, 165, 146, 61, 82, 163, 17, 189, 237, 9, 178, 189, 15, 14, 29, 62, 74, 26, 241, 186, 31, 133, 32, 190, 185, 230, 81, 61, 8, 31, 22, 62, 114, 217, 30, 61, 3, 195, 25, 190, 45, 172, 39, 189, 215, 122, 15, 60, 14, 228, 216, 61, 66, 174, 11, 62, 245, 162, 26, 62, 91, 221, 197, 189, 214, 155, 175, 61, 100, 141, 105, 61, 34, 125, 30, 190, 74, 88, 31, 62, 151, 84, 218, 61, 92, 104, 144, 189, 233, 226, 190, 60, 122, 17, 221, 189, 208, 113, 253, 189, 21, 224, 79, 61, 46, 82, 31, 190, 172, 228, 140, 189, 8, 238, 1, 190, 39, 135, 173, 61, 73, 224, 70, 189, 56, 22, 42, 189, 130, 145, 7, 59, 227, 165, 243, 61, 208, 104, 39, 62, 119, 219, 228, 189, 23, 50, 83, 189, 10, 200, 10, 189, 144, 38, 239, 61, 8, 125, 43, 62, 159, 100, 128, 60, 218, 164, 150, 60, 236, 177, 121, 61, 55, 46, 255, 188, 10, 227, 153, 61, 150, 85, 94, 188, 67, 214, 5, 189, 15, 174, 206, 189, 246, 65, 7, 190, 170, 69, 10, 189, 37, 85, 174, 61, 117, 145, 38, 190, 172, 114, 5, 62, 144, 66, 239, 60, 254, 181, 17, 62, 21, 142, 5, 62, 137, 206, 153, 60, 230, 194, 43, 190, 155, 133, 207, 61, 232, 142, 239, 188, 235, 160, 64, 189, 34, 50, 13, 62, 255, 64, 170, 189, 189, 231, 64, 61, 56, 55, 130, 189, 155, 86, 47, 62, 193, 138, 167, 189, 159, 219, 232, 60, 182, 75, 182, 61, 222, 191, 8, 62, 212, 32, 254, 61, 79, 39, 241, 189, 194, 168, 30, 62, 212, 214, 42, 62, 108, 28, 10, 189, 98, 69, 32, 61, 235, 131, 215, 60, 120, 135, 11, 190, 44, 97, 14, 190, 240, 30, 204, 61, 168, 82, 25, 188, 115, 44, 76, 61, 77, 28, 17, 190, 201, 161, 52, 190, 243, 198, 46, 62, 229, 169, 204, 189, 79, 177, 26, 62, 233, 97, 238, 61, 221, 225, 173, 61, 80, 116, 254, 60, 78, 123, 26, 190, 112, 1, 40, 62, 16, 0, 3, 62, 114, 229, 35, 62, 245, 137, 19, 190, 179, 150, 166, 189, 107, 136, 151, 61, 115, 107, 233, 61, 79, 2, 137, 60, 52, 230, 144, 60, 184, 169, 109, 189, 59, 85, 195, 189, 187, 78, 70, 59, 35, 179, 62, 189, 225, 47, 162, 189, 135, 214, 8, 62, 9, 142, 38, 62, 150, 243, 118, 59, 57, 49, 59, 61, 41, 221, 46, 190, 107, 78, 184, 61, 161, 227, 133, 60, 192, 199, 157, 188, 67, 221, 22, 62, 247, 112, 14, 190, 74, 74, 23, 62, 64, 185, 8, 62, 168, 48, 91, 61, 53, 158, 50, 189, 123, 84, 2, 187, 35, 189, 39, 62, 214, 71, 15, 188, 210, 161, 201, 61, 206, 38, 149, 61, 151, 0, 140, 60, 96, 24, 24, 62, 210, 185, 181, 189, 107, 138, 88, 189, 45, 6, 59, 189, 205, 93, 29, 62, 89, 207, 36, 62, 121, 167, 70, 59, 45, 200, 11, 61, 106, 58, 204, 61, 232, 60, 40, 62};
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
                alignas(float) const unsigned char memory[] = {55, 74, 172, 61, 232, 17, 146, 188, 165, 23, 187, 61, 131, 52, 106, 189, 152, 2, 127, 61, 227, 240, 54, 189, 177, 155, 40, 190, 63, 57, 182, 187, 242, 206, 41, 62, 220, 26, 25, 190, 254, 159, 10, 62, 226, 41, 228, 189, 241, 213, 3, 60, 186, 54, 4, 61, 83, 119, 147, 60, 128, 120, 45, 62, 202, 196, 4, 190, 115, 12, 230, 189, 161, 106, 80, 61, 192, 223, 2, 62, 223, 89, 4, 62, 232, 114, 252, 187, 174, 36, 136, 189, 187, 32, 39, 190, 86, 170, 190, 189, 27, 225, 240, 189, 7, 122, 3, 62, 103, 21, 132, 60, 137, 35, 210, 60, 169, 250, 204, 60, 43, 148, 198, 189, 222, 141, 96, 189};
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
                alignas(float) const unsigned char memory[] = {19, 245, 147, 189, 171, 4, 237, 189, 186, 11, 26, 62, 48, 207, 218, 61, 232, 247, 240, 188, 195, 195, 228, 189, 42, 60, 153, 58, 88, 184, 25, 190, 209, 93, 131, 189, 4, 103, 164, 189, 149, 67, 129, 188, 61, 213, 25, 189, 111, 156, 0, 190, 157, 162, 38, 62, 166, 54, 186, 189, 84, 123, 227, 189, 157, 105, 157, 189, 88, 249, 145, 61, 116, 17, 211, 61, 180, 190, 167, 61, 209, 254, 5, 190, 6, 243, 51, 190, 134, 80, 124, 61, 140, 23, 227, 61, 166, 252, 118, 61, 41, 75, 46, 62, 78, 117, 195, 61, 0, 121, 16, 189, 249, 191, 201, 61, 45, 159, 175, 188, 7, 25, 40, 189, 173, 120, 2, 61, 75, 241, 54, 189, 166, 124, 141, 189, 109, 86, 73, 189, 128, 81, 228, 61, 89, 116, 3, 190, 189, 120, 38, 62, 112, 172, 88, 61, 238, 224, 237, 189, 1, 109, 36, 62, 108, 145, 124, 61, 125, 23, 185, 61, 71, 223, 200, 61, 138, 206, 28, 190, 104, 109, 44, 190, 165, 214, 4, 62, 186, 46, 153, 189, 199, 23, 12, 62, 228, 154, 30, 190, 44, 132, 123, 60, 191, 79, 172, 189, 218, 230, 6, 62, 10, 41, 26, 190, 234, 103, 10, 62, 17, 192, 179, 61, 188, 78, 212, 61, 107, 174, 10, 56, 245, 216, 26, 190, 177, 59, 46, 62, 248, 52, 40, 62, 179, 182, 212, 189, 94, 122, 26, 190, 63, 113, 4, 190};
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
                alignas(float) const unsigned char memory[] = {200, 34, 82, 61, 22, 216, 162, 61};
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
    alignas(float) const unsigned char memory[] = {115, 82, 209, 190, 206, 69, 89, 190, 81, 14, 164, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {75, 175, 0, 190, 64, 219, 87, 188};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0086/steps/000000000000000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}