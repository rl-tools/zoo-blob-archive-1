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
                alignas(float) const unsigned char memory[] = {70, 189, 49, 63, 53, 116, 122, 190, 84, 43, 218, 190, 214, 112, 25, 63, 201, 62, 213, 62, 206, 66, 2, 191, 195, 148, 41, 62, 24, 116, 107, 63, 255, 61, 6, 191, 96, 203, 191, 61, 68, 176, 137, 63, 115, 98, 111, 190, 119, 246, 93, 191, 21, 129, 99, 189, 52, 237, 35, 191, 142, 65, 245, 190, 28, 196, 171, 63, 44, 203, 62, 62, 60, 237, 237, 62, 30, 118, 59, 63, 73, 172, 170, 62, 97, 68, 238, 61, 63, 26, 200, 61, 31, 235, 42, 62, 25, 87, 2, 63, 112, 167, 147, 188, 70, 235, 202, 62, 192, 88, 238, 62, 240, 51, 105, 63, 207, 34, 93, 62, 48, 44, 30, 62, 200, 125, 58, 191, 241, 172, 222, 62, 102, 164, 176, 190, 150, 28, 145, 63, 87, 7, 143, 62, 142, 104, 95, 61, 43, 64, 127, 63, 239, 102, 72, 62, 115, 1, 66, 63, 17, 217, 47, 63, 126, 77, 10, 63, 81, 214, 171, 190, 169, 236, 231, 191, 125, 186, 11, 191, 0, 144, 222, 190, 118, 237, 182, 62, 21, 18, 212, 62, 41, 176, 65, 63, 28, 25, 30, 63, 202, 231, 39, 62, 101, 224, 63, 61, 219, 74, 92, 63, 133, 92, 48, 63, 233, 65, 211, 190, 45, 38, 231, 190, 234, 138, 218, 189, 101, 122, 72, 63, 175, 249, 14, 63, 63, 186, 144, 62, 153, 209, 50, 191, 218, 43, 34, 190, 27, 5, 253, 188, 75, 189, 211, 62, 188, 87, 115, 191, 110, 147, 220, 190, 177, 76, 0, 63, 252, 121, 133, 191, 24, 102, 160, 61, 182, 189, 14, 191, 98, 234, 55, 191, 81, 248, 54, 191, 39, 252, 65, 191, 167, 36, 10, 189, 124, 201, 144, 190, 26, 151, 8, 191, 199, 210, 199, 191, 215, 135, 173, 190, 221, 51, 139, 191, 117, 78, 99, 62, 16, 197, 45, 61, 13, 214, 70, 63, 105, 119, 153, 191, 188, 111, 163, 190, 163, 147, 28, 191, 88, 114, 55, 191, 184, 177, 59, 190, 187, 245, 191, 62, 37, 32, 123, 63, 174, 111, 165, 190, 152, 141, 20, 63, 244, 60, 157, 191, 148, 116, 138, 190, 36, 125, 217, 188, 233, 162, 35, 63, 96, 77, 167, 190};
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
                alignas(float) const unsigned char memory[] = {126, 117, 99, 191, 236, 181, 203, 189, 21, 195, 2, 190, 60, 144, 21, 63, 232, 161, 24, 191, 148, 202, 76, 61, 234, 72, 248, 190, 20, 224, 64, 189, 186, 96, 170, 62, 235, 170, 120, 190, 136, 251, 25, 61, 248, 33, 201, 61, 131, 61, 108, 62, 73, 85, 75, 190, 204, 85, 78, 61, 188, 56, 210, 189, 135, 240, 46, 62, 99, 97, 215, 190, 165, 206, 228, 62, 206, 145, 135, 62, 143, 13, 45, 63, 220, 8, 139, 189, 90, 194, 241, 62, 228, 97, 184, 61, 20, 173, 164, 190, 114, 148, 101, 62, 147, 22, 170, 62, 229, 78, 116, 188, 95, 95, 52, 63, 222, 225, 214, 62, 88, 172, 79, 62, 125, 151, 172, 60};
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
                alignas(float) const unsigned char memory[] = {30, 163, 237, 190, 0, 205, 136, 62, 71, 183, 30, 63, 99, 20, 179, 62, 61, 141, 53, 189, 145, 244, 73, 190, 10, 178, 214, 62, 135, 136, 111, 62, 61, 63, 31, 62, 158, 63, 74, 62, 252, 230, 24, 61, 246, 3, 137, 189, 110, 85, 62, 62, 229, 17, 20, 61, 232, 231, 13, 191, 212, 138, 180, 59, 149, 52, 161, 62, 137, 122, 120, 60, 241, 238, 12, 191, 131, 6, 81, 62, 232, 154, 186, 190, 233, 202, 2, 191, 118, 47, 4, 190, 11, 206, 69, 190, 118, 151, 64, 62, 148, 78, 93, 191, 40, 85, 30, 191, 132, 57, 4, 191, 22, 128, 110, 191, 51, 8, 128, 62, 214, 105, 9, 191, 19, 181, 224, 62, 206, 46, 82, 190, 225, 230, 197, 60, 89, 92, 35, 189, 227, 134, 117, 189, 82, 208, 119, 61, 201, 202, 202, 188, 185, 34, 42, 190, 179, 147, 34, 189, 176, 178, 130, 189, 144, 86, 30, 62, 174, 11, 3, 61, 197, 159, 173, 61, 221, 223, 215, 189, 31, 115, 235, 60, 113, 57, 96, 187, 180, 231, 150, 189, 152, 127, 67, 190, 159, 65, 254, 189, 216, 233, 188, 189, 77, 115, 30, 190, 234, 229, 164, 187, 200, 243, 144, 61, 228, 83, 163, 59, 101, 51, 236, 61, 236, 110, 78, 189, 237, 33, 170, 189, 241, 248, 151, 188, 209, 108, 171, 189, 150, 129, 240, 188, 165, 37, 18, 190, 22, 190, 29, 60, 174, 136, 97, 61, 194, 254, 30, 191, 81, 199, 44, 190, 12, 190, 135, 61, 82, 160, 245, 62, 61, 232, 63, 62, 95, 46, 26, 190, 153, 102, 138, 61, 3, 248, 161, 61, 39, 196, 213, 188, 178, 222, 172, 190, 240, 35, 209, 189, 32, 225, 105, 189, 188, 22, 42, 62, 206, 70, 6, 62, 124, 113, 156, 190, 40, 99, 63, 189, 235, 73, 162, 62, 233, 214, 10, 62, 117, 136, 229, 60, 26, 82, 58, 62, 60, 249, 152, 62, 255, 42, 181, 190, 250, 157, 243, 61, 36, 126, 231, 189, 233, 55, 126, 61, 55, 197, 117, 189, 202, 33, 11, 188, 49, 134, 9, 191, 20, 223, 6, 190, 3, 76, 175, 62, 200, 136, 137, 190, 217, 16, 188, 189, 141, 53, 5, 61, 15, 175, 90, 185, 32, 194, 248, 60, 212, 194, 69, 190, 192, 193, 210, 61, 227, 11, 21, 189, 227, 40, 68, 190, 194, 183, 109, 61, 207, 106, 167, 61, 157, 49, 53, 190, 247, 251, 123, 59, 203, 231, 3, 190, 6, 144, 196, 61, 212, 101, 170, 61, 221, 218, 7, 189, 97, 155, 42, 189, 101, 147, 104, 188, 95, 119, 69, 61, 185, 59, 23, 62, 51, 133, 65, 61, 255, 66, 167, 189, 112, 224, 18, 190, 229, 117, 103, 190, 137, 74, 47, 190, 33, 14, 7, 62, 181, 142, 22, 190, 152, 125, 70, 61, 38, 96, 157, 59, 196, 37, 179, 189, 168, 8, 200, 189, 136, 72, 122, 61, 190, 231, 32, 190, 220, 96, 233, 188, 134, 136, 98, 62, 5, 4, 189, 61, 149, 165, 61, 62, 52, 198, 84, 190, 78, 62, 46, 191, 232, 109, 215, 189, 128, 108, 183, 190, 214, 117, 66, 189, 220, 84, 78, 191, 248, 252, 71, 191, 94, 149, 51, 191, 200, 169, 76, 62, 232, 50, 183, 190, 6, 61, 187, 190, 149, 208, 6, 62, 108, 195, 20, 60, 40, 191, 189, 189, 58, 19, 172, 190, 50, 128, 91, 61, 105, 131, 206, 190, 92, 122, 86, 189, 153, 200, 134, 188, 147, 98, 3, 190, 11, 87, 148, 61, 0, 158, 83, 191, 221, 143, 127, 190, 211, 202, 242, 61, 37, 224, 6, 191, 9, 120, 143, 62, 21, 146, 186, 188, 145, 206, 233, 61, 163, 203, 185, 190, 66, 87, 3, 61, 186, 166, 196, 61, 75, 180, 182, 61, 169, 196, 135, 60, 186, 157, 252, 189, 35, 106, 255, 188, 176, 183, 220, 59, 176, 105, 9, 190, 122, 116, 194, 190, 159, 47, 18, 190, 121, 190, 226, 60, 230, 122, 129, 61, 228, 237, 21, 61, 167, 96, 71, 61, 154, 135, 245, 189, 140, 36, 153, 62, 255, 181, 193, 60, 18, 169, 178, 62, 232, 112, 41, 62, 173, 47, 188, 62, 22, 221, 34, 189, 188, 110, 17, 61, 34, 245, 73, 62, 22, 254, 126, 61, 133, 127, 173, 61, 1, 17, 70, 62, 41, 235, 168, 190, 222, 247, 157, 61, 60, 54, 5, 61, 93, 19, 8, 190, 194, 0, 8, 60, 171, 240, 79, 190, 233, 131, 208, 190, 203, 5, 147, 189, 211, 112, 235, 189, 125, 37, 72, 190, 73, 206, 248, 61, 214, 55, 228, 188, 220, 253, 205, 189, 32, 17, 160, 60, 178, 1, 8, 190, 192, 82, 152, 190, 97, 147, 57, 62, 225, 102, 121, 189, 242, 167, 171, 189, 163, 211, 108, 190, 60, 14, 85, 61, 57, 239, 78, 191, 244, 229, 54, 62, 195, 150, 165, 61, 142, 165, 147, 190, 78, 185, 207, 62, 243, 21, 174, 190, 4, 21, 64, 191, 212, 163, 213, 190, 180, 247, 144, 62, 13, 0, 209, 189, 195, 251, 1, 63, 138, 73, 157, 190, 171, 215, 149, 62, 199, 158, 141, 190, 2, 46, 206, 190, 203, 250, 172, 190, 165, 123, 107, 188, 155, 54, 47, 190, 234, 149, 9, 62, 115, 144, 18, 191, 229, 252, 58, 62, 137, 4, 13, 191, 179, 232, 116, 62, 241, 242, 219, 190, 69, 110, 244, 61, 55, 249, 179, 190, 83, 223, 150, 190, 224, 114, 226, 190, 136, 76, 4, 191, 192, 219, 206, 189, 44, 71, 204, 62, 18, 99, 24, 190, 143, 61, 185, 62, 131, 27, 9, 191, 90, 48, 185, 61, 3, 125, 152, 61, 97, 34, 15, 62, 254, 22, 58, 62, 34, 73, 30, 62, 64, 78, 47, 61, 129, 46, 129, 61, 252, 211, 210, 61, 181, 175, 82, 62, 2, 241, 16, 59, 18, 38, 164, 62, 45, 7, 73, 190, 187, 140, 249, 61, 72, 141, 132, 190, 183, 115, 122, 190, 254, 205, 31, 190, 27, 79, 93, 190, 73, 183, 34, 190, 194, 14, 171, 62, 230, 193, 121, 190, 239, 162, 19, 62, 223, 115, 8, 62, 4, 89, 180, 60, 49, 130, 229, 190, 237, 123, 190, 61, 109, 48, 248, 60, 71, 254, 63, 190, 59, 187, 180, 61, 124, 151, 159, 62, 193, 202, 75, 59, 168, 205, 143, 61, 49, 25, 145, 189, 23, 212, 190, 62, 229, 52, 15, 187, 130, 98, 197, 62, 194, 209, 113, 62, 212, 49, 89, 62, 132, 129, 12, 62, 232, 76, 213, 62, 229, 111, 226, 61, 90, 109, 15, 62, 153, 14, 136, 189, 67, 205, 132, 62, 82, 64, 69, 190, 48, 202, 40, 190, 239, 25, 117, 190, 242, 23, 159, 190, 227, 51, 186, 190, 221, 132, 177, 190, 91, 86, 201, 61, 2, 172, 131, 191, 52, 94, 227, 62, 114, 61, 239, 190, 218, 78, 77, 61, 140, 50, 197, 186, 158, 233, 20, 191, 27, 36, 20, 62, 207, 40, 22, 61, 58, 115, 166, 62, 89, 215, 36, 189, 87, 108, 46, 191, 32, 50, 73, 190, 197, 203, 2, 59, 199, 69, 110, 188, 33, 11, 200, 60, 166, 30, 195, 188, 34, 91, 152, 61, 233, 46, 5, 190, 249, 43, 214, 61, 116, 124, 163, 191, 218, 233, 46, 191, 127, 247, 60, 191, 165, 164, 18, 62, 184, 88, 106, 62, 188, 191, 205, 187, 195, 93, 222, 190, 60, 173, 113, 62, 171, 65, 16, 62, 148, 32, 30, 60, 10, 181, 156, 190, 229, 175, 32, 191, 92, 152, 172, 190, 75, 162, 231, 190, 46, 10, 185, 190, 137, 217, 198, 60, 193, 120, 177, 61, 45, 26, 96, 62, 188, 213, 20, 190, 56, 193, 139, 62, 97, 146, 22, 190, 6, 164, 226, 59, 129, 210, 170, 189, 66, 22, 128, 62, 142, 132, 48, 62, 109, 203, 188, 61, 54, 178, 92, 61, 83, 169, 171, 190, 238, 7, 191, 61, 3, 242, 18, 191, 55, 120, 31, 189, 132, 91, 242, 61, 127, 94, 87, 190, 63, 125, 193, 190, 91, 182, 20, 63, 173, 232, 126, 190, 191, 106, 83, 62, 47, 202, 194, 190, 120, 45, 166, 190, 195, 53, 77, 62, 202, 240, 176, 190, 132, 182, 41, 190, 59, 244, 60, 190, 47, 178, 239, 190, 50, 110, 37, 62, 204, 187, 130, 190, 141, 200, 237, 62, 177, 196, 126, 190, 233, 160, 6, 62, 97, 115, 255, 189, 133, 76, 66, 190, 194, 85, 27, 190, 250, 254, 130, 189, 40, 170, 138, 62, 173, 53, 11, 62, 228, 37, 89, 191, 72, 3, 38, 62, 245, 31, 87, 62, 122, 134, 30, 62, 37, 95, 184, 189, 76, 214, 193, 189, 191, 255, 9, 62, 116, 35, 84, 190, 155, 249, 154, 60, 107, 73, 125, 190, 47, 81, 120, 190, 145, 147, 43, 189, 157, 171, 137, 62, 98, 55, 236, 62, 187, 125, 72, 62, 128, 87, 83, 190, 214, 11, 81, 62, 183, 147, 142, 190, 51, 133, 168, 62, 233, 55, 23, 62, 12, 39, 125, 62, 157, 46, 141, 190, 158, 14, 17, 190, 168, 168, 33, 191, 82, 122, 68, 191, 108, 120, 4, 62, 16, 235, 201, 61, 144, 62, 154, 191, 23, 37, 167, 62, 53, 92, 207, 189, 93, 122, 28, 190, 65, 110, 150, 190, 5, 18, 35, 190, 123, 137, 10, 62, 112, 157, 51, 62, 83, 138, 119, 60, 124, 31, 156, 189, 229, 157, 118, 59, 73, 68, 81, 61, 203, 240, 22, 62, 250, 212, 230, 61, 104, 40, 199, 60, 223, 143, 75, 190, 221, 224, 69, 191, 116, 237, 4, 62, 135, 239, 32, 62, 92, 196, 182, 188, 174, 196, 15, 62, 105, 129, 139, 62, 214, 109, 77, 62, 15, 51, 167, 190, 174, 96, 183, 190, 141, 15, 13, 190, 116, 115, 68, 62, 157, 141, 112, 62, 209, 112, 128, 189, 188, 143, 169, 62, 10, 39, 254, 61, 251, 169, 60, 190, 241, 252, 24, 63, 0, 32, 26, 191, 169, 215, 218, 189, 55, 79, 114, 61, 79, 23, 58, 62, 129, 6, 242, 62, 47, 29, 28, 191, 21, 235, 52, 62, 58, 37, 15, 191, 252, 250, 228, 61, 240, 83, 140, 60, 176, 59, 96, 62, 121, 159, 62, 190, 254, 88, 110, 62, 95, 131, 221, 62, 208, 171, 54, 61, 166, 84, 14, 63, 111, 16, 180, 189, 105, 102, 218, 190, 113, 0, 154, 62, 207, 97, 233, 59, 135, 101, 182, 190, 2, 70, 20, 62, 189, 95, 201, 189, 156, 101, 168, 190, 143, 164, 25, 191, 21, 76, 0, 62, 86, 201, 48, 190, 187, 130, 10, 191, 76, 164, 168, 62, 249, 183, 195, 60, 57, 115, 131, 60, 182, 192, 148, 62, 212, 1, 51, 62, 119, 185, 181, 61, 41, 2, 16, 62, 159, 77, 198, 187, 79, 100, 211, 187, 233, 78, 205, 61, 176, 26, 178, 62, 129, 198, 195, 61, 148, 148, 41, 191, 198, 33, 9, 62, 151, 8, 205, 190, 18, 59, 53, 190, 218, 145, 209, 61, 113, 186, 205, 61, 240, 129, 138, 61, 222, 4, 36, 189, 143, 75, 6, 191, 128, 102, 124, 189, 116, 248, 91, 191, 87, 244, 157, 60, 203, 23, 126, 190, 168, 110, 110, 191, 122, 215, 222, 62, 57, 174, 47, 62, 210, 173, 60, 62, 8, 207, 110, 61, 102, 149, 101, 60, 129, 179, 191, 62, 178, 148, 156, 190, 230, 58, 64, 61, 107, 79, 234, 188, 73, 19, 80, 190, 128, 147, 89, 62, 69, 48, 132, 60, 79, 103, 252, 188, 81, 17, 225, 189, 168, 81, 203, 190, 184, 2, 248, 61, 129, 223, 41, 62, 124, 60, 82, 61, 44, 13, 194, 189, 108, 108, 30, 61, 75, 251, 229, 188, 98, 243, 232, 61, 165, 251, 252, 61, 116, 242, 187, 188, 43, 27, 44, 190, 200, 233, 36, 191, 52, 150, 52, 62, 59, 37, 194, 62, 99, 165, 47, 61, 90, 120, 90, 190, 27, 83, 192, 62, 177, 126, 157, 62, 64, 58, 26, 191, 172, 146, 207, 190, 104, 232, 45, 190, 151, 174, 168, 61, 166, 60, 97, 62, 144, 167, 244, 62, 63, 67, 233, 190, 145, 161, 14, 190, 8, 167, 247, 189, 77, 92, 98, 191, 2, 237, 168, 62, 173, 125, 25, 62, 255, 140, 95, 61, 233, 140, 149, 190, 213, 231, 33, 191, 254, 125, 147, 62, 32, 31, 213, 60, 164, 16, 79, 190, 42, 84, 162, 188, 130, 106, 55, 190, 63, 210, 140, 61, 18, 249, 78, 190, 218, 6, 141, 62, 94, 166, 89, 188, 191, 41, 142, 62, 72, 72, 26, 191, 251, 53, 28, 62, 231, 89, 148, 62, 174, 167, 23, 62, 138, 163, 178, 188, 137, 88, 7, 63, 192, 25, 226, 61, 189, 164, 141, 189, 124, 66, 211, 61, 17, 242, 24, 190, 56, 206, 69, 191, 133, 233, 151, 189, 51, 16, 231, 189, 33, 20, 140, 60, 25, 244, 15, 191, 15, 121, 33, 190, 70, 205, 62, 61, 82, 124, 130, 190, 239, 21, 155, 190, 87, 116, 238, 190, 10, 19, 14, 190, 203, 176, 194, 189, 38, 198, 1, 62, 51, 251, 86, 190, 70, 78, 97, 191, 169, 179, 74, 190, 230, 37, 205, 190, 133, 99, 63, 62, 59, 234, 98, 190, 16, 230, 23, 189, 166, 79, 200, 190, 239, 209, 80, 190, 203, 190, 19, 62, 123, 206, 172, 62, 113, 144, 255, 190, 153, 1, 236, 61, 25, 179, 135, 190, 60, 74, 105, 190, 220, 162, 20, 191, 49, 178, 207, 190, 30, 22, 25, 189, 11, 226, 190, 188, 45, 77, 1, 62, 126, 82, 84, 62, 26, 238, 95, 62, 249, 37, 117, 62, 18, 78, 152, 189, 24, 114, 67, 62, 17, 140, 1, 63, 211, 70, 128, 191, 249, 238, 248, 190, 193, 213, 219, 62, 150, 223, 100, 62, 224, 57, 154, 61, 10, 62, 99, 190, 206, 112, 197, 62, 82, 91, 157, 191, 77, 102, 103, 62, 128, 27, 205, 61, 227, 195, 205, 62, 110, 42, 28, 190, 182, 153, 198, 190, 251, 22, 238, 61, 107, 202, 74, 62, 58, 172, 211, 62, 40, 66, 220, 62, 99, 222, 46, 191, 65, 69, 179, 62, 248, 211, 156, 62, 50, 113, 0, 191, 126, 135, 133, 190, 70, 82, 61, 191, 148, 91, 144, 190, 239, 105, 113, 189, 209, 211, 113, 62, 86, 64, 185, 62, 78, 116, 57, 190, 242, 62, 186, 62, 102, 120, 210, 61, 49, 71, 128, 62, 25, 45, 125, 190, 72, 130, 184, 190, 37, 31, 43, 190, 57, 189, 143, 59, 16, 0, 188, 62, 154, 234, 159, 60, 198, 123, 173, 190, 231, 178, 171, 62, 40, 77, 35, 190, 113, 57, 134, 189, 50, 82, 74, 62, 18, 90, 145, 61, 24, 251, 179, 189, 92, 173, 155, 189, 75, 88, 65, 62, 0, 105, 23, 63, 54, 199, 231, 62, 183, 238, 230, 190, 121, 230, 222, 190, 55, 51, 67, 189, 204, 102, 165, 62, 239, 241, 139, 190, 206, 181, 73, 189, 186, 75, 6, 62, 35, 159, 18, 190, 86, 93, 60, 191, 209, 232, 102, 189, 204, 131, 207, 190, 147, 199, 55, 63, 97, 74, 200, 190, 79, 102, 137, 61, 22, 86, 147, 190, 218, 97, 205, 190, 125, 138, 97, 62, 168, 72, 156, 62, 92, 175, 164, 61, 159, 170, 157, 190, 198, 214, 64, 191, 2, 219, 155, 62, 36, 3, 44, 61, 118, 52, 142, 189, 135, 104, 83, 190, 234, 179, 132, 188, 185, 145, 150, 61, 23, 238, 26, 61, 148, 245, 244, 59, 8, 78, 248, 190, 81, 202, 195, 190, 49, 190, 116, 191, 190, 131, 217, 61, 167, 1, 39, 63, 32, 6, 122, 189, 75, 61, 121, 190, 92, 53, 15, 63, 15, 157, 162, 189, 151, 194, 225, 62, 156, 32, 139, 62, 39, 188, 143, 62, 149, 53, 4, 190, 42, 23, 107, 59, 239, 222, 90, 191, 27, 240, 59, 191, 101, 170, 59, 61, 24, 33, 206, 60, 12, 199, 81, 191, 167, 216, 73, 62, 35, 150, 152, 189, 106, 73, 170, 189, 237, 147, 27, 190, 17, 136, 179, 190, 246, 2, 129, 62, 98, 2, 116, 59, 75, 210, 190, 188, 38, 222, 208, 189, 158, 50, 62, 190, 162, 241, 159, 61, 105, 206, 25, 62, 52, 251, 125, 62, 29, 231, 241, 189, 240, 190, 191, 190, 240, 212, 3, 191, 165, 111, 29, 62, 103, 0, 137, 62, 190, 78, 172, 188, 66, 73, 115, 59, 165, 171, 131, 62, 66, 105, 183, 61, 98, 54, 83, 62, 234, 220, 182, 62, 58, 91, 78, 62, 103, 129, 134, 190, 102, 2, 227, 189, 95, 236, 167, 191, 9, 100, 42, 191, 221, 247, 129, 58, 48, 43, 9, 61, 80, 20, 129, 191, 174, 215, 137, 62, 202, 211, 40, 60, 154, 254, 16, 190, 160, 99, 186, 190, 213, 53, 246, 190, 171, 191, 52, 189, 119, 48, 137, 61, 161, 9, 162, 189, 98, 199, 129, 190, 63, 81, 4, 190, 153, 250, 146, 190, 232, 21, 144, 61, 82, 44, 119, 62, 237, 237, 10, 190, 74, 35, 172, 190, 107, 39, 10, 191, 210, 147, 8, 62, 243, 26, 251, 62, 115, 200, 124, 190, 255, 46, 25, 190, 197, 238, 204, 62, 146, 157, 244, 61, 235, 56, 154, 189, 5, 25, 182, 61, 16, 169, 158, 189, 133, 60, 171, 61, 183, 208, 236, 189, 126, 248, 68, 61, 249, 254, 140, 58, 172, 69, 70, 61, 185, 162, 28, 61, 214, 249, 41, 189, 188, 212, 211, 61, 15, 78, 179, 188, 172, 8, 49, 190, 5, 173, 46, 190, 238, 116, 178, 187, 189, 159, 28, 61, 102, 220, 182, 189, 137, 200, 51, 190, 155, 216, 47, 189, 82, 86, 110, 61, 143, 241, 8, 61, 90, 138, 246, 61, 78, 154, 16, 190, 101, 6, 217, 60, 53, 213, 7, 62, 215, 147, 146, 189, 36, 20, 217, 189, 246, 52, 184, 61, 251, 181, 189, 189, 193, 247, 50, 190, 226, 245, 188, 189, 18, 149, 222, 188, 114, 45, 158, 62, 11, 77, 66, 62, 57, 6, 238, 61, 95, 98, 225, 61, 217, 31, 71, 61, 221, 12, 175, 62, 46, 102, 203, 190, 242, 31, 157, 189, 137, 245, 64, 190, 129, 167, 76, 191, 13, 4, 143, 62, 110, 4, 42, 62, 153, 58, 95, 62, 172, 34, 191, 190, 37, 231, 207, 190, 30, 186, 91, 62, 51, 26, 191, 61, 79, 238, 174, 62, 214, 109, 155, 188, 121, 38, 8, 61, 235, 112, 104, 61, 153, 193, 81, 62, 115, 254, 221, 61, 171, 86, 182, 189, 167, 193, 187, 190, 33, 155, 22, 191, 38, 90, 171, 62, 252, 116, 209, 62, 119, 161, 158, 61, 47, 156, 157, 188, 211, 56, 40, 62, 46, 223, 82, 61, 86, 108, 210, 190, 40, 233, 117, 61, 36, 199, 68, 190, 93, 226, 25, 62, 196, 121, 173, 61, 251, 13, 167, 190, 31, 94, 186, 61, 19, 130, 66, 62, 227, 43, 171, 62, 38, 149, 18, 191, 162, 119, 201, 60, 193, 238, 210, 189, 84, 130, 95, 62, 44, 253, 134, 61, 142, 76, 144, 60, 39, 210, 191, 189, 108, 106, 103, 62, 111, 228, 51, 189, 212, 38, 80, 190, 212, 164, 189, 62, 95, 198, 134, 187, 100, 31, 148, 190, 210, 4, 8, 190, 122, 245, 70, 62, 128, 127, 11, 189, 6, 78, 251, 61, 181, 92, 200, 190, 17, 153, 169, 190, 226, 220, 78, 61, 235, 57, 69, 62, 249, 252, 111, 190, 217, 231, 9, 62, 63, 150, 129, 190, 231, 241, 206, 60, 123, 225, 99, 61, 81, 62, 116, 62, 32, 36, 147, 62, 198, 209, 112, 61, 117, 240, 200, 62, 10, 143, 7, 60, 39, 30, 51, 61, 71, 86, 48, 63, 121, 35, 29, 190, 90, 207, 37, 62, 160, 218, 48, 62, 59, 233, 131, 62, 255, 238, 184, 189, 147, 109, 136, 190, 82, 219, 191, 62, 239, 212, 120, 60, 194, 138, 188, 190, 202, 96, 177, 62, 232, 190, 61, 191, 186, 227, 55, 191, 138, 148, 6, 190, 61, 28, 104, 62, 156, 254, 117, 62, 209, 210, 242, 189, 64, 100, 128, 190, 60, 61, 17, 192, 252, 232, 142, 191, 221, 227, 175, 61, 166, 174, 242, 191, 219, 9, 162, 62, 70, 231, 197, 189, 94, 177, 248, 187, 204, 165, 178, 189, 17, 170, 136, 189, 152, 79, 6, 61, 14, 221, 18, 62, 61, 242, 51, 189, 106, 169, 24, 190, 9, 178, 130, 189, 29, 215, 41, 190, 85, 162, 8, 62, 66, 235, 234, 189, 154, 83, 23, 61, 47, 34, 253, 189, 188, 10, 165, 61, 228, 24, 141, 61, 197, 112, 246, 60, 66, 35, 183, 188, 149, 5, 44, 61, 87, 40, 187, 189, 149, 77, 63, 190, 224, 159, 129, 61, 179, 137, 127, 189, 1, 129, 25, 60, 28, 109, 16, 61, 163, 124, 194, 61, 173, 30, 58, 190, 95, 144, 77, 189, 68, 205, 46, 190, 37, 213, 156, 187, 29, 196, 180, 189, 118, 115, 220, 189, 27, 113, 45, 188, 180, 72, 163, 61, 217, 176, 112, 62, 219, 172, 4, 63, 138, 71, 131, 191, 63, 139, 162, 62, 162, 125, 86, 61, 181, 58, 189, 190, 239, 139, 3, 191, 155, 140, 218, 62, 120, 132, 215, 190, 50, 243, 13, 62, 227, 103, 35, 62, 47, 47, 166, 60, 18, 4, 59, 191, 125, 189, 229, 190, 56, 136, 203, 188, 3, 167, 158, 190, 125, 137, 188, 189, 16, 131, 111, 62, 159, 72, 249, 61, 126, 4, 254, 190, 44, 195, 104, 190, 30, 248, 165, 191, 15, 204, 93, 191, 236, 221, 206, 190, 129, 172, 28, 190, 140, 116, 26, 191, 222, 78, 187, 189, 34, 66, 182, 189, 98, 102, 95, 191, 137, 63, 191, 62, 63, 253, 18, 190, 246, 164, 198, 190, 209, 106, 23, 190, 68, 14, 34, 191, 22, 211, 3, 191, 73, 46, 118, 61, 207, 133, 18, 191, 8, 202, 74, 190, 145, 135, 62, 190, 209, 94, 92, 191, 116, 67, 0, 63, 36, 208, 226, 60, 72, 91, 57, 60, 178, 35, 138, 190, 61, 43, 39, 191, 201, 126, 59, 62, 171, 232, 94, 190, 175, 178, 93, 189, 34, 25, 170, 61, 121, 214, 168, 190, 218, 197, 154, 61, 195, 182, 21, 191, 102, 190, 144, 62, 121, 252, 204, 190, 34, 91, 81, 191, 212, 129, 60, 190, 197, 38, 79, 62, 226, 110, 191, 62, 121, 234, 24, 62, 17, 67, 15, 191, 42, 133, 135, 62, 55, 140, 26, 190, 233, 104, 200, 61, 170, 79, 135, 61, 127, 179, 163, 189, 147, 101, 7, 61, 95, 72, 240, 61, 199, 203, 38, 190, 159, 111, 232, 61, 205, 110, 162, 61, 168, 17, 136, 61, 67, 125, 139, 61, 43, 141, 26, 190, 28, 115, 124, 189, 184, 84, 56, 189, 86, 199, 134, 189, 175, 143, 252, 58, 225, 214, 42, 190, 162, 4, 226, 189, 187, 164, 150, 60, 193, 212, 172, 189, 42, 145, 232, 188, 216, 240, 63, 190, 98, 89, 21, 190, 98, 18, 155, 61, 180, 107, 221, 189, 150, 240, 252, 61, 242, 51, 215, 61, 74, 54, 8, 62, 190, 47, 130, 189, 90, 141, 54, 189, 32, 228, 9, 190, 66, 237, 37, 190, 172, 46, 251, 189, 225, 233, 21, 191, 152, 71, 185, 189, 177, 200, 18, 62, 186, 43, 245, 62, 112, 91, 152, 61, 211, 239, 60, 190, 34, 27, 11, 62, 168, 81, 3, 190, 5, 229, 68, 62, 246, 65, 164, 189, 17, 150, 164, 188, 195, 189, 39, 189, 207, 139, 65, 62, 115, 75, 91, 62, 107, 163, 182, 190, 45, 171, 20, 190, 41, 110, 128, 60, 33, 114, 4, 189, 254, 31, 188, 189, 207, 230, 218, 60, 46, 207, 25, 62, 110, 65, 67, 190, 116, 15, 248, 189, 6, 5, 59, 190, 166, 147, 65, 62, 136, 111, 148, 190, 58, 88, 251, 61, 64, 182, 59, 191, 62, 74, 220, 189, 187, 183, 167, 62, 198, 78, 231, 190, 192, 134, 207, 60};
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
                alignas(float) const unsigned char memory[] = {95, 144, 45, 190, 203, 229, 6, 60, 171, 189, 104, 62, 27, 131, 235, 189, 33, 213, 135, 61, 52, 54, 94, 62, 85, 231, 45, 62, 30, 138, 228, 61, 150, 255, 110, 62, 53, 156, 55, 62, 46, 111, 188, 189, 85, 69, 129, 61, 217, 248, 17, 62, 65, 4, 123, 188, 7, 177, 142, 190, 194, 3, 107, 61, 123, 204, 146, 59, 18, 75, 6, 190, 158, 78, 34, 62, 150, 35, 41, 189, 219, 239, 142, 188, 111, 93, 6, 62, 10, 130, 84, 61, 96, 131, 181, 189, 109, 227, 116, 62, 162, 89, 7, 190, 16, 146, 190, 189, 163, 52, 40, 190, 190, 184, 235, 60, 93, 80, 31, 62, 76, 143, 241, 61, 169, 158, 100, 62};
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
                alignas(float) const unsigned char memory[] = {94, 196, 89, 191, 213, 26, 106, 189, 16, 77, 155, 190, 38, 143, 88, 189, 100, 20, 48, 61, 93, 243, 228, 188, 150, 228, 35, 191, 220, 169, 239, 190, 251, 30, 24, 190, 43, 116, 20, 63, 102, 114, 215, 190, 49, 81, 56, 62, 113, 100, 233, 62, 183, 88, 138, 63, 8, 157, 46, 191, 210, 42, 111, 62, 79, 64, 15, 63, 183, 242, 227, 190, 134, 155, 144, 191, 51, 29, 227, 190, 211, 105, 56, 63, 246, 232, 8, 63, 72, 222, 14, 63, 63, 79, 184, 61, 116, 57, 180, 62, 238, 143, 31, 190, 126, 204, 113, 63, 16, 113, 227, 61, 5, 19, 103, 63, 126, 252, 106, 63, 159, 78, 21, 190, 74, 226, 21, 191, 20, 1, 91, 61, 85, 83, 229, 60, 244, 173, 177, 190, 9, 167, 233, 189, 143, 151, 84, 191, 136, 49, 130, 190, 152, 134, 177, 189, 245, 231, 46, 62, 137, 50, 75, 190, 88, 153, 42, 190, 98, 65, 78, 189, 157, 49, 51, 190, 68, 117, 22, 190, 85, 207, 3, 190, 58, 132, 27, 62, 180, 83, 50, 190, 131, 19, 211, 62, 165, 232, 46, 62, 137, 62, 80, 62, 14, 235, 96, 62, 97, 145, 35, 63, 112, 74, 134, 62, 154, 22, 107, 62, 189, 240, 21, 190, 64, 20, 122, 189, 187, 193, 40, 190, 87, 93, 203, 61, 178, 126, 136, 188, 180, 123, 60, 62, 235, 179, 153, 62, 165, 115, 113, 61, 96, 151, 201, 188};
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
                alignas(float) const unsigned char memory[] = {218, 103, 75, 188, 3, 105, 189, 190};
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
    alignas(float) const unsigned char memory[] = {139, 76, 74, 191, 90, 152, 154, 191, 214, 89, 109, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {194, 191, 42, 62, 221, 49, 152, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0017/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}