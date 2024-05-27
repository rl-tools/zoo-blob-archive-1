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
                alignas(float) const unsigned char memory[] = {222, 193, 241, 189, 218, 129, 64, 62, 249, 110, 226, 62, 106, 135, 120, 62, 129, 94, 57, 63, 143, 164, 158, 190, 125, 172, 79, 188, 63, 36, 71, 63, 82, 22, 251, 190, 250, 204, 94, 188, 215, 242, 25, 60, 235, 181, 248, 62, 101, 220, 153, 189, 248, 3, 119, 63, 78, 214, 144, 190, 231, 223, 141, 186, 194, 0, 127, 63, 103, 13, 168, 190, 196, 136, 109, 61, 226, 221, 204, 61, 199, 224, 86, 59, 184, 127, 154, 61, 149, 210, 140, 59, 3, 79, 115, 62, 233, 118, 63, 63, 88, 120, 124, 63, 126, 110, 175, 62, 58, 168, 169, 190, 188, 4, 130, 191, 247, 95, 136, 190, 140, 149, 153, 190, 129, 173, 197, 190, 165, 192, 5, 62, 168, 106, 178, 62, 103, 202, 88, 63, 229, 8, 26, 189, 216, 71, 64, 191, 216, 90, 56, 63, 4, 61, 7, 61, 235, 50, 212, 190, 226, 201, 41, 191, 238, 192, 185, 61, 133, 108, 85, 191, 97, 75, 183, 190, 217, 30, 31, 189, 189, 107, 181, 62, 29, 6, 136, 191, 84, 81, 96, 190, 147, 72, 144, 190, 219, 170, 251, 62, 90, 137, 179, 62, 65, 208, 148, 63, 113, 217, 18, 63, 133, 233, 235, 62, 100, 119, 96, 60, 159, 166, 97, 191, 60, 122, 223, 190, 221, 86, 56, 63, 37, 33, 32, 190, 193, 117, 44, 191, 126, 210, 26, 63, 96, 159, 13, 63, 161, 83, 196, 62, 120, 27, 177, 62, 107, 39, 26, 63, 36, 53, 168, 190, 136, 46, 217, 62, 54, 253, 237, 190, 57, 201, 245, 62, 204, 188, 165, 190, 102, 27, 48, 63, 40, 114, 22, 63, 157, 251, 43, 63, 166, 191, 116, 61, 92, 26, 216, 190, 144, 96, 164, 61, 189, 144, 151, 63, 170, 66, 244, 62, 105, 252, 206, 190, 193, 4, 217, 190, 151, 222, 215, 189, 2, 137, 3, 191, 163, 209, 254, 190, 222, 85, 18, 190, 23, 114, 64, 63, 84, 135, 174, 59, 239, 157, 178, 62, 32, 239, 228, 190, 203, 188, 48, 191, 220, 125, 15, 191, 160, 163, 243, 62, 70, 157, 163, 191, 185, 134, 184, 190, 222, 206, 197, 62, 234, 238, 80, 190, 123, 136, 176, 190};
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
                alignas(float) const unsigned char memory[] = {106, 10, 115, 191, 242, 218, 63, 62, 5, 81, 12, 189, 83, 152, 152, 190, 180, 221, 132, 190, 208, 172, 36, 62, 187, 166, 19, 191, 166, 39, 17, 191, 71, 109, 132, 190, 173, 67, 16, 190, 150, 107, 27, 62, 206, 155, 20, 63, 14, 131, 183, 62, 189, 46, 83, 190, 247, 19, 56, 63, 113, 209, 140, 61, 208, 168, 32, 190, 68, 136, 172, 62, 219, 144, 27, 62, 10, 72, 36, 62, 240, 193, 118, 190, 165, 2, 209, 62, 153, 4, 8, 63, 104, 63, 164, 189, 16, 94, 17, 191, 68, 213, 87, 62, 76, 176, 62, 63, 62, 61, 11, 63, 113, 74, 64, 189, 226, 214, 219, 190, 32, 172, 132, 61, 115, 248, 218, 190};
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
                alignas(float) const unsigned char memory[] = {109, 133, 21, 188, 249, 191, 59, 62, 204, 167, 104, 190, 81, 248, 20, 62, 38, 245, 175, 62, 93, 199, 63, 62, 188, 27, 9, 190, 63, 199, 240, 60, 143, 34, 118, 62, 251, 124, 246, 61, 203, 31, 28, 62, 202, 151, 244, 61, 4, 39, 169, 188, 209, 62, 27, 61, 19, 129, 2, 189, 249, 161, 36, 189, 101, 234, 56, 62, 9, 248, 24, 61, 76, 157, 41, 190, 110, 94, 151, 61, 28, 229, 234, 189, 129, 216, 1, 190, 163, 101, 199, 60, 67, 114, 48, 62, 226, 253, 2, 62, 237, 17, 38, 61, 196, 45, 161, 189, 177, 133, 81, 61, 109, 108, 5, 189, 154, 117, 199, 190, 240, 94, 222, 189, 188, 173, 18, 61, 160, 203, 109, 190, 124, 80, 80, 190, 129, 249, 181, 190, 206, 97, 136, 62, 91, 166, 53, 191, 240, 93, 171, 61, 198, 162, 35, 62, 147, 236, 170, 190, 83, 255, 28, 191, 57, 16, 152, 190, 77, 113, 58, 62, 236, 122, 114, 62, 131, 108, 160, 61, 156, 115, 61, 190, 91, 142, 217, 61, 216, 48, 163, 62, 163, 19, 176, 62, 104, 219, 217, 189, 29, 240, 16, 190, 249, 72, 180, 61, 19, 233, 155, 190, 128, 216, 163, 190, 103, 67, 188, 61, 32, 218, 53, 62, 116, 124, 213, 62, 13, 192, 251, 61, 140, 9, 12, 62, 210, 216, 49, 60, 219, 144, 89, 190, 27, 218, 145, 190, 153, 119, 82, 62, 86, 42, 173, 62, 143, 22, 44, 190, 255, 60, 50, 190, 1, 153, 63, 61, 138, 240, 7, 190, 58, 192, 9, 190, 91, 149, 214, 61, 245, 0, 37, 189, 150, 153, 209, 186, 227, 224, 17, 190, 59, 72, 1, 190, 157, 203, 224, 189, 101, 186, 221, 61, 73, 14, 67, 190, 45, 15, 47, 190, 129, 104, 29, 190, 163, 232, 160, 187, 49, 177, 238, 189, 239, 79, 46, 190, 222, 110, 14, 189, 72, 53, 5, 62, 242, 186, 211, 61, 17, 213, 1, 190, 135, 102, 1, 189, 14, 162, 1, 62, 175, 194, 149, 61, 200, 58, 155, 188, 223, 96, 46, 189, 182, 93, 60, 190, 143, 157, 17, 189, 177, 110, 202, 61, 145, 108, 47, 190, 202, 17, 53, 190, 83, 166, 204, 61, 104, 78, 129, 61, 194, 115, 150, 61, 113, 149, 152, 61, 133, 79, 209, 189, 132, 103, 65, 189, 121, 15, 184, 60, 162, 149, 246, 60, 48, 243, 38, 189, 201, 16, 110, 189, 132, 250, 157, 189, 26, 17, 51, 190, 192, 95, 143, 189, 167, 239, 253, 189, 193, 80, 238, 189, 24, 125, 107, 188, 194, 106, 187, 189, 184, 168, 206, 189, 179, 23, 19, 62, 126, 7, 28, 62, 92, 107, 196, 60, 121, 175, 62, 190, 126, 72, 53, 190, 185, 155, 40, 190, 186, 196, 7, 190, 47, 237, 92, 189, 104, 63, 32, 189, 36, 34, 190, 189, 39, 232, 9, 61, 208, 148, 114, 187, 242, 104, 66, 190, 96, 126, 3, 61, 173, 30, 139, 61, 200, 16, 154, 62, 100, 87, 210, 185, 214, 10, 174, 61, 78, 9, 90, 62, 51, 166, 120, 189, 152, 156, 120, 189, 218, 68, 98, 188, 231, 129, 159, 60, 102, 179, 148, 190, 84, 118, 11, 190, 121, 42, 194, 61, 200, 102, 81, 190, 140, 150, 170, 62, 121, 142, 13, 191, 102, 151, 211, 190, 13, 209, 240, 189, 131, 188, 91, 62, 169, 151, 141, 190, 57, 195, 135, 61, 49, 83, 168, 61, 14, 59, 50, 62, 191, 9, 139, 61, 80, 0, 167, 188, 217, 24, 43, 62, 167, 133, 103, 189, 34, 187, 163, 190, 123, 238, 22, 191, 232, 131, 173, 62, 194, 194, 73, 190, 114, 209, 64, 190, 119, 99, 98, 59, 170, 224, 170, 190, 53, 214, 155, 61, 137, 41, 4, 190, 23, 103, 87, 62, 127, 186, 12, 191, 167, 133, 104, 62, 46, 234, 250, 189, 143, 246, 144, 190, 160, 34, 2, 191, 254, 250, 79, 190, 253, 72, 138, 189, 1, 23, 177, 61, 62, 161, 52, 61, 192, 145, 201, 189, 220, 131, 6, 190, 17, 56, 137, 62, 89, 151, 157, 62, 233, 146, 204, 189, 121, 106, 196, 189, 4, 100, 130, 62, 105, 48, 168, 188, 238, 5, 89, 189, 3, 198, 232, 61, 120, 209, 131, 61, 34, 102, 185, 62, 66, 88, 219, 61, 254, 19, 135, 61, 234, 43, 103, 59, 22, 96, 41, 61, 131, 15, 120, 190, 17, 103, 189, 61, 65, 239, 188, 61, 179, 106, 44, 62, 4, 64, 176, 188, 3, 58, 61, 62, 82, 125, 69, 190, 252, 73, 86, 62, 214, 110, 79, 61, 3, 50, 209, 188, 32, 186, 8, 61, 70, 179, 162, 190, 24, 34, 189, 61, 163, 2, 148, 190, 73, 65, 39, 62, 72, 68, 13, 62, 138, 32, 183, 190, 98, 73, 146, 190, 108, 129, 196, 61, 166, 170, 215, 190, 164, 99, 117, 190, 171, 108, 17, 62, 112, 5, 143, 62, 175, 86, 48, 187, 251, 214, 11, 62, 211, 52, 100, 62, 53, 105, 142, 190, 7, 112, 135, 62, 247, 226, 41, 190, 225, 94, 114, 189, 5, 216, 240, 189, 247, 44, 11, 62, 148, 222, 14, 190, 153, 97, 158, 61, 153, 180, 174, 60, 164, 65, 103, 189, 142, 199, 86, 60, 163, 55, 87, 61, 195, 112, 25, 190, 193, 191, 159, 189, 167, 112, 181, 61, 14, 212, 19, 189, 163, 100, 241, 61, 126, 136, 49, 61, 64, 213, 14, 62, 103, 202, 28, 190, 193, 51, 179, 61, 235, 186, 245, 61, 169, 202, 2, 62, 227, 92, 179, 189, 248, 198, 205, 60, 22, 98, 24, 61, 169, 245, 42, 190, 120, 245, 133, 61, 86, 252, 168, 189, 48, 225, 117, 61, 19, 178, 24, 190, 139, 41, 17, 62, 220, 224, 15, 189, 104, 36, 119, 61, 124, 233, 241, 189, 110, 184, 132, 189, 214, 155, 15, 190, 30, 130, 74, 189, 135, 127, 213, 189, 245, 249, 34, 60, 187, 192, 9, 190, 4, 63, 2, 190, 174, 22, 141, 61, 201, 126, 33, 61, 88, 214, 244, 190, 69, 186, 49, 60, 139, 246, 246, 190, 56, 201, 239, 188, 191, 60, 55, 190, 42, 20, 23, 62, 174, 167, 43, 62, 103, 2, 19, 62, 219, 195, 97, 191, 222, 154, 196, 62, 21, 81, 169, 61, 159, 239, 40, 62, 230, 199, 81, 190, 72, 215, 158, 191, 245, 63, 126, 189, 253, 18, 140, 189, 105, 103, 242, 189, 216, 236, 42, 60, 124, 41, 138, 61, 241, 125, 240, 190, 143, 28, 152, 190, 185, 118, 82, 190, 151, 132, 89, 191, 39, 242, 18, 62, 78, 52, 134, 62, 3, 206, 158, 60, 50, 135, 138, 62, 0, 159, 101, 190, 125, 97, 7, 189, 91, 174, 88, 190, 46, 221, 246, 60, 51, 176, 71, 190, 138, 237, 52, 61, 104, 252, 119, 190, 152, 96, 159, 61, 243, 37, 187, 189, 172, 4, 218, 189, 247, 164, 175, 190, 156, 63, 176, 190, 140, 77, 68, 59, 81, 161, 169, 61, 26, 162, 165, 189, 15, 204, 37, 190, 255, 226, 46, 59, 171, 71, 129, 62, 105, 47, 147, 61, 35, 187, 9, 62, 139, 153, 8, 190, 121, 181, 135, 62, 170, 202, 121, 61, 60, 166, 116, 61, 31, 118, 191, 61, 228, 179, 57, 62, 223, 70, 39, 62, 164, 227, 24, 62, 244, 171, 161, 61, 36, 102, 239, 189, 219, 78, 4, 62, 82, 135, 46, 189, 148, 231, 152, 62, 183, 44, 62, 190, 111, 45, 229, 187, 198, 91, 15, 190, 1, 137, 208, 190, 85, 8, 65, 60, 80, 100, 229, 190, 187, 219, 224, 190, 42, 246, 48, 61, 112, 195, 56, 189, 20, 195, 66, 190, 85, 220, 214, 189, 77, 192, 38, 62, 125, 234, 36, 61, 220, 10, 3, 191, 95, 159, 172, 62, 44, 56, 247, 61, 67, 251, 45, 62, 171, 210, 92, 189, 251, 8, 230, 189, 131, 218, 40, 62, 107, 18, 14, 62, 110, 44, 70, 189, 118, 130, 202, 59, 33, 129, 151, 62, 127, 93, 13, 190, 203, 127, 20, 62, 188, 23, 63, 190, 144, 202, 47, 189, 126, 58, 51, 62, 216, 81, 34, 62, 28, 174, 165, 190, 52, 78, 181, 62, 173, 59, 202, 189, 60, 213, 218, 189, 11, 22, 246, 60, 233, 158, 162, 59, 250, 119, 14, 189, 159, 59, 50, 62, 232, 4, 82, 61, 49, 213, 31, 62, 9, 233, 149, 188, 84, 225, 40, 190, 243, 180, 148, 187, 78, 12, 187, 61, 178, 44, 12, 190, 206, 50, 58, 188, 77, 174, 88, 188, 8, 250, 45, 190, 94, 97, 198, 189, 183, 152, 253, 61, 200, 67, 202, 61, 152, 252, 6, 62, 108, 209, 46, 190, 195, 207, 3, 62, 79, 45, 202, 189, 173, 254, 28, 61, 6, 242, 125, 61, 9, 172, 254, 189, 116, 100, 7, 190, 75, 177, 74, 189, 54, 80, 19, 190, 74, 125, 218, 189, 25, 153, 182, 189, 44, 181, 14, 190, 14, 157, 141, 60, 237, 132, 76, 60, 188, 118, 9, 62, 83, 73, 239, 61, 235, 171, 11, 189, 145, 71, 130, 62, 221, 156, 62, 62, 200, 20, 133, 61, 235, 187, 105, 62, 239, 196, 114, 62, 209, 23, 56, 189, 135, 184, 231, 189, 19, 99, 208, 61, 242, 98, 128, 189, 98, 108, 29, 62, 174, 230, 59, 191, 92, 95, 155, 190, 17, 53, 251, 189, 95, 87, 56, 62, 201, 101, 156, 190, 27, 142, 64, 190, 135, 233, 133, 62, 119, 74, 144, 62, 187, 213, 56, 188, 16, 60, 1, 190, 125, 49, 187, 190, 63, 180, 224, 61, 73, 229, 61, 191, 139, 29, 4, 191, 129, 154, 166, 61, 157, 252, 219, 60, 212, 84, 9, 191, 230, 41, 3, 191, 191, 27, 210, 61, 95, 156, 51, 190, 182, 157, 62, 190, 94, 183, 145, 187, 107, 251, 144, 189, 229, 151, 239, 189, 180, 15, 19, 190, 231, 79, 46, 61, 29, 231, 180, 188, 100, 11, 200, 60, 226, 249, 158, 190, 151, 208, 211, 61, 222, 118, 139, 189, 124, 0, 31, 61, 205, 236, 170, 190, 77, 189, 130, 61, 220, 59, 13, 190, 118, 196, 19, 62, 89, 56, 37, 190, 214, 142, 99, 190, 75, 100, 115, 189, 215, 27, 164, 190, 132, 66, 120, 189, 3, 92, 8, 62, 32, 207, 238, 60, 133, 170, 210, 189, 151, 146, 100, 190, 225, 152, 43, 190, 71, 160, 24, 190, 200, 69, 15, 62, 208, 27, 189, 60, 66, 32, 66, 61, 230, 254, 167, 61, 59, 232, 36, 62, 57, 253, 159, 62, 252, 251, 91, 190, 196, 26, 27, 62, 174, 196, 227, 189, 247, 238, 251, 61, 240, 252, 251, 59, 224, 243, 182, 62, 174, 33, 249, 62, 241, 113, 15, 62, 88, 134, 251, 62, 167, 156, 185, 61, 89, 238, 25, 189, 59, 48, 18, 190, 94, 236, 58, 191, 176, 242, 28, 190, 37, 148, 180, 62, 12, 67, 93, 62, 203, 69, 157, 190, 204, 238, 114, 62, 227, 205, 9, 62, 156, 107, 214, 189, 50, 78, 221, 188, 153, 17, 163, 190, 148, 71, 122, 61, 204, 160, 42, 190, 218, 122, 200, 189, 66, 189, 199, 61, 34, 55, 131, 62, 237, 121, 241, 190, 151, 88, 251, 190, 242, 27, 205, 61, 158, 204, 173, 61, 31, 94, 127, 62, 210, 222, 154, 190, 120, 230, 32, 187, 113, 148, 199, 61, 241, 137, 34, 190, 204, 88, 131, 62, 96, 34, 137, 62, 135, 29, 171, 62, 178, 70, 227, 189, 201, 196, 97, 60, 238, 121, 27, 190, 146, 157, 128, 62, 224, 93, 237, 61, 90, 91, 56, 190, 127, 160, 12, 190, 130, 113, 172, 62, 146, 105, 117, 61, 148, 17, 184, 189, 137, 75, 141, 62, 196, 214, 175, 62, 32, 160, 20, 190, 140, 5, 46, 190, 236, 50, 210, 190, 28, 78, 146, 61, 172, 65, 134, 189, 107, 234, 207, 189, 149, 117, 72, 62, 32, 48, 95, 62, 115, 88, 85, 190, 234, 153, 252, 189, 57, 131, 76, 62, 224, 169, 15, 61, 8, 118, 85, 190, 150, 122, 229, 188, 47, 92, 203, 190, 17, 99, 114, 190, 79, 75, 188, 189, 114, 86, 196, 61, 34, 152, 48, 190, 26, 193, 75, 190, 95, 59, 14, 60, 253, 137, 30, 62, 85, 24, 224, 189, 160, 205, 86, 62, 182, 29, 12, 62, 40, 195, 201, 61, 108, 64, 79, 62, 95, 220, 22, 62, 107, 203, 103, 190, 219, 197, 120, 62, 174, 88, 20, 189, 163, 184, 185, 61, 171, 52, 106, 189, 253, 164, 152, 189, 240, 58, 126, 190, 57, 234, 183, 187, 188, 9, 56, 62, 187, 137, 184, 61, 35, 8, 28, 61, 109, 97, 156, 61, 232, 204, 1, 61, 169, 204, 118, 190, 193, 123, 167, 190, 7, 192, 128, 190, 156, 104, 146, 190, 95, 186, 30, 62, 143, 55, 32, 190, 189, 223, 18, 63, 18, 136, 185, 189, 72, 226, 201, 190, 0, 244, 160, 190, 245, 241, 137, 191, 43, 88, 166, 61, 81, 115, 15, 62, 128, 156, 239, 61, 50, 147, 53, 190, 153, 23, 238, 61, 102, 19, 160, 62, 177, 76, 149, 62, 197, 116, 186, 188, 27, 6, 14, 191, 16, 26, 16, 62, 154, 79, 192, 190, 122, 117, 199, 189, 39, 102, 40, 62, 241, 230, 24, 62, 74, 143, 113, 59, 192, 6, 15, 61, 227, 42, 207, 61, 18, 252, 13, 190, 245, 124, 21, 190, 73, 161, 184, 190, 175, 148, 108, 62, 143, 116, 82, 190, 242, 158, 43, 61, 166, 69, 82, 190, 149, 105, 12, 191, 173, 46, 31, 62, 168, 167, 225, 189, 128, 162, 149, 62, 181, 72, 150, 61, 31, 168, 156, 188, 253, 116, 187, 189, 53, 247, 40, 191, 112, 11, 132, 62, 204, 72, 187, 62, 231, 181, 186, 61, 159, 191, 3, 190, 147, 1, 94, 189, 65, 67, 181, 61, 98, 229, 130, 188, 251, 133, 160, 60, 200, 48, 70, 190, 145, 231, 65, 62, 50, 129, 139, 190, 237, 26, 12, 190, 92, 51, 81, 62, 182, 5, 173, 61, 226, 202, 148, 190, 208, 93, 28, 62, 132, 36, 191, 61, 253, 223, 131, 189, 98, 88, 142, 188, 57, 85, 217, 190, 221, 183, 72, 62, 5, 176, 50, 190, 14, 187, 164, 61, 13, 200, 231, 61, 192, 11, 206, 189, 251, 101, 57, 189, 180, 162, 44, 190, 146, 189, 236, 189, 220, 222, 9, 62, 121, 2, 8, 62, 120, 23, 232, 189, 169, 9, 4, 189, 132, 204, 136, 60, 123, 225, 160, 60, 40, 28, 183, 189, 160, 58, 22, 62, 172, 155, 253, 189, 62, 149, 114, 189, 66, 131, 37, 62, 84, 47, 5, 62, 46, 186, 191, 188, 156, 172, 40, 62, 13, 198, 135, 61, 42, 169, 243, 189, 9, 200, 152, 189, 198, 57, 119, 189, 116, 103, 167, 189, 50, 182, 6, 190, 44, 122, 198, 189, 142, 2, 209, 61, 158, 31, 223, 189, 149, 47, 219, 61, 253, 78, 229, 188, 129, 217, 159, 188, 243, 170, 3, 188, 205, 166, 135, 190, 122, 213, 18, 191, 208, 49, 202, 62, 3, 200, 7, 58, 109, 145, 250, 61, 191, 60, 255, 189, 33, 174, 39, 190, 111, 218, 101, 59, 176, 252, 90, 190, 104, 3, 148, 61, 146, 249, 231, 190, 187, 129, 236, 189, 253, 121, 150, 61, 146, 228, 60, 62, 235, 2, 103, 62, 81, 28, 240, 62, 249, 11, 106, 190, 191, 202, 254, 61, 25, 173, 3, 62, 129, 79, 144, 189, 94, 232, 207, 189, 95, 6, 72, 62, 228, 53, 60, 61, 162, 164, 2, 188, 50, 5, 21, 60, 8, 22, 142, 60, 222, 211, 86, 62, 249, 85, 130, 190, 156, 138, 230, 190, 22, 23, 17, 62, 70, 201, 72, 62, 38, 124, 145, 190, 89, 247, 243, 60, 181, 196, 6, 190, 45, 180, 63, 61, 237, 149, 147, 190, 118, 75, 74, 190, 178, 247, 31, 62, 66, 165, 234, 188, 220, 66, 2, 190, 249, 160, 146, 190, 10, 226, 234, 61, 18, 250, 2, 63, 201, 160, 89, 190, 178, 183, 149, 62, 207, 196, 51, 60, 84, 6, 15, 62, 11, 245, 166, 62, 23, 225, 110, 62, 114, 8, 237, 60, 244, 160, 185, 62, 1, 88, 198, 61, 92, 112, 33, 62, 167, 246, 62, 62, 97, 101, 135, 187, 220, 102, 71, 189, 105, 9, 155, 189, 95, 33, 175, 61, 47, 144, 120, 61, 88, 107, 163, 61, 225, 87, 36, 190, 15, 157, 196, 61, 70, 83, 2, 62, 45, 231, 100, 62, 204, 30, 39, 62, 253, 169, 152, 62, 142, 155, 166, 189, 35, 146, 201, 61, 203, 8, 225, 60, 117, 123, 44, 189, 246, 177, 16, 62, 1, 251, 72, 62, 251, 229, 30, 62, 27, 104, 33, 190, 1, 58, 38, 62, 108, 241, 142, 62, 62, 0, 143, 61, 130, 203, 86, 62, 22, 12, 7, 190, 153, 190, 142, 189, 95, 240, 104, 189, 96, 6, 96, 62, 251, 58, 149, 189, 239, 42, 1, 61, 156, 109, 77, 60, 253, 4, 249, 61, 162, 85, 183, 61, 33, 105, 90, 190, 215, 112, 4, 62, 169, 243, 172, 61, 45, 57, 95, 62, 40, 211, 46, 62, 126, 26, 167, 61, 188, 33, 178, 61, 71, 171, 53, 190, 80, 88, 132, 190, 11, 18, 172, 188, 235, 225, 179, 61, 55, 179, 141, 61, 142, 169, 178, 186, 242, 34, 134, 61, 114, 60, 25, 62, 246, 250, 87, 190, 16, 47, 133, 190, 126, 130, 68, 190, 190, 11, 110, 62, 48, 245, 121, 61, 177, 229, 20, 191, 58, 29, 142, 188, 82, 143, 185, 190, 85, 211, 199, 62, 159, 243, 176, 189, 69, 187, 104, 190, 164, 117, 40, 189, 145, 43, 132, 188, 100, 136, 1, 190, 190, 212, 198, 189, 191, 201, 143, 62, 21, 105, 19, 62, 60, 155, 157, 62, 33, 202, 119, 190, 35, 207, 130, 189, 205, 185, 229, 189, 96, 151, 100, 188, 217, 171, 172, 189, 214, 74, 166, 62, 15, 140, 132, 62, 84, 78, 114, 62, 16, 193, 168, 190, 20, 21, 77, 190, 198, 173, 151, 61, 119, 170, 196, 61, 96, 241, 195, 190, 140, 228, 52, 190, 61, 145, 135, 62, 200, 56, 63, 62, 228, 110, 17, 190, 122, 39, 228, 189, 164, 212, 159, 190, 196, 94, 7, 191, 104, 102, 150, 187, 18, 255, 97, 191, 233, 12, 36, 190, 38, 177, 56, 189, 90, 42, 175, 62, 86, 236, 171, 188, 55, 55, 45, 61, 197, 239, 178, 61, 179, 189, 154, 190, 112, 109, 209, 61, 120, 83, 154, 61, 183, 88, 15, 190, 69, 81, 10, 190, 173, 67, 158, 190, 17, 170, 25, 191, 121, 64, 194, 62, 209, 146, 99, 189, 208, 235, 118, 190, 227, 96, 138, 188, 53, 109, 115, 62, 43, 23, 182, 62, 179, 121, 183, 61, 238, 253, 112, 190, 233, 198, 18, 62, 249, 6, 126, 61, 68, 59, 13, 190, 82, 83, 172, 188, 107, 85, 2, 63, 94, 10, 11, 188, 11, 212, 98, 61, 239, 147, 53, 62, 115, 42, 218, 189, 74, 10, 87, 62, 134, 123, 129, 188, 226, 88, 78, 191, 187, 229, 132, 190, 204, 185, 53, 62, 30, 250, 228, 61, 36, 220, 159, 190, 95, 221, 168, 61, 95, 248, 22, 62, 143, 67, 4, 61, 31, 222, 140, 189, 109, 208, 212, 189, 0, 32, 128, 190, 110, 212, 149, 189, 63, 44, 12, 189, 109, 81, 170, 62, 74, 28, 87, 189, 127, 68, 133, 190, 65, 233, 98, 190, 106, 40, 186, 189, 171, 87, 4, 62, 161, 81, 136, 62, 131, 128, 236, 190, 71, 26, 140, 62, 233, 16, 214, 189, 249, 76, 47, 62, 228, 50, 0, 190, 84, 124, 125, 62, 172, 135, 143, 62, 3, 208, 65, 190, 59, 30, 155, 62, 8, 25, 159, 62, 30, 161, 184, 60, 93, 154, 221, 61, 255, 108, 200, 190, 238, 48, 182, 190, 143, 147, 40, 62, 82, 18, 227, 61, 197, 50, 92, 190, 125, 35, 128, 61, 201, 74, 98, 62, 206, 166, 227, 189, 176, 11, 220, 189, 217, 148, 1, 191, 181, 138, 25, 190, 3, 179, 139, 62, 99, 36, 128, 189, 65, 109, 173, 61, 85, 237, 100, 188, 179, 140, 205, 190, 149, 91, 175, 190, 100, 44, 7, 190, 240, 178, 58, 61, 12, 188, 59, 62, 171, 168, 230, 190, 184, 190, 233, 61, 249, 157, 5, 189, 55, 194, 222, 187, 199, 228, 31, 190, 40, 95, 97, 189, 255, 14, 160, 62, 221, 22, 237, 190, 173, 29, 14, 62, 104, 112, 201, 61, 7, 117, 76, 61, 197, 208, 197, 61, 65, 4, 191, 190, 114, 12, 248, 190, 99, 229, 141, 62, 214, 32, 209, 189, 103, 254, 70, 190, 24, 16, 49, 62, 240, 12, 56, 62, 124, 216, 209, 60, 247, 58, 208, 188, 1, 234, 183, 189, 136, 208, 132, 60, 190, 124, 194, 61, 178, 166, 219, 187, 17, 67, 95, 189, 129, 20, 94, 62, 140, 155, 77, 61, 155, 127, 227, 189, 209, 53, 182, 61, 91, 7, 97, 62, 122, 201, 144, 62, 68, 5, 33, 188, 148, 12, 75, 62, 16, 212, 73, 190, 37, 247, 70, 189, 150, 2, 64, 61, 137, 129, 10, 62, 221, 47, 39, 188, 119, 236, 38, 60, 150, 44, 50, 62, 193, 187, 92, 61, 135, 79, 0, 62, 177, 77, 154, 188, 188, 38, 4, 191, 186, 45, 233, 190, 142, 109, 143, 62, 202, 200, 145, 189, 53, 212, 14, 190, 226, 76, 39, 62, 127, 216, 138, 62, 126, 52, 126, 61, 61, 19, 81, 190, 225, 11, 160, 190, 188, 208, 217, 59, 162, 210, 78, 190, 53, 227, 112, 61, 54, 34, 139, 60, 182, 112, 88, 61, 49, 201, 198, 190, 82, 40, 161, 190, 48, 74, 242, 182, 219, 229, 162, 62, 215, 25, 144, 61, 115, 51, 128, 190, 225, 157, 76, 60, 226, 97, 234, 60, 163, 81, 162, 61, 149, 206, 78, 190, 61, 20, 180, 190, 83, 73, 203, 189, 223, 183, 243, 61, 110, 175, 140, 62, 199, 240, 5, 191, 254, 121, 183, 61, 123, 91, 160, 189, 247, 37, 138, 62, 108, 246, 90, 190, 226, 41, 65, 189, 54, 120, 189, 189, 96, 116, 22, 62, 23, 32, 225, 60, 0, 159, 173, 62, 226, 56, 168, 62, 197, 181, 223, 190, 201, 72, 247, 61, 158, 69, 11, 190, 172, 179, 233, 60, 193, 75, 39, 190, 197, 214, 50, 62, 50, 156, 146, 61, 73, 90, 153, 187, 75, 21, 82, 190, 109, 222, 190, 189, 202, 249, 11, 190, 77, 60, 43, 62, 30, 217, 169, 190, 202, 24, 173, 60, 49, 123, 43, 191, 122, 109, 249, 61, 119, 14, 22, 190, 239, 110, 118, 189, 141, 103, 45, 189, 22, 191, 153, 61, 132, 171, 137, 191, 36, 52, 179, 62, 125, 37, 5, 61, 15, 10, 82, 62, 218, 187, 60, 191, 143, 30, 77, 191, 219, 213, 73, 190, 97, 214, 175, 189, 25, 221, 3, 191, 197, 160, 165, 61, 254, 130, 193, 188, 243, 253, 124, 60, 215, 114, 135, 190, 198, 111, 28, 60, 27, 36, 58, 191, 69, 37, 105, 62, 111, 68, 4, 62, 46, 84, 153, 189, 158, 191, 192, 189, 127, 88, 44, 191, 248, 42, 16, 190, 142, 44, 92, 190, 37, 191, 14, 191, 233, 163, 108, 191, 201, 105, 40, 62, 237, 174, 81, 191, 35, 27, 66, 62, 218, 82, 0, 190, 202, 98, 79, 190, 129, 59, 70, 190, 230, 165, 160, 190, 217, 65, 38, 62, 71, 89, 18, 63, 147, 143, 159, 189, 85, 35, 63, 189, 251, 190, 163, 62, 123, 214, 61, 62, 46, 217, 188, 62, 129, 235, 239, 61, 28, 171, 144, 190, 223, 90, 52, 189, 138, 192, 60, 190, 171, 134, 206, 190, 30, 79, 70, 62, 98, 125, 126, 62, 47, 66, 134, 188, 88, 108, 30, 61, 19, 243, 172, 62, 154, 30, 178, 62, 176, 205, 86, 59, 177, 217, 27, 191, 207, 199, 229, 61, 125, 152, 232, 190};
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
                alignas(float) const unsigned char memory[] = {109, 120, 54, 190, 240, 66, 206, 61, 241, 93, 135, 189, 74, 197, 38, 60, 55, 193, 98, 61, 215, 219, 174, 189, 250, 152, 75, 190, 151, 151, 86, 189, 35, 143, 241, 189, 95, 245, 131, 62, 231, 227, 3, 62, 158, 124, 213, 189, 128, 8, 117, 190, 241, 118, 43, 189, 76, 112, 113, 61, 189, 2, 244, 187, 224, 239, 185, 61, 166, 142, 80, 60, 33, 144, 79, 189, 213, 229, 250, 189, 86, 110, 69, 190, 219, 63, 13, 62, 174, 74, 85, 62, 90, 57, 7, 189, 250, 51, 152, 189, 67, 10, 240, 61, 168, 24, 154, 62, 76, 81, 133, 61, 192, 206, 138, 60, 182, 235, 145, 188, 181, 86, 4, 190, 17, 92, 43, 62};
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
                alignas(float) const unsigned char memory[] = {121, 225, 8, 190, 63, 61, 32, 63, 203, 213, 215, 61, 67, 219, 113, 60, 120, 254, 223, 190, 28, 15, 128, 62, 209, 181, 135, 62, 74, 71, 237, 189, 59, 192, 103, 191, 219, 16, 65, 62, 230, 65, 200, 62, 51, 20, 6, 59, 70, 223, 64, 63, 91, 125, 152, 61, 89, 52, 185, 190, 208, 225, 113, 190, 143, 26, 225, 60, 193, 77, 16, 63, 10, 190, 110, 62, 158, 217, 150, 60, 90, 42, 214, 190, 196, 172, 215, 61, 87, 98, 39, 190, 210, 150, 115, 61, 166, 88, 58, 191, 168, 72, 19, 191, 235, 247, 242, 190, 92, 184, 52, 190, 139, 138, 225, 190, 231, 71, 93, 62, 237, 247, 147, 191, 200, 20, 186, 62, 87, 114, 1, 62, 32, 61, 190, 62, 12, 42, 22, 61, 144, 96, 247, 61, 247, 173, 129, 190, 108, 0, 32, 62, 33, 222, 64, 62, 209, 42, 35, 189, 233, 6, 38, 62, 27, 37, 128, 190, 166, 159, 223, 61, 16, 73, 72, 59, 99, 224, 229, 62, 171, 173, 232, 61, 57, 12, 103, 62, 193, 243, 200, 189, 54, 68, 29, 190, 203, 144, 133, 61, 181, 134, 9, 190, 184, 211, 23, 190, 227, 47, 166, 61, 149, 180, 183, 190, 20, 217, 71, 190, 231, 141, 238, 62, 114, 71, 100, 62, 97, 1, 234, 61, 248, 84, 33, 61, 195, 6, 134, 189, 59, 51, 231, 61, 167, 210, 76, 190, 93, 142, 10, 60, 244, 178, 186, 59};
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
                alignas(float) const unsigned char memory[] = {196, 67, 30, 62, 226, 227, 168, 190};
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
    alignas(float) const unsigned char memory[] = {141, 222, 69, 191, 9, 32, 172, 190, 188, 61, 171, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {126, 101, 170, 191, 82, 251, 55, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0038/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}