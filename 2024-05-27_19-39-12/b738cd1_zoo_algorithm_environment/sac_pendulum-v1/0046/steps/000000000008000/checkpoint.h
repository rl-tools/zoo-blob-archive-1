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
                alignas(float) const unsigned char memory[] = {16, 211, 176, 190, 66, 246, 149, 60, 64, 48, 200, 60, 70, 31, 255, 190, 127, 137, 159, 63, 69, 40, 86, 63, 198, 71, 10, 63, 62, 107, 115, 191, 163, 120, 208, 62, 244, 227, 108, 188, 132, 6, 240, 62, 191, 149, 35, 63, 173, 100, 159, 189, 120, 106, 166, 191, 26, 220, 145, 190, 161, 131, 216, 190, 70, 155, 163, 63, 211, 218, 170, 62, 199, 230, 10, 62, 138, 89, 4, 63, 251, 208, 145, 62, 252, 113, 12, 63, 6, 199, 120, 63, 120, 7, 141, 62, 253, 82, 91, 190, 50, 181, 67, 62, 20, 27, 232, 190, 34, 97, 130, 190, 22, 182, 210, 190, 255, 76, 159, 190, 224, 135, 104, 60, 199, 35, 250, 62, 90, 248, 231, 190, 64, 249, 224, 190, 74, 100, 165, 62, 193, 217, 47, 188, 144, 6, 220, 60, 149, 202, 63, 191, 74, 204, 7, 62, 8, 135, 225, 62, 190, 67, 170, 63, 226, 73, 142, 62, 163, 84, 27, 191, 230, 102, 219, 62, 151, 39, 154, 62, 88, 180, 147, 62, 126, 22, 88, 190, 215, 138, 8, 63, 154, 7, 69, 191, 110, 61, 212, 190, 142, 45, 85, 190, 116, 254, 191, 189, 47, 127, 230, 188, 239, 20, 1, 191, 52, 29, 87, 62, 239, 221, 105, 63, 73, 235, 26, 63, 254, 123, 106, 190, 79, 35, 17, 190, 144, 42, 74, 191, 9, 225, 215, 62, 156, 179, 181, 62, 55, 220, 3, 191, 101, 172, 142, 190, 151, 248, 207, 190, 214, 178, 65, 190, 225, 19, 149, 62, 162, 60, 23, 63, 11, 155, 116, 190, 245, 195, 163, 189, 14, 215, 134, 63, 80, 13, 254, 189, 57, 205, 141, 61, 224, 239, 34, 62, 245, 38, 40, 57, 41, 95, 165, 62, 115, 83, 134, 61, 141, 204, 238, 190, 132, 199, 79, 63, 253, 225, 40, 63, 108, 183, 5, 62, 220, 142, 250, 190, 248, 158, 29, 191, 31, 159, 57, 191, 115, 153, 72, 63, 38, 13, 11, 191, 194, 219, 181, 61, 66, 51, 216, 62, 199, 195, 144, 62, 119, 58, 12, 191, 194, 193, 68, 63, 129, 134, 104, 191, 145, 28, 183, 190, 22, 174, 145, 190, 99, 4, 171, 191, 66, 31, 174, 190};
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
                alignas(float) const unsigned char memory[] = {11, 88, 25, 191, 35, 210, 241, 190, 43, 129, 165, 62, 170, 126, 33, 190, 249, 236, 189, 61, 37, 189, 190, 189, 7, 185, 201, 62, 122, 70, 244, 61, 78, 251, 239, 190, 194, 128, 197, 62, 81, 43, 112, 190, 7, 89, 188, 62, 251, 183, 198, 62, 43, 8, 45, 190, 110, 168, 25, 63, 23, 62, 30, 62, 216, 73, 144, 190, 171, 253, 176, 189, 194, 185, 175, 190, 70, 192, 110, 190, 135, 70, 220, 62, 149, 27, 134, 62, 174, 142, 32, 63, 248, 49, 237, 189, 59, 137, 52, 190, 1, 178, 52, 189, 224, 161, 203, 60, 27, 17, 156, 189, 223, 205, 164, 190, 90, 41, 184, 62, 253, 212, 89, 190, 32, 30, 4, 190};
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
                alignas(float) const unsigned char memory[] = {43, 209, 25, 62, 231, 187, 222, 190, 19, 69, 178, 190, 215, 21, 185, 61, 72, 2, 169, 189, 197, 227, 83, 191, 10, 174, 163, 190, 138, 190, 167, 62, 160, 70, 203, 62, 252, 160, 246, 61, 230, 127, 109, 62, 59, 63, 106, 62, 78, 66, 64, 62, 202, 199, 23, 62, 49, 90, 57, 189, 174, 181, 96, 61, 52, 63, 218, 61, 72, 55, 181, 189, 64, 107, 151, 62, 174, 197, 69, 62, 77, 9, 113, 62, 69, 39, 80, 62, 186, 140, 4, 188, 99, 152, 162, 61, 140, 199, 34, 189, 177, 46, 16, 191, 207, 88, 17, 63, 26, 206, 211, 61, 193, 14, 137, 62, 43, 140, 209, 190, 150, 63, 98, 191, 155, 193, 58, 61, 222, 110, 146, 189, 202, 32, 137, 188, 34, 36, 54, 190, 34, 237, 7, 190, 107, 200, 106, 189, 190, 96, 238, 61, 245, 18, 179, 59, 3, 238, 176, 189, 55, 220, 148, 189, 102, 110, 80, 62, 26, 47, 7, 189, 53, 35, 86, 62, 86, 82, 172, 189, 173, 99, 35, 190, 182, 141, 83, 62, 173, 6, 59, 190, 146, 98, 162, 62, 84, 241, 175, 188, 154, 110, 181, 189, 107, 1, 143, 189, 223, 147, 149, 190, 128, 179, 101, 62, 9, 80, 2, 62, 81, 112, 13, 189, 1, 154, 31, 62, 225, 154, 71, 189, 214, 205, 124, 61, 152, 80, 161, 61, 168, 50, 173, 190, 239, 52, 8, 59, 67, 178, 251, 190, 56, 121, 93, 62, 36, 74, 163, 61, 232, 155, 49, 62, 235, 76, 166, 62, 163, 157, 107, 189, 27, 13, 32, 62, 16, 42, 25, 62, 36, 90, 229, 189, 169, 199, 127, 190, 0, 121, 125, 190, 195, 254, 19, 190, 90, 84, 37, 190, 180, 172, 138, 190, 179, 92, 254, 61, 130, 198, 55, 190, 54, 45, 189, 61, 166, 39, 67, 190, 150, 63, 158, 190, 61, 57, 36, 62, 224, 171, 144, 190, 214, 188, 181, 188, 203, 122, 5, 61, 114, 118, 161, 61, 212, 30, 244, 189, 57, 109, 11, 190, 128, 218, 15, 62, 69, 204, 160, 62, 53, 181, 29, 62, 20, 125, 33, 187, 114, 26, 238, 188, 95, 130, 117, 62, 255, 246, 4, 63, 86, 71, 98, 187, 122, 158, 46, 189, 249, 234, 22, 190, 193, 151, 201, 188, 126, 221, 247, 61, 57, 113, 28, 189, 229, 234, 241, 188, 60, 101, 101, 190, 79, 139, 247, 188, 187, 129, 192, 190, 190, 237, 98, 61, 153, 213, 174, 189, 64, 166, 152, 190, 15, 106, 228, 189, 54, 149, 148, 187, 146, 216, 150, 61, 20, 135, 237, 61, 224, 225, 116, 190, 94, 79, 10, 62, 193, 26, 13, 62, 248, 132, 105, 190, 148, 44, 45, 189, 228, 242, 162, 61, 2, 199, 175, 190, 99, 182, 112, 190, 41, 62, 92, 189, 162, 180, 164, 61, 163, 241, 50, 190, 251, 242, 142, 189, 70, 235, 110, 190, 74, 251, 59, 62, 149, 169, 163, 62, 153, 194, 164, 189, 140, 167, 34, 62, 81, 81, 97, 189, 107, 28, 125, 61, 42, 86, 218, 61, 72, 86, 174, 59, 148, 24, 46, 190, 82, 174, 67, 190, 21, 183, 140, 61, 155, 246, 192, 189, 32, 195, 133, 61, 119, 157, 118, 57, 225, 151, 128, 189, 241, 11, 101, 56, 33, 233, 145, 188, 215, 207, 78, 189, 134, 134, 41, 189, 92, 88, 198, 61, 143, 209, 209, 61, 242, 135, 253, 189, 196, 10, 29, 190, 136, 82, 72, 188, 195, 83, 72, 190, 190, 169, 251, 189, 73, 152, 42, 188, 250, 33, 29, 60, 243, 211, 1, 189, 148, 198, 13, 61, 204, 110, 206, 189, 57, 196, 207, 189, 15, 89, 5, 62, 197, 200, 10, 189, 109, 244, 87, 189, 159, 220, 39, 62, 137, 149, 98, 62, 55, 219, 117, 189, 97, 172, 201, 61, 91, 167, 158, 61, 90, 86, 80, 188, 231, 242, 103, 62, 97, 156, 180, 61, 184, 17, 175, 60, 20, 210, 13, 62, 149, 85, 139, 61, 237, 43, 233, 60, 152, 224, 57, 62, 8, 3, 153, 62, 99, 21, 24, 62, 209, 189, 158, 61, 208, 172, 54, 62, 163, 22, 124, 61, 9, 57, 58, 190, 43, 159, 195, 61, 235, 81, 202, 61, 141, 239, 217, 189, 182, 74, 23, 62, 183, 134, 214, 61, 172, 126, 220, 61, 178, 49, 65, 190, 111, 237, 155, 188, 228, 122, 100, 189, 219, 97, 104, 61, 119, 211, 162, 61, 240, 50, 4, 191, 227, 40, 38, 62, 22, 193, 75, 61, 78, 234, 195, 57, 42, 76, 59, 190, 73, 187, 144, 190, 129, 239, 29, 190, 134, 101, 78, 62, 167, 17, 177, 188, 12, 61, 254, 189, 148, 195, 205, 61, 32, 26, 200, 190, 36, 105, 226, 61, 173, 186, 131, 62, 16, 85, 73, 61, 107, 172, 220, 61, 73, 195, 146, 62, 74, 220, 26, 190, 118, 187, 53, 191, 38, 11, 112, 62, 174, 159, 83, 190, 99, 244, 153, 61, 160, 216, 191, 190, 210, 166, 189, 190, 182, 107, 240, 61, 8, 82, 165, 62, 224, 173, 23, 190, 197, 30, 16, 190, 121, 143, 136, 190, 186, 150, 140, 190, 118, 137, 240, 189, 33, 200, 167, 190, 84, 141, 224, 62, 19, 72, 78, 189, 139, 175, 43, 62, 71, 183, 123, 62, 237, 186, 191, 62, 202, 255, 234, 189, 39, 28, 166, 187, 60, 166, 143, 62, 248, 15, 250, 61, 45, 122, 213, 190, 222, 251, 186, 190, 202, 97, 37, 61, 42, 131, 195, 189, 33, 19, 85, 62, 74, 102, 16, 62, 251, 195, 45, 191, 248, 229, 172, 62, 54, 246, 180, 189, 115, 78, 37, 190, 165, 230, 237, 62, 225, 39, 64, 190, 186, 116, 6, 190, 219, 141, 102, 190, 117, 194, 174, 60, 82, 120, 162, 190, 230, 235, 207, 190, 76, 148, 36, 190, 48, 216, 93, 62, 226, 134, 207, 190, 237, 215, 146, 190, 13, 176, 91, 61, 166, 28, 91, 62, 37, 8, 133, 62, 9, 69, 11, 191, 120, 56, 146, 189, 39, 99, 147, 191, 208, 78, 38, 191, 112, 237, 161, 60, 81, 236, 65, 62, 24, 15, 142, 191, 237, 62, 214, 190, 180, 118, 250, 61, 74, 80, 92, 62, 63, 223, 166, 62, 69, 34, 19, 62, 111, 176, 133, 62, 28, 119, 174, 60, 134, 88, 100, 62, 91, 208, 131, 189, 209, 190, 47, 189, 60, 198, 147, 62, 161, 173, 198, 189, 166, 49, 34, 63, 120, 201, 196, 61, 98, 229, 31, 62, 104, 76, 220, 61, 67, 100, 100, 62, 191, 159, 46, 189, 8, 35, 44, 60, 92, 144, 24, 191, 205, 227, 28, 63, 197, 212, 16, 189, 230, 132, 139, 189, 240, 186, 119, 190, 84, 118, 79, 191, 96, 44, 117, 62, 42, 212, 175, 188, 54, 73, 56, 191, 202, 117, 166, 62, 160, 82, 240, 190, 112, 250, 60, 191, 85, 13, 70, 191, 67, 232, 133, 62, 124, 236, 152, 62, 205, 77, 19, 189, 34, 67, 91, 190, 220, 44, 204, 189, 139, 202, 63, 186, 147, 111, 220, 61, 65, 178, 148, 188, 42, 223, 27, 191, 83, 184, 105, 62, 33, 34, 227, 189, 63, 233, 27, 190, 124, 147, 153, 189, 105, 217, 145, 60, 225, 176, 102, 62, 215, 231, 207, 61, 57, 162, 86, 62, 178, 3, 38, 62, 218, 58, 167, 60, 206, 130, 86, 62, 55, 181, 39, 63, 237, 203, 0, 61, 68, 145, 144, 62, 209, 51, 176, 61, 29, 0, 208, 190, 33, 167, 110, 191, 241, 170, 32, 62, 211, 27, 65, 62, 165, 47, 13, 62, 41, 56, 208, 60, 164, 72, 82, 190, 158, 133, 209, 62, 221, 193, 84, 60, 96, 215, 215, 190, 163, 117, 22, 191, 250, 9, 149, 189, 81, 171, 174, 189, 208, 146, 129, 61, 163, 140, 190, 61, 63, 183, 26, 191, 32, 204, 49, 62, 9, 241, 132, 189, 155, 127, 69, 190, 112, 197, 99, 62, 29, 7, 91, 190, 72, 141, 44, 190, 230, 7, 0, 190, 98, 145, 99, 61, 38, 123, 226, 61, 233, 134, 161, 190, 35, 62, 200, 61, 202, 68, 89, 62, 195, 9, 100, 189, 34, 87, 149, 189, 154, 132, 150, 62, 147, 136, 229, 62, 245, 80, 68, 62, 162, 159, 23, 191, 88, 128, 192, 60, 182, 174, 190, 190, 248, 153, 86, 189, 115, 13, 55, 61, 109, 138, 59, 62, 17, 96, 23, 191, 92, 77, 121, 189, 147, 251, 73, 62, 122, 225, 0, 63, 238, 40, 40, 189, 48, 238, 231, 61, 117, 166, 224, 61, 107, 30, 125, 61, 119, 33, 61, 62, 180, 146, 84, 190, 228, 101, 206, 61, 238, 212, 206, 189, 116, 118, 130, 190, 106, 137, 174, 61, 22, 247, 89, 62, 171, 141, 133, 62, 121, 43, 214, 189, 65, 187, 102, 62, 17, 214, 27, 186, 52, 226, 13, 62, 172, 183, 97, 60, 104, 58, 94, 61, 142, 105, 175, 61, 73, 164, 51, 62, 218, 81, 129, 190, 121, 185, 16, 191, 32, 33, 128, 189, 179, 38, 24, 62, 85, 195, 156, 62, 29, 15, 74, 189, 0, 221, 28, 62, 170, 130, 39, 62, 33, 238, 154, 61, 45, 68, 14, 189, 194, 123, 230, 61, 15, 106, 156, 189, 170, 104, 99, 188, 11, 193, 62, 62, 120, 138, 149, 61, 13, 85, 64, 62, 237, 16, 80, 62, 196, 62, 78, 188, 196, 165, 21, 188, 183, 113, 95, 62, 242, 193, 71, 60, 36, 110, 136, 189, 72, 83, 83, 62, 179, 56, 97, 61, 211, 146, 138, 61, 162, 212, 184, 189, 230, 218, 91, 62, 202, 98, 67, 61, 1, 237, 18, 190, 108, 25, 114, 62, 229, 95, 228, 186, 233, 86, 62, 62, 50, 103, 70, 189, 22, 168, 14, 191, 37, 89, 110, 186, 244, 129, 7, 62, 159, 72, 202, 189, 20, 162, 102, 61, 14, 5, 8, 62, 188, 81, 124, 60, 55, 130, 47, 190, 165, 119, 22, 62, 166, 83, 167, 189, 223, 157, 254, 62, 22, 157, 240, 61, 199, 156, 51, 62, 24, 5, 203, 61, 246, 74, 230, 60, 96, 147, 136, 60, 118, 175, 11, 190, 164, 63, 124, 62, 42, 88, 4, 62, 151, 155, 87, 189, 15, 215, 19, 62, 35, 45, 36, 62, 65, 7, 21, 62, 96, 246, 174, 189, 234, 78, 255, 61, 87, 25, 117, 190, 89, 113, 46, 62, 202, 34, 157, 189, 22, 228, 134, 189, 196, 133, 112, 185, 127, 119, 6, 190, 161, 245, 97, 190, 219, 123, 18, 191, 91, 67, 16, 62, 198, 112, 101, 189, 181, 200, 47, 190, 254, 99, 138, 190, 153, 180, 253, 189, 24, 77, 64, 190, 215, 114, 148, 62, 42, 163, 215, 190, 65, 53, 88, 190, 248, 211, 135, 62, 128, 154, 180, 188, 234, 211, 182, 62, 231, 94, 175, 189, 180, 190, 227, 190, 190, 171, 209, 189, 91, 224, 103, 62, 223, 33, 137, 190, 213, 224, 16, 190, 171, 147, 80, 61, 115, 27, 53, 190, 60, 120, 157, 62, 27, 127, 1, 62, 211, 104, 187, 188, 142, 93, 13, 62, 144, 237, 39, 62, 92, 65, 207, 61, 117, 249, 201, 60, 22, 74, 26, 61, 14, 25, 17, 62, 190, 194, 237, 188, 240, 184, 138, 61, 4, 230, 213, 62, 37, 194, 151, 61, 49, 205, 49, 61, 69, 208, 54, 60, 91, 252, 130, 188, 62, 250, 63, 61, 106, 19, 166, 61, 26, 139, 87, 61, 186, 37, 241, 61, 127, 239, 12, 190, 16, 163, 13, 191, 63, 156, 19, 62, 72, 16, 131, 190, 108, 213, 83, 189, 127, 25, 11, 62, 102, 30, 190, 61, 51, 232, 10, 61, 44, 164, 32, 61, 51, 107, 192, 61, 60, 38, 228, 189, 61, 220, 62, 62, 167, 230, 31, 190, 34, 231, 38, 190, 188, 189, 23, 189, 94, 123, 226, 189, 32, 217, 72, 62, 172, 244, 186, 187, 192, 39, 184, 61, 119, 5, 177, 189, 207, 85, 219, 190, 252, 189, 254, 188, 217, 80, 22, 60, 76, 106, 89, 190, 101, 111, 221, 188, 179, 255, 30, 190, 231, 6, 8, 189, 18, 176, 18, 189, 98, 179, 70, 190, 166, 141, 4, 191, 180, 113, 189, 62, 157, 157, 102, 62, 165, 45, 166, 190, 134, 240, 95, 190, 36, 217, 23, 61, 238, 159, 181, 188, 170, 197, 138, 62, 111, 154, 142, 189, 138, 153, 157, 190, 94, 62, 155, 62, 78, 94, 181, 187, 131, 68, 95, 62, 211, 254, 174, 62, 244, 56, 59, 190, 49, 150, 144, 190, 177, 174, 184, 189, 50, 100, 50, 189, 100, 45, 181, 62, 123, 80, 146, 62, 80, 130, 251, 185, 193, 252, 111, 189, 3, 114, 29, 189, 168, 136, 254, 190, 59, 83, 190, 190, 140, 16, 175, 189, 87, 226, 202, 190, 143, 129, 162, 191, 72, 31, 29, 190, 226, 193, 129, 188, 148, 131, 107, 62, 112, 229, 209, 188, 107, 102, 130, 62, 53, 247, 140, 62, 52, 197, 10, 62, 144, 175, 178, 188, 143, 54, 158, 190, 124, 76, 110, 62, 19, 252, 64, 190, 238, 232, 172, 60, 159, 97, 208, 61, 8, 191, 31, 62, 190, 197, 215, 61, 121, 209, 144, 188, 189, 146, 154, 189, 181, 98, 144, 188, 104, 68, 82, 190, 106, 195, 181, 189, 178, 213, 13, 189, 155, 115, 54, 62, 248, 0, 242, 189, 191, 190, 179, 189, 210, 185, 235, 59, 150, 52, 135, 190, 208, 182, 40, 62, 103, 178, 23, 62, 74, 178, 159, 189, 165, 30, 140, 61, 84, 91, 27, 62, 129, 110, 149, 61, 87, 104, 7, 62, 243, 193, 229, 60, 120, 123, 162, 62, 12, 197, 173, 190, 31, 220, 41, 62, 60, 67, 55, 62, 89, 195, 86, 61, 122, 242, 171, 190, 71, 12, 37, 191, 164, 190, 227, 57, 157, 126, 232, 190, 94, 204, 33, 190, 52, 114, 152, 62, 29, 208, 9, 191, 65, 234, 108, 189, 242, 222, 24, 189, 254, 215, 92, 190, 63, 173, 201, 61, 110, 135, 36, 191, 134, 77, 215, 190, 1, 28, 135, 188, 28, 108, 48, 62, 186, 225, 2, 62, 163, 45, 251, 190, 213, 28, 161, 189, 217, 53, 62, 62, 152, 107, 58, 62, 127, 75, 157, 190, 32, 224, 249, 62, 243, 187, 165, 62, 120, 234, 206, 188, 86, 84, 91, 190, 35, 245, 230, 61, 244, 64, 240, 60, 111, 79, 28, 62, 134, 197, 214, 190, 211, 216, 134, 188, 109, 67, 142, 190, 61, 191, 106, 190, 90, 92, 39, 188, 14, 151, 38, 190, 176, 203, 66, 189, 213, 188, 85, 61, 207, 95, 0, 188, 31, 33, 140, 62, 170, 69, 32, 190, 26, 101, 226, 189, 175, 173, 12, 61, 201, 179, 190, 61, 159, 93, 165, 60, 95, 156, 190, 190, 55, 173, 79, 61, 29, 126, 185, 61, 228, 125, 162, 189, 149, 77, 151, 188, 219, 73, 49, 62, 206, 233, 48, 61, 201, 65, 182, 59, 223, 186, 235, 61, 15, 112, 59, 190, 39, 0, 171, 189, 245, 35, 102, 62, 95, 210, 222, 189, 198, 238, 13, 62, 187, 133, 32, 61, 166, 137, 2, 62, 206, 202, 117, 62, 17, 235, 143, 190, 77, 1, 87, 189, 37, 51, 164, 188, 189, 18, 41, 62, 248, 129, 49, 191, 152, 161, 151, 190, 35, 70, 154, 61, 30, 110, 3, 190, 162, 5, 120, 62, 133, 67, 96, 62, 89, 10, 24, 191, 232, 248, 65, 61, 27, 235, 85, 61, 224, 157, 86, 61, 87, 88, 241, 189, 118, 0, 26, 191, 35, 209, 201, 61, 33, 140, 200, 190, 47, 247, 246, 188, 125, 231, 12, 191, 196, 50, 14, 191, 217, 95, 21, 189, 27, 106, 229, 61, 56, 40, 131, 190, 70, 195, 147, 62, 170, 25, 97, 190, 127, 199, 72, 190, 119, 187, 239, 61, 189, 49, 19, 189, 122, 21, 14, 62, 111, 231, 146, 190, 174, 180, 135, 190, 144, 93, 201, 189, 115, 73, 35, 190, 203, 93, 139, 62, 127, 120, 46, 190, 92, 107, 203, 189, 1, 239, 118, 61, 218, 140, 196, 189, 125, 217, 143, 62, 61, 16, 186, 189, 116, 91, 234, 190, 56, 101, 10, 62, 199, 137, 50, 62, 125, 12, 133, 189, 189, 118, 140, 61, 165, 200, 23, 190, 112, 22, 128, 61, 4, 55, 7, 62, 155, 60, 129, 62, 116, 242, 35, 189, 47, 76, 4, 62, 241, 110, 249, 61, 106, 96, 52, 189, 71, 44, 23, 61, 14, 32, 121, 189, 39, 83, 1, 190, 61, 98, 120, 190, 14, 176, 60, 190, 24, 124, 26, 62, 137, 184, 64, 190, 109, 74, 130, 188, 103, 183, 105, 190, 172, 44, 218, 61, 16, 33, 159, 190, 222, 112, 24, 189, 233, 61, 215, 59, 183, 243, 68, 62, 231, 111, 132, 190, 93, 98, 99, 188, 146, 122, 54, 190, 55, 222, 132, 59, 192, 4, 9, 62, 48, 228, 109, 189, 165, 208, 104, 190, 151, 168, 219, 188, 71, 9, 249, 189, 122, 219, 110, 189, 215, 249, 194, 190, 96, 253, 142, 190, 94, 7, 111, 190, 215, 84, 22, 191, 133, 35, 167, 188, 220, 10, 29, 190, 254, 253, 158, 188, 131, 208, 140, 189, 118, 10, 2, 190, 12, 135, 113, 190, 250, 184, 239, 190, 215, 80, 98, 62, 198, 155, 223, 190, 230, 252, 23, 62, 221, 204, 24, 188, 241, 1, 20, 62, 220, 165, 216, 188, 71, 164, 62, 189, 225, 223, 143, 189, 168, 108, 214, 187, 139, 49, 204, 190, 158, 47, 187, 189, 178, 155, 120, 61, 6, 125, 123, 61, 26, 182, 10, 61, 196, 87, 32, 62, 159, 188, 246, 61, 144, 230, 25, 61, 27, 204, 10, 62, 206, 10, 122, 190, 170, 218, 5, 62, 106, 143, 201, 61, 93, 108, 158, 189, 70, 169, 108, 190, 43, 169, 58, 62, 5, 1, 110, 62, 94, 153, 28, 189, 182, 173, 195, 60, 223, 250, 135, 189, 160, 117, 34, 62, 107, 201, 180, 190, 222, 42, 35, 61, 116, 0, 199, 60, 219, 80, 203, 61, 139, 217, 97, 190, 252, 89, 213, 190, 209, 124, 14, 62, 228, 188, 18, 60, 112, 234, 177, 187, 217, 121, 71, 189, 144, 221, 205, 61, 150, 32, 81, 190, 37, 83, 15, 191, 20, 182, 2, 190, 221, 162, 234, 188, 251, 206, 207, 62, 225, 204, 88, 60, 48, 114, 3, 61, 248, 32, 132, 189, 85, 40, 144, 62, 186, 224, 110, 189, 114, 230, 217, 189, 85, 167, 151, 62, 251, 62, 60, 189, 77, 230, 92, 190, 80, 50, 139, 189, 142, 84, 207, 61, 45, 90, 186, 62, 158, 252, 237, 189, 253, 64, 193, 62, 18, 56, 11, 188, 217, 245, 196, 61, 195, 174, 128, 190, 112, 149, 135, 62, 226, 80, 93, 61, 124, 193, 129, 62, 52, 50, 156, 190, 141, 31, 90, 191, 80, 120, 161, 190, 227, 247, 26, 190, 191, 115, 198, 189, 215, 39, 61, 62, 152, 71, 250, 188, 180, 224, 21, 191, 67, 118, 6, 61, 139, 141, 149, 189, 68, 141, 208, 62, 230, 174, 197, 189, 18, 25, 97, 190, 38, 28, 71, 62, 124, 23, 120, 62, 186, 213, 150, 190, 123, 205, 243, 62, 202, 126, 229, 189, 177, 151, 154, 188, 242, 45, 110, 190, 99, 125, 162, 61, 67, 19, 75, 62, 204, 103, 54, 62, 167, 189, 0, 62, 245, 142, 4, 190, 132, 218, 193, 60, 141, 17, 71, 62, 148, 164, 116, 189, 48, 138, 8, 59, 51, 239, 172, 62, 38, 116, 246, 189, 251, 77, 122, 189, 49, 238, 85, 189, 179, 160, 243, 190, 214, 150, 235, 190, 119, 197, 51, 190, 9, 111, 28, 61, 243, 98, 49, 188, 222, 29, 57, 188, 239, 186, 161, 189, 204, 171, 35, 190, 151, 165, 237, 60, 154, 166, 32, 61, 120, 128, 224, 189, 135, 68, 82, 189, 237, 80, 148, 61, 190, 216, 96, 190, 212, 153, 18, 189, 132, 93, 35, 190, 29, 176, 104, 190, 234, 228, 5, 62, 220, 223, 20, 61, 74, 5, 127, 61, 92, 74, 12, 190, 62, 76, 102, 61, 23, 119, 168, 189, 122, 63, 163, 189, 45, 122, 11, 190, 24, 80, 13, 189, 31, 103, 195, 60, 220, 178, 12, 189, 192, 227, 242, 61, 142, 254, 66, 189, 129, 174, 9, 189, 3, 91, 49, 190, 13, 61, 153, 61, 27, 128, 158, 59, 190, 122, 48, 62, 28, 54, 44, 188, 93, 2, 166, 188, 143, 177, 2, 190, 65, 204, 32, 189, 121, 243, 33, 190, 238, 176, 42, 190, 141, 235, 190, 61, 188, 151, 30, 62, 251, 139, 25, 190, 45, 7, 149, 61, 107, 105, 181, 189, 214, 203, 168, 189, 53, 13, 3, 190, 145, 61, 25, 61, 64, 105, 253, 61, 34, 174, 250, 59, 21, 136, 6, 189, 200, 253, 0, 62, 146, 128, 122, 61, 5, 100, 42, 190, 93, 13, 73, 189, 123, 128, 167, 189, 82, 223, 244, 58, 6, 130, 75, 61, 223, 126, 180, 61, 160, 189, 160, 186, 82, 134, 20, 189, 29, 181, 202, 61, 241, 16, 101, 189, 103, 232, 34, 62, 115, 63, 238, 189, 6, 0, 204, 189, 124, 252, 202, 189, 21, 131, 195, 62, 228, 54, 149, 190, 233, 13, 22, 190, 247, 84, 151, 188, 147, 116, 128, 62, 140, 72, 183, 190, 253, 164, 146, 191, 150, 240, 132, 61, 132, 123, 212, 190, 74, 179, 77, 62, 171, 90, 161, 62, 214, 197, 176, 190, 240, 58, 48, 62, 80, 197, 184, 189, 113, 81, 45, 189, 225, 123, 93, 190, 90, 128, 13, 191, 228, 213, 131, 191, 99, 194, 26, 191, 206, 144, 145, 189, 179, 96, 171, 61, 2, 197, 248, 190, 83, 97, 106, 188, 139, 117, 174, 189, 193, 213, 128, 62, 55, 89, 202, 191, 191, 142, 183, 62, 45, 237, 101, 62, 95, 68, 133, 61, 158, 106, 173, 190, 50, 250, 130, 189, 107, 130, 159, 60, 58, 213, 130, 62, 146, 58, 36, 190, 14, 10, 153, 60, 85, 170, 119, 62, 218, 97, 180, 60, 214, 97, 164, 190, 211, 185, 58, 191, 94, 0, 197, 61, 100, 196, 158, 190, 41, 76, 90, 190, 81, 231, 26, 62, 168, 167, 172, 190, 30, 133, 170, 189, 124, 119, 3, 190, 32, 239, 248, 188, 166, 228, 216, 61, 136, 154, 0, 191, 78, 220, 131, 186, 91, 143, 235, 189, 79, 193, 71, 61, 227, 41, 111, 62, 141, 181, 150, 190, 144, 242, 176, 61, 61, 161, 223, 62, 105, 211, 177, 62, 49, 224, 137, 190, 165, 40, 229, 61, 112, 85, 165, 62, 90, 239, 76, 62, 102, 15, 66, 190, 91, 100, 184, 59, 68, 165, 167, 189, 222, 151, 84, 189, 46, 148, 79, 190, 34, 111, 128, 190, 134, 90, 187, 61, 65, 106, 68, 60, 237, 147, 182, 61, 81, 76, 33, 62, 46, 252, 56, 62, 140, 134, 119, 62, 143, 145, 70, 190, 20, 97, 37, 59, 55, 208, 9, 61, 150, 20, 59, 61, 38, 176, 196, 189, 181, 165, 171, 190, 5, 80, 244, 60, 207, 243, 116, 61, 36, 96, 147, 189, 107, 91, 249, 61, 175, 182, 13, 190, 196, 146, 131, 62, 19, 134, 74, 62, 58, 62, 44, 62, 100, 184, 53, 190, 112, 248, 180, 60, 245, 99, 12, 62, 95, 153, 170, 62, 235, 74, 34, 62, 14, 173, 140, 62, 12, 168, 46, 190, 14, 90, 176, 189, 23, 117, 16, 190, 157, 251, 1, 190, 61, 18, 155, 189, 99, 154, 54, 190, 95, 120, 198, 187, 236, 90, 188, 61, 153, 199, 228, 61, 43, 188, 71, 189, 89, 167, 207, 60, 77, 193, 51, 190, 21, 221, 140, 189, 127, 127, 210, 189, 203, 211, 253, 188, 60, 224, 110, 188, 38, 133, 19, 189, 137, 8, 211, 189, 1, 1, 4, 190, 159, 15, 229, 188, 153, 24, 14, 62, 200, 70, 217, 189, 177, 193, 31, 189, 47, 162, 56, 61, 71, 37, 63, 61, 111, 49, 241, 189, 202, 135, 156, 61, 251, 34, 10, 61, 169, 78, 246, 61, 146, 222, 179, 60, 157, 23, 227, 189, 94, 230, 143, 189, 130, 26, 23, 62};
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
                alignas(float) const unsigned char memory[] = {153, 195, 153, 61, 56, 5, 166, 60, 132, 67, 222, 61, 220, 224, 188, 190, 249, 109, 232, 189, 222, 166, 19, 61, 188, 108, 63, 62, 126, 68, 215, 61, 204, 146, 117, 62, 178, 231, 77, 61, 13, 81, 27, 62, 197, 70, 194, 189, 228, 33, 131, 62, 133, 14, 154, 58, 169, 27, 31, 62, 78, 80, 41, 188, 159, 220, 197, 61, 4, 214, 60, 62, 160, 155, 39, 189, 119, 212, 69, 62, 69, 82, 190, 61, 175, 57, 194, 189, 201, 150, 157, 188, 120, 241, 145, 62, 28, 6, 161, 60, 234, 122, 191, 189, 66, 38, 35, 190, 180, 46, 158, 189, 224, 9, 2, 62, 187, 76, 41, 62, 99, 12, 102, 62, 148, 40, 80, 190};
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
                alignas(float) const unsigned char memory[] = {120, 113, 43, 191, 159, 70, 7, 60, 185, 15, 107, 62, 94, 174, 129, 190, 198, 45, 22, 190, 186, 224, 94, 189, 0, 158, 16, 191, 244, 162, 54, 63, 149, 98, 141, 191, 211, 164, 243, 190, 61, 219, 229, 62, 250, 122, 150, 190, 174, 27, 155, 189, 252, 129, 83, 190, 25, 176, 151, 62, 65, 15, 22, 60, 241, 140, 67, 63, 222, 135, 180, 61, 63, 129, 232, 62, 56, 241, 122, 61, 192, 89, 55, 191, 159, 133, 138, 62, 138, 5, 184, 190, 223, 215, 206, 189, 241, 115, 231, 190, 100, 114, 168, 190, 92, 107, 89, 61, 70, 31, 17, 190, 118, 211, 81, 63, 198, 172, 184, 62, 89, 123, 27, 62, 187, 254, 113, 188, 20, 232, 82, 62, 206, 238, 188, 62, 156, 71, 169, 60, 30, 78, 99, 62, 99, 217, 15, 190, 202, 239, 108, 190, 194, 141, 211, 190, 100, 214, 64, 62, 170, 54, 37, 186, 136, 151, 41, 191, 136, 31, 240, 61, 148, 244, 182, 189, 198, 0, 61, 190, 121, 226, 75, 60, 245, 36, 54, 61, 5, 243, 21, 190, 10, 243, 88, 188, 5, 182, 55, 190, 177, 33, 101, 190, 202, 149, 76, 190, 60, 77, 53, 62, 82, 179, 188, 60, 183, 161, 170, 61, 147, 163, 36, 190, 47, 10, 236, 59, 146, 233, 233, 62, 200, 249, 33, 189, 251, 236, 29, 57, 152, 107, 190, 189, 145, 111, 56, 190, 25, 105, 25, 189, 20, 44, 8, 62};
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
                alignas(float) const unsigned char memory[] = {202, 166, 48, 61, 29, 9, 198, 190};
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
    alignas(float) const unsigned char memory[] = {138, 109, 248, 190, 63, 147, 193, 63, 128, 129, 118, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {124, 57, 166, 190, 118, 189, 125, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0046/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}