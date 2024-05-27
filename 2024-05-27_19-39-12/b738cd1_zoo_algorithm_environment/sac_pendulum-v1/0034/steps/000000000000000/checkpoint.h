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
                alignas(float) const unsigned char memory[] = {190, 133, 245, 61, 48, 133, 126, 189, 13, 53, 4, 191, 191, 104, 65, 62, 221, 75, 45, 62, 215, 222, 153, 62, 105, 85, 125, 62, 38, 26, 183, 189, 70, 112, 189, 190, 146, 111, 171, 190, 62, 110, 219, 62, 123, 218, 58, 61, 136, 79, 136, 190, 110, 65, 190, 189, 144, 205, 61, 190, 223, 217, 8, 191, 201, 2, 7, 62, 157, 94, 154, 61, 227, 245, 135, 189, 173, 67, 166, 190, 205, 228, 228, 62, 164, 22, 69, 61, 160, 143, 213, 62, 190, 52, 81, 62, 112, 172, 62, 62, 122, 104, 155, 62, 104, 71, 95, 188, 95, 120, 242, 188, 45, 75, 92, 62, 246, 150, 169, 62, 192, 240, 2, 190, 238, 159, 116, 190, 80, 185, 28, 190, 255, 33, 80, 61, 143, 55, 232, 190, 170, 97, 9, 63, 112, 96, 133, 190, 27, 131, 193, 62, 89, 109, 130, 62, 63, 242, 15, 62, 86, 165, 175, 61, 232, 196, 193, 62, 150, 252, 193, 189, 68, 137, 190, 62, 51, 206, 224, 190, 117, 45, 59, 62, 237, 22, 254, 190, 99, 95, 197, 190, 141, 69, 121, 190, 157, 173, 90, 190, 209, 193, 191, 190, 207, 16, 192, 61, 29, 26, 234, 60, 203, 31, 130, 189, 245, 244, 14, 63, 182, 170, 66, 61, 22, 125, 144, 190, 26, 138, 149, 62, 131, 232, 52, 62, 69, 35, 7, 63, 72, 174, 4, 190, 125, 240, 130, 61, 183, 226, 238, 190, 207, 190, 9, 191, 5, 92, 158, 62, 87, 192, 2, 190, 103, 119, 236, 190, 16, 239, 199, 190, 19, 208, 130, 62, 206, 84, 9, 63, 112, 114, 95, 62, 103, 77, 1, 62, 186, 229, 94, 189, 1, 192, 174, 189, 180, 144, 55, 61, 44, 79, 17, 190, 99, 77, 4, 191, 74, 216, 152, 190, 2, 118, 17, 191, 207, 210, 245, 190, 160, 218, 202, 190, 13, 153, 123, 189, 149, 128, 147, 189, 107, 33, 183, 190, 134, 169, 191, 190, 128, 149, 218, 62, 15, 85, 7, 189, 216, 247, 125, 189, 140, 105, 15, 191, 247, 154, 153, 61, 226, 193, 2, 62, 239, 136, 233, 190, 77, 246, 159, 57, 118, 48, 203, 62, 28, 249, 192, 62, 132, 221, 243, 189};
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
                alignas(float) const unsigned char memory[] = {127, 184, 19, 191, 46, 164, 45, 62, 148, 205, 162, 62, 93, 17, 246, 190, 66, 221, 56, 188, 233, 112, 4, 62, 221, 248, 8, 62, 25, 214, 141, 61, 137, 185, 185, 190, 245, 113, 211, 190, 39, 15, 45, 62, 112, 57, 179, 62, 155, 30, 84, 61, 96, 88, 82, 190, 35, 126, 11, 191, 214, 144, 64, 62, 36, 151, 25, 61, 120, 16, 194, 190, 177, 244, 105, 62, 75, 97, 0, 63, 215, 255, 11, 63, 133, 169, 3, 190, 92, 49, 14, 63, 125, 150, 125, 190, 54, 128, 182, 189, 39, 178, 180, 62, 113, 167, 13, 190, 101, 70, 115, 62, 114, 206, 211, 189, 160, 61, 217, 61, 24, 110, 186, 190, 122, 67, 2, 63};
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
                alignas(float) const unsigned char memory[] = {252, 201, 11, 190, 142, 216, 36, 190, 40, 49, 233, 61, 44, 135, 172, 189, 4, 87, 251, 61, 66, 223, 162, 58, 174, 220, 203, 60, 160, 3, 82, 187, 42, 138, 243, 189, 132, 64, 149, 60, 5, 202, 9, 61, 101, 186, 94, 61, 185, 199, 175, 188, 137, 19, 74, 188, 31, 221, 227, 189, 174, 56, 244, 188, 238, 221, 139, 189, 219, 223, 39, 62, 181, 141, 196, 61, 129, 232, 234, 61, 69, 137, 17, 190, 135, 124, 187, 189, 184, 82, 72, 61, 194, 197, 0, 189, 86, 241, 49, 62, 14, 61, 236, 189, 157, 45, 44, 190, 201, 121, 188, 188, 227, 202, 212, 61, 225, 57, 186, 61, 144, 20, 14, 190, 181, 165, 124, 61, 43, 118, 54, 61, 76, 213, 11, 190, 89, 136, 50, 62, 221, 164, 169, 60, 31, 189, 26, 62, 184, 108, 42, 62, 13, 182, 244, 189, 91, 91, 73, 189, 36, 166, 4, 61, 34, 47, 52, 62, 102, 87, 198, 189, 0, 32, 128, 61, 254, 0, 148, 187, 147, 182, 207, 61, 40, 64, 1, 62, 104, 176, 165, 61, 176, 207, 1, 189, 153, 194, 29, 62, 44, 20, 193, 189, 212, 79, 239, 61, 206, 91, 135, 189, 129, 70, 29, 61, 30, 188, 222, 61, 87, 44, 67, 60, 135, 228, 206, 61, 207, 26, 226, 61, 197, 51, 184, 61, 145, 235, 5, 190, 90, 209, 6, 187, 32, 240, 150, 61, 183, 7, 48, 190, 161, 8, 38, 61, 177, 188, 232, 189, 75, 93, 146, 189, 225, 54, 0, 190, 41, 194, 50, 189, 20, 238, 3, 62, 114, 160, 11, 190, 154, 176, 223, 60, 92, 21, 145, 60, 124, 68, 10, 189, 54, 50, 213, 61, 208, 96, 7, 190, 106, 100, 224, 61, 197, 33, 51, 190, 207, 12, 46, 61, 46, 155, 80, 187, 83, 6, 228, 189, 112, 48, 130, 61, 34, 219, 14, 189, 167, 121, 110, 60, 117, 115, 219, 188, 65, 212, 35, 190, 78, 228, 43, 190, 105, 160, 165, 61, 231, 142, 38, 62, 7, 161, 115, 61, 49, 1, 49, 190, 94, 168, 53, 189, 130, 108, 205, 189, 15, 1, 158, 189, 55, 20, 42, 62, 234, 26, 12, 190, 150, 11, 62, 189, 155, 96, 47, 62, 195, 67, 23, 190, 85, 140, 140, 189, 36, 244, 252, 189, 92, 49, 39, 190, 114, 157, 6, 62, 5, 211, 189, 61, 73, 233, 56, 61, 167, 171, 124, 60, 2, 124, 32, 61, 14, 176, 34, 190, 147, 72, 48, 190, 117, 87, 255, 61, 183, 185, 30, 189, 170, 130, 69, 189, 3, 131, 193, 189, 128, 32, 203, 61, 247, 59, 12, 189, 126, 211, 41, 62, 26, 88, 51, 189, 249, 186, 28, 190, 165, 75, 209, 60, 182, 122, 45, 190, 151, 225, 41, 190, 141, 165, 28, 190, 122, 173, 122, 188, 187, 16, 238, 189, 170, 65, 46, 61, 134, 55, 12, 62, 35, 119, 231, 61, 58, 176, 228, 189, 63, 35, 163, 189, 22, 74, 51, 190, 232, 37, 138, 189, 37, 161, 2, 62, 205, 230, 173, 61, 195, 87, 40, 190, 192, 202, 175, 187, 10, 207, 21, 188, 80, 27, 244, 61, 28, 148, 29, 61, 52, 147, 124, 189, 239, 59, 243, 189, 91, 205, 81, 61, 242, 106, 224, 188, 146, 117, 198, 189, 177, 189, 31, 62, 121, 62, 224, 189, 112, 113, 187, 188, 101, 39, 207, 61, 249, 237, 7, 62, 122, 40, 209, 61, 123, 130, 22, 189, 35, 213, 154, 61, 19, 63, 251, 188, 225, 179, 114, 60, 187, 223, 137, 61, 27, 202, 199, 61, 84, 127, 29, 62, 75, 56, 40, 190, 24, 224, 223, 189, 247, 69, 50, 62, 252, 141, 238, 59, 135, 81, 225, 60, 27, 159, 234, 189, 118, 251, 165, 60, 48, 225, 129, 61, 56, 72, 206, 189, 21, 95, 74, 189, 216, 125, 229, 61, 68, 111, 62, 189, 172, 0, 85, 189, 139, 104, 193, 188, 100, 233, 238, 189, 32, 31, 44, 62, 244, 107, 30, 62, 126, 52, 33, 62, 237, 49, 248, 189, 102, 67, 6, 187, 207, 22, 13, 190, 137, 142, 137, 61, 210, 43, 248, 188, 92, 202, 35, 189, 179, 148, 230, 60, 112, 254, 93, 60, 1, 133, 23, 61, 185, 162, 50, 190, 148, 91, 102, 61, 187, 22, 48, 62, 162, 244, 13, 190, 251, 203, 78, 188, 251, 6, 121, 187, 229, 25, 4, 62, 59, 52, 31, 190, 45, 86, 171, 61, 156, 66, 150, 185, 190, 199, 243, 60, 40, 229, 4, 190, 187, 44, 24, 190, 179, 122, 31, 190, 221, 200, 37, 62, 250, 21, 185, 61, 9, 48, 75, 61, 223, 113, 98, 61, 93, 152, 214, 60, 160, 78, 199, 61, 76, 53, 173, 61, 246, 165, 31, 62, 213, 53, 12, 62, 159, 46, 144, 59, 146, 182, 115, 61, 186, 151, 48, 62, 237, 158, 239, 57, 186, 195, 197, 189, 158, 255, 28, 190, 176, 250, 7, 190, 230, 225, 18, 62, 177, 175, 177, 189, 92, 80, 11, 190, 199, 200, 16, 190, 107, 71, 255, 189, 64, 203, 29, 190, 2, 29, 219, 189, 174, 214, 31, 60, 128, 9, 171, 189, 47, 215, 134, 188, 125, 217, 40, 190, 82, 124, 38, 62, 99, 144, 44, 190, 42, 203, 6, 60, 221, 246, 12, 61, 166, 117, 197, 58, 212, 118, 11, 190, 72, 226, 7, 190, 31, 16, 116, 189, 3, 4, 36, 62, 242, 116, 68, 61, 255, 181, 98, 60, 219, 116, 151, 189, 228, 99, 35, 62, 244, 181, 14, 61, 63, 159, 197, 61, 58, 198, 54, 61, 109, 33, 176, 61, 243, 86, 198, 61, 56, 153, 157, 189, 101, 234, 38, 189, 83, 174, 137, 189, 122, 118, 147, 61, 4, 1, 91, 189, 117, 217, 204, 61, 247, 64, 38, 189, 36, 219, 49, 62, 148, 59, 254, 189, 75, 102, 90, 189, 232, 29, 215, 61, 113, 125, 150, 61, 98, 82, 39, 61, 211, 250, 9, 189, 225, 150, 4, 190, 181, 82, 201, 189, 119, 245, 59, 188, 186, 200, 255, 189, 33, 20, 104, 189, 255, 63, 38, 190, 17, 156, 75, 61, 9, 33, 156, 60, 122, 228, 50, 58, 191, 89, 31, 62, 161, 207, 28, 190, 173, 48, 236, 61, 82, 180, 255, 61, 152, 139, 224, 61, 237, 230, 166, 60, 71, 236, 46, 190, 113, 28, 48, 190, 174, 218, 0, 62, 90, 75, 122, 189, 136, 119, 64, 61, 120, 228, 192, 189, 22, 56, 249, 189, 209, 45, 162, 61, 42, 102, 29, 62, 138, 234, 32, 188, 255, 178, 30, 61, 31, 174, 115, 189, 130, 239, 22, 189, 108, 74, 196, 61, 34, 148, 161, 61, 48, 199, 52, 190, 214, 131, 217, 189, 131, 28, 56, 61, 6, 33, 50, 190, 0, 133, 232, 189, 197, 30, 93, 189, 129, 45, 201, 189, 226, 187, 246, 61, 251, 245, 3, 61, 164, 206, 48, 190, 212, 241, 108, 60, 209, 35, 47, 62, 131, 4, 32, 190, 129, 250, 40, 62, 151, 21, 43, 190, 20, 229, 206, 189, 126, 32, 3, 190, 145, 205, 241, 189, 2, 159, 3, 62, 159, 76, 200, 61, 81, 5, 195, 61, 49, 58, 184, 189, 21, 177, 153, 189, 202, 153, 28, 190, 205, 212, 1, 61, 75, 153, 147, 189, 136, 233, 1, 187, 188, 36, 169, 189, 52, 189, 5, 189, 68, 248, 88, 189, 74, 218, 29, 189, 113, 177, 48, 187, 224, 8, 113, 189, 9, 61, 17, 190, 151, 78, 29, 190, 194, 178, 254, 61, 38, 239, 122, 188, 122, 111, 211, 188, 47, 71, 175, 60, 111, 26, 48, 61, 45, 90, 130, 189, 60, 239, 227, 61, 82, 226, 197, 189, 147, 40, 150, 189, 164, 15, 24, 190, 109, 104, 111, 189, 11, 74, 45, 62, 179, 215, 0, 190, 146, 248, 207, 189, 178, 214, 246, 189, 163, 230, 44, 62, 164, 188, 10, 190, 115, 95, 12, 62, 184, 121, 31, 190, 234, 213, 3, 190, 55, 139, 168, 189, 168, 21, 122, 189, 104, 184, 28, 190, 235, 137, 39, 190, 214, 43, 226, 61, 83, 219, 145, 189, 202, 201, 27, 62, 211, 88, 138, 61, 80, 244, 184, 61, 210, 241, 254, 60, 249, 176, 23, 62, 29, 230, 16, 186, 123, 144, 192, 59, 35, 184, 1, 62, 140, 29, 151, 187, 76, 118, 164, 189, 189, 171, 27, 190, 222, 17, 187, 61, 198, 89, 138, 61, 68, 119, 247, 61, 126, 168, 235, 60, 92, 140, 52, 190, 208, 62, 5, 62, 65, 72, 232, 189, 178, 171, 0, 62, 167, 160, 222, 61, 146, 55, 37, 190, 203, 136, 4, 61, 169, 89, 114, 61, 38, 28, 239, 189, 185, 207, 55, 189, 38, 97, 202, 189, 112, 149, 33, 62, 147, 80, 171, 61, 47, 183, 49, 62, 181, 114, 57, 61, 218, 119, 198, 61, 119, 202, 169, 189, 32, 62, 45, 189, 150, 82, 9, 62, 220, 67, 120, 188, 102, 34, 238, 189, 122, 124, 46, 190, 125, 227, 153, 189, 210, 70, 216, 189, 70, 227, 58, 189, 0, 135, 196, 59, 4, 190, 27, 61, 223, 188, 47, 190, 234, 172, 226, 189, 62, 101, 52, 62, 66, 49, 39, 190, 0, 86, 13, 62, 254, 89, 195, 61, 223, 83, 25, 62, 146, 171, 93, 188, 165, 94, 111, 189, 175, 107, 226, 188, 214, 7, 21, 61, 14, 170, 9, 190, 216, 101, 131, 61, 187, 221, 129, 188, 161, 178, 16, 62, 34, 105, 243, 61, 186, 58, 136, 188, 47, 167, 43, 62, 30, 134, 226, 189, 20, 195, 184, 59, 8, 155, 95, 60, 186, 160, 158, 189, 160, 104, 41, 187, 42, 151, 41, 61, 78, 10, 169, 61, 11, 14, 220, 189, 198, 108, 122, 61, 253, 137, 10, 62, 192, 147, 31, 190, 194, 250, 244, 188, 53, 182, 19, 62, 160, 210, 184, 61, 38, 226, 64, 60, 57, 172, 1, 190, 239, 220, 123, 61, 65, 236, 212, 60, 184, 112, 27, 190, 98, 146, 101, 188, 223, 50, 4, 189, 79, 80, 197, 189, 100, 21, 53, 60, 134, 137, 18, 62, 108, 205, 196, 189, 52, 159, 18, 189, 173, 180, 242, 61, 78, 210, 19, 190, 128, 45, 253, 189, 227, 66, 244, 61, 193, 99, 219, 189, 55, 27, 12, 190, 14, 142, 134, 189, 162, 205, 170, 189, 158, 47, 10, 62, 220, 34, 97, 60, 1, 125, 160, 61, 16, 145, 138, 61, 66, 129, 0, 62, 89, 161, 12, 190, 71, 142, 49, 62, 22, 243, 209, 189, 86, 150, 244, 189, 156, 225, 190, 189, 0, 196, 244, 61, 67, 93, 18, 62, 246, 226, 215, 189, 182, 191, 215, 188, 253, 239, 46, 60, 148, 155, 26, 190, 8, 147, 12, 190, 15, 195, 251, 60, 209, 163, 145, 188, 203, 2, 66, 189, 81, 116, 251, 61, 202, 192, 245, 189, 176, 225, 234, 189, 4, 132, 234, 59, 101, 225, 157, 61, 229, 102, 246, 189, 85, 122, 11, 190, 203, 152, 122, 187, 6, 191, 163, 61, 50, 17, 136, 189, 246, 142, 244, 189, 168, 159, 18, 62, 115, 56, 186, 189, 46, 218, 44, 190, 30, 224, 1, 190, 239, 86, 171, 189, 80, 167, 195, 188, 224, 196, 1, 190, 198, 205, 214, 189, 3, 124, 168, 60, 50, 70, 115, 189, 213, 38, 14, 190, 187, 44, 73, 189, 100, 220, 148, 61, 2, 21, 218, 61, 41, 64, 76, 60, 203, 149, 8, 190, 219, 165, 201, 61, 210, 20, 27, 190, 98, 164, 7, 190, 203, 64, 163, 60, 91, 132, 247, 61, 60, 119, 194, 61, 116, 102, 70, 189, 174, 13, 19, 62, 141, 207, 221, 189, 26, 151, 22, 62, 47, 250, 40, 189, 183, 253, 41, 189, 211, 116, 41, 61, 201, 216, 233, 189, 185, 72, 99, 60, 243, 66, 36, 62, 16, 143, 35, 190, 245, 42, 210, 60, 245, 177, 22, 190, 106, 157, 178, 61, 147, 68, 175, 188, 78, 174, 180, 188, 212, 111, 43, 190, 96, 235, 253, 61, 131, 117, 47, 189, 2, 196, 205, 61, 185, 4, 92, 61, 175, 163, 49, 62, 67, 202, 19, 190, 35, 238, 28, 61, 255, 8, 218, 61, 210, 19, 156, 188, 120, 195, 215, 61, 166, 226, 158, 61, 189, 108, 177, 187, 2, 210, 14, 190, 224, 55, 130, 189, 122, 209, 25, 62, 41, 231, 188, 189, 108, 203, 186, 61, 74, 233, 141, 189, 204, 129, 116, 59, 245, 221, 0, 62, 123, 189, 24, 62, 47, 225, 224, 189, 228, 206, 131, 61, 206, 137, 45, 62, 6, 106, 149, 61, 47, 143, 79, 61, 177, 133, 27, 189, 66, 91, 100, 60, 21, 68, 29, 190, 62, 73, 151, 61, 160, 0, 19, 190, 237, 148, 236, 189, 169, 68, 32, 190, 119, 254, 111, 189, 208, 184, 232, 189, 86, 194, 88, 61, 234, 65, 243, 189, 224, 222, 15, 190, 155, 192, 184, 60, 50, 192, 16, 61, 5, 41, 146, 188, 51, 247, 93, 189, 247, 33, 2, 189, 152, 11, 213, 189, 145, 213, 51, 189, 195, 135, 47, 189, 253, 18, 119, 189, 71, 17, 51, 190, 248, 220, 32, 61, 89, 130, 156, 188, 23, 46, 150, 189, 78, 151, 230, 60, 135, 136, 13, 61, 59, 237, 13, 190, 189, 253, 221, 61, 240, 237, 164, 189, 25, 242, 200, 189, 250, 156, 197, 189, 202, 166, 231, 60, 74, 249, 181, 61, 167, 43, 11, 189, 30, 168, 134, 189, 248, 35, 17, 62, 14, 239, 32, 189, 138, 74, 169, 61, 11, 101, 45, 190, 144, 196, 40, 190, 185, 65, 184, 61, 146, 69, 24, 189, 9, 3, 171, 189, 108, 162, 38, 190, 93, 184, 211, 61, 155, 106, 4, 62, 228, 155, 142, 61, 139, 63, 132, 61, 179, 175, 221, 189, 28, 218, 219, 61, 77, 200, 42, 61, 159, 113, 194, 60, 27, 98, 245, 61, 80, 234, 188, 189, 173, 119, 32, 188, 45, 10, 21, 62, 209, 116, 9, 189, 222, 211, 210, 189, 26, 3, 255, 61, 248, 166, 174, 61, 171, 220, 106, 188, 210, 127, 31, 190, 63, 138, 42, 190, 200, 45, 194, 187, 68, 15, 217, 61, 220, 102, 219, 61, 132, 255, 239, 189, 252, 162, 186, 61, 252, 233, 70, 61, 238, 115, 32, 190, 249, 17, 190, 61, 9, 214, 172, 61, 240, 119, 142, 189, 11, 249, 221, 60, 161, 134, 250, 60, 123, 84, 161, 189, 85, 31, 196, 61, 213, 228, 228, 61, 175, 249, 217, 186, 218, 95, 161, 188, 158, 59, 31, 190, 173, 205, 20, 189, 143, 239, 193, 59, 44, 220, 251, 61, 168, 176, 221, 60, 50, 140, 33, 62, 22, 202, 30, 190, 199, 151, 47, 62, 197, 145, 21, 190, 71, 160, 50, 190, 37, 7, 16, 190, 83, 208, 172, 189, 18, 199, 206, 189, 8, 232, 1, 62, 193, 139, 237, 189, 44, 66, 128, 61, 250, 8, 247, 60, 71, 171, 45, 190, 188, 253, 199, 189, 79, 163, 40, 189, 68, 102, 129, 189, 250, 141, 27, 62, 1, 146, 249, 61, 247, 211, 213, 61, 137, 10, 211, 61, 159, 2, 15, 190, 18, 21, 212, 58, 168, 133, 237, 188, 58, 25, 230, 189, 193, 237, 118, 60, 142, 129, 35, 62, 194, 1, 45, 62, 197, 45, 40, 190, 49, 33, 17, 190, 150, 156, 11, 190, 20, 25, 161, 189, 221, 135, 248, 189, 143, 55, 146, 61, 16, 26, 196, 188, 30, 175, 104, 60, 251, 63, 47, 61, 98, 79, 242, 188, 40, 12, 19, 189, 224, 47, 15, 62, 194, 199, 145, 61, 201, 76, 148, 189, 170, 175, 202, 189, 14, 24, 237, 61, 143, 23, 241, 61, 219, 87, 66, 61, 196, 156, 49, 190, 121, 155, 244, 189, 80, 251, 195, 61, 187, 5, 146, 60, 32, 39, 0, 62, 200, 184, 226, 60, 49, 147, 0, 190, 94, 250, 68, 61, 157, 129, 254, 60, 46, 5, 53, 189, 116, 115, 37, 61, 179, 151, 138, 61, 12, 44, 123, 188, 238, 101, 171, 61, 26, 207, 26, 62, 182, 234, 193, 189, 18, 47, 48, 189, 203, 0, 177, 61, 61, 111, 43, 190, 68, 159, 37, 62, 105, 144, 208, 189, 6, 219, 28, 189, 163, 103, 29, 190, 83, 35, 173, 189, 142, 173, 136, 61, 183, 97, 47, 190, 39, 111, 157, 61, 117, 164, 217, 61, 207, 52, 117, 189, 181, 27, 133, 61, 247, 52, 249, 189, 168, 139, 50, 190, 207, 154, 247, 61, 25, 62, 220, 61, 223, 59, 133, 61, 106, 201, 26, 190, 132, 6, 217, 61, 204, 23, 211, 60, 43, 210, 138, 188, 135, 175, 29, 62, 22, 164, 199, 61, 77, 242, 138, 187, 37, 110, 26, 62, 171, 135, 88, 61, 16, 119, 197, 58, 84, 183, 10, 190, 31, 229, 253, 61, 111, 98, 225, 61, 115, 190, 39, 190, 200, 204, 154, 189, 229, 98, 97, 189, 233, 126, 152, 61, 28, 203, 237, 189, 132, 176, 28, 62, 173, 132, 56, 60, 197, 58, 6, 62, 108, 167, 5, 62, 250, 80, 254, 189, 66, 58, 3, 189, 125, 194, 0, 186, 199, 234, 252, 189, 145, 36, 12, 62, 172, 50, 44, 189, 165, 86, 51, 190, 33, 153, 41, 190, 213, 191, 211, 189, 25, 194, 121, 188, 75, 122, 245, 61, 142, 1, 196, 188, 108, 186, 162, 61, 64, 213, 132, 61, 58, 83, 194, 61, 146, 70, 17, 190, 249, 24, 109, 189, 207, 156, 211, 61, 168, 144, 64, 189, 139, 101, 56, 61, 154, 223, 206, 60, 223, 201, 40, 62, 17, 158, 211, 189, 123, 119, 214, 59, 112, 231, 63, 61, 64, 89, 145, 61, 243, 122, 162, 189, 115, 42, 27, 190, 38, 197, 214, 189, 241, 190, 103, 189, 93, 210, 17, 62, 175, 200, 47, 190, 145, 187, 36, 190, 54, 132, 24, 190, 43, 107, 220, 189, 90, 51, 196, 189, 96, 139, 62, 189, 3, 144, 24, 190, 253, 195, 32, 190, 194, 224, 184, 189, 228, 22, 228, 189, 131, 97, 233, 189, 205, 230, 83, 189, 27, 196, 208, 189, 184, 147, 41, 190, 22, 126, 225, 189, 134, 188, 128, 188, 31, 124, 130, 188, 2, 65, 138, 189, 210, 164, 11, 189, 160, 77, 232, 61, 199, 41, 63, 61, 104, 195, 15, 190, 156, 50, 129, 60, 2, 187, 201, 189, 235, 40, 49, 190, 191, 161, 238, 189, 158, 224, 36, 188, 159, 230, 10, 190, 43, 189, 162, 189, 222, 141, 28, 190, 94, 28, 182, 61, 207, 126, 245, 60, 152, 251, 21, 190, 168, 23, 229, 61, 117, 155, 15, 190, 148, 128, 209, 61, 25, 178, 39, 189, 68, 76, 176, 189, 174, 5, 101, 189, 132, 58, 155, 59, 204, 93, 140, 61, 104, 201, 59, 61, 62, 194, 22, 62, 100, 29, 212, 189, 241, 160, 43, 62, 224, 101, 215, 189, 173, 57, 193, 61, 143, 7, 202, 60, 78, 105, 1, 62, 69, 210, 223, 189, 180, 233, 183, 189, 39, 134, 248, 60, 85, 27, 104, 61, 238, 27, 155, 189, 55, 59, 240, 189, 207, 126, 96, 189, 13, 163, 34, 190, 231, 157, 58, 189, 82, 176, 106, 61, 126, 229, 179, 189, 207, 47, 227, 61, 19, 17, 6, 62, 219, 91, 139, 189, 36, 180, 186, 61, 181, 108, 222, 189, 54, 119, 112, 61, 139, 92, 146, 189, 146, 240, 206, 189, 117, 61, 18, 190, 37, 64, 190, 60, 183, 126, 9, 59, 76, 244, 192, 189, 158, 199, 159, 61, 10, 135, 184, 189, 123, 83, 130, 189, 117, 33, 227, 188, 1, 102, 197, 187, 48, 197, 132, 61, 49, 150, 136, 189, 184, 156, 15, 190, 86, 135, 174, 60, 92, 67, 164, 189, 142, 169, 136, 61, 162, 212, 92, 61, 127, 63, 242, 188, 74, 39, 187, 61, 59, 179, 65, 61, 190, 172, 133, 60, 73, 80, 216, 189, 117, 148, 150, 59, 39, 236, 34, 62, 75, 127, 11, 62, 79, 161, 0, 189, 13, 166, 80, 61, 146, 52, 40, 190, 195, 150, 4, 62, 112, 95, 147, 61, 116, 218, 173, 189, 252, 138, 22, 190, 0, 254, 226, 61, 56, 202, 83, 189, 140, 31, 50, 59, 119, 7, 148, 61, 107, 194, 234, 186, 10, 213, 78, 189, 48, 72, 36, 190, 119, 130, 52, 190, 36, 3, 107, 61, 103, 183, 50, 190, 98, 13, 16, 190, 78, 41, 6, 190, 69, 186, 145, 189, 72, 233, 26, 62, 188, 134, 45, 62, 2, 130, 253, 189, 154, 73, 235, 189, 36, 83, 17, 190, 108, 154, 32, 190, 81, 97, 204, 61, 206, 81, 61, 187, 131, 138, 235, 189, 193, 201, 207, 189, 185, 166, 11, 189, 127, 237, 169, 61, 23, 4, 214, 61, 96, 183, 249, 189, 110, 209, 229, 189, 24, 11, 34, 190, 150, 141, 26, 62, 35, 186, 88, 189, 187, 184, 211, 189, 207, 134, 16, 190, 208, 255, 12, 190, 223, 104, 2, 62, 100, 163, 77, 60, 55, 2, 254, 189, 96, 72, 146, 60, 253, 177, 68, 189, 137, 248, 139, 61, 132, 106, 150, 188, 79, 155, 89, 61, 221, 88, 30, 61, 63, 112, 184, 189, 151, 52, 36, 189, 134, 252, 190, 61, 24, 152, 19, 61, 11, 88, 150, 188, 67, 9, 28, 190, 97, 248, 215, 61, 42, 48, 191, 59, 244, 8, 3, 62, 107, 234, 187, 60, 122, 29, 37, 62, 97, 53, 128, 61, 241, 155, 214, 188, 150, 235, 0, 190, 55, 234, 26, 61, 140, 222, 255, 188, 74, 11, 156, 61, 43, 89, 73, 60, 240, 117, 146, 61, 41, 5, 21, 190, 187, 222, 233, 58, 117, 239, 129, 189, 12, 208, 86, 187, 224, 61, 132, 61, 54, 154, 37, 190, 166, 244, 147, 61, 15, 154, 209, 61, 166, 247, 140, 61, 56, 144, 229, 60, 169, 217, 65, 61, 201, 120, 153, 189, 29, 89, 128, 189, 73, 128, 112, 189, 184, 77, 151, 189, 38, 75, 20, 57, 38, 113, 200, 189, 65, 162, 23, 62, 81, 128, 238, 61, 104, 253, 121, 186, 104, 71, 241, 189, 164, 238, 42, 190, 30, 250, 160, 189, 6, 59, 40, 62, 214, 87, 142, 189, 57, 87, 146, 187, 173, 75, 217, 189, 47, 218, 158, 61, 247, 100, 157, 61, 160, 188, 8, 62, 92, 125, 171, 189, 39, 108, 34, 62, 98, 110, 123, 61, 170, 235, 177, 60, 150, 255, 36, 62, 60, 176, 176, 189, 85, 241, 160, 189, 56, 249, 188, 61, 200, 30, 9, 62, 186, 138, 30, 190, 88, 141, 17, 188, 229, 71, 226, 189, 87, 217, 247, 189, 225, 16, 24, 60, 133, 78, 130, 189, 85, 146, 6, 62, 11, 18, 179, 61, 5, 47, 48, 190, 217, 0, 150, 187, 9, 215, 11, 62, 10, 233, 128, 189, 3, 44, 156, 189, 66, 10, 14, 186, 202, 99, 175, 61, 7, 220, 230, 60, 85, 235, 249, 189, 20, 246, 35, 188, 104, 226, 198, 61, 135, 106, 26, 62, 57, 192, 50, 62, 190, 131, 137, 61, 32, 67, 186, 188, 15, 254, 72, 61, 182, 125, 232, 189, 152, 238, 49, 190, 142, 68, 127, 189, 158, 41, 21, 62, 254, 148, 14, 190, 233, 83, 39, 189, 104, 200, 26, 60, 100, 223, 9, 61, 79, 94, 49, 61, 139, 249, 51, 190, 229, 37, 70, 187, 91, 17, 196, 61, 206, 34, 143, 60, 231, 98, 161, 61, 56, 107, 82, 60, 68, 211, 45, 190, 246, 9, 43, 62, 30, 228, 127, 61, 10, 205, 128, 189, 225, 211, 233, 61, 13, 40, 47, 190, 74, 55, 236, 189, 74, 69, 136, 60, 17, 233, 169, 189, 49, 161, 25, 61, 113, 62, 199, 186, 85, 156, 189, 189, 173, 186, 116, 189, 43, 98, 202, 189, 220, 46, 0, 62, 125, 143, 239, 189, 45, 94, 22, 62, 242, 47, 31, 190, 28, 19, 161, 59, 229, 153, 235, 189, 40, 146, 230, 61, 194, 217, 225, 188, 96, 214, 20, 62, 21, 241, 48, 190, 139, 8, 148, 189, 142, 71, 6, 189, 196, 184, 24, 190, 139, 85, 111, 61, 246, 108, 242, 189, 101, 195, 0, 189};
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
                alignas(float) const unsigned char memory[] = {177, 56, 116, 189, 64, 151, 125, 61, 178, 182, 131, 188, 164, 147, 6, 62, 140, 18, 226, 61, 67, 177, 52, 190, 115, 19, 8, 62, 114, 17, 146, 189, 163, 253, 162, 189, 206, 31, 173, 189, 152, 187, 219, 61, 68, 252, 199, 189, 47, 182, 88, 186, 164, 200, 26, 62, 161, 60, 193, 189, 157, 77, 218, 189, 208, 79, 248, 189, 225, 8, 234, 189, 242, 155, 38, 62, 80, 211, 110, 189, 227, 145, 206, 188, 226, 101, 193, 61, 186, 49, 49, 190, 31, 77, 18, 190, 89, 2, 148, 61, 64, 207, 32, 190, 84, 94, 6, 190, 230, 32, 20, 62, 253, 218, 52, 190, 140, 99, 237, 189, 250, 37, 153, 61, 151, 67, 15, 190};
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
                alignas(float) const unsigned char memory[] = {241, 183, 167, 189, 142, 255, 193, 187, 112, 148, 30, 190, 203, 155, 154, 61, 217, 85, 207, 189, 120, 145, 21, 62, 11, 157, 30, 62, 4, 215, 250, 61, 14, 49, 16, 62, 137, 38, 104, 189, 5, 191, 212, 189, 240, 208, 130, 189, 207, 24, 36, 190, 39, 252, 6, 61, 167, 125, 13, 190, 248, 111, 38, 190, 98, 194, 31, 62, 182, 56, 38, 190, 18, 76, 39, 62, 27, 17, 43, 62, 182, 206, 42, 62, 75, 123, 28, 62, 185, 187, 9, 62, 105, 162, 3, 60, 14, 196, 200, 188, 47, 42, 15, 188, 82, 159, 11, 190, 205, 249, 203, 61, 165, 132, 14, 190, 31, 109, 90, 189, 119, 131, 141, 187, 105, 29, 215, 189, 212, 102, 19, 190, 116, 108, 74, 61, 210, 46, 209, 61, 91, 196, 42, 62, 87, 20, 33, 190, 112, 61, 123, 61, 155, 24, 101, 189, 100, 189, 96, 61, 126, 51, 207, 61, 186, 12, 43, 62, 142, 122, 233, 189, 117, 4, 23, 190, 35, 190, 206, 61, 173, 45, 116, 189, 161, 211, 35, 61, 216, 80, 246, 61, 35, 150, 11, 62, 121, 93, 155, 60, 26, 248, 27, 190, 142, 112, 20, 62, 104, 140, 134, 60, 147, 166, 165, 189, 95, 173, 215, 187, 171, 69, 33, 61, 164, 135, 222, 189, 221, 183, 199, 189, 0, 98, 158, 61, 213, 188, 231, 61, 152, 55, 139, 58, 219, 195, 49, 62, 159, 62, 26, 62, 179, 204, 41, 190};
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
                alignas(float) const unsigned char memory[] = {249, 81, 17, 190, 18, 45, 107, 189};
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
    alignas(float) const unsigned char memory[] = {40, 90, 38, 191, 118, 130, 117, 63, 90, 37, 127, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {28, 41, 217, 188, 166, 58, 23, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0034/steps/000000000000000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}