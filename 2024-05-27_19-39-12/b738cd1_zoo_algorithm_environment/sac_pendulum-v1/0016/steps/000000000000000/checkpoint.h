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
                alignas(float) const unsigned char memory[] = {143, 254, 155, 190, 86, 35, 204, 62, 137, 158, 175, 62, 205, 109, 131, 62, 31, 56, 177, 62, 113, 127, 64, 61, 168, 112, 230, 62, 89, 202, 184, 60, 254, 36, 195, 62, 221, 116, 207, 61, 171, 182, 241, 62, 44, 90, 18, 191, 140, 59, 218, 190, 109, 228, 170, 60, 222, 2, 215, 190, 80, 21, 79, 62, 130, 19, 16, 191, 60, 169, 187, 62, 243, 82, 7, 63, 250, 239, 149, 61, 201, 167, 226, 190, 225, 114, 248, 62, 222, 47, 232, 188, 249, 50, 7, 63, 125, 112, 181, 62, 209, 91, 125, 60, 172, 36, 189, 61, 248, 58, 212, 62, 67, 134, 205, 62, 141, 0, 171, 190, 16, 115, 112, 62, 95, 243, 125, 190, 144, 135, 181, 62, 145, 71, 156, 190, 74, 149, 140, 62, 165, 248, 7, 191, 191, 144, 191, 189, 224, 207, 10, 191, 164, 206, 223, 190, 185, 12, 77, 62, 190, 11, 232, 190, 88, 119, 195, 62, 255, 203, 141, 190, 190, 143, 77, 189, 192, 13, 11, 191, 101, 212, 181, 61, 26, 190, 163, 62, 114, 196, 180, 189, 80, 38, 242, 189, 185, 87, 231, 60, 55, 209, 72, 61, 12, 152, 145, 190, 177, 105, 99, 60, 5, 220, 15, 61, 94, 12, 37, 61, 116, 29, 18, 191, 116, 222, 233, 62, 52, 196, 207, 62, 81, 195, 3, 63, 196, 86, 240, 190, 193, 7, 218, 190, 242, 31, 136, 190, 176, 231, 112, 62, 6, 33, 111, 62, 143, 157, 149, 60, 7, 164, 70, 190, 177, 24, 233, 190, 160, 64, 9, 63, 237, 241, 172, 190, 83, 104, 133, 62, 104, 86, 5, 191, 60, 229, 11, 190, 250, 195, 101, 190, 42, 99, 185, 61, 121, 143, 1, 191, 64, 97, 6, 63, 167, 51, 226, 62, 28, 120, 10, 191, 2, 246, 128, 62, 81, 153, 38, 62, 95, 106, 146, 61, 210, 104, 244, 188, 64, 11, 153, 190, 85, 164, 130, 62, 155, 85, 211, 190, 179, 197, 16, 62, 243, 33, 91, 190, 196, 19, 10, 62, 155, 225, 206, 190, 222, 39, 167, 190, 199, 164, 70, 62, 88, 186, 4, 191, 83, 24, 7, 191, 26, 4, 0, 191, 176, 82, 3, 63, 9, 52, 249, 190};
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
                alignas(float) const unsigned char memory[] = {41, 195, 19, 191, 135, 240, 2, 191, 20, 53, 99, 61, 78, 222, 220, 190, 97, 236, 213, 189, 6, 26, 238, 190, 139, 43, 8, 190, 253, 10, 253, 190, 59, 36, 53, 189, 31, 172, 150, 62, 248, 143, 177, 190, 210, 199, 250, 190, 234, 227, 32, 62, 99, 86, 7, 191, 217, 129, 135, 190, 100, 243, 14, 190, 134, 89, 161, 62, 141, 100, 229, 190, 200, 196, 120, 62, 106, 208, 18, 63, 3, 130, 252, 190, 43, 213, 153, 62, 206, 19, 17, 63, 150, 31, 10, 63, 159, 54, 18, 191, 86, 72, 216, 190, 96, 229, 5, 62, 212, 247, 244, 190, 165, 113, 170, 189, 57, 117, 127, 62, 72, 132, 93, 61, 210, 220, 75, 189};
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
                alignas(float) const unsigned char memory[] = {105, 118, 19, 189, 203, 121, 24, 190, 52, 63, 22, 190, 25, 80, 161, 60, 250, 15, 240, 60, 161, 114, 170, 60, 208, 66, 4, 61, 157, 3, 204, 186, 68, 199, 58, 59, 172, 144, 46, 62, 54, 84, 53, 189, 94, 125, 41, 190, 30, 217, 186, 189, 210, 211, 131, 188, 193, 54, 215, 59, 45, 137, 156, 61, 78, 145, 34, 62, 112, 250, 0, 189, 216, 143, 21, 61, 64, 216, 154, 189, 198, 96, 141, 189, 173, 168, 12, 62, 253, 180, 105, 189, 149, 107, 1, 190, 251, 202, 22, 189, 250, 184, 210, 188, 97, 15, 143, 61, 24, 116, 250, 189, 120, 51, 27, 190, 178, 78, 196, 60, 234, 119, 92, 61, 248, 149, 207, 189, 62, 96, 43, 61, 231, 151, 129, 188, 105, 39, 204, 187, 130, 110, 120, 189, 107, 176, 180, 189, 11, 12, 248, 188, 121, 46, 14, 190, 181, 21, 44, 62, 56, 90, 195, 189, 178, 188, 32, 190, 174, 233, 193, 60, 19, 92, 186, 61, 74, 95, 211, 189, 251, 109, 209, 189, 161, 98, 143, 189, 240, 22, 147, 189, 24, 247, 134, 189, 205, 240, 173, 61, 25, 253, 31, 62, 212, 236, 136, 61, 108, 130, 182, 61, 31, 19, 245, 61, 88, 201, 24, 190, 49, 148, 102, 61, 54, 181, 153, 60, 3, 249, 139, 188, 46, 121, 179, 189, 80, 242, 66, 61, 218, 222, 48, 190, 31, 160, 18, 61, 101, 96, 212, 189, 237, 73, 16, 62, 98, 171, 1, 62, 62, 152, 236, 189, 139, 196, 185, 61, 124, 204, 53, 188, 178, 212, 45, 190, 87, 254, 153, 61, 138, 101, 30, 62, 0, 207, 203, 61, 40, 21, 199, 189, 221, 153, 36, 188, 212, 119, 23, 62, 48, 178, 3, 190, 77, 174, 177, 61, 179, 21, 187, 61, 41, 22, 39, 190, 127, 64, 220, 61, 166, 102, 17, 62, 56, 23, 224, 187, 177, 139, 8, 189, 102, 235, 200, 61, 101, 230, 241, 189, 135, 140, 34, 61, 229, 255, 48, 190, 109, 24, 30, 61, 108, 12, 126, 189, 165, 97, 30, 190, 247, 201, 25, 62, 123, 77, 8, 62, 227, 207, 13, 190, 9, 157, 6, 190, 37, 26, 136, 189, 110, 111, 88, 189, 233, 198, 27, 189, 225, 190, 239, 60, 9, 77, 159, 61, 223, 214, 5, 190, 146, 26, 183, 189, 186, 152, 65, 189, 210, 198, 97, 61, 44, 25, 231, 61, 137, 143, 109, 61, 153, 166, 238, 60, 145, 243, 63, 189, 168, 114, 180, 61, 141, 203, 47, 62, 165, 224, 14, 188, 58, 53, 34, 62, 126, 67, 154, 61, 62, 168, 211, 189, 246, 195, 10, 61, 41, 149, 47, 62, 36, 37, 33, 61, 6, 17, 158, 61, 241, 97, 255, 187, 104, 91, 49, 190, 1, 156, 47, 190, 86, 156, 255, 189, 92, 241, 67, 189, 156, 69, 214, 188, 251, 87, 16, 190, 61, 75, 20, 61, 250, 114, 201, 60, 27, 103, 116, 187, 168, 93, 203, 189, 174, 37, 21, 190, 18, 110, 27, 61, 207, 246, 31, 189, 106, 180, 48, 62, 46, 201, 146, 61, 199, 52, 68, 61, 42, 176, 60, 61, 84, 160, 48, 189, 53, 74, 31, 61, 209, 215, 226, 189, 165, 210, 13, 190, 213, 167, 56, 61, 0, 1, 222, 60, 135, 60, 193, 61, 188, 237, 237, 61, 176, 91, 212, 189, 176, 102, 124, 189, 160, 99, 230, 189, 46, 204, 214, 61, 253, 169, 146, 189, 97, 190, 222, 189, 251, 12, 173, 189, 205, 174, 155, 61, 30, 53, 254, 189, 120, 156, 29, 62, 205, 134, 130, 189, 145, 95, 194, 61, 26, 202, 204, 189, 77, 127, 50, 190, 60, 82, 23, 190, 144, 94, 131, 61, 42, 141, 213, 61, 112, 150, 42, 62, 112, 248, 164, 61, 36, 134, 166, 61, 236, 31, 210, 61, 204, 123, 240, 61, 135, 113, 128, 59, 238, 97, 243, 61, 188, 54, 217, 61, 34, 25, 43, 189, 170, 70, 194, 61, 134, 90, 38, 62, 217, 44, 239, 189, 248, 4, 2, 62, 208, 243, 233, 188, 232, 203, 15, 62, 225, 185, 51, 62, 206, 224, 39, 62, 163, 199, 32, 62, 202, 220, 241, 188, 193, 128, 51, 62, 123, 21, 23, 61, 219, 54, 35, 62, 233, 157, 197, 188, 83, 18, 180, 61, 21, 163, 180, 189, 185, 85, 51, 61, 23, 179, 235, 61, 13, 190, 67, 188, 234, 76, 182, 60, 225, 46, 57, 189, 180, 88, 144, 189, 110, 180, 47, 62, 232, 77, 52, 62, 184, 152, 222, 61, 37, 71, 126, 189, 148, 87, 16, 189, 92, 69, 149, 189, 82, 70, 131, 61, 36, 17, 12, 61, 185, 89, 20, 190, 32, 222, 6, 61, 219, 142, 179, 61, 195, 127, 117, 189, 97, 59, 155, 189, 29, 189, 132, 189, 77, 191, 230, 188, 33, 21, 184, 186, 21, 140, 171, 61, 24, 152, 36, 189, 11, 207, 178, 189, 19, 2, 31, 190, 220, 73, 240, 61, 83, 200, 46, 62, 146, 237, 65, 188, 148, 12, 237, 61, 16, 12, 211, 61, 114, 14, 186, 189, 247, 200, 239, 61, 101, 205, 147, 189, 84, 229, 195, 61, 161, 53, 164, 60, 224, 223, 28, 189, 179, 187, 249, 61, 91, 167, 210, 189, 109, 225, 17, 190, 230, 1, 178, 189, 200, 248, 105, 61, 161, 232, 27, 62, 219, 42, 156, 189, 98, 193, 21, 61, 143, 213, 59, 60, 88, 144, 69, 187, 105, 59, 221, 189, 212, 185, 92, 189, 252, 16, 216, 61, 234, 104, 179, 61, 234, 116, 13, 62, 44, 104, 52, 189, 253, 131, 168, 61, 218, 114, 46, 190, 20, 14, 41, 190, 144, 112, 223, 188, 45, 60, 17, 62, 196, 17, 202, 61, 119, 232, 0, 62, 187, 113, 236, 61, 0, 64, 182, 61, 44, 145, 228, 61, 116, 115, 20, 62, 128, 214, 26, 190, 217, 40, 212, 188, 177, 201, 76, 189, 4, 57, 197, 61, 63, 92, 80, 189, 240, 242, 136, 189, 85, 36, 140, 61, 8, 253, 13, 190, 41, 204, 31, 62, 235, 116, 227, 61, 223, 158, 3, 190, 27, 48, 182, 189, 215, 165, 53, 61, 216, 203, 116, 61, 255, 55, 168, 60, 252, 215, 98, 61, 255, 100, 214, 189, 220, 220, 31, 190, 241, 46, 248, 189, 10, 209, 191, 61, 201, 66, 6, 62, 159, 140, 128, 189, 102, 26, 109, 61, 82, 117, 164, 189, 34, 250, 246, 189, 181, 142, 191, 61, 133, 0, 1, 62, 40, 125, 224, 189, 88, 54, 182, 61, 227, 51, 31, 62, 47, 166, 216, 189, 53, 171, 162, 61, 97, 238, 141, 189, 179, 36, 35, 190, 27, 108, 2, 62, 89, 155, 8, 190, 7, 197, 196, 61, 106, 11, 246, 61, 39, 205, 2, 61, 18, 180, 2, 62, 203, 16, 237, 189, 40, 238, 235, 61, 185, 74, 233, 61, 21, 29, 231, 60, 10, 57, 60, 61, 165, 184, 44, 62, 198, 147, 200, 61, 41, 63, 202, 189, 138, 209, 42, 190, 153, 23, 160, 60, 189, 92, 177, 185, 186, 118, 236, 188, 202, 194, 126, 189, 67, 143, 213, 61, 113, 111, 180, 60, 223, 229, 140, 60, 66, 212, 10, 190, 12, 11, 24, 61, 213, 27, 23, 190, 107, 66, 136, 60, 130, 185, 216, 189, 169, 8, 43, 62, 19, 100, 173, 188, 1, 16, 119, 189, 249, 5, 2, 190, 220, 194, 18, 189, 203, 214, 203, 189, 26, 128, 28, 190, 31, 170, 182, 189, 8, 105, 180, 60, 33, 31, 12, 189, 211, 75, 207, 189, 19, 5, 233, 61, 98, 125, 170, 189, 196, 168, 247, 189, 1, 219, 27, 62, 38, 81, 226, 61, 36, 102, 131, 61, 155, 208, 213, 187, 118, 255, 134, 189, 151, 101, 46, 62, 214, 48, 181, 60, 168, 147, 28, 62, 107, 217, 145, 189, 87, 154, 15, 190, 239, 246, 49, 62, 19, 28, 225, 189, 138, 43, 100, 189, 186, 8, 13, 189, 64, 182, 134, 61, 212, 98, 45, 189, 222, 253, 205, 189, 168, 38, 16, 190, 114, 203, 135, 60, 46, 24, 176, 58, 157, 12, 66, 189, 125, 176, 13, 189, 10, 230, 23, 190, 197, 9, 9, 62, 169, 27, 179, 189, 63, 174, 11, 190, 119, 227, 25, 190, 41, 194, 140, 185, 73, 223, 224, 188, 14, 204, 255, 60, 131, 45, 4, 62, 94, 62, 43, 61, 162, 244, 23, 62, 86, 77, 194, 61, 56, 11, 186, 60, 199, 199, 18, 190, 204, 41, 204, 187, 144, 3, 134, 189, 197, 224, 232, 61, 224, 39, 43, 62, 206, 97, 16, 190, 204, 66, 232, 61, 145, 228, 88, 61, 127, 80, 156, 61, 33, 92, 224, 61, 242, 51, 178, 189, 130, 26, 8, 190, 168, 230, 3, 190, 71, 186, 194, 189, 53, 86, 167, 60, 133, 148, 94, 60, 103, 39, 141, 189, 251, 85, 20, 190, 184, 56, 165, 189, 250, 74, 168, 188, 133, 115, 21, 62, 135, 171, 51, 59, 136, 7, 236, 61, 99, 120, 8, 190, 4, 208, 12, 190, 11, 73, 34, 61, 111, 127, 35, 62, 61, 15, 8, 61, 82, 11, 234, 60, 221, 115, 68, 61, 181, 29, 85, 187, 55, 175, 21, 62, 76, 20, 114, 189, 168, 22, 44, 62, 154, 60, 13, 189, 11, 254, 111, 189, 121, 86, 220, 189, 147, 217, 14, 190, 179, 25, 34, 62, 23, 82, 160, 61, 179, 246, 217, 61, 37, 163, 208, 61, 162, 229, 139, 189, 91, 193, 169, 189, 92, 199, 212, 189, 40, 22, 182, 60, 79, 217, 5, 190, 27, 251, 220, 61, 15, 45, 233, 61, 113, 66, 13, 62, 228, 44, 201, 189, 159, 135, 15, 62, 203, 31, 37, 61, 4, 126, 16, 62, 119, 66, 148, 189, 90, 128, 249, 189, 70, 205, 237, 189, 128, 13, 238, 61, 99, 88, 21, 190, 34, 141, 253, 188, 89, 60, 241, 189, 241, 253, 41, 190, 67, 61, 26, 62, 115, 251, 205, 61, 103, 75, 129, 61, 9, 131, 66, 61, 211, 224, 40, 62, 158, 86, 60, 189, 164, 186, 131, 61, 110, 249, 0, 190, 73, 12, 18, 190, 180, 104, 205, 187, 224, 144, 56, 59, 182, 252, 49, 189, 220, 200, 228, 61, 198, 20, 38, 62, 179, 57, 243, 59, 20, 31, 85, 189, 181, 37, 33, 190, 238, 43, 11, 60, 126, 6, 145, 189, 218, 196, 196, 189, 11, 150, 234, 189, 151, 26, 47, 189, 107, 67, 160, 189, 94, 38, 43, 60, 206, 14, 23, 190, 29, 78, 20, 62, 242, 89, 143, 189, 191, 122, 19, 62, 198, 221, 42, 62, 184, 197, 109, 61, 228, 209, 38, 190, 155, 252, 228, 189, 72, 230, 89, 189, 184, 94, 17, 61, 34, 33, 68, 61, 203, 194, 173, 61, 17, 19, 196, 61, 140, 209, 147, 61, 108, 5, 26, 61, 234, 127, 38, 190, 93, 31, 35, 190, 255, 155, 237, 61, 155, 255, 213, 61, 217, 31, 180, 61, 55, 238, 1, 188, 182, 41, 149, 59, 227, 233, 14, 62, 206, 116, 49, 190, 247, 45, 4, 189, 165, 34, 144, 188, 136, 1, 18, 190, 228, 75, 196, 188, 178, 242, 0, 189, 28, 124, 36, 62, 254, 34, 250, 188, 246, 79, 46, 62, 250, 2, 75, 61, 83, 183, 35, 61, 72, 150, 164, 60, 147, 78, 18, 62, 40, 78, 91, 60, 23, 22, 220, 61, 35, 98, 32, 190, 31, 23, 49, 62, 234, 237, 20, 61, 206, 57, 33, 62, 61, 56, 9, 190, 104, 246, 129, 189, 231, 166, 2, 62, 208, 3, 206, 61, 148, 31, 181, 188, 198, 97, 109, 188, 96, 98, 179, 61, 111, 199, 146, 189, 145, 32, 3, 60, 79, 61, 38, 62, 9, 164, 6, 62, 175, 140, 37, 62, 110, 8, 248, 61, 85, 12, 176, 61, 249, 6, 3, 62, 118, 208, 212, 189, 254, 30, 172, 61, 224, 165, 149, 61, 76, 242, 27, 190, 101, 129, 39, 62, 166, 176, 77, 61, 70, 144, 143, 61, 71, 56, 247, 61, 234, 18, 6, 62, 113, 104, 76, 61, 249, 126, 44, 189, 1, 251, 130, 60, 230, 190, 193, 60, 144, 32, 208, 61, 8, 158, 63, 188, 116, 53, 57, 60, 223, 86, 7, 62, 164, 200, 34, 189, 11, 21, 171, 189, 85, 230, 6, 189, 101, 130, 9, 62, 102, 16, 7, 190, 146, 73, 28, 189, 181, 64, 102, 61, 31, 43, 194, 61, 133, 107, 92, 188, 233, 91, 39, 62, 11, 80, 249, 61, 188, 66, 151, 188, 87, 103, 180, 61, 104, 123, 38, 62, 228, 238, 4, 190, 127, 78, 134, 189, 231, 84, 43, 190, 12, 28, 169, 61, 103, 190, 220, 61, 175, 21, 132, 189, 179, 246, 18, 61, 8, 119, 5, 190, 173, 239, 55, 61, 161, 16, 197, 189, 52, 9, 141, 189, 159, 18, 98, 189, 225, 196, 176, 61, 73, 19, 8, 61, 46, 63, 191, 61, 50, 95, 82, 61, 75, 157, 40, 190, 3, 241, 7, 62, 127, 240, 103, 189, 117, 108, 98, 61, 138, 85, 120, 189, 137, 25, 42, 189, 152, 98, 81, 189, 210, 3, 240, 188, 54, 14, 157, 61, 124, 0, 49, 190, 190, 115, 87, 58, 84, 187, 204, 60, 174, 0, 96, 60, 110, 132, 193, 188, 216, 13, 93, 60, 241, 169, 8, 62, 7, 203, 7, 62, 87, 39, 142, 188, 42, 10, 11, 61, 91, 208, 240, 189, 230, 51, 233, 61, 4, 121, 114, 59, 108, 47, 44, 189, 178, 19, 252, 189, 102, 235, 32, 189, 157, 141, 16, 62, 170, 240, 7, 190, 37, 242, 163, 189, 149, 33, 34, 190, 146, 166, 252, 61, 251, 0, 27, 62, 155, 223, 161, 189, 244, 219, 248, 189, 26, 232, 24, 190, 199, 142, 23, 190, 142, 252, 146, 61, 84, 13, 149, 189, 117, 137, 189, 61, 167, 141, 37, 62, 195, 98, 46, 190, 95, 8, 35, 62, 215, 89, 52, 190, 238, 95, 42, 190, 1, 74, 248, 189, 101, 210, 136, 189, 93, 244, 80, 61, 111, 50, 247, 60, 8, 139, 38, 62, 182, 183, 40, 62, 153, 24, 22, 62, 223, 40, 166, 188, 206, 181, 150, 189, 153, 131, 163, 189, 144, 152, 25, 190, 131, 97, 23, 190, 2, 196, 20, 62, 51, 15, 131, 61, 188, 101, 15, 61, 78, 18, 175, 61, 220, 229, 39, 61, 17, 98, 20, 190, 199, 6, 24, 190, 165, 6, 32, 62, 127, 176, 230, 188, 46, 19, 240, 61, 137, 250, 43, 190, 68, 41, 143, 61, 253, 213, 11, 58, 157, 137, 1, 62, 107, 226, 34, 190, 73, 106, 9, 62, 82, 101, 184, 61, 113, 247, 49, 61, 186, 55, 33, 62, 20, 193, 176, 61, 103, 30, 181, 189, 236, 108, 167, 188, 108, 126, 33, 62, 49, 29, 185, 60, 8, 161, 143, 61, 163, 222, 72, 189, 197, 31, 184, 189, 43, 224, 132, 61, 174, 108, 186, 61, 235, 31, 154, 61, 218, 62, 46, 62, 122, 233, 87, 60, 190, 182, 37, 62, 119, 205, 43, 188, 51, 179, 44, 190, 115, 201, 209, 189, 24, 243, 26, 190, 15, 32, 187, 189, 216, 230, 44, 190, 88, 221, 249, 61, 78, 168, 173, 189, 242, 59, 62, 61, 200, 210, 129, 189, 98, 38, 20, 190, 127, 24, 18, 62, 17, 162, 167, 61, 147, 41, 68, 60, 195, 67, 97, 61, 60, 185, 8, 62, 88, 180, 85, 61, 121, 197, 153, 61, 57, 193, 203, 61, 39, 145, 44, 62, 133, 223, 39, 61, 236, 212, 218, 61, 216, 253, 29, 62, 210, 252, 44, 62, 128, 25, 2, 190, 218, 124, 1, 62, 212, 126, 170, 61, 18, 93, 43, 62, 103, 42, 179, 61, 180, 14, 201, 189, 128, 207, 64, 61, 155, 143, 201, 189, 16, 97, 33, 62, 224, 37, 189, 189, 64, 250, 26, 190, 232, 100, 13, 190, 249, 79, 31, 60, 14, 247, 171, 61, 29, 13, 22, 190, 240, 180, 73, 61, 7, 16, 47, 188, 144, 131, 186, 60, 95, 1, 233, 61, 171, 104, 27, 62, 205, 95, 24, 190, 117, 33, 216, 61, 93, 154, 187, 189, 34, 197, 28, 62, 81, 137, 166, 189, 78, 218, 24, 62, 245, 180, 239, 188, 76, 18, 210, 58, 48, 185, 136, 61, 213, 212, 27, 190, 40, 126, 140, 189, 22, 249, 184, 188, 4, 157, 9, 190, 0, 94, 36, 190, 30, 63, 36, 190, 142, 14, 84, 61, 192, 75, 2, 61, 231, 223, 136, 61, 59, 206, 232, 60, 173, 92, 151, 188, 243, 154, 245, 189, 221, 103, 26, 61, 179, 131, 124, 58, 28, 63, 181, 189, 207, 218, 6, 188, 173, 131, 198, 189, 21, 80, 107, 61, 2, 250, 6, 187, 82, 136, 6, 61, 135, 187, 1, 62, 240, 16, 16, 190, 25, 1, 170, 187, 101, 17, 6, 62, 67, 208, 66, 189, 159, 235, 57, 60, 229, 240, 30, 62, 0, 215, 33, 190, 58, 222, 54, 189, 144, 160, 239, 189, 181, 21, 64, 189, 65, 93, 216, 189, 165, 184, 107, 189, 42, 230, 191, 61, 82, 123, 207, 61, 237, 231, 178, 187, 83, 66, 37, 62, 168, 80, 76, 189, 28, 46, 174, 189, 162, 37, 99, 185, 33, 151, 215, 189, 135, 16, 144, 189, 12, 57, 42, 60, 143, 116, 26, 189, 48, 182, 24, 62, 68, 234, 4, 62, 64, 90, 180, 188, 18, 99, 28, 62, 167, 217, 144, 187, 135, 127, 71, 189, 171, 197, 243, 189, 87, 233, 248, 189, 202, 198, 3, 62, 235, 140, 49, 62, 56, 184, 39, 62, 15, 27, 242, 60, 154, 163, 245, 188, 117, 231, 23, 190, 83, 246, 47, 61, 99, 169, 132, 61, 66, 182, 210, 61, 244, 214, 84, 188, 147, 16, 37, 62, 153, 176, 108, 189, 18, 57, 12, 60, 63, 101, 89, 189, 13, 152, 143, 188, 225, 136, 189, 189, 59, 160, 18, 190, 224, 41, 95, 61, 127, 198, 28, 187, 183, 125, 203, 61, 9, 203, 0, 62, 48, 122, 97, 187, 127, 212, 33, 62, 230, 123, 237, 189, 181, 131, 11, 190, 15, 235, 208, 61, 144, 166, 207, 61, 87, 76, 8, 189, 148, 253, 88, 61, 51, 25, 253, 61, 56, 55, 129, 189, 213, 26, 220, 189, 69, 75, 150, 59, 55, 230, 77, 60, 51, 101, 19, 62, 196, 168, 29, 190, 175, 173, 143, 188, 185, 152, 179, 61, 153, 168, 198, 189, 80, 35, 134, 189, 221, 25, 32, 62, 68, 171, 18, 62, 35, 105, 93, 189, 11, 245, 253, 61, 176, 17, 177, 189, 33, 8, 169, 188, 204, 43, 53, 61, 221, 208, 3, 190, 161, 63, 229, 189, 136, 218, 164, 189, 114, 104, 46, 62, 248, 239, 23, 190, 164, 205, 24, 190, 82, 135, 9, 62, 140, 187, 45, 190, 19, 222, 163, 189, 128, 173, 6, 62, 199, 178, 122, 61, 110, 57, 16, 62, 134, 173, 1, 62, 95, 225, 180, 60, 168, 173, 5, 190, 210, 58, 160, 61, 240, 60, 138, 61, 166, 99, 197, 189, 44, 47, 201, 61, 8, 103, 137, 189, 179, 207, 240, 189, 69, 62, 10, 62, 205, 13, 220, 189, 190, 222, 140, 61, 10, 50, 129, 189, 126, 0, 111, 61, 64, 232, 137, 189, 148, 17, 141, 188, 201, 0, 14, 62, 179, 111, 173, 61, 90, 201, 190, 189, 252, 85, 39, 190, 168, 55, 195, 189, 32, 164, 224, 189, 36, 32, 204, 189, 110, 153, 238, 188, 243, 51, 28, 62, 216, 4, 32, 62, 62, 99, 19, 190, 0, 177, 151, 189, 191, 101, 30, 186, 172, 252, 199, 61, 164, 32, 235, 59, 119, 61, 147, 61, 114, 216, 231, 189, 39, 128, 50, 62, 49, 232, 26, 190, 153, 233, 203, 189, 197, 63, 70, 189, 90, 99, 103, 61, 179, 35, 33, 62, 96, 189, 12, 190, 245, 165, 19, 62, 118, 28, 223, 61, 97, 33, 167, 189, 152, 47, 4, 190, 28, 119, 51, 190, 139, 199, 0, 190, 40, 103, 1, 190, 109, 69, 218, 189, 132, 27, 26, 190, 171, 232, 110, 189, 105, 181, 195, 61, 18, 146, 208, 189, 23, 158, 187, 189, 69, 193, 9, 61, 239, 143, 175, 189, 193, 112, 237, 188, 42, 141, 98, 61, 24, 201, 225, 61, 193, 150, 96, 189, 3, 118, 40, 62, 146, 197, 52, 190, 228, 168, 31, 187, 105, 181, 136, 61, 253, 17, 191, 61, 114, 179, 140, 60, 253, 124, 43, 62, 136, 220, 82, 60, 29, 192, 141, 189, 55, 50, 185, 189, 108, 185, 216, 61, 164, 6, 46, 190, 95, 219, 97, 61, 164, 5, 182, 61, 180, 131, 14, 60, 83, 181, 52, 62, 45, 143, 175, 60, 20, 187, 178, 189, 35, 93, 6, 62, 90, 143, 16, 190, 180, 217, 176, 60, 73, 1, 178, 61, 220, 105, 157, 189, 9, 115, 129, 61, 255, 114, 197, 189, 237, 75, 36, 189, 210, 59, 149, 61, 216, 31, 134, 188, 212, 2, 225, 189, 74, 121, 62, 61, 132, 112, 16, 190, 28, 46, 251, 189, 178, 69, 213, 189, 188, 218, 13, 190, 252, 212, 245, 189, 231, 79, 97, 189, 52, 229, 141, 61, 74, 227, 9, 190, 110, 81, 143, 189, 84, 34, 1, 62, 188, 168, 129, 189, 10, 8, 18, 62, 196, 109, 179, 61, 173, 85, 117, 189, 99, 195, 221, 189, 252, 67, 46, 190, 228, 139, 54, 60, 99, 92, 253, 189, 62, 23, 249, 60, 72, 209, 34, 62, 233, 102, 48, 190, 247, 98, 86, 189, 104, 68, 58, 189, 102, 139, 158, 61, 255, 102, 214, 60, 32, 7, 97, 61, 235, 113, 6, 190, 132, 149, 5, 190, 221, 86, 17, 190, 68, 6, 44, 189, 110, 195, 46, 190, 161, 185, 229, 188, 175, 13, 209, 188, 252, 196, 40, 189, 10, 73, 213, 61, 41, 97, 220, 189, 215, 158, 3, 190, 171, 251, 177, 189, 255, 206, 120, 189, 184, 76, 8, 62, 83, 34, 42, 62, 86, 137, 120, 61, 96, 139, 40, 62, 232, 182, 7, 62, 119, 72, 219, 61, 176, 12, 252, 188, 96, 240, 9, 62, 148, 110, 27, 190, 101, 209, 252, 61, 220, 124, 225, 61, 244, 204, 193, 188, 31, 152, 14, 62, 206, 171, 229, 189, 45, 67, 82, 188, 29, 183, 190, 188, 239, 148, 215, 61, 167, 21, 139, 185, 102, 244, 12, 62, 15, 169, 27, 190, 76, 70, 185, 189, 220, 60, 45, 62, 119, 31, 183, 61, 162, 222, 24, 190, 38, 234, 215, 61, 229, 205, 197, 189, 211, 185, 0, 190, 123, 52, 61, 61, 154, 112, 50, 189, 125, 122, 180, 60, 159, 28, 216, 61, 198, 173, 27, 60, 207, 247, 220, 189, 75, 179, 3, 188, 220, 203, 48, 189, 153, 197, 69, 61, 164, 152, 218, 61, 227, 230, 41, 188, 105, 173, 92, 60, 28, 87, 206, 61, 241, 16, 49, 62, 140, 124, 213, 187, 14, 158, 209, 61, 7, 35, 32, 190, 162, 219, 192, 188, 112, 128, 68, 189, 198, 58, 31, 62, 85, 150, 146, 188, 183, 129, 5, 62, 253, 96, 137, 189, 206, 4, 156, 61, 186, 212, 33, 62, 31, 207, 206, 189, 201, 109, 6, 190, 8, 160, 9, 62, 208, 52, 189, 57, 162, 172, 97, 61, 31, 24, 63, 61, 187, 29, 143, 189, 184, 47, 128, 60, 252, 228, 84, 189, 216, 155, 136, 61, 229, 189, 2, 189, 55, 250, 24, 62, 175, 202, 214, 189, 81, 230, 244, 61, 228, 133, 47, 190, 131, 44, 248, 189, 89, 153, 47, 62, 147, 156, 58, 189, 212, 218, 160, 61, 80, 44, 218, 189, 42, 41, 87, 189, 75, 14, 37, 189, 86, 200, 14, 62, 67, 103, 26, 62, 65, 209, 14, 189, 129, 41, 49, 62, 157, 186, 29, 62, 185, 69, 207, 61, 229, 10, 53, 61, 61, 100, 81, 61, 154, 155, 100, 61, 109, 4, 129, 61, 220, 223, 217, 189, 144, 243, 156, 189, 226, 153, 9, 189, 178, 168, 35, 60, 28, 165, 91, 189, 57, 142, 98, 189, 198, 22, 2, 190, 0, 247, 85, 189, 115, 113, 169, 189, 218, 253, 139, 188, 76, 107, 1, 190};
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
                alignas(float) const unsigned char memory[] = {115, 200, 25, 190, 222, 13, 17, 190, 254, 242, 252, 61, 248, 85, 9, 61, 229, 81, 34, 190, 98, 142, 57, 189, 96, 113, 157, 189, 168, 95, 12, 62, 130, 234, 233, 188, 142, 39, 160, 60, 54, 55, 162, 189, 166, 206, 171, 61, 183, 236, 30, 60, 157, 12, 171, 61, 90, 94, 22, 190, 183, 225, 237, 60, 11, 22, 231, 61, 77, 5, 238, 61, 82, 217, 161, 61, 252, 128, 223, 189, 142, 11, 50, 190, 109, 192, 32, 62, 146, 113, 151, 189, 7, 243, 250, 61, 193, 100, 237, 61, 244, 219, 32, 190, 35, 179, 24, 61, 142, 149, 164, 61, 35, 132, 207, 60, 11, 14, 198, 189, 169, 51, 219, 61, 47, 166, 3, 190};
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
                alignas(float) const unsigned char memory[] = {206, 122, 187, 61, 186, 196, 212, 189, 105, 85, 218, 61, 202, 208, 52, 189, 220, 54, 49, 62, 166, 235, 77, 189, 39, 9, 56, 61, 222, 21, 42, 189, 7, 28, 255, 59, 9, 127, 7, 61, 84, 115, 37, 190, 63, 183, 184, 61, 182, 116, 34, 190, 19, 73, 198, 61, 235, 41, 44, 190, 160, 231, 14, 190, 172, 190, 16, 189, 199, 144, 45, 61, 123, 250, 4, 62, 23, 142, 207, 61, 175, 36, 227, 189, 183, 223, 2, 190, 150, 166, 21, 62, 244, 46, 194, 61, 90, 224, 223, 61, 119, 217, 41, 190, 72, 246, 110, 60, 178, 227, 243, 61, 255, 250, 190, 60, 83, 133, 174, 61, 44, 184, 4, 189, 166, 156, 228, 189, 32, 241, 225, 189, 140, 244, 43, 190, 242, 10, 205, 61, 238, 169, 6, 62, 145, 85, 43, 190, 27, 104, 35, 61, 106, 183, 40, 62, 189, 186, 2, 62, 252, 25, 43, 189, 159, 41, 166, 61, 100, 14, 16, 189, 166, 186, 33, 61, 21, 100, 193, 186, 70, 90, 73, 189, 86, 179, 75, 61, 202, 134, 28, 61, 129, 20, 11, 190, 161, 151, 36, 62, 187, 133, 9, 189, 159, 248, 167, 188, 131, 135, 202, 61, 127, 216, 55, 60, 192, 226, 23, 62, 75, 211, 19, 60, 142, 107, 5, 189, 93, 73, 34, 190, 196, 59, 67, 61, 140, 4, 102, 189, 27, 8, 38, 62, 83, 178, 199, 189, 106, 219, 201, 189, 191, 225, 26, 190};
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
                alignas(float) const unsigned char memory[] = {15, 234, 150, 188, 82, 7, 35, 190};
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
    alignas(float) const unsigned char memory[] = {239, 140, 108, 63, 172, 24, 148, 191, 47, 222, 153, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {42, 93, 15, 189, 75, 174, 145, 189};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0016/steps/000000000000000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}