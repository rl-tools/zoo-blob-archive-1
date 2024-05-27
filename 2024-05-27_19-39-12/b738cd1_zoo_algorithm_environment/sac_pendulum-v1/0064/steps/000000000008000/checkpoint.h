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
                alignas(float) const unsigned char memory[] = {215, 198, 82, 187, 72, 74, 194, 190, 120, 243, 167, 62, 89, 196, 7, 190, 165, 173, 152, 191, 235, 139, 195, 190, 8, 175, 167, 61, 91, 98, 54, 63, 225, 170, 215, 62, 243, 129, 205, 190, 37, 124, 22, 191, 51, 175, 138, 190, 21, 109, 119, 62, 248, 137, 2, 63, 41, 213, 253, 190, 24, 248, 36, 62, 90, 142, 125, 190, 173, 71, 91, 188, 223, 42, 248, 190, 121, 129, 34, 61, 185, 223, 145, 190, 175, 127, 76, 190, 209, 175, 150, 191, 28, 37, 100, 59, 245, 71, 9, 191, 69, 234, 72, 190, 104, 252, 10, 191, 233, 23, 6, 191, 221, 152, 113, 62, 164, 45, 201, 62, 184, 199, 83, 63, 8, 76, 141, 63, 113, 105, 200, 62, 17, 236, 19, 189, 78, 87, 76, 191, 72, 251, 213, 62, 52, 221, 181, 188, 98, 247, 22, 62, 103, 38, 62, 191, 140, 48, 78, 61, 171, 155, 6, 191, 51, 155, 246, 62, 16, 241, 230, 190, 135, 43, 23, 63, 120, 164, 25, 63, 201, 227, 47, 63, 38, 93, 54, 63, 72, 87, 201, 61, 88, 20, 21, 191, 191, 63, 189, 61, 53, 60, 197, 62, 184, 162, 219, 62, 57, 47, 132, 62, 18, 141, 242, 62, 234, 71, 80, 62, 129, 181, 223, 60, 23, 78, 156, 190, 46, 145, 71, 61, 34, 118, 30, 191, 84, 220, 247, 190, 84, 83, 12, 191, 137, 189, 37, 191, 254, 115, 27, 63, 139, 95, 238, 62, 144, 206, 22, 63, 150, 216, 5, 191, 215, 164, 163, 62, 205, 83, 173, 189, 195, 13, 35, 63, 112, 42, 92, 62, 91, 206, 143, 189, 54, 67, 30, 63, 162, 183, 87, 63, 63, 116, 137, 190, 205, 84, 27, 191, 220, 64, 56, 190, 85, 142, 0, 63, 37, 234, 246, 60, 111, 161, 148, 190, 156, 17, 51, 191, 73, 110, 82, 190, 228, 198, 138, 190, 218, 1, 144, 62, 58, 230, 30, 63, 190, 243, 6, 63, 41, 224, 34, 63, 25, 28, 150, 62, 185, 160, 58, 63, 117, 246, 146, 189, 168, 121, 151, 190, 54, 94, 18, 63, 113, 230, 162, 189, 178, 29, 21, 63, 139, 176, 66, 191, 147, 57, 78, 63, 118, 19, 131, 61};
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
                alignas(float) const unsigned char memory[] = {118, 91, 51, 191, 148, 164, 94, 62, 103, 208, 119, 190, 54, 138, 9, 191, 113, 174, 239, 189, 75, 38, 216, 190, 24, 155, 51, 191, 124, 185, 60, 62, 109, 241, 44, 191, 253, 194, 174, 190, 166, 89, 56, 191, 133, 199, 2, 62, 42, 162, 68, 61, 158, 125, 216, 62, 43, 219, 141, 62, 229, 132, 66, 62, 217, 139, 220, 190, 160, 92, 25, 62, 183, 68, 130, 191, 8, 206, 56, 191, 20, 169, 198, 62, 74, 183, 164, 60, 216, 116, 39, 63, 212, 182, 124, 62, 87, 180, 53, 185, 66, 195, 43, 63, 155, 147, 46, 63, 177, 100, 62, 62, 138, 75, 216, 190, 187, 25, 153, 60, 116, 153, 199, 62, 181, 178, 6, 63};
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
                alignas(float) const unsigned char memory[] = {210, 195, 40, 190, 173, 184, 184, 190, 64, 191, 97, 190, 26, 162, 22, 191, 249, 252, 53, 188, 204, 202, 24, 190, 196, 115, 53, 191, 30, 158, 186, 190, 32, 66, 54, 190, 66, 151, 106, 190, 91, 70, 69, 190, 218, 59, 107, 61, 37, 245, 39, 189, 222, 200, 133, 190, 203, 50, 135, 62, 43, 108, 32, 62, 107, 245, 90, 189, 153, 7, 149, 189, 85, 208, 166, 61, 18, 234, 234, 61, 201, 34, 136, 62, 76, 196, 244, 61, 255, 154, 194, 61, 254, 39, 236, 189, 162, 218, 38, 62, 165, 61, 150, 62, 249, 141, 40, 188, 157, 105, 105, 62, 225, 225, 131, 190, 220, 233, 152, 61, 160, 201, 23, 190, 248, 215, 22, 62, 27, 145, 104, 190, 29, 207, 30, 61, 196, 63, 28, 58, 10, 157, 135, 188, 243, 206, 57, 62, 133, 146, 194, 189, 232, 162, 121, 189, 164, 91, 137, 189, 208, 30, 39, 188, 65, 254, 241, 189, 77, 173, 171, 59, 102, 25, 64, 62, 99, 185, 242, 61, 253, 247, 185, 60, 161, 145, 163, 189, 33, 86, 139, 189, 69, 37, 25, 60, 108, 73, 5, 189, 37, 70, 168, 62, 12, 176, 14, 62, 93, 20, 94, 61, 122, 249, 20, 62, 129, 226, 116, 189, 234, 207, 216, 61, 88, 140, 44, 61, 236, 178, 218, 190, 115, 193, 159, 188, 101, 182, 254, 61, 56, 51, 226, 189, 220, 134, 144, 62, 162, 50, 105, 190, 109, 249, 14, 191, 66, 111, 185, 190, 30, 85, 104, 62, 107, 230, 78, 190, 119, 164, 230, 190, 231, 159, 156, 190, 182, 118, 205, 61, 219, 245, 209, 190, 98, 196, 142, 190, 207, 206, 81, 191, 74, 221, 33, 190, 31, 229, 157, 190, 5, 42, 100, 62, 164, 248, 197, 188, 32, 15, 178, 189, 1, 174, 105, 62, 30, 156, 128, 61, 229, 126, 149, 61, 95, 100, 35, 189, 28, 252, 138, 62, 71, 178, 150, 62, 216, 106, 130, 61, 114, 154, 84, 62, 97, 80, 25, 62, 208, 89, 41, 190, 212, 186, 30, 62, 8, 160, 140, 62, 5, 53, 127, 61, 98, 179, 16, 187, 47, 226, 110, 190, 10, 142, 129, 62, 126, 168, 17, 59, 245, 156, 131, 62, 56, 20, 180, 58, 184, 18, 103, 190, 244, 183, 141, 190, 122, 251, 184, 190, 158, 19, 110, 191, 89, 194, 35, 190, 201, 217, 88, 191, 248, 101, 147, 190, 66, 3, 134, 191, 205, 175, 204, 61, 254, 153, 104, 190, 24, 164, 61, 62, 179, 7, 228, 190, 217, 181, 157, 189, 59, 108, 84, 61, 159, 38, 118, 189, 174, 36, 94, 188, 184, 175, 130, 186, 206, 237, 65, 189, 156, 197, 219, 59, 174, 114, 244, 62, 190, 75, 19, 191, 100, 174, 129, 189, 175, 179, 127, 190, 184, 135, 221, 190, 119, 125, 25, 62, 170, 51, 208, 61, 102, 99, 220, 61, 3, 106, 130, 190, 217, 233, 45, 191, 9, 157, 125, 189, 23, 90, 146, 62, 40, 140, 64, 62, 248, 121, 128, 189, 12, 42, 120, 189, 84, 176, 184, 61, 156, 170, 50, 62, 87, 225, 16, 62, 80, 76, 156, 62, 69, 229, 95, 189, 173, 222, 53, 60, 30, 27, 62, 62, 44, 31, 34, 190, 65, 187, 168, 189, 59, 179, 56, 60, 20, 177, 168, 62, 97, 89, 188, 58, 241, 19, 93, 62, 126, 210, 90, 62, 183, 9, 195, 61, 112, 60, 122, 190, 0, 61, 47, 189, 104, 70, 235, 59, 95, 166, 31, 190, 115, 18, 114, 62, 251, 251, 127, 62, 237, 189, 130, 189, 53, 196, 127, 62, 159, 123, 63, 62, 225, 137, 119, 190, 6, 120, 98, 188, 163, 252, 84, 189, 80, 71, 220, 61, 72, 162, 174, 189, 175, 247, 137, 190, 228, 83, 17, 62, 34, 203, 43, 190, 22, 197, 4, 190, 81, 175, 57, 61, 247, 111, 103, 61, 248, 53, 48, 190, 30, 212, 112, 61, 25, 183, 147, 188, 105, 188, 53, 190, 188, 109, 186, 190, 97, 8, 171, 62, 109, 56, 60, 62, 161, 32, 39, 60, 156, 54, 216, 60, 195, 80, 196, 60, 7, 98, 223, 188, 147, 60, 18, 190, 172, 204, 92, 61, 17, 221, 46, 61, 74, 108, 163, 60, 209, 139, 91, 62, 108, 107, 218, 188, 204, 155, 182, 188, 173, 162, 57, 62, 226, 128, 229, 61, 116, 219, 91, 62, 149, 2, 104, 189, 80, 160, 184, 190, 138, 236, 55, 62, 29, 24, 199, 61, 166, 52, 45, 190, 122, 42, 175, 190, 59, 158, 24, 62, 176, 10, 135, 190, 237, 172, 128, 61, 83, 60, 237, 189, 97, 205, 133, 60, 194, 47, 134, 190, 156, 80, 215, 62, 105, 6, 170, 189, 164, 213, 177, 190, 23, 184, 3, 190, 50, 111, 65, 62, 31, 241, 208, 60, 203, 212, 207, 62, 46, 211, 24, 189, 49, 174, 181, 190, 46, 83, 181, 190, 44, 55, 47, 190, 170, 221, 83, 62, 74, 200, 146, 62, 181, 134, 188, 61, 116, 156, 134, 62, 192, 170, 111, 62, 65, 43, 65, 189, 140, 23, 169, 62, 243, 117, 0, 191, 69, 7, 49, 189, 234, 47, 134, 190, 2, 35, 34, 62, 41, 231, 150, 62, 74, 1, 242, 188, 163, 20, 12, 191, 200, 9, 99, 61, 186, 32, 22, 62, 228, 244, 201, 61, 57, 248, 140, 61, 98, 205, 99, 62, 31, 218, 103, 61, 203, 128, 45, 62, 79, 202, 165, 190, 166, 8, 124, 61, 215, 37, 14, 62, 122, 108, 255, 189, 50, 124, 143, 190, 117, 245, 38, 189, 246, 228, 196, 61, 66, 144, 211, 189, 148, 135, 217, 62, 221, 111, 51, 190, 116, 105, 212, 60, 154, 17, 248, 190, 206, 202, 108, 190, 96, 203, 199, 189, 119, 221, 103, 190, 79, 44, 11, 190, 219, 106, 199, 189, 58, 40, 100, 190, 34, 102, 0, 62, 200, 53, 196, 188, 134, 125, 142, 190, 87, 144, 147, 60, 208, 140, 5, 62, 67, 19, 136, 62, 202, 36, 111, 62, 115, 68, 254, 188, 224, 249, 48, 190, 50, 156, 145, 61, 186, 31, 96, 189, 140, 154, 72, 189, 105, 129, 114, 189, 142, 162, 42, 190, 151, 220, 25, 190, 120, 29, 178, 61, 110, 19, 245, 61, 33, 184, 14, 190, 150, 81, 48, 190, 1, 160, 203, 189, 84, 34, 40, 190, 146, 244, 235, 189, 155, 230, 11, 61, 217, 121, 245, 189, 43, 206, 27, 61, 36, 184, 178, 61, 85, 52, 3, 62, 212, 78, 196, 188, 80, 35, 97, 189, 173, 218, 6, 61, 15, 43, 4, 61, 25, 16, 238, 188, 102, 219, 36, 190, 140, 39, 140, 189, 129, 168, 152, 189, 18, 72, 32, 190, 53, 14, 156, 61, 106, 174, 216, 61, 103, 30, 45, 190, 101, 51, 214, 189, 225, 203, 198, 189, 48, 254, 179, 190, 57, 172, 14, 191, 98, 115, 73, 190, 108, 195, 24, 60, 16, 210, 34, 191, 29, 196, 192, 189, 169, 79, 23, 191, 135, 246, 160, 190, 52, 4, 83, 190, 33, 232, 171, 62, 183, 140, 43, 60, 9, 159, 127, 61, 71, 41, 102, 189, 107, 133, 69, 190, 5, 83, 141, 190, 108, 86, 13, 61, 118, 197, 148, 60, 94, 46, 167, 62, 195, 101, 229, 60, 198, 199, 202, 61, 111, 206, 17, 62, 34, 206, 201, 61, 195, 1, 16, 62, 168, 122, 185, 189, 171, 8, 130, 62, 124, 42, 235, 189, 11, 16, 173, 190, 255, 124, 71, 62, 88, 46, 235, 189, 6, 254, 154, 61, 14, 186, 91, 189, 127, 93, 87, 190, 228, 138, 193, 190, 120, 228, 138, 190, 138, 188, 165, 62, 46, 21, 242, 189, 146, 145, 197, 61, 104, 189, 177, 190, 254, 157, 4, 190, 135, 221, 161, 190, 134, 150, 27, 191, 68, 236, 158, 189, 238, 5, 74, 62, 35, 160, 166, 190, 35, 50, 193, 190, 224, 111, 51, 62, 24, 37, 167, 190, 51, 218, 218, 190, 14, 189, 112, 190, 145, 158, 198, 190, 28, 120, 174, 190, 251, 242, 49, 189, 255, 198, 4, 191, 124, 116, 19, 190, 199, 110, 4, 191, 133, 137, 8, 62, 202, 45, 243, 189, 72, 15, 143, 190, 12, 66, 21, 191, 239, 174, 25, 191, 174, 78, 143, 190, 105, 191, 187, 62, 235, 148, 123, 61, 84, 65, 219, 189, 52, 172, 219, 189, 177, 107, 72, 189, 150, 79, 12, 62, 176, 175, 4, 189, 219, 110, 210, 60, 116, 121, 230, 188, 212, 67, 47, 190, 185, 108, 0, 190, 111, 137, 35, 61, 136, 128, 224, 189, 195, 140, 109, 189, 107, 146, 206, 61, 8, 153, 61, 189, 37, 91, 138, 189, 76, 20, 18, 190, 22, 144, 40, 190, 182, 167, 11, 190, 200, 100, 44, 61, 206, 19, 205, 188, 138, 128, 200, 189, 111, 127, 2, 189, 153, 8, 13, 190, 141, 81, 203, 188, 244, 100, 6, 62, 32, 28, 235, 189, 177, 195, 61, 187, 11, 63, 149, 61, 100, 221, 108, 61, 111, 173, 234, 189, 96, 212, 203, 189, 126, 28, 82, 61, 161, 119, 135, 61, 164, 135, 74, 62, 49, 44, 132, 62, 179, 234, 8, 62, 182, 76, 93, 189, 41, 248, 37, 61, 2, 159, 222, 190, 55, 204, 251, 186, 114, 122, 170, 61, 29, 157, 3, 63, 12, 205, 56, 190, 89, 227, 151, 189, 214, 83, 220, 189, 146, 136, 147, 189, 71, 124, 137, 62, 1, 219, 201, 61, 188, 201, 54, 62, 10, 98, 18, 62, 254, 216, 211, 188, 33, 210, 39, 190, 71, 246, 104, 188, 120, 137, 203, 188, 170, 30, 199, 61, 164, 39, 145, 190, 241, 102, 84, 189, 170, 155, 241, 189, 197, 41, 210, 189, 78, 3, 200, 62, 21, 133, 236, 189, 155, 46, 39, 61, 187, 210, 28, 190, 55, 130, 159, 190, 33, 216, 108, 61, 218, 238, 23, 191, 124, 214, 70, 190, 66, 7, 163, 61, 140, 111, 242, 61, 101, 35, 142, 190, 9, 146, 139, 191, 209, 180, 138, 190, 41, 148, 69, 191, 221, 238, 192, 189, 215, 104, 167, 61, 116, 63, 13, 62, 173, 109, 61, 191, 29, 16, 79, 62, 69, 35, 230, 190, 54, 32, 50, 191, 149, 11, 131, 190, 66, 104, 154, 61, 218, 78, 86, 62, 74, 111, 232, 62, 64, 202, 120, 61, 236, 98, 101, 61, 214, 164, 6, 191, 110, 60, 95, 62, 253, 63, 191, 190, 226, 171, 185, 59, 97, 50, 253, 62, 191, 210, 160, 189, 96, 206, 189, 62, 6, 57, 168, 190, 174, 198, 168, 190, 195, 219, 251, 60, 54, 63, 49, 190, 156, 193, 6, 190, 96, 225, 129, 61, 142, 13, 194, 189, 215, 155, 203, 189, 254, 80, 251, 188, 30, 248, 3, 190, 131, 160, 29, 190, 100, 226, 33, 62, 190, 66, 139, 61, 198, 133, 40, 62, 193, 13, 2, 62, 191, 122, 48, 190, 212, 109, 184, 61, 39, 112, 24, 189, 145, 26, 113, 189, 227, 72, 147, 189, 74, 4, 206, 61, 144, 178, 232, 187, 205, 12, 24, 62, 55, 178, 252, 189, 196, 94, 47, 190, 160, 121, 179, 189, 63, 215, 7, 61, 24, 218, 37, 190, 246, 193, 9, 190, 77, 165, 94, 189, 140, 155, 201, 59, 66, 194, 44, 62, 210, 100, 237, 59, 84, 141, 14, 62, 37, 171, 36, 190, 111, 142, 32, 190, 78, 50, 37, 62, 150, 115, 135, 188, 187, 251, 139, 187, 236, 24, 224, 188, 239, 55, 22, 190, 79, 134, 7, 62, 88, 120, 49, 62, 166, 126, 193, 189, 212, 133, 234, 189, 149, 203, 252, 61, 36, 12, 156, 189, 9, 148, 33, 189, 254, 224, 177, 189, 26, 135, 82, 61, 44, 4, 249, 61, 16, 227, 199, 60, 11, 163, 217, 188, 156, 166, 215, 60, 43, 229, 16, 62, 128, 127, 52, 190, 26, 103, 217, 189, 235, 190, 193, 189, 68, 154, 90, 189, 89, 27, 170, 188, 21, 23, 36, 189, 118, 32, 16, 190, 191, 251, 117, 61, 113, 34, 111, 189, 61, 131, 252, 189, 29, 237, 162, 189, 241, 28, 231, 61, 41, 141, 218, 60, 212, 171, 159, 61, 62, 153, 14, 189, 53, 229, 59, 62, 209, 182, 22, 62, 135, 62, 47, 62, 229, 5, 214, 61, 44, 14, 85, 59, 161, 31, 215, 61, 183, 73, 70, 188, 82, 253, 193, 189, 90, 206, 238, 189, 157, 30, 172, 62, 189, 196, 208, 187, 208, 108, 166, 62, 106, 144, 114, 189, 118, 37, 131, 62, 118, 141, 113, 190, 30, 124, 101, 189, 107, 87, 10, 61, 249, 160, 2, 190, 89, 177, 141, 189, 159, 43, 181, 61, 68, 188, 30, 190, 210, 125, 235, 61, 107, 150, 100, 62, 30, 226, 211, 61, 227, 147, 48, 190, 240, 239, 73, 62, 150, 95, 122, 61, 48, 238, 252, 189, 113, 155, 252, 61, 13, 35, 50, 190, 74, 254, 232, 59, 137, 252, 166, 190, 186, 213, 53, 62, 138, 90, 120, 60, 185, 248, 2, 189, 205, 156, 29, 190, 251, 70, 170, 189, 207, 69, 128, 189, 165, 18, 160, 62, 28, 214, 73, 189, 7, 96, 203, 189, 223, 42, 213, 189, 187, 19, 27, 190, 44, 51, 181, 62, 47, 164, 39, 188, 193, 156, 172, 61, 212, 214, 135, 190, 2, 247, 159, 190, 122, 13, 18, 190, 107, 100, 142, 62, 251, 106, 30, 62, 158, 180, 151, 189, 105, 127, 72, 62, 97, 85, 38, 62, 230, 245, 38, 189, 115, 232, 148, 61, 153, 193, 125, 62, 176, 56, 176, 62, 254, 243, 32, 62, 62, 144, 143, 190, 201, 134, 167, 188, 128, 78, 137, 190, 211, 204, 12, 61, 97, 187, 2, 190, 240, 31, 27, 61, 112, 113, 227, 189, 73, 145, 107, 189, 166, 229, 145, 189, 11, 68, 34, 62, 202, 205, 87, 190, 227, 188, 45, 62, 98, 51, 80, 190, 55, 55, 121, 61, 25, 122, 140, 61, 1, 0, 34, 190, 144, 2, 144, 62, 38, 110, 90, 189, 35, 27, 37, 62, 28, 12, 196, 60, 100, 22, 135, 190, 35, 236, 107, 190, 214, 229, 148, 189, 40, 120, 214, 61, 129, 94, 199, 189, 104, 224, 229, 189, 138, 1, 99, 61, 82, 5, 195, 61, 123, 29, 59, 190, 61, 153, 136, 62, 7, 0, 188, 188, 175, 154, 177, 61, 97, 86, 5, 61, 78, 139, 217, 60, 76, 69, 41, 62, 165, 191, 218, 190, 82, 6, 80, 191, 169, 48, 93, 190, 206, 236, 51, 190, 65, 123, 199, 190, 210, 56, 218, 189, 106, 43, 3, 191, 70, 51, 200, 187, 66, 185, 198, 190, 65, 145, 176, 61, 187, 84, 100, 190, 143, 216, 165, 189, 165, 118, 66, 62, 206, 106, 184, 190, 201, 137, 19, 61, 195, 189, 61, 190, 178, 99, 112, 61, 157, 226, 112, 62, 160, 28, 206, 61, 170, 88, 160, 62, 167, 138, 102, 62, 177, 142, 151, 189, 46, 57, 26, 62, 170, 72, 17, 189, 234, 215, 13, 62, 73, 102, 165, 62, 154, 92, 145, 190, 205, 67, 176, 62, 185, 206, 166, 189, 132, 215, 212, 61, 190, 99, 0, 190, 44, 7, 49, 191, 156, 182, 155, 61, 63, 177, 168, 61, 129, 198, 6, 190, 215, 79, 193, 61, 141, 235, 121, 190, 91, 115, 151, 190, 4, 171, 6, 191, 5, 64, 96, 190, 113, 70, 48, 191, 168, 13, 80, 61, 83, 193, 134, 189, 40, 58, 67, 190, 151, 211, 192, 189, 70, 136, 163, 62, 3, 37, 110, 190, 231, 4, 37, 61, 91, 245, 156, 62, 224, 249, 148, 190, 152, 243, 191, 189, 222, 31, 103, 62, 96, 237, 59, 62, 87, 118, 12, 62, 245, 113, 142, 62, 120, 194, 147, 62, 84, 155, 167, 190, 196, 241, 55, 61, 61, 33, 43, 190, 190, 29, 25, 62, 163, 237, 92, 62, 35, 43, 202, 189, 32, 233, 165, 190, 56, 183, 46, 190, 59, 122, 1, 191, 190, 172, 94, 191, 229, 141, 184, 190, 76, 137, 0, 62, 76, 98, 20, 191, 48, 122, 1, 191, 169, 235, 133, 191, 119, 37, 28, 191, 38, 206, 28, 190, 176, 228, 146, 62, 111, 109, 40, 190, 90, 50, 226, 190, 115, 82, 85, 188, 92, 146, 58, 189, 88, 132, 147, 190, 170, 61, 217, 190, 132, 222, 250, 60, 238, 90, 130, 188, 203, 57, 160, 62, 183, 142, 4, 62, 192, 1, 161, 189, 155, 245, 164, 190, 154, 255, 4, 61, 68, 109, 68, 62, 199, 182, 47, 62, 38, 106, 72, 62, 104, 224, 217, 190, 197, 61, 213, 189, 226, 166, 101, 190, 97, 1, 163, 62, 225, 169, 195, 61, 67, 47, 198, 189, 184, 194, 220, 59, 74, 57, 77, 190, 60, 124, 167, 61, 58, 235, 253, 189, 21, 153, 142, 62, 93, 116, 241, 189, 200, 153, 197, 188, 115, 67, 182, 58, 244, 107, 93, 190, 198, 69, 4, 191, 255, 56, 131, 61, 205, 124, 131, 60, 83, 38, 132, 189, 179, 77, 171, 61, 74, 111, 88, 62, 57, 122, 14, 189, 182, 194, 174, 190, 117, 105, 223, 190, 110, 140, 39, 190, 213, 126, 190, 188, 172, 190, 130, 190, 143, 174, 9, 190, 78, 88, 239, 61, 122, 105, 135, 62, 32, 56, 123, 190, 168, 252, 9, 188, 232, 218, 176, 189, 10, 142, 0, 62, 111, 47, 85, 61, 11, 246, 43, 62, 19, 253, 214, 189, 141, 17, 167, 189, 88, 72, 202, 60, 119, 172, 123, 189, 78, 80, 52, 61, 158, 164, 227, 189, 244, 140, 96, 60, 127, 252, 44, 190, 188, 118, 23, 62, 22, 78, 30, 62, 132, 9, 38, 60, 91, 252, 181, 189, 76, 31, 132, 189, 90, 126, 166, 61, 226, 223, 22, 190, 65, 135, 236, 188, 249, 155, 34, 62, 134, 129, 95, 189, 121, 103, 67, 60, 137, 24, 129, 188, 19, 85, 61, 189, 221, 21, 0, 190, 94, 15, 70, 189, 241, 33, 0, 62, 9, 211, 236, 61, 72, 232, 215, 60, 196, 220, 31, 189, 185, 231, 239, 189, 201, 61, 22, 62, 221, 138, 226, 189, 74, 26, 22, 190, 65, 212, 180, 189, 209, 168, 197, 61, 12, 101, 77, 188, 42, 83, 5, 190, 18, 187, 5, 190, 247, 166, 195, 189, 73, 166, 180, 61, 120, 151, 87, 61, 225, 246, 106, 188, 28, 39, 170, 61, 64, 227, 48, 190, 210, 254, 245, 61, 190, 137, 149, 188, 134, 109, 114, 61, 169, 154, 168, 61, 156, 65, 34, 190, 251, 149, 227, 189, 132, 197, 171, 189, 191, 173, 177, 189, 108, 107, 217, 61, 148, 194, 246, 189, 96, 18, 182, 61, 114, 66, 35, 190, 23, 157, 154, 188, 246, 252, 51, 60, 95, 231, 46, 190, 228, 110, 151, 61, 176, 6, 236, 189, 221, 222, 132, 61, 8, 242, 135, 189, 123, 138, 48, 62, 101, 211, 19, 190, 78, 207, 161, 61, 90, 140, 67, 189, 100, 130, 55, 190, 36, 242, 86, 62, 55, 142, 31, 62, 95, 6, 210, 61, 231, 28, 238, 189, 99, 190, 143, 62, 127, 76, 187, 61, 163, 112, 245, 189, 211, 244, 154, 190, 225, 12, 213, 62, 245, 96, 67, 190, 173, 3, 10, 62, 42, 125, 111, 190, 137, 2, 63, 189, 40, 10, 83, 62, 172, 70, 240, 188, 6, 9, 66, 62, 128, 166, 84, 190, 179, 109, 183, 59, 230, 204, 208, 190, 19, 218, 19, 189, 229, 73, 75, 190, 162, 71, 64, 61, 188, 155, 69, 190, 140, 166, 54, 62, 2, 2, 113, 187, 55, 145, 239, 189, 14, 104, 167, 61, 168, 60, 165, 190, 77, 181, 1, 189, 40, 71, 80, 62, 53, 19, 82, 62, 77, 55, 115, 62, 78, 5, 177, 61, 33, 15, 167, 189, 248, 190, 138, 189, 63, 10, 187, 60, 84, 234, 187, 62, 225, 166, 33, 190, 40, 158, 118, 62, 252, 62, 80, 189, 19, 248, 203, 189, 122, 133, 130, 190, 220, 175, 214, 61, 95, 199, 99, 61, 62, 234, 138, 61, 38, 13, 28, 61, 77, 131, 219, 189, 57, 64, 70, 62, 4, 155, 139, 189, 225, 207, 125, 188, 147, 74, 222, 189, 9, 233, 156, 190, 241, 155, 121, 61, 28, 9, 16, 62, 227, 97, 80, 61, 53, 158, 253, 60, 122, 17, 21, 62, 25, 79, 29, 190, 54, 223, 40, 59, 19, 2, 182, 190, 176, 9, 193, 62, 165, 175, 206, 61, 153, 95, 56, 190, 106, 207, 35, 189, 76, 4, 11, 186, 28, 55, 38, 62, 114, 242, 140, 188, 188, 91, 50, 62, 13, 6, 94, 62, 68, 177, 50, 62, 28, 125, 25, 62, 203, 89, 20, 190, 117, 140, 49, 63, 233, 69, 130, 191, 250, 147, 150, 62, 148, 135, 232, 61, 10, 234, 138, 191, 226, 15, 76, 62, 28, 86, 70, 190, 13, 191, 81, 62, 157, 204, 127, 190, 227, 203, 149, 190, 62, 120, 139, 189, 235, 64, 90, 190, 86, 132, 247, 190, 14, 235, 197, 61, 212, 169, 216, 189, 148, 67, 95, 62, 3, 87, 61, 62, 172, 106, 28, 191, 141, 194, 5, 63, 166, 63, 202, 190, 152, 115, 193, 59, 64, 96, 43, 62, 74, 158, 128, 190, 28, 251, 142, 61, 71, 179, 218, 61, 65, 53, 249, 187, 213, 75, 34, 61, 165, 19, 137, 61, 120, 248, 234, 61, 22, 68, 195, 62, 160, 89, 97, 188, 122, 117, 39, 62, 25, 241, 43, 189, 48, 208, 104, 191, 114, 229, 48, 62, 116, 35, 158, 189, 190, 157, 94, 190, 136, 67, 155, 62, 75, 69, 245, 61, 229, 42, 17, 190, 107, 12, 11, 191, 176, 186, 86, 190, 15, 192, 4, 190, 242, 183, 34, 189, 59, 163, 214, 190, 78, 31, 146, 188, 145, 128, 84, 190, 9, 111, 3, 62, 212, 125, 245, 60, 189, 159, 162, 190, 90, 129, 214, 189, 5, 172, 124, 190, 139, 159, 161, 188, 184, 247, 182, 62, 226, 155, 129, 190, 175, 33, 44, 62, 96, 81, 123, 189, 135, 72, 20, 190, 0, 213, 123, 62, 58, 26, 50, 62, 114, 154, 86, 62, 228, 61, 238, 189, 87, 77, 104, 188, 149, 135, 135, 60, 206, 156, 55, 191, 165, 252, 232, 61, 161, 201, 149, 60, 166, 193, 49, 61, 1, 81, 162, 189, 14, 37, 154, 61, 119, 146, 25, 190, 237, 221, 160, 189, 89, 31, 184, 61, 165, 101, 130, 189, 159, 105, 123, 61, 113, 180, 6, 62, 238, 0, 112, 62, 174, 14, 244, 61, 178, 36, 138, 62, 202, 202, 198, 61, 71, 136, 219, 61, 4, 147, 244, 189, 12, 115, 87, 190, 220, 130, 132, 189, 37, 120, 96, 189, 219, 251, 217, 189, 157, 64, 37, 190, 227, 162, 71, 61, 75, 34, 185, 190, 60, 224, 82, 190, 161, 61, 148, 190, 209, 118, 74, 189, 208, 82, 45, 191, 58, 203, 164, 60, 35, 170, 67, 191, 26, 200, 175, 190, 6, 159, 250, 190, 36, 98, 172, 62, 113, 211, 103, 190, 104, 58, 55, 190, 243, 62, 210, 188, 35, 246, 25, 59, 230, 112, 179, 190, 151, 41, 22, 190, 79, 49, 155, 190, 213, 36, 143, 62, 113, 72, 75, 61, 73, 162, 136, 188, 158, 126, 149, 60, 209, 10, 165, 189, 130, 52, 157, 62, 39, 184, 47, 62, 0, 14, 24, 62, 230, 79, 90, 190, 107, 41, 133, 190, 31, 74, 56, 61, 199, 129, 19, 189, 21, 134, 28, 190, 203, 117, 32, 190, 83, 217, 69, 190, 190, 245, 150, 190, 209, 208, 187, 190, 208, 38, 155, 61, 129, 3, 11, 62, 75, 143, 155, 190, 179, 58, 167, 62, 146, 160, 13, 190, 234, 18, 7, 62, 201, 146, 17, 62, 188, 47, 18, 190, 189, 111, 218, 61, 120, 113, 159, 189, 241, 175, 10, 190, 44, 116, 218, 62, 121, 71, 135, 189, 169, 105, 217, 189, 116, 6, 133, 190, 120, 222, 54, 190, 158, 241, 9, 190, 104, 100, 121, 61, 72, 115, 9, 190, 245, 64, 215, 61, 242, 105, 192, 60, 184, 80, 78, 61, 241, 130, 8, 190, 240, 92, 101, 190, 181, 189, 58, 62, 11, 57, 80, 62, 21, 237, 155, 190, 183, 234, 71, 190};
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
                alignas(float) const unsigned char memory[] = {132, 249, 72, 62, 237, 250, 1, 62, 248, 71, 144, 61, 196, 175, 46, 62, 177, 240, 53, 61, 47, 172, 61, 62, 169, 219, 140, 190, 65, 53, 200, 62, 197, 162, 63, 189, 67, 203, 101, 62, 225, 45, 170, 61, 82, 226, 42, 61, 254, 91, 159, 59, 216, 37, 65, 189, 196, 109, 255, 189, 123, 138, 198, 189, 204, 196, 123, 62, 159, 199, 45, 61, 237, 201, 25, 189, 167, 59, 108, 62, 83, 121, 43, 62, 60, 96, 127, 61, 81, 57, 74, 62, 248, 21, 233, 189, 241, 36, 22, 190, 62, 240, 193, 189, 158, 140, 86, 62, 139, 159, 83, 62, 159, 66, 181, 62, 137, 116, 103, 62, 231, 94, 104, 62, 97, 33, 73, 190};
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
                alignas(float) const unsigned char memory[] = {113, 152, 218, 62, 97, 54, 4, 62, 9, 144, 130, 62, 105, 76, 72, 63, 113, 114, 143, 189, 53, 250, 2, 62, 100, 67, 161, 62, 54, 172, 185, 190, 121, 247, 18, 60, 215, 96, 205, 62, 147, 253, 145, 63, 193, 232, 112, 60, 183, 15, 26, 190, 134, 121, 48, 63, 98, 253, 22, 62, 92, 97, 28, 62, 80, 2, 195, 189, 3, 48, 212, 190, 119, 225, 7, 62, 212, 86, 28, 63, 103, 58, 146, 61, 112, 173, 35, 63, 238, 151, 148, 190, 100, 225, 11, 190, 233, 16, 209, 61, 143, 249, 173, 62, 96, 215, 12, 190, 92, 70, 85, 191, 154, 41, 43, 191, 25, 123, 96, 61, 200, 19, 211, 62, 16, 217, 184, 190, 168, 250, 83, 189, 61, 209, 186, 189, 22, 50, 33, 189, 165, 33, 16, 62, 22, 194, 80, 190, 83, 85, 157, 190, 70, 196, 152, 62, 242, 79, 50, 60, 135, 166, 103, 188, 215, 18, 229, 60, 133, 200, 175, 61, 2, 5, 236, 61, 141, 82, 180, 62, 199, 251, 187, 62, 151, 189, 194, 60, 144, 189, 174, 60, 191, 121, 4, 190, 243, 27, 233, 188, 114, 114, 97, 62, 70, 55, 143, 62, 53, 17, 68, 191, 227, 43, 134, 61, 192, 195, 119, 189, 152, 129, 228, 188, 179, 249, 16, 188, 41, 37, 213, 62, 161, 33, 135, 190, 123, 14, 1, 63, 115, 29, 167, 61, 221, 179, 115, 190, 191, 13, 29, 190, 150, 37, 237, 61};
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
                alignas(float) const unsigned char memory[] = {54, 35, 38, 190, 231, 139, 155, 190};
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
    alignas(float) const unsigned char memory[] = {45, 176, 175, 191, 145, 172, 86, 63, 178, 155, 253, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {244, 216, 15, 64, 92, 249, 208, 189};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0064/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}