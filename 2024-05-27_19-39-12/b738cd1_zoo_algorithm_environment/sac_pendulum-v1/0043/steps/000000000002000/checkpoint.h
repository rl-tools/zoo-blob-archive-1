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
                alignas(float) const unsigned char memory[] = {77, 24, 184, 62, 245, 242, 174, 60, 141, 96, 22, 191, 177, 2, 33, 190, 12, 229, 85, 191, 83, 234, 189, 62, 213, 45, 151, 190, 26, 27, 80, 63, 36, 203, 144, 62, 200, 91, 191, 61, 17, 9, 56, 191, 161, 52, 189, 189, 46, 163, 145, 188, 45, 54, 22, 63, 218, 99, 253, 62, 113, 224, 219, 190, 10, 20, 198, 62, 211, 173, 242, 62, 171, 149, 15, 191, 243, 103, 105, 191, 104, 227, 141, 62, 117, 55, 255, 62, 110, 95, 34, 191, 223, 59, 75, 61, 197, 23, 243, 190, 170, 125, 226, 190, 49, 99, 171, 189, 52, 144, 10, 61, 148, 97, 150, 189, 70, 237, 252, 190, 34, 185, 152, 190, 67, 249, 230, 62, 111, 114, 200, 190, 63, 220, 42, 190, 82, 33, 67, 63, 153, 114, 222, 62, 115, 222, 186, 190, 39, 105, 251, 188, 203, 30, 250, 190, 229, 122, 253, 190, 220, 101, 63, 63, 244, 89, 108, 190, 20, 82, 141, 189, 170, 108, 118, 191, 122, 140, 60, 62, 224, 137, 203, 190, 233, 89, 37, 63, 155, 99, 4, 191, 216, 133, 4, 63, 77, 221, 227, 62, 233, 125, 17, 63, 91, 93, 147, 190, 19, 127, 122, 191, 214, 237, 232, 62, 239, 105, 173, 190, 62, 182, 148, 189, 220, 15, 244, 189, 107, 118, 7, 191, 196, 1, 134, 190, 101, 211, 202, 62, 50, 223, 119, 190, 164, 49, 236, 62, 162, 252, 148, 190, 164, 156, 192, 62, 115, 33, 39, 190, 127, 103, 237, 62, 173, 200, 164, 190, 12, 189, 183, 190, 201, 238, 25, 60, 160, 234, 211, 61, 172, 45, 76, 191, 76, 71, 146, 190, 147, 247, 74, 191, 231, 128, 255, 62, 69, 30, 125, 190, 224, 241, 120, 62, 40, 179, 215, 62, 223, 80, 163, 62, 253, 100, 199, 190, 207, 140, 219, 190, 129, 132, 157, 189, 34, 60, 59, 63, 221, 190, 11, 191, 51, 213, 245, 62, 141, 159, 248, 189, 180, 187, 150, 190, 98, 146, 242, 190, 29, 25, 14, 190, 240, 141, 128, 61, 154, 149, 142, 62, 38, 204, 171, 190, 21, 110, 59, 191, 108, 29, 174, 190, 15, 24, 56, 190, 42, 185, 211, 190, 247, 251, 209, 61};
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
                alignas(float) const unsigned char memory[] = {113, 189, 251, 190, 200, 254, 145, 61, 181, 179, 48, 63, 186, 244, 53, 62, 127, 214, 235, 188, 41, 244, 103, 190, 209, 4, 115, 190, 90, 48, 235, 189, 255, 84, 6, 61, 240, 6, 170, 62, 211, 111, 23, 63, 2, 208, 121, 62, 167, 10, 58, 63, 47, 7, 91, 60, 142, 177, 247, 61, 50, 120, 85, 62, 4, 205, 223, 60, 169, 171, 134, 62, 82, 56, 194, 190, 141, 99, 135, 189, 242, 186, 166, 187, 93, 235, 171, 190, 148, 124, 224, 62, 135, 90, 55, 189, 213, 70, 226, 190, 94, 201, 97, 62, 178, 138, 194, 62, 220, 94, 224, 61, 240, 199, 160, 189, 28, 215, 14, 191, 129, 120, 196, 190, 56, 87, 215, 190};
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
                alignas(float) const unsigned char memory[] = {88, 168, 142, 189, 5, 248, 55, 190, 160, 172, 6, 62, 154, 160, 28, 190, 42, 154, 74, 62, 43, 138, 57, 62, 140, 70, 120, 190, 192, 158, 90, 62, 166, 71, 185, 188, 215, 67, 198, 61, 18, 249, 192, 188, 108, 35, 74, 62, 142, 3, 19, 190, 226, 68, 125, 62, 48, 165, 156, 189, 178, 114, 153, 188, 193, 212, 96, 62, 83, 1, 3, 190, 178, 129, 64, 62, 0, 239, 50, 190, 174, 176, 58, 61, 206, 169, 201, 187, 173, 36, 26, 189, 161, 14, 185, 189, 116, 203, 190, 62, 253, 22, 223, 189, 44, 234, 186, 61, 184, 176, 169, 61, 201, 94, 188, 60, 160, 103, 93, 189, 51, 167, 154, 189, 17, 229, 129, 62, 84, 253, 25, 190, 147, 165, 45, 62, 106, 28, 219, 189, 183, 200, 158, 60, 34, 42, 172, 61, 107, 156, 217, 189, 3, 95, 169, 61, 181, 14, 32, 190, 109, 178, 239, 60, 57, 193, 15, 62, 27, 89, 52, 190, 39, 81, 17, 190, 33, 118, 31, 190, 142, 137, 48, 190, 194, 74, 183, 189, 240, 86, 11, 62, 198, 172, 154, 187, 232, 149, 40, 190, 24, 36, 57, 189, 227, 55, 1, 62, 174, 23, 113, 60, 240, 0, 65, 62, 11, 1, 231, 59, 244, 114, 2, 189, 185, 137, 0, 62, 49, 70, 53, 62, 182, 167, 105, 190, 42, 243, 32, 62, 232, 149, 131, 61, 136, 177, 151, 189, 228, 187, 28, 189, 227, 197, 137, 62, 9, 133, 198, 189, 136, 86, 96, 61, 193, 226, 123, 62, 206, 99, 5, 190, 61, 164, 101, 189, 187, 229, 108, 189, 242, 12, 132, 60, 86, 147, 200, 189, 136, 100, 115, 62, 121, 171, 136, 188, 41, 179, 220, 61, 67, 53, 223, 61, 216, 135, 114, 61, 52, 117, 222, 61, 252, 136, 159, 190, 56, 55, 168, 188, 87, 70, 2, 61, 19, 91, 17, 190, 211, 211, 54, 189, 141, 51, 7, 190, 147, 223, 139, 187, 178, 120, 193, 189, 193, 114, 244, 189, 88, 121, 221, 60, 81, 200, 90, 62, 53, 58, 70, 62, 242, 57, 218, 189, 49, 126, 162, 188, 182, 69, 7, 62, 122, 240, 67, 189, 36, 148, 33, 61, 86, 244, 54, 62, 64, 247, 206, 61, 69, 57, 44, 190, 177, 105, 166, 189, 99, 55, 9, 190, 228, 28, 134, 62, 54, 7, 205, 189, 150, 216, 139, 61, 78, 195, 52, 190, 64, 100, 239, 189, 75, 110, 208, 61, 102, 240, 100, 62, 246, 12, 18, 62, 96, 150, 47, 62, 126, 208, 54, 61, 190, 65, 251, 189, 186, 5, 148, 61, 38, 106, 251, 188, 162, 152, 248, 189, 137, 120, 227, 61, 59, 245, 153, 61, 46, 94, 51, 62, 203, 17, 113, 190, 162, 8, 85, 190, 215, 238, 73, 190, 216, 19, 15, 190, 212, 143, 25, 188, 179, 182, 54, 190, 177, 227, 67, 59, 46, 147, 4, 190, 15, 245, 147, 61, 115, 162, 113, 190, 187, 33, 201, 61, 193, 217, 23, 189, 75, 219, 180, 187, 144, 78, 153, 61, 235, 162, 86, 61, 185, 41, 186, 61, 101, 5, 27, 189, 183, 130, 29, 187, 253, 39, 223, 61, 93, 227, 63, 190, 192, 220, 14, 62, 178, 161, 125, 61, 136, 151, 202, 189, 253, 20, 248, 61, 22, 221, 119, 189, 96, 141, 51, 62, 220, 168, 4, 190, 159, 64, 24, 61, 154, 249, 38, 62, 137, 96, 137, 189, 134, 191, 225, 60, 203, 131, 110, 188, 102, 83, 39, 187, 221, 146, 155, 189, 76, 219, 160, 61, 76, 178, 77, 190, 220, 163, 219, 189, 53, 60, 30, 188, 1, 27, 217, 61, 224, 49, 171, 61, 184, 162, 70, 189, 216, 67, 247, 61, 59, 88, 132, 189, 190, 44, 15, 189, 32, 151, 198, 59, 134, 4, 230, 60, 189, 157, 134, 62, 65, 89, 195, 60, 130, 157, 28, 62, 90, 209, 23, 62, 17, 1, 14, 190, 82, 40, 18, 62, 254, 176, 216, 61, 183, 93, 134, 189, 189, 58, 156, 189, 228, 83, 21, 62, 233, 161, 162, 190, 14, 225, 93, 62, 221, 86, 67, 190, 231, 111, 76, 188, 186, 95, 84, 189, 55, 170, 255, 189, 2, 156, 44, 62, 190, 236, 227, 189, 200, 145, 5, 62, 95, 34, 1, 61, 13, 244, 151, 189, 87, 177, 68, 190, 245, 42, 189, 61, 233, 17, 103, 62, 5, 221, 4, 189, 39, 248, 192, 187, 200, 217, 12, 62, 84, 93, 50, 62, 235, 178, 44, 190, 202, 33, 245, 61, 207, 12, 248, 61, 162, 151, 62, 62, 7, 164, 244, 189, 65, 198, 115, 189, 212, 235, 185, 189, 108, 12, 144, 60, 188, 42, 107, 62, 235, 150, 204, 190, 60, 232, 159, 189, 144, 24, 177, 187, 87, 21, 140, 189, 207, 180, 3, 190, 202, 68, 42, 61, 143, 46, 209, 61, 68, 182, 6, 61, 40, 78, 228, 189, 155, 29, 150, 61, 201, 20, 234, 60, 138, 245, 232, 189, 77, 10, 101, 189, 163, 192, 227, 189, 187, 148, 239, 189, 59, 254, 127, 61, 44, 60, 52, 190, 179, 131, 247, 61, 133, 132, 121, 189, 107, 1, 14, 61, 157, 170, 86, 186, 154, 27, 64, 189, 175, 163, 70, 190, 115, 212, 16, 62, 80, 93, 156, 187, 26, 142, 100, 61, 121, 103, 29, 190, 225, 71, 151, 189, 135, 39, 42, 190, 152, 26, 38, 189, 119, 64, 167, 61, 103, 24, 133, 61, 180, 250, 0, 62, 168, 44, 4, 190, 240, 144, 86, 60, 75, 206, 33, 190, 185, 206, 35, 62, 117, 196, 42, 62, 156, 155, 26, 190, 104, 183, 14, 190, 166, 193, 0, 190, 195, 119, 208, 189, 218, 59, 55, 61, 47, 199, 25, 190, 130, 146, 56, 61, 142, 32, 31, 61, 182, 227, 145, 189, 80, 249, 238, 189, 156, 160, 56, 60, 222, 130, 226, 189, 73, 194, 224, 61, 57, 86, 189, 59, 60, 234, 234, 189, 219, 148, 177, 61, 148, 10, 140, 188, 128, 30, 0, 62, 7, 255, 159, 189, 98, 102, 129, 61, 213, 73, 132, 61, 84, 187, 50, 62, 0, 208, 244, 61, 63, 218, 34, 190, 207, 21, 80, 188, 179, 248, 27, 62, 150, 37, 135, 188, 217, 208, 24, 62, 163, 208, 60, 190, 55, 33, 7, 61, 118, 104, 3, 190, 223, 145, 63, 61, 37, 106, 94, 189, 223, 74, 8, 190, 147, 2, 184, 60, 14, 44, 117, 189, 47, 73, 194, 60, 155, 126, 249, 61, 151, 54, 2, 190, 5, 31, 133, 61, 121, 29, 182, 189, 31, 44, 20, 190, 68, 183, 35, 190, 12, 108, 178, 61, 56, 17, 118, 190, 25, 98, 234, 189, 31, 141, 44, 190, 91, 28, 3, 190, 44, 100, 9, 62, 203, 127, 97, 61, 220, 220, 195, 61, 87, 119, 241, 60, 37, 81, 176, 188, 108, 161, 5, 189, 118, 105, 8, 62, 207, 169, 162, 59, 81, 77, 21, 188, 0, 139, 199, 189, 239, 135, 126, 61, 189, 128, 16, 190, 155, 53, 120, 61, 163, 56, 232, 189, 225, 84, 35, 61, 74, 241, 204, 60, 108, 134, 210, 189, 183, 175, 156, 60, 213, 190, 196, 61, 171, 219, 82, 187, 155, 90, 92, 188, 50, 110, 100, 189, 212, 86, 22, 62, 15, 151, 196, 189, 147, 163, 186, 189, 37, 2, 40, 190, 25, 180, 170, 61, 47, 138, 21, 189, 5, 85, 4, 190, 114, 174, 236, 61, 74, 24, 177, 61, 205, 38, 17, 62, 79, 218, 226, 61, 72, 159, 94, 189, 79, 80, 119, 61, 177, 92, 182, 61, 241, 197, 8, 189, 115, 235, 242, 61, 242, 209, 55, 189, 137, 136, 74, 59, 4, 147, 204, 61, 169, 140, 141, 61, 10, 20, 11, 190, 188, 15, 39, 190, 135, 26, 38, 190, 245, 192, 94, 190, 149, 51, 42, 190, 98, 244, 177, 189, 15, 63, 179, 61, 177, 9, 154, 189, 52, 97, 78, 190, 89, 171, 216, 60, 148, 195, 184, 189, 224, 26, 20, 189, 5, 56, 212, 61, 81, 144, 60, 189, 214, 253, 209, 61, 142, 81, 65, 188, 18, 216, 77, 60, 9, 80, 129, 61, 218, 210, 237, 61, 50, 187, 16, 190, 105, 45, 54, 190, 85, 202, 198, 61, 160, 198, 246, 61, 74, 183, 16, 62, 63, 55, 44, 62, 137, 220, 28, 62, 67, 226, 159, 190, 176, 159, 86, 62, 125, 141, 58, 190, 101, 228, 47, 61, 59, 234, 194, 62, 76, 111, 172, 61, 94, 104, 177, 60, 19, 246, 66, 189, 78, 176, 227, 61, 136, 81, 163, 189, 48, 63, 172, 61, 93, 243, 106, 190, 127, 211, 173, 62, 238, 54, 101, 190, 216, 12, 145, 190, 84, 205, 182, 61, 42, 89, 8, 190, 178, 147, 126, 62, 157, 108, 47, 190, 177, 100, 72, 190, 78, 253, 59, 61, 186, 185, 95, 62, 153, 220, 159, 190, 78, 197, 71, 189, 93, 65, 139, 62, 19, 61, 46, 190, 94, 45, 77, 60, 120, 159, 54, 190, 55, 0, 104, 62, 147, 236, 57, 189, 197, 176, 44, 62, 6, 128, 233, 60, 117, 114, 249, 187, 183, 100, 21, 61, 54, 192, 147, 61, 116, 87, 40, 190, 222, 180, 107, 60, 28, 16, 53, 189, 198, 58, 114, 189, 135, 168, 191, 188, 44, 113, 217, 189, 106, 183, 18, 190, 11, 173, 204, 188, 175, 70, 247, 189, 170, 97, 37, 190, 10, 231, 188, 61, 101, 142, 57, 61, 29, 101, 42, 190, 166, 45, 205, 189, 241, 238, 90, 61, 172, 221, 43, 189, 229, 137, 22, 189, 233, 163, 72, 189, 183, 187, 97, 189, 190, 170, 70, 189, 66, 175, 224, 61, 19, 26, 198, 61, 62, 16, 10, 190, 8, 99, 5, 190, 36, 44, 84, 61, 43, 179, 21, 62, 181, 122, 172, 61, 163, 75, 195, 189, 98, 81, 97, 188, 118, 138, 219, 61, 2, 241, 44, 190, 174, 163, 235, 61, 60, 144, 189, 61, 95, 112, 100, 189, 111, 110, 65, 61, 240, 233, 154, 189, 121, 14, 236, 189, 127, 69, 162, 61, 187, 157, 33, 190, 161, 137, 217, 61, 214, 61, 64, 62, 110, 186, 174, 189, 199, 214, 78, 62, 141, 223, 68, 61, 145, 74, 37, 190, 79, 205, 13, 189, 105, 103, 11, 62, 89, 64, 19, 61, 2, 100, 218, 189, 196, 148, 198, 61, 195, 201, 59, 190, 9, 145, 89, 62, 149, 102, 152, 189, 160, 184, 89, 188, 163, 166, 40, 62, 108, 29, 51, 190, 241, 148, 77, 61, 229, 73, 50, 60, 140, 164, 36, 62, 59, 176, 129, 60, 31, 197, 0, 62, 14, 238, 208, 189, 187, 100, 47, 61, 33, 191, 247, 60, 176, 19, 8, 62, 50, 150, 118, 61, 71, 182, 128, 189, 108, 14, 39, 62, 47, 229, 70, 62, 214, 168, 193, 61, 198, 246, 38, 61, 196, 238, 188, 61, 70, 180, 76, 188, 89, 121, 80, 62, 251, 235, 245, 61, 186, 146, 75, 60, 231, 39, 21, 190, 231, 132, 137, 61, 66, 43, 223, 61, 84, 83, 45, 190, 223, 227, 127, 61, 56, 164, 80, 61, 31, 138, 36, 60, 101, 186, 40, 189, 173, 56, 89, 61, 255, 175, 27, 189, 237, 36, 37, 190, 109, 211, 153, 61, 207, 206, 10, 62, 239, 33, 55, 62, 57, 236, 85, 189, 50, 62, 53, 190, 96, 229, 135, 59, 230, 212, 74, 189, 245, 103, 102, 190, 84, 28, 93, 189, 150, 152, 223, 60, 41, 130, 229, 189, 172, 76, 22, 62, 152, 105, 236, 188, 138, 122, 179, 61, 200, 97, 10, 60, 208, 65, 146, 61, 227, 241, 179, 188, 25, 113, 206, 189, 148, 176, 0, 62, 138, 52, 84, 59, 128, 197, 85, 62, 68, 86, 190, 189, 176, 247, 71, 188, 248, 134, 47, 190, 6, 71, 8, 189, 96, 43, 29, 62, 107, 146, 5, 62, 226, 182, 13, 190, 121, 200, 78, 190, 246, 172, 241, 61, 134, 178, 60, 190, 119, 100, 75, 62, 26, 66, 137, 61, 21, 108, 52, 190, 111, 35, 76, 61, 20, 169, 109, 189, 165, 103, 42, 62, 91, 6, 44, 61, 47, 75, 151, 61, 20, 27, 147, 59, 104, 42, 144, 61, 30, 92, 198, 188, 207, 252, 4, 61, 246, 238, 120, 190, 217, 248, 150, 189, 63, 1, 13, 189, 172, 7, 8, 190, 81, 237, 30, 62, 104, 125, 29, 190, 237, 165, 135, 60, 236, 119, 95, 60, 174, 29, 86, 61, 60, 130, 239, 61, 31, 40, 185, 189, 33, 110, 70, 189, 238, 110, 117, 189, 218, 191, 128, 188, 29, 153, 222, 188, 45, 239, 4, 190, 62, 207, 248, 61, 91, 186, 206, 61, 90, 232, 34, 62, 71, 65, 140, 61, 255, 160, 156, 189, 238, 36, 5, 60, 205, 224, 135, 188, 1, 67, 96, 60, 227, 155, 111, 62, 254, 159, 208, 190, 31, 81, 209, 190, 6, 120, 184, 62, 255, 124, 143, 190, 216, 83, 219, 189, 11, 60, 177, 188, 46, 153, 205, 190, 131, 149, 92, 190, 209, 201, 131, 187, 181, 118, 237, 189, 24, 157, 121, 62, 157, 170, 106, 61, 223, 85, 45, 62, 140, 244, 122, 61, 86, 187, 29, 191, 127, 143, 253, 60, 26, 127, 224, 61, 212, 214, 189, 190, 227, 48, 83, 189, 118, 248, 26, 190, 7, 136, 196, 189, 241, 6, 110, 61, 70, 237, 56, 189, 79, 219, 120, 190, 161, 91, 113, 62, 3, 167, 52, 62, 186, 190, 65, 62, 146, 243, 246, 189, 246, 74, 4, 190, 21, 212, 189, 189, 60, 47, 96, 190, 200, 80, 146, 61, 221, 42, 249, 188, 228, 159, 31, 188, 83, 24, 130, 61, 127, 225, 20, 62, 13, 215, 149, 188, 15, 121, 12, 190, 107, 36, 27, 190, 233, 172, 219, 58, 149, 216, 51, 190, 45, 187, 48, 61, 206, 226, 167, 189, 138, 144, 42, 62, 218, 71, 220, 189, 153, 61, 152, 189, 182, 172, 241, 189, 142, 210, 246, 189, 4, 160, 121, 189, 71, 36, 108, 189, 170, 31, 78, 187, 129, 224, 24, 62, 137, 149, 8, 190, 120, 50, 238, 189, 254, 75, 43, 190, 56, 144, 128, 189, 137, 185, 176, 60, 46, 45, 23, 190, 150, 58, 239, 59, 19, 101, 253, 189, 110, 217, 230, 189, 247, 82, 16, 190, 246, 172, 206, 61, 74, 96, 162, 189, 133, 37, 3, 190, 123, 169, 249, 188, 151, 116, 224, 189, 254, 28, 180, 62, 208, 146, 104, 190, 162, 245, 108, 189, 12, 29, 53, 62, 140, 195, 21, 62, 61, 121, 242, 61, 160, 92, 223, 189, 20, 77, 51, 190, 50, 79, 23, 190, 82, 196, 39, 62, 234, 144, 67, 190, 199, 146, 106, 62, 51, 171, 63, 190, 46, 112, 46, 190, 210, 22, 134, 62, 3, 186, 137, 190, 69, 26, 235, 61, 202, 117, 207, 190, 77, 199, 195, 189, 39, 238, 198, 61, 9, 203, 175, 61, 8, 113, 193, 190, 239, 232, 132, 190, 131, 56, 91, 62, 201, 104, 43, 188, 70, 2, 152, 60, 58, 62, 74, 190, 39, 198, 15, 62, 43, 182, 57, 190, 171, 88, 53, 190, 159, 147, 85, 187, 51, 211, 223, 61, 213, 78, 139, 59, 155, 202, 113, 60, 148, 81, 99, 188, 194, 22, 42, 189, 102, 112, 70, 62, 127, 6, 118, 61, 16, 83, 31, 190, 97, 47, 7, 189, 113, 12, 255, 188, 62, 85, 31, 62, 40, 63, 101, 62, 92, 48, 75, 190, 96, 103, 179, 189, 250, 27, 16, 62, 79, 58, 42, 190, 84, 221, 244, 61, 33, 253, 41, 190, 78, 12, 192, 189, 232, 51, 237, 187, 134, 201, 159, 61, 161, 96, 177, 61, 134, 13, 78, 62, 130, 244, 45, 62, 156, 64, 27, 60, 142, 39, 240, 61, 4, 166, 186, 185, 150, 82, 6, 61, 39, 106, 253, 189, 69, 167, 50, 188, 114, 38, 33, 62, 147, 247, 48, 62, 253, 10, 63, 190, 112, 224, 67, 61, 58, 105, 178, 189, 248, 64, 152, 61, 242, 0, 24, 62, 130, 98, 64, 62, 188, 34, 39, 61, 196, 78, 36, 62, 172, 62, 39, 62, 43, 187, 195, 188, 65, 79, 159, 61, 16, 247, 248, 189, 7, 26, 143, 62, 101, 45, 3, 61, 124, 213, 228, 61, 16, 50, 1, 189, 153, 129, 20, 190, 209, 102, 11, 188, 31, 235, 168, 189, 116, 141, 66, 190, 23, 167, 90, 189, 130, 224, 118, 61, 30, 121, 83, 190, 179, 77, 22, 62, 207, 14, 196, 61, 99, 107, 21, 62, 221, 127, 61, 62, 197, 227, 16, 62, 157, 122, 173, 61, 219, 56, 240, 60, 135, 136, 92, 190, 87, 155, 16, 62, 175, 212, 16, 189, 43, 145, 132, 61, 188, 43, 70, 62, 51, 23, 38, 61, 225, 41, 124, 190, 28, 15, 16, 189, 92, 7, 233, 189, 217, 253, 214, 61, 121, 148, 159, 60, 137, 170, 245, 61, 85, 126, 35, 62, 0, 16, 149, 60, 143, 225, 215, 189, 169, 105, 100, 61, 83, 198, 234, 61, 76, 65, 227, 60, 129, 6, 163, 61, 22, 156, 240, 61, 103, 118, 137, 189, 104, 57, 40, 189, 169, 236, 142, 61, 181, 172, 81, 190, 106, 209, 158, 189, 47, 206, 34, 62, 67, 96, 173, 189, 255, 215, 59, 62, 176, 13, 94, 188, 241, 113, 219, 188, 119, 219, 153, 61, 123, 237, 202, 61, 91, 254, 249, 190, 160, 131, 108, 190, 54, 83, 102, 62, 40, 101, 177, 190, 81, 25, 157, 188, 148, 233, 22, 190, 84, 246, 135, 190, 125, 26, 88, 59, 33, 217, 58, 189, 138, 153, 200, 189, 248, 83, 50, 62, 94, 15, 212, 61, 104, 27, 85, 189, 36, 205, 157, 62, 190, 200, 25, 190, 242, 6, 54, 61, 102, 243, 7, 62, 113, 83, 29, 190, 120, 58, 199, 61, 227, 63, 122, 61, 48, 200, 130, 189, 108, 116, 9, 188, 209, 86, 180, 188, 59, 44, 143, 190, 74, 29, 137, 62, 92, 50, 211, 61, 172, 235, 92, 189, 252, 206, 94, 61, 156, 7, 149, 61, 21, 132, 40, 61, 231, 199, 18, 190, 77, 101, 179, 62, 229, 74, 14, 190, 162, 62, 53, 61, 104, 34, 12, 62, 136, 35, 232, 59, 183, 202, 130, 189, 219, 50, 53, 60, 125, 131, 104, 62, 89, 92, 16, 190, 199, 86, 146, 62, 113, 32, 146, 189, 19, 192, 72, 190, 4, 107, 95, 61, 235, 201, 148, 61, 145, 226, 165, 190, 3, 174, 172, 189, 134, 85, 245, 189, 8, 198, 220, 188, 54, 0, 162, 189, 63, 151, 138, 189, 138, 213, 47, 62, 171, 114, 5, 187, 109, 132, 174, 60, 159, 110, 157, 61, 24, 19, 34, 62, 181, 141, 156, 188, 177, 51, 41, 62, 185, 145, 57, 62, 34, 233, 46, 190, 52, 135, 35, 62, 225, 169, 157, 189, 178, 136, 238, 187, 144, 1, 39, 189, 114, 245, 30, 190, 170, 103, 5, 190, 118, 21, 193, 61, 206, 20, 134, 190, 127, 81, 58, 62, 172, 205, 29, 190, 201, 207, 14, 188, 152, 14, 148, 61, 6, 206, 203, 189, 49, 170, 220, 61, 184, 214, 10, 62, 245, 138, 77, 62, 5, 240, 222, 188, 255, 215, 136, 62, 187, 198, 195, 189, 180, 36, 218, 61, 56, 244, 156, 61, 111, 12, 114, 190, 26, 84, 76, 61, 44, 90, 199, 60, 109, 152, 74, 62, 194, 124, 8, 62, 125, 243, 241, 61, 110, 118, 146, 190, 98, 29, 33, 60, 39, 207, 161, 188, 141, 19, 182, 188, 98, 179, 70, 61, 111, 70, 178, 189, 167, 144, 217, 189, 110, 84, 202, 189, 231, 65, 178, 61, 57, 138, 220, 189, 204, 76, 5, 62, 119, 183, 218, 189, 137, 95, 176, 189, 154, 162, 170, 61, 46, 236, 136, 189, 94, 132, 26, 61, 67, 228, 78, 190, 202, 54, 23, 61, 127, 193, 14, 62, 25, 4, 210, 61, 60, 252, 219, 189, 65, 200, 246, 60, 208, 201, 104, 189, 194, 104, 107, 190, 195, 216, 156, 188, 185, 25, 207, 61, 96, 93, 125, 190, 165, 112, 178, 61, 114, 213, 238, 189, 235, 19, 132, 61, 125, 255, 6, 59, 242, 164, 125, 189, 234, 26, 8, 62, 137, 123, 75, 60, 176, 27, 239, 189, 153, 112, 166, 189, 216, 60, 245, 189, 187, 68, 37, 190, 233, 96, 52, 190, 182, 80, 238, 61, 174, 150, 111, 61, 63, 167, 165, 189, 149, 225, 251, 188, 205, 28, 132, 188, 186, 169, 47, 61, 201, 140, 135, 189, 244, 212, 15, 190, 106, 130, 70, 189, 192, 133, 61, 61, 177, 205, 185, 61, 192, 122, 146, 189, 135, 64, 14, 188, 137, 128, 186, 61, 68, 208, 38, 190, 9, 248, 245, 187, 246, 197, 105, 61, 40, 63, 1, 190, 0, 55, 168, 188, 166, 121, 26, 189, 204, 137, 181, 188, 72, 146, 34, 190, 108, 72, 255, 188, 89, 206, 11, 190, 173, 32, 148, 189, 138, 187, 30, 62, 198, 87, 220, 189, 159, 203, 45, 62, 215, 32, 121, 61, 219, 84, 168, 61, 161, 147, 32, 62, 197, 231, 47, 62, 23, 5, 5, 61, 114, 129, 142, 189, 41, 64, 191, 60, 28, 166, 184, 189, 117, 223, 141, 189, 28, 109, 199, 189, 167, 97, 5, 190, 204, 113, 252, 189, 34, 161, 210, 189, 90, 73, 33, 190, 54, 206, 128, 61, 147, 175, 171, 189, 75, 59, 50, 190, 48, 204, 174, 61, 41, 36, 225, 189, 195, 75, 243, 189, 58, 110, 224, 189, 79, 43, 165, 61, 136, 234, 143, 189, 84, 113, 255, 189, 7, 139, 47, 190, 179, 55, 221, 189, 227, 183, 199, 60, 151, 66, 32, 61, 74, 43, 35, 189, 93, 8, 32, 190, 103, 101, 177, 59, 184, 188, 165, 61, 165, 222, 129, 189, 204, 214, 4, 62, 228, 157, 81, 61, 19, 128, 176, 189, 12, 129, 10, 62, 89, 55, 141, 189, 157, 229, 173, 189, 228, 240, 94, 59, 185, 65, 246, 188, 53, 123, 198, 61, 111, 32, 231, 61, 166, 213, 178, 188, 141, 78, 198, 61, 127, 222, 17, 188, 189, 177, 205, 60, 184, 124, 83, 190, 71, 128, 35, 189, 220, 52, 54, 190, 221, 18, 4, 190, 118, 227, 129, 61, 29, 97, 57, 61, 95, 197, 192, 61, 55, 100, 118, 189, 82, 136, 80, 189, 43, 100, 156, 60, 123, 11, 254, 188, 50, 116, 2, 189, 84, 184, 224, 189, 184, 76, 211, 61, 158, 23, 77, 190, 180, 37, 141, 189, 108, 218, 214, 189, 199, 2, 244, 58, 117, 13, 61, 190, 7, 135, 99, 189, 236, 244, 7, 190, 18, 35, 38, 189, 6, 176, 7, 62, 98, 105, 2, 61, 142, 90, 250, 189, 151, 252, 7, 62, 48, 102, 76, 60, 162, 68, 227, 188, 79, 57, 255, 188, 101, 31, 228, 60, 9, 150, 183, 188, 53, 40, 27, 61, 200, 220, 196, 61, 203, 37, 169, 189, 98, 167, 128, 189, 188, 36, 250, 61, 182, 189, 244, 61, 24, 226, 141, 61, 212, 26, 16, 190, 220, 87, 251, 61, 172, 5, 75, 61, 100, 187, 137, 61, 128, 161, 239, 61, 79, 118, 46, 190, 41, 32, 118, 189, 148, 74, 242, 61, 55, 71, 54, 189, 6, 240, 149, 61, 2, 111, 151, 59, 144, 175, 206, 60, 4, 250, 233, 61, 207, 43, 188, 189, 55, 40, 99, 188, 183, 102, 233, 189, 39, 203, 59, 190, 226, 252, 73, 61, 216, 191, 28, 61, 71, 143, 0, 190, 210, 210, 146, 189, 62, 41, 38, 62, 196, 125, 242, 59, 144, 110, 187, 188, 238, 97, 121, 190, 186, 190, 54, 190, 12, 223, 118, 189, 97, 221, 7, 62, 27, 142, 48, 62, 198, 109, 134, 188, 96, 161, 208, 189, 192, 51, 157, 189, 98, 4, 53, 60, 251, 201, 42, 189, 240, 10, 91, 189, 27, 180, 180, 60, 114, 77, 174, 61, 16, 130, 81, 62, 36, 106, 19, 190, 178, 191, 51, 190, 26, 175, 11, 62, 143, 107, 93, 61, 217, 182, 255, 61, 89, 219, 40, 61, 237, 65, 213, 188, 37, 0, 201, 188, 254, 162, 242, 61, 183, 141, 204, 187, 70, 162, 94, 189};
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
                alignas(float) const unsigned char memory[] = {5, 209, 133, 62, 170, 50, 10, 62, 133, 239, 195, 189, 101, 15, 159, 189, 210, 60, 201, 188, 225, 223, 177, 189, 208, 162, 36, 62, 233, 188, 51, 190, 153, 122, 78, 190, 208, 128, 161, 189, 210, 162, 19, 190, 97, 117, 85, 62, 17, 199, 71, 188, 179, 59, 240, 189, 69, 95, 98, 61, 20, 163, 52, 62, 212, 247, 200, 60, 166, 174, 196, 62, 6, 39, 18, 60, 245, 161, 188, 62, 160, 1, 165, 188, 149, 38, 24, 62, 231, 153, 111, 62, 99, 145, 78, 62, 103, 248, 12, 190, 200, 11, 43, 62, 216, 70, 14, 190, 101, 170, 57, 190, 130, 126, 179, 60, 168, 200, 181, 187, 112, 114, 69, 62, 145, 1, 59, 61};
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
                alignas(float) const unsigned char memory[] = {3, 233, 133, 190, 2, 116, 35, 190, 242, 65, 61, 190, 61, 15, 42, 62, 61, 32, 88, 61, 14, 201, 15, 62, 248, 183, 47, 190, 97, 248, 226, 60, 86, 2, 114, 60, 27, 67, 36, 61, 148, 232, 234, 189, 66, 122, 193, 62, 19, 103, 132, 60, 198, 164, 86, 190, 47, 190, 69, 61, 222, 50, 157, 189, 85, 188, 236, 189, 60, 21, 43, 191, 130, 234, 27, 190, 168, 25, 2, 63, 246, 180, 220, 189, 1, 165, 26, 62, 58, 74, 131, 189, 94, 121, 121, 190, 207, 114, 48, 62, 162, 228, 105, 190, 246, 183, 52, 188, 36, 46, 184, 61, 211, 69, 249, 61, 182, 57, 33, 190, 194, 92, 69, 186, 178, 192, 175, 61, 119, 239, 3, 189, 16, 143, 5, 62, 113, 242, 238, 61, 76, 41, 142, 190, 145, 218, 20, 190, 93, 109, 110, 61, 143, 141, 128, 190, 76, 27, 34, 190, 93, 162, 24, 62, 139, 63, 1, 61, 47, 60, 252, 188, 18, 228, 24, 60, 185, 135, 27, 62, 243, 106, 8, 62, 15, 203, 29, 60, 143, 53, 239, 189, 37, 39, 151, 61, 255, 242, 46, 190, 23, 1, 160, 188, 93, 172, 62, 190, 142, 183, 188, 188, 86, 213, 29, 190, 46, 230, 245, 189, 247, 110, 34, 61, 141, 118, 201, 60, 254, 120, 139, 189, 198, 10, 146, 61, 147, 100, 31, 190, 209, 181, 144, 61, 230, 221, 167, 61, 144, 220, 181, 189, 57, 198, 41, 190};
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
                alignas(float) const unsigned char memory[] = {180, 10, 15, 62, 191, 208, 12, 190};
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
    alignas(float) const unsigned char memory[] = {164, 225, 19, 63, 154, 164, 98, 62, 64, 66, 243, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {40, 13, 50, 62, 2, 9, 35, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0043/steps/000000000002000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}