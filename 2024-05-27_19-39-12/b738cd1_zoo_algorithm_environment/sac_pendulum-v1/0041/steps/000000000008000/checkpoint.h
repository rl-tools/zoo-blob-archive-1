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
                alignas(float) const unsigned char memory[] = {141, 194, 159, 190, 253, 12, 21, 63, 135, 28, 245, 190, 86, 110, 18, 189, 122, 112, 166, 190, 95, 151, 57, 191, 7, 135, 191, 190, 222, 179, 24, 191, 109, 157, 2, 63, 49, 207, 9, 191, 194, 19, 51, 190, 79, 173, 45, 190, 179, 91, 13, 191, 37, 194, 160, 61, 254, 59, 209, 62, 253, 156, 118, 62, 72, 62, 194, 62, 112, 22, 17, 191, 101, 160, 252, 61, 86, 159, 98, 62, 78, 134, 15, 191, 16, 30, 184, 62, 195, 72, 12, 191, 75, 174, 20, 191, 240, 253, 126, 63, 63, 176, 85, 63, 60, 32, 252, 62, 182, 134, 136, 62, 97, 191, 194, 61, 142, 29, 141, 190, 211, 218, 9, 191, 46, 246, 194, 62, 208, 249, 60, 62, 207, 115, 187, 190, 88, 108, 235, 191, 33, 84, 249, 190, 98, 26, 183, 62, 82, 96, 73, 191, 201, 70, 230, 190, 221, 134, 28, 190, 12, 70, 204, 62, 201, 11, 21, 63, 218, 229, 182, 61, 83, 228, 40, 191, 82, 8, 110, 62, 22, 233, 0, 191, 77, 235, 88, 62, 208, 95, 185, 189, 155, 180, 22, 63, 149, 87, 168, 190, 25, 39, 34, 63, 232, 97, 148, 190, 93, 26, 161, 191, 132, 252, 222, 189, 94, 98, 196, 60, 185, 22, 74, 189, 7, 203, 112, 62, 187, 71, 36, 189, 250, 226, 228, 61, 204, 83, 86, 191, 72, 207, 224, 190, 68, 61, 164, 63, 81, 52, 87, 61, 8, 176, 132, 62, 178, 179, 42, 63, 96, 175, 203, 190, 124, 50, 8, 191, 64, 252, 172, 62, 15, 52, 223, 61, 217, 110, 4, 63, 236, 64, 27, 63, 163, 125, 211, 190, 158, 239, 83, 58, 201, 8, 121, 189, 77, 165, 181, 62, 238, 194, 49, 61, 38, 115, 88, 191, 106, 182, 82, 62, 134, 235, 243, 190, 238, 182, 150, 191, 170, 170, 31, 191, 16, 86, 185, 62, 66, 203, 139, 191, 202, 15, 131, 190, 166, 54, 135, 190, 49, 226, 83, 191, 87, 61, 194, 59, 49, 251, 179, 62, 120, 153, 58, 191, 166, 144, 77, 62, 61, 74, 136, 61, 235, 41, 225, 190, 206, 163, 134, 61, 164, 239, 31, 63, 72, 151, 188, 190, 215, 165, 2, 191};
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
                alignas(float) const unsigned char memory[] = {155, 91, 188, 190, 136, 164, 120, 190, 151, 22, 131, 61, 4, 44, 15, 63, 98, 234, 138, 190, 252, 230, 60, 62, 92, 105, 103, 190, 46, 203, 123, 190, 155, 195, 25, 191, 60, 123, 93, 62, 69, 253, 57, 190, 140, 145, 8, 190, 113, 48, 207, 190, 111, 68, 217, 62, 86, 149, 159, 62, 191, 200, 92, 63, 211, 29, 18, 62, 161, 159, 223, 62, 109, 226, 178, 188, 11, 96, 174, 190, 191, 241, 32, 63, 90, 146, 49, 189, 31, 56, 4, 63, 188, 35, 61, 62, 55, 98, 87, 189, 28, 122, 67, 61, 40, 94, 154, 190, 101, 199, 187, 61, 255, 55, 205, 189, 250, 18, 148, 62, 37, 198, 239, 62, 90, 199, 12, 191};
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
                alignas(float) const unsigned char memory[] = {233, 236, 148, 189, 31, 225, 200, 189, 115, 223, 66, 189, 34, 190, 190, 189, 244, 196, 40, 61, 34, 208, 254, 189, 122, 187, 203, 189, 246, 110, 24, 62, 4, 215, 219, 189, 89, 149, 32, 61, 156, 214, 149, 59, 43, 112, 155, 61, 204, 111, 32, 190, 222, 34, 118, 189, 158, 22, 226, 189, 220, 205, 206, 189, 127, 63, 240, 189, 182, 23, 9, 62, 171, 54, 41, 61, 189, 151, 25, 60, 123, 87, 183, 59, 251, 206, 144, 188, 3, 108, 69, 189, 76, 66, 175, 189, 44, 253, 125, 189, 151, 176, 131, 189, 132, 239, 79, 189, 210, 117, 173, 189, 254, 47, 148, 189, 241, 202, 38, 190, 147, 125, 80, 61, 195, 178, 85, 189, 112, 171, 198, 61, 44, 113, 133, 62, 165, 130, 179, 190, 158, 119, 231, 60, 114, 53, 65, 190, 134, 96, 125, 62, 78, 216, 156, 62, 153, 169, 163, 189, 22, 222, 91, 61, 49, 88, 5, 189, 63, 135, 22, 62, 16, 205, 158, 60, 50, 77, 69, 62, 53, 105, 158, 190, 146, 108, 137, 187, 202, 180, 179, 60, 147, 163, 174, 61, 200, 172, 179, 190, 93, 253, 70, 190, 142, 120, 178, 62, 104, 13, 185, 62, 179, 140, 249, 61, 1, 86, 57, 190, 116, 105, 141, 61, 103, 215, 105, 190, 62, 171, 80, 190, 127, 229, 224, 61, 142, 147, 200, 190, 109, 211, 174, 62, 202, 247, 222, 190, 38, 89, 232, 190, 106, 56, 26, 60, 27, 108, 133, 188, 160, 171, 65, 62, 17, 51, 244, 61, 224, 107, 128, 60, 205, 47, 10, 62, 254, 55, 132, 62, 154, 150, 115, 61, 24, 207, 64, 189, 22, 15, 11, 61, 155, 147, 138, 62, 40, 163, 35, 190, 84, 240, 106, 60, 179, 105, 130, 189, 158, 14, 139, 187, 17, 152, 18, 62, 32, 181, 117, 190, 129, 176, 128, 62, 244, 167, 32, 188, 111, 86, 20, 62, 225, 161, 227, 188, 60, 249, 141, 190, 147, 0, 3, 62, 49, 39, 56, 61, 98, 122, 187, 61, 47, 116, 168, 62, 75, 4, 184, 61, 66, 225, 136, 190, 127, 34, 157, 190, 250, 77, 3, 190, 158, 121, 200, 62, 131, 110, 216, 188, 156, 222, 51, 190, 132, 248, 218, 62, 24, 211, 176, 191, 150, 80, 8, 62, 134, 82, 196, 190, 13, 15, 159, 62, 154, 164, 50, 62, 228, 118, 61, 191, 39, 153, 228, 189, 205, 123, 31, 191, 40, 17, 206, 61, 86, 118, 48, 62, 185, 88, 208, 191, 74, 22, 132, 190, 229, 95, 73, 62, 33, 91, 97, 190, 226, 209, 153, 62, 190, 139, 143, 190, 87, 52, 0, 190, 6, 115, 172, 62, 63, 29, 76, 191, 224, 47, 131, 62, 219, 251, 160, 191, 43, 115, 194, 60, 230, 63, 189, 191, 7, 152, 51, 62, 45, 201, 246, 61, 122, 202, 207, 191, 255, 177, 8, 63, 13, 197, 189, 190, 45, 30, 225, 61, 213, 204, 81, 62, 26, 5, 114, 190, 158, 231, 121, 62, 160, 157, 132, 189, 126, 147, 126, 61, 111, 23, 153, 190, 60, 242, 38, 62, 232, 26, 184, 62, 140, 39, 9, 61, 198, 57, 74, 61, 204, 117, 173, 190, 109, 131, 212, 62, 91, 244, 139, 62, 191, 228, 15, 191, 76, 138, 178, 189, 226, 96, 206, 189, 242, 29, 15, 62, 216, 31, 226, 61, 121, 12, 147, 61, 228, 224, 105, 189, 183, 215, 40, 62, 238, 194, 100, 190, 163, 64, 77, 188, 129, 7, 116, 190, 185, 60, 45, 189, 139, 113, 52, 188, 62, 255, 114, 60, 52, 218, 39, 62, 154, 221, 187, 190, 72, 4, 162, 62, 247, 155, 10, 190, 66, 150, 102, 62, 248, 239, 214, 61, 109, 28, 228, 61, 117, 138, 89, 62, 124, 151, 24, 190, 159, 237, 244, 189, 171, 37, 230, 189, 141, 225, 196, 188, 36, 241, 91, 61, 10, 249, 78, 188, 119, 232, 5, 190, 215, 162, 158, 190, 57, 89, 188, 61, 217, 145, 178, 188, 40, 59, 60, 190, 97, 234, 155, 190, 121, 19, 148, 61, 166, 186, 94, 190, 176, 105, 55, 62, 138, 252, 95, 190, 36, 203, 48, 191, 37, 235, 24, 189, 206, 195, 161, 61, 182, 61, 207, 62, 91, 223, 81, 62, 245, 138, 26, 190, 236, 25, 144, 62, 206, 241, 136, 61, 116, 144, 75, 190, 155, 88, 153, 190, 253, 248, 18, 191, 28, 184, 225, 190, 225, 228, 174, 189, 170, 229, 30, 190, 58, 43, 177, 190, 76, 142, 206, 61, 203, 133, 34, 62, 8, 48, 5, 62, 39, 255, 27, 62, 13, 33, 237, 189, 32, 126, 108, 188, 222, 215, 18, 62, 9, 54, 47, 62, 198, 145, 183, 190, 147, 168, 170, 61, 126, 48, 97, 190, 7, 106, 15, 189, 115, 127, 174, 61, 234, 227, 155, 190, 120, 55, 131, 62, 68, 179, 81, 61, 12, 140, 199, 190, 158, 86, 116, 189, 222, 141, 43, 62, 130, 27, 137, 188, 22, 84, 187, 61, 245, 148, 60, 61, 88, 252, 255, 189, 231, 101, 49, 62, 64, 144, 239, 61, 132, 122, 9, 63, 234, 227, 110, 60, 250, 64, 67, 189, 246, 96, 152, 62, 35, 171, 160, 61, 241, 92, 133, 61, 87, 24, 180, 61, 247, 212, 174, 189, 2, 200, 171, 62, 139, 4, 173, 189, 222, 76, 47, 189, 128, 246, 172, 61, 135, 78, 84, 60, 63, 104, 75, 62, 157, 96, 45, 190, 227, 171, 153, 61, 94, 25, 242, 61, 198, 20, 77, 190, 31, 21, 152, 189, 212, 99, 209, 190, 141, 110, 216, 61, 249, 134, 87, 62, 250, 21, 165, 62, 227, 148, 43, 62, 205, 94, 197, 188, 10, 49, 246, 189, 224, 214, 155, 62, 152, 189, 254, 189, 106, 228, 130, 62, 77, 69, 183, 61, 137, 117, 223, 62, 149, 30, 240, 190, 23, 142, 160, 190, 200, 46, 176, 62, 115, 28, 207, 190, 158, 44, 57, 190, 50, 115, 216, 61, 170, 202, 106, 62, 15, 249, 134, 190, 197, 85, 18, 63, 62, 198, 57, 190, 121, 218, 145, 62, 42, 130, 101, 190, 219, 6, 223, 62, 7, 135, 98, 62, 112, 232, 52, 190, 169, 69, 132, 189, 136, 148, 4, 191, 67, 247, 27, 62, 186, 234, 184, 62, 134, 174, 168, 191, 177, 214, 0, 62, 124, 164, 39, 61, 241, 214, 41, 190, 17, 47, 122, 62, 215, 225, 225, 190, 16, 53, 146, 190, 186, 22, 249, 61, 4, 57, 155, 62, 124, 162, 238, 61, 251, 42, 17, 191, 49, 108, 165, 188, 137, 163, 249, 190, 198, 75, 132, 62, 4, 1, 147, 61, 179, 154, 113, 191, 122, 11, 138, 62, 127, 152, 197, 190, 162, 132, 253, 188, 183, 14, 74, 62, 171, 37, 1, 62, 65, 39, 201, 190, 187, 152, 141, 61, 189, 1, 0, 191, 211, 143, 173, 61, 181, 91, 225, 190, 129, 105, 148, 61, 52, 123, 50, 62, 153, 204, 227, 189, 72, 188, 16, 63, 61, 30, 32, 190, 70, 159, 98, 190, 183, 16, 242, 61, 194, 103, 44, 188, 133, 187, 174, 189, 83, 145, 45, 62, 129, 220, 180, 61, 142, 128, 180, 62, 95, 65, 53, 62, 41, 60, 17, 190, 20, 232, 78, 187, 136, 136, 167, 189, 24, 148, 172, 62, 164, 230, 2, 62, 44, 20, 191, 62, 250, 155, 64, 191, 51, 42, 213, 190, 107, 250, 166, 61, 139, 5, 171, 189, 78, 118, 47, 190, 48, 133, 122, 188, 201, 115, 187, 62, 186, 85, 56, 187, 178, 31, 57, 62, 128, 177, 27, 190, 173, 113, 50, 62, 218, 233, 36, 62, 1, 65, 128, 62, 189, 244, 5, 190, 154, 27, 175, 61, 116, 131, 94, 190, 104, 21, 140, 62, 98, 205, 160, 61, 221, 38, 128, 61, 50, 82, 142, 62, 188, 164, 156, 61, 184, 199, 126, 189, 111, 189, 79, 62, 61, 220, 3, 190, 71, 106, 25, 61, 133, 178, 201, 60, 89, 191, 145, 62, 38, 206, 189, 61, 159, 220, 166, 190, 198, 56, 122, 190, 211, 103, 223, 57, 2, 226, 162, 190, 77, 75, 135, 62, 113, 240, 163, 62, 169, 179, 232, 61, 186, 200, 3, 191, 92, 13, 160, 60, 248, 19, 166, 61, 55, 164, 200, 60, 80, 130, 172, 61, 107, 17, 149, 62, 9, 78, 232, 189, 97, 27, 33, 62, 77, 105, 216, 61, 41, 210, 0, 62, 211, 232, 134, 61, 163, 184, 30, 186, 220, 80, 175, 189, 76, 255, 228, 189, 93, 31, 228, 61, 137, 116, 177, 61, 195, 30, 95, 191, 107, 241, 132, 188, 65, 162, 150, 61, 223, 175, 182, 190, 179, 39, 235, 61, 79, 4, 42, 191, 21, 141, 187, 61, 170, 239, 161, 189, 202, 40, 106, 62, 66, 160, 201, 189, 96, 251, 186, 190, 186, 66, 209, 188, 255, 102, 78, 190, 244, 31, 71, 62, 205, 173, 203, 61, 56, 152, 239, 190, 202, 176, 139, 189, 141, 16, 209, 190, 66, 15, 36, 62, 226, 20, 152, 188, 74, 232, 45, 61, 88, 126, 131, 190, 77, 172, 76, 190, 60, 47, 165, 61, 104, 158, 67, 61, 194, 253, 228, 189, 46, 82, 169, 187, 244, 92, 192, 190, 187, 255, 132, 189, 121, 172, 217, 190, 234, 125, 163, 61, 204, 68, 236, 189, 134, 251, 18, 62, 239, 176, 110, 190, 240, 217, 157, 190, 224, 106, 160, 62, 223, 204, 65, 62, 242, 144, 62, 189, 36, 163, 71, 62, 26, 139, 138, 187, 144, 94, 192, 189, 152, 67, 151, 190, 94, 47, 113, 187, 205, 68, 165, 190, 109, 149, 117, 61, 25, 196, 158, 61, 47, 130, 133, 61, 187, 120, 176, 189, 165, 124, 71, 62, 150, 186, 81, 62, 46, 83, 151, 62, 2, 171, 126, 61, 150, 252, 238, 189, 155, 87, 6, 62, 184, 46, 8, 190, 101, 121, 56, 189, 159, 134, 123, 61, 134, 55, 156, 61, 142, 206, 238, 189, 181, 97, 164, 188, 42, 109, 21, 190, 220, 33, 92, 61, 77, 115, 252, 189, 254, 218, 67, 190, 101, 94, 164, 189, 137, 15, 190, 189, 34, 118, 207, 61, 206, 226, 80, 190, 196, 156, 29, 190, 198, 184, 143, 189, 134, 95, 191, 189, 88, 200, 53, 61, 173, 217, 9, 189, 229, 116, 145, 60, 252, 219, 239, 189, 228, 187, 28, 190, 203, 131, 25, 62, 50, 80, 203, 61, 210, 206, 141, 61, 27, 25, 69, 188, 77, 110, 218, 60, 246, 176, 29, 189, 4, 62, 18, 61, 41, 142, 39, 190, 112, 221, 138, 188, 16, 232, 7, 190, 2, 5, 91, 189, 167, 247, 112, 190, 173, 77, 51, 62, 18, 235, 191, 190, 120, 204, 136, 189, 110, 177, 0, 62, 63, 184, 98, 58, 148, 217, 190, 62, 90, 181, 142, 61, 108, 46, 223, 189, 182, 11, 36, 62, 111, 224, 55, 190, 56, 106, 178, 188, 51, 142, 70, 61, 214, 131, 225, 189, 94, 54, 135, 188, 39, 198, 66, 62, 141, 162, 90, 61, 116, 100, 46, 189, 115, 140, 125, 188, 166, 115, 157, 61, 86, 142, 113, 62, 124, 138, 168, 61, 166, 233, 48, 190, 235, 24, 72, 190, 101, 76, 61, 62, 137, 50, 85, 189, 23, 142, 200, 60, 22, 235, 46, 190, 157, 17, 178, 189, 144, 65, 75, 188, 166, 88, 69, 63, 224, 22, 223, 190, 138, 84, 234, 61, 99, 15, 130, 188, 82, 22, 47, 61, 154, 70, 181, 62, 163, 186, 75, 189, 127, 68, 177, 189, 56, 249, 69, 191, 151, 184, 159, 62, 28, 94, 191, 186, 92, 100, 69, 191, 130, 246, 179, 60, 150, 137, 82, 186, 73, 172, 99, 190, 228, 15, 62, 188, 52, 138, 132, 189, 12, 178, 47, 62, 0, 9, 185, 61, 26, 139, 21, 189, 154, 107, 121, 190, 175, 195, 140, 190, 31, 233, 12, 62, 233, 102, 189, 190, 80, 80, 123, 61, 22, 253, 90, 62, 237, 127, 49, 191, 249, 231, 49, 63, 117, 201, 205, 60, 1, 170, 19, 62, 105, 171, 25, 62, 122, 75, 134, 190, 97, 131, 203, 62, 158, 167, 90, 190, 136, 8, 156, 62, 157, 182, 48, 58, 37, 181, 153, 61, 197, 231, 214, 62, 83, 212, 31, 190, 232, 247, 193, 62, 232, 143, 78, 191, 239, 157, 208, 61, 166, 58, 20, 62, 223, 123, 172, 190, 149, 68, 181, 62, 18, 177, 115, 61, 129, 142, 241, 189, 243, 252, 78, 62, 18, 140, 47, 190, 133, 219, 246, 189, 109, 107, 136, 189, 32, 195, 139, 190, 34, 249, 172, 190, 251, 57, 206, 61, 29, 160, 9, 190, 226, 237, 145, 61, 69, 27, 39, 62, 162, 240, 99, 61, 199, 17, 32, 191, 243, 92, 40, 63, 180, 33, 71, 62, 75, 32, 85, 62, 107, 207, 154, 61, 1, 206, 112, 62, 115, 139, 37, 61, 149, 118, 202, 61, 93, 225, 51, 62, 220, 112, 8, 190, 46, 219, 7, 188, 107, 95, 130, 189, 247, 130, 104, 189, 136, 51, 47, 190, 194, 166, 19, 190, 243, 7, 36, 190, 52, 165, 90, 61, 76, 69, 33, 190, 77, 203, 213, 61, 87, 173, 50, 190, 246, 236, 168, 61, 205, 163, 75, 60, 220, 157, 87, 189, 64, 110, 18, 190, 229, 83, 157, 61, 58, 205, 118, 189, 249, 118, 240, 189, 43, 120, 26, 62, 8, 75, 63, 188, 15, 77, 31, 188, 77, 186, 147, 189, 102, 154, 18, 58, 222, 92, 22, 190, 236, 254, 233, 189, 140, 170, 23, 190, 105, 83, 113, 61, 165, 227, 158, 189, 53, 111, 216, 188, 51, 4, 172, 188, 60, 238, 140, 189, 82, 197, 163, 189, 156, 207, 10, 190, 63, 137, 151, 188, 57, 202, 252, 189, 69, 100, 245, 61, 183, 94, 184, 188, 138, 148, 44, 61, 156, 51, 195, 188, 37, 106, 191, 61, 95, 126, 112, 60, 217, 227, 158, 189, 92, 40, 7, 189, 241, 19, 12, 62, 168, 244, 64, 189, 178, 252, 18, 190, 78, 200, 11, 62, 81, 23, 90, 61, 39, 149, 49, 61, 38, 127, 116, 187, 214, 115, 252, 189, 147, 28, 120, 61, 181, 113, 40, 190, 233, 168, 202, 61, 81, 254, 172, 60, 86, 131, 69, 189, 10, 151, 215, 189, 29, 19, 138, 189, 56, 195, 187, 60, 237, 86, 28, 190, 48, 173, 155, 61, 169, 162, 154, 189, 181, 94, 243, 189, 186, 12, 75, 189, 238, 134, 40, 188, 73, 119, 212, 189, 70, 253, 16, 60, 117, 46, 232, 189, 108, 79, 221, 189, 38, 206, 182, 188, 64, 246, 32, 188, 26, 163, 49, 189, 182, 196, 231, 61, 66, 159, 204, 189, 61, 252, 194, 61, 175, 210, 205, 189, 242, 3, 31, 190, 3, 46, 172, 189, 180, 41, 181, 185, 252, 77, 122, 61, 87, 0, 25, 62, 186, 255, 228, 189, 160, 207, 99, 61, 226, 27, 143, 189, 247, 242, 207, 61, 241, 107, 150, 61, 56, 156, 206, 60, 117, 17, 219, 188, 100, 145, 195, 189, 249, 74, 94, 61, 214, 56, 255, 61, 130, 32, 55, 190, 160, 19, 227, 61, 221, 187, 33, 190, 95, 175, 177, 61, 195, 255, 171, 61, 95, 153, 247, 61, 142, 74, 51, 62, 249, 155, 224, 188, 191, 94, 31, 61, 214, 160, 236, 189, 90, 100, 154, 190, 71, 225, 130, 190, 178, 199, 212, 187, 49, 23, 159, 62, 209, 98, 161, 61, 155, 144, 146, 189, 218, 38, 146, 61, 181, 214, 47, 62, 65, 183, 70, 60, 37, 255, 208, 60, 0, 87, 50, 60, 140, 88, 46, 190, 60, 253, 32, 190, 233, 247, 227, 189, 83, 163, 145, 189, 110, 74, 114, 190, 148, 191, 220, 62, 121, 199, 57, 61, 115, 238, 137, 62, 187, 204, 246, 190, 226, 196, 48, 60, 14, 202, 133, 62, 170, 93, 160, 61, 251, 74, 49, 61, 31, 72, 237, 62, 207, 16, 40, 191, 129, 196, 145, 62, 202, 153, 54, 190, 66, 1, 174, 61, 38, 170, 9, 62, 6, 155, 186, 190, 66, 1, 72, 190, 210, 0, 232, 190, 221, 119, 214, 188, 53, 250, 105, 62, 158, 105, 136, 191, 124, 39, 5, 62, 160, 39, 2, 61, 142, 30, 227, 189, 104, 101, 56, 62, 44, 227, 239, 190, 172, 186, 245, 61, 203, 173, 40, 61, 141, 69, 180, 190, 233, 243, 118, 190, 250, 198, 59, 191, 211, 163, 170, 61, 213, 19, 0, 191, 12, 26, 12, 62, 71, 49, 198, 62, 250, 201, 133, 191, 215, 26, 60, 63, 217, 22, 70, 190, 189, 4, 63, 61, 49, 5, 116, 61, 209, 37, 225, 189, 250, 90, 21, 190, 58, 50, 32, 62, 150, 104, 128, 189, 11, 253, 27, 62, 16, 207, 47, 62, 188, 132, 12, 190, 230, 30, 232, 189, 111, 56, 24, 61, 104, 65, 2, 190, 204, 230, 46, 61, 145, 39, 55, 189, 138, 21, 249, 61, 118, 21, 1, 190, 61, 58, 48, 190, 200, 233, 136, 188, 65, 225, 50, 190, 158, 204, 130, 189, 129, 235, 178, 188, 1, 180, 184, 189, 164, 21, 186, 189, 151, 197, 232, 189, 153, 133, 74, 187, 182, 102, 14, 61, 193, 23, 231, 189, 36, 145, 77, 188, 95, 69, 32, 190, 105, 48, 213, 189, 93, 80, 39, 190, 5, 177, 181, 189, 218, 175, 254, 189, 93, 42, 222, 61, 166, 53, 131, 189, 114, 187, 117, 61, 85, 75, 231, 188, 57, 217, 128, 189, 73, 49, 158, 61, 155, 179, 11, 189, 75, 235, 252, 189, 230, 127, 246, 61, 147, 102, 251, 189, 3, 253, 21, 190, 35, 55, 172, 60, 199, 233, 252, 61, 17, 250, 44, 190, 91, 41, 76, 189, 199, 55, 38, 190, 41, 177, 5, 190, 192, 254, 21, 190, 0, 81, 185, 189, 167, 34, 50, 190, 64, 200, 10, 62, 128, 168, 204, 189, 177, 121, 33, 190, 248, 208, 148, 189, 57, 24, 192, 189, 40, 50, 125, 61, 98, 198, 37, 190, 59, 180, 140, 61, 196, 99, 62, 188, 114, 33, 19, 190, 176, 76, 201, 189, 127, 59, 48, 190, 118, 140, 199, 189, 242, 9, 95, 61, 72, 179, 161, 190, 134, 106, 230, 62, 244, 53, 48, 189, 84, 70, 168, 62, 206, 39, 75, 62, 154, 253, 238, 189, 217, 142, 159, 62, 175, 202, 40, 190, 110, 52, 132, 190, 219, 173, 147, 189, 215, 141, 46, 61, 178, 219, 17, 62, 58, 1, 189, 190, 140, 223, 147, 189, 3, 207, 64, 62, 133, 25, 219, 62, 47, 98, 112, 61, 61, 172, 6, 62, 248, 26, 29, 190, 103, 30, 137, 62, 10, 139, 190, 61, 45, 57, 245, 62, 120, 38, 148, 62, 25, 220, 114, 62, 50, 30, 254, 190, 178, 230, 111, 190, 8, 169, 76, 62, 90, 233, 143, 190, 133, 35, 151, 190, 183, 188, 47, 190, 7, 36, 104, 62, 121, 136, 131, 190, 239, 187, 161, 190, 46, 144, 188, 60, 62, 19, 171, 59, 34, 3, 83, 61, 121, 243, 116, 189, 103, 137, 214, 187, 235, 147, 78, 62, 148, 70, 111, 190, 159, 103, 133, 62, 89, 111, 162, 61, 110, 200, 185, 189, 160, 238, 41, 62, 229, 132, 183, 190, 188, 108, 131, 61, 13, 226, 124, 62, 197, 192, 154, 61, 136, 215, 30, 62, 160, 179, 161, 62, 24, 196, 149, 60, 187, 97, 88, 62, 238, 225, 193, 189, 212, 84, 28, 62, 23, 123, 66, 190, 230, 202, 168, 62, 59, 6, 53, 190, 34, 159, 131, 190, 140, 84, 141, 62, 196, 47, 138, 190, 49, 144, 164, 189, 59, 223, 155, 61, 214, 82, 59, 62, 165, 143, 6, 190, 185, 88, 134, 59, 146, 27, 223, 61, 11, 128, 25, 62, 167, 183, 79, 189, 1, 195, 6, 190, 234, 115, 169, 189, 146, 162, 225, 61, 97, 179, 67, 190, 92, 141, 107, 59, 97, 13, 171, 189, 215, 247, 32, 190, 223, 249, 140, 61, 80, 234, 7, 190, 73, 205, 103, 60, 39, 112, 30, 190, 26, 192, 5, 190, 107, 17, 56, 189, 229, 19, 230, 189, 172, 35, 192, 189, 143, 207, 106, 61, 85, 19, 18, 190, 226, 111, 253, 189, 91, 211, 3, 190, 58, 206, 30, 190, 38, 139, 210, 189, 82, 90, 158, 188, 209, 180, 193, 188, 191, 205, 42, 190, 72, 178, 0, 62, 94, 104, 52, 190, 77, 80, 37, 189, 231, 113, 134, 189, 113, 238, 224, 62, 36, 179, 243, 190, 21, 88, 180, 61, 152, 239, 138, 62, 155, 12, 82, 60, 234, 226, 147, 62, 100, 68, 130, 190, 77, 231, 55, 189, 99, 173, 64, 191, 112, 249, 149, 61, 17, 2, 20, 62, 6, 150, 182, 191, 98, 161, 224, 61, 6, 181, 251, 189, 64, 134, 44, 191, 10, 33, 150, 62, 83, 26, 106, 191, 151, 188, 134, 190, 44, 165, 15, 190, 169, 56, 169, 60, 159, 73, 23, 189, 242, 111, 222, 190, 15, 126, 96, 62, 7, 254, 25, 191, 35, 40, 148, 190, 1, 148, 81, 62, 255, 189, 105, 191, 51, 63, 189, 189, 43, 16, 107, 191, 205, 151, 90, 190, 47, 209, 185, 61, 222, 131, 136, 189, 46, 189, 213, 189, 175, 216, 49, 62, 243, 119, 240, 188, 181, 48, 135, 189, 7, 121, 4, 191, 193, 18, 115, 62, 207, 142, 158, 61, 154, 131, 249, 61, 166, 196, 195, 190, 78, 174, 41, 62, 27, 121, 44, 191, 254, 156, 66, 189, 179, 170, 144, 189, 90, 74, 133, 190, 215, 46, 23, 63, 194, 210, 78, 62, 77, 124, 249, 188, 242, 133, 137, 62, 13, 219, 40, 190, 190, 89, 41, 62, 189, 112, 154, 61, 70, 242, 0, 62, 75, 68, 29, 190, 193, 137, 205, 62, 216, 175, 213, 190, 75, 38, 110, 62, 224, 41, 108, 62, 0, 136, 27, 63, 132, 240, 9, 63, 82, 215, 176, 62, 184, 148, 32, 189, 97, 164, 19, 62, 15, 107, 48, 62, 123, 228, 21, 189, 235, 134, 143, 61, 253, 192, 95, 60, 42, 194, 189, 189, 206, 223, 15, 190, 164, 170, 28, 189, 119, 66, 220, 189, 136, 86, 57, 190, 164, 107, 192, 189, 156, 158, 138, 189, 67, 80, 144, 189, 166, 129, 73, 189, 147, 186, 101, 189, 229, 130, 54, 190, 86, 111, 235, 189, 39, 242, 95, 61, 111, 203, 194, 61, 235, 98, 17, 190, 135, 237, 2, 190, 167, 1, 55, 189, 204, 84, 26, 190, 66, 73, 9, 62, 50, 210, 0, 187, 70, 231, 4, 190, 253, 97, 13, 62, 2, 173, 231, 61, 17, 113, 77, 188, 135, 211, 29, 62, 17, 24, 214, 189, 245, 120, 116, 189, 73, 157, 41, 190, 34, 88, 167, 190, 147, 90, 1, 62, 197, 179, 22, 191, 162, 244, 79, 62, 179, 47, 150, 190, 155, 9, 58, 59, 157, 112, 164, 62, 62, 224, 102, 188, 30, 123, 217, 62, 249, 242, 117, 190, 152, 27, 205, 190, 73, 107, 235, 61, 213, 78, 92, 61, 4, 127, 203, 190, 5, 239, 84, 190, 247, 225, 79, 62, 225, 196, 150, 189, 81, 167, 54, 62, 25, 102, 221, 190, 116, 112, 151, 61, 61, 19, 69, 190, 81, 132, 56, 62, 21, 165, 185, 61, 178, 241, 60, 62, 193, 238, 146, 191, 153, 249, 114, 191, 239, 253, 155, 62, 54, 181, 51, 61, 88, 62, 148, 190, 185, 132, 132, 190, 248, 152, 145, 60, 149, 27, 194, 189, 25, 133, 171, 189, 83, 69, 45, 62, 159, 73, 164, 190, 254, 1, 150, 61, 48, 204, 196, 190, 94, 251, 133, 186, 151, 204, 242, 61, 19, 129, 150, 190, 204, 22, 192, 62, 23, 129, 57, 189, 32, 62, 85, 190, 39, 85, 240, 61, 217, 234, 86, 60, 33, 112, 44, 190, 54, 14, 173, 62, 68, 201, 14, 62, 8, 128, 188, 62, 69, 207, 222, 61, 97, 93, 144, 190, 239, 225, 206, 60, 48, 34, 37, 190, 118, 118, 76, 62, 246, 122, 161, 60, 76, 163, 160, 62, 112, 9, 249, 190, 145, 168, 250, 190, 128, 190, 36, 62, 171, 225, 14, 190, 48, 207, 151, 190, 112, 8, 239, 60, 73, 7, 90, 62, 9, 122, 126, 190};
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
                alignas(float) const unsigned char memory[] = {221, 65, 50, 186, 168, 52, 165, 190, 106, 67, 168, 61, 245, 184, 131, 62, 206, 10, 132, 62, 59, 9, 193, 61, 12, 16, 2, 190, 1, 122, 221, 62, 112, 227, 71, 61, 127, 100, 154, 62, 0, 134, 131, 189, 205, 23, 23, 189, 28, 35, 124, 62, 25, 32, 55, 190, 217, 9, 239, 61, 128, 65, 44, 62, 107, 166, 103, 62, 54, 3, 226, 61, 28, 75, 151, 60, 45, 204, 98, 190, 31, 209, 152, 61, 177, 235, 119, 62, 226, 109, 48, 190, 246, 69, 22, 62, 49, 240, 30, 62, 203, 186, 145, 62, 111, 112, 165, 188, 22, 51, 244, 189, 241, 68, 219, 189, 118, 20, 10, 190, 53, 13, 176, 61, 74, 88, 181, 62};
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
                alignas(float) const unsigned char memory[] = {159, 252, 1, 187, 85, 154, 207, 62, 191, 195, 112, 190, 106, 15, 84, 63, 67, 28, 121, 62, 136, 42, 31, 191, 139, 78, 12, 62, 68, 158, 105, 190, 182, 166, 75, 63, 110, 231, 139, 190, 235, 208, 154, 190, 153, 152, 75, 63, 81, 52, 137, 62, 78, 46, 201, 61, 99, 7, 2, 190, 199, 198, 83, 63, 132, 72, 65, 63, 78, 216, 87, 61, 228, 229, 157, 60, 180, 118, 105, 61, 130, 33, 41, 190, 216, 232, 118, 63, 82, 75, 176, 189, 123, 166, 210, 188, 74, 221, 230, 190, 39, 186, 135, 190, 139, 47, 103, 189, 177, 209, 150, 63, 233, 148, 31, 63, 229, 132, 11, 189, 216, 38, 200, 190, 165, 179, 249, 190, 198, 50, 241, 189, 132, 64, 3, 62, 248, 40, 104, 189, 86, 88, 249, 189, 183, 40, 230, 190, 83, 81, 121, 62, 121, 74, 56, 188, 178, 25, 44, 190, 44, 175, 29, 62, 69, 86, 234, 189, 103, 39, 85, 62, 128, 148, 46, 190, 63, 152, 59, 190, 195, 244, 34, 61, 220, 55, 1, 62, 169, 10, 44, 189, 7, 56, 30, 61, 237, 182, 29, 190, 252, 171, 10, 62, 85, 192, 255, 189, 19, 250, 134, 61, 192, 103, 223, 61, 114, 238, 44, 62, 27, 216, 66, 60, 4, 122, 225, 61, 102, 83, 7, 190, 190, 220, 251, 61, 236, 162, 233, 61, 220, 189, 30, 60, 219, 114, 170, 61, 194, 221, 123, 185, 199, 139, 135, 190};
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
                alignas(float) const unsigned char memory[] = {78, 239, 223, 189, 64, 119, 216, 190};
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
    alignas(float) const unsigned char memory[] = {247, 71, 147, 191, 186, 153, 4, 191, 85, 77, 251, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {130, 181, 216, 191, 33, 108, 50, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0041/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}