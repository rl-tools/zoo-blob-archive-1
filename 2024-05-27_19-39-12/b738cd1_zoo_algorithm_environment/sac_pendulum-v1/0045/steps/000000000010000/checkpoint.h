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
                alignas(float) const unsigned char memory[] = {189, 101, 28, 191, 78, 119, 19, 62, 242, 184, 40, 191, 251, 21, 182, 190, 23, 209, 185, 191, 205, 233, 32, 190, 119, 159, 62, 63, 211, 20, 174, 62, 252, 135, 245, 62, 24, 63, 19, 63, 44, 232, 50, 190, 24, 130, 96, 190, 241, 96, 161, 190, 70, 44, 163, 190, 235, 220, 25, 191, 67, 23, 18, 187, 242, 240, 151, 191, 182, 118, 168, 62, 67, 2, 233, 189, 89, 225, 176, 191, 125, 131, 202, 190, 221, 102, 153, 190, 86, 95, 246, 62, 38, 216, 39, 191, 210, 5, 18, 191, 150, 50, 2, 62, 74, 58, 240, 190, 148, 115, 44, 63, 138, 137, 20, 63, 67, 148, 166, 61, 93, 247, 178, 190, 6, 184, 75, 63, 152, 211, 220, 62, 213, 6, 18, 59, 229, 24, 209, 190, 225, 186, 221, 62, 67, 167, 200, 190, 147, 251, 61, 63, 225, 33, 112, 63, 89, 66, 217, 61, 232, 64, 182, 188, 96, 168, 197, 186, 219, 137, 19, 62, 100, 131, 109, 63, 16, 17, 149, 62, 147, 86, 53, 191, 82, 3, 52, 63, 52, 93, 12, 61, 53, 204, 8, 63, 89, 195, 141, 191, 79, 168, 108, 190, 233, 75, 160, 62, 247, 183, 164, 191, 228, 169, 211, 62, 198, 43, 156, 191, 190, 253, 243, 190, 129, 250, 222, 60, 113, 88, 22, 190, 0, 10, 146, 62, 201, 68, 9, 63, 207, 47, 42, 63, 97, 250, 48, 63, 14, 61, 139, 62, 42, 172, 19, 63, 6, 46, 148, 62, 133, 111, 128, 190, 67, 19, 70, 63, 255, 91, 62, 191, 127, 50, 100, 190, 6, 177, 176, 190, 23, 134, 82, 190, 34, 99, 12, 63, 196, 13, 104, 62, 236, 57, 220, 190, 34, 45, 9, 190, 5, 61, 96, 189, 108, 116, 81, 191, 176, 50, 78, 190, 204, 216, 89, 190, 61, 149, 227, 62, 31, 14, 126, 58, 41, 134, 2, 63, 145, 15, 83, 63, 69, 85, 1, 190, 218, 96, 80, 63, 66, 149, 59, 63, 56, 161, 75, 62, 215, 149, 15, 63, 130, 237, 49, 63, 184, 187, 9, 63, 171, 206, 26, 63, 142, 173, 144, 191, 9, 208, 189, 190, 14, 110, 204, 61, 183, 210, 143, 191, 169, 101, 12, 191};
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
                alignas(float) const unsigned char memory[] = {208, 211, 38, 191, 89, 98, 226, 189, 67, 123, 176, 190, 114, 219, 47, 191, 163, 116, 24, 62, 91, 228, 58, 62, 191, 175, 89, 61, 194, 11, 189, 190, 9, 115, 13, 191, 18, 166, 18, 191, 201, 47, 118, 190, 33, 241, 241, 62, 133, 2, 35, 189, 223, 198, 14, 63, 72, 207, 6, 189, 14, 116, 202, 62, 149, 224, 207, 189, 47, 27, 167, 189, 160, 158, 17, 62, 30, 154, 182, 190, 11, 240, 250, 190, 244, 198, 52, 63, 36, 66, 44, 63, 117, 75, 169, 190, 138, 225, 43, 63, 6, 194, 142, 62, 223, 133, 6, 191, 154, 20, 40, 62, 34, 176, 199, 189, 237, 81, 219, 188, 76, 62, 223, 190, 27, 70, 243, 189};
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
                alignas(float) const unsigned char memory[] = {45, 213, 31, 189, 127, 247, 11, 190, 57, 21, 29, 62, 44, 25, 52, 62, 223, 240, 8, 190, 59, 255, 208, 61, 103, 145, 228, 60, 1, 4, 212, 61, 168, 74, 17, 61, 98, 182, 238, 190, 119, 254, 18, 61, 183, 175, 30, 190, 72, 8, 38, 61, 87, 225, 171, 189, 212, 50, 2, 189, 167, 199, 245, 190, 81, 253, 188, 189, 20, 145, 178, 61, 117, 60, 139, 190, 19, 176, 189, 188, 140, 53, 31, 188, 53, 139, 135, 190, 79, 197, 181, 61, 194, 197, 7, 61, 60, 37, 22, 190, 135, 141, 84, 190, 86, 20, 16, 62, 41, 237, 185, 190, 253, 239, 104, 62, 30, 254, 63, 189, 81, 97, 255, 61, 16, 59, 138, 189, 148, 85, 94, 62, 176, 89, 138, 188, 118, 141, 239, 57, 68, 246, 31, 190, 107, 117, 113, 189, 40, 155, 51, 61, 73, 105, 201, 189, 139, 67, 19, 62, 176, 185, 239, 189, 210, 5, 134, 190, 79, 97, 128, 190, 94, 178, 9, 62, 45, 20, 17, 190, 78, 94, 238, 61, 204, 252, 2, 191, 13, 187, 182, 190, 27, 40, 129, 190, 230, 123, 36, 62, 39, 146, 0, 190, 161, 32, 161, 60, 117, 81, 55, 191, 33, 22, 202, 61, 239, 31, 98, 62, 225, 130, 146, 62, 240, 9, 135, 189, 194, 204, 84, 62, 57, 48, 176, 60, 57, 240, 154, 189, 65, 208, 232, 60, 32, 156, 110, 189, 184, 235, 66, 190, 178, 150, 69, 190, 155, 52, 172, 188, 119, 39, 5, 61, 241, 46, 215, 189, 60, 237, 204, 190, 20, 109, 160, 61, 74, 53, 127, 189, 5, 219, 62, 190, 191, 113, 132, 188, 218, 155, 63, 62, 149, 205, 214, 189, 148, 103, 177, 189, 142, 146, 101, 61, 170, 159, 31, 61, 238, 228, 29, 62, 237, 12, 40, 190, 107, 8, 64, 61, 226, 170, 52, 190, 147, 188, 222, 190, 242, 60, 164, 188, 230, 193, 159, 60, 14, 83, 241, 61, 129, 223, 238, 61, 168, 39, 241, 188, 149, 7, 254, 189, 242, 127, 244, 61, 74, 88, 6, 62, 151, 210, 214, 189, 189, 112, 234, 188, 140, 62, 187, 62, 181, 165, 58, 62, 12, 146, 94, 190, 8, 249, 45, 190, 45, 139, 123, 190, 75, 243, 235, 189, 247, 0, 184, 61, 140, 2, 22, 62, 93, 152, 11, 191, 38, 111, 139, 62, 149, 246, 170, 190, 210, 141, 71, 190, 205, 208, 30, 62, 239, 96, 150, 190, 132, 15, 25, 60, 248, 10, 145, 62, 209, 87, 214, 61, 42, 194, 7, 62, 3, 114, 38, 190, 180, 86, 140, 190, 119, 132, 56, 191, 44, 102, 230, 62, 149, 89, 119, 62, 98, 10, 135, 190, 169, 221, 228, 190, 199, 199, 115, 60, 168, 170, 251, 189, 135, 110, 171, 189, 6, 167, 193, 189, 86, 23, 126, 191, 90, 236, 131, 61, 153, 11, 247, 188, 239, 138, 22, 190, 182, 115, 169, 189, 215, 116, 17, 191, 186, 185, 83, 189, 188, 206, 228, 189, 141, 118, 46, 190, 5, 231, 138, 60, 208, 53, 212, 60, 67, 242, 28, 62, 194, 179, 20, 189, 192, 219, 46, 61, 51, 238, 178, 61, 213, 141, 24, 62, 132, 93, 253, 189, 6, 214, 223, 60, 231, 174, 75, 62, 39, 98, 152, 188, 145, 247, 86, 62, 52, 89, 172, 190, 66, 238, 151, 61, 255, 92, 235, 189, 18, 104, 175, 61, 149, 78, 162, 62, 157, 104, 77, 62, 184, 151, 220, 190, 95, 232, 150, 62, 190, 115, 39, 61, 212, 56, 46, 190, 33, 159, 59, 62, 217, 197, 19, 61, 86, 88, 117, 189, 132, 243, 213, 61, 66, 156, 212, 190, 12, 75, 94, 190, 81, 170, 51, 190, 200, 243, 191, 189, 123, 120, 176, 61, 187, 227, 125, 61, 219, 209, 41, 190, 210, 100, 219, 189, 139, 41, 63, 190, 38, 53, 49, 60, 1, 239, 48, 190, 210, 194, 63, 61, 183, 105, 214, 61, 149, 35, 15, 190, 132, 245, 3, 61, 21, 171, 49, 188, 83, 214, 216, 188, 114, 20, 0, 61, 101, 86, 238, 189, 50, 29, 70, 189, 58, 98, 27, 190, 162, 0, 240, 189, 123, 145, 245, 187, 124, 211, 35, 190, 131, 132, 255, 189, 62, 52, 172, 189, 111, 113, 128, 59, 184, 196, 246, 188, 69, 210, 178, 189, 54, 41, 32, 60, 227, 2, 2, 189, 129, 210, 132, 60, 45, 236, 24, 62, 12, 221, 28, 188, 201, 234, 198, 189, 49, 62, 135, 189, 35, 80, 192, 190, 46, 141, 185, 61, 54, 16, 124, 62, 70, 61, 140, 62, 75, 11, 68, 190, 42, 185, 143, 61, 88, 232, 230, 184, 136, 7, 235, 59, 248, 232, 216, 189, 87, 174, 181, 189, 194, 194, 179, 189, 62, 46, 194, 189, 124, 90, 159, 60, 38, 193, 7, 62, 243, 184, 120, 190, 1, 158, 173, 190, 164, 161, 8, 62, 154, 92, 7, 62, 65, 188, 26, 191, 142, 214, 59, 190, 146, 49, 36, 61, 128, 120, 20, 62, 165, 70, 70, 60, 30, 177, 216, 61, 34, 5, 91, 189, 27, 123, 25, 190, 109, 138, 230, 61, 180, 89, 253, 189, 182, 153, 156, 62, 104, 203, 41, 62, 101, 45, 141, 62, 144, 207, 152, 62, 225, 135, 0, 190, 161, 237, 135, 61, 240, 10, 230, 187, 94, 25, 223, 60, 120, 191, 8, 190, 129, 241, 32, 190, 107, 186, 170, 189, 105, 141, 51, 61, 53, 159, 89, 189, 210, 207, 206, 61, 217, 28, 190, 61, 179, 141, 221, 61, 113, 7, 165, 188, 50, 84, 80, 190, 223, 176, 164, 189, 203, 244, 39, 189, 155, 206, 173, 60, 5, 237, 87, 190, 225, 60, 118, 61, 22, 228, 71, 189, 186, 85, 0, 188, 234, 76, 49, 190, 129, 113, 1, 62, 11, 34, 16, 60, 106, 124, 7, 62, 210, 89, 220, 189, 103, 37, 207, 61, 250, 25, 154, 61, 246, 2, 150, 188, 242, 155, 224, 188, 191, 162, 46, 190, 15, 56, 93, 189, 144, 147, 112, 190, 19, 124, 54, 190, 109, 52, 20, 62, 146, 232, 158, 60, 65, 94, 171, 190, 207, 253, 113, 62, 241, 124, 10, 189, 255, 63, 239, 189, 19, 57, 148, 188, 139, 58, 23, 190, 8, 212, 155, 61, 112, 246, 91, 62, 231, 252, 55, 62, 5, 110, 43, 62, 16, 169, 56, 190, 127, 186, 54, 190, 140, 126, 149, 62, 170, 51, 62, 62, 71, 130, 219, 190, 151, 81, 144, 62, 249, 237, 207, 60, 59, 128, 22, 189, 39, 152, 143, 62, 62, 4, 209, 189, 115, 207, 188, 189, 240, 61, 132, 190, 97, 138, 157, 61, 1, 14, 96, 190, 103, 137, 186, 62, 237, 169, 216, 189, 1, 61, 8, 63, 130, 23, 156, 62, 7, 214, 240, 189, 10, 148, 83, 62, 228, 28, 191, 62, 7, 30, 177, 190, 160, 244, 217, 188, 15, 255, 159, 62, 78, 119, 195, 61, 237, 179, 48, 60, 140, 246, 29, 62, 35, 63, 157, 61, 112, 230, 10, 191, 83, 255, 181, 189, 45, 19, 114, 190, 210, 98, 189, 189, 239, 241, 134, 61, 105, 23, 133, 61, 23, 3, 208, 190, 160, 154, 107, 190, 139, 45, 145, 61, 169, 255, 1, 191, 247, 109, 129, 62, 62, 248, 82, 188, 186, 226, 109, 190, 155, 219, 19, 62, 69, 187, 151, 61, 82, 244, 88, 188, 118, 43, 178, 188, 41, 29, 75, 62, 9, 231, 64, 62, 244, 52, 243, 61, 102, 232, 17, 190, 248, 124, 71, 188, 6, 214, 49, 189, 116, 181, 246, 189, 172, 52, 17, 190, 252, 219, 137, 188, 254, 209, 175, 61, 28, 39, 158, 187, 14, 23, 246, 188, 8, 6, 82, 190, 97, 215, 177, 188, 220, 210, 163, 190, 196, 183, 190, 61, 245, 232, 129, 60, 3, 111, 6, 189, 62, 123, 17, 188, 205, 23, 158, 190, 94, 123, 63, 189, 243, 222, 215, 61, 206, 110, 146, 62, 25, 156, 52, 62, 216, 100, 11, 189, 127, 45, 6, 191, 9, 226, 45, 62, 114, 193, 34, 62, 109, 22, 5, 190, 72, 213, 186, 61, 234, 182, 15, 62, 92, 63, 25, 189, 225, 183, 233, 61, 105, 116, 132, 190, 191, 199, 22, 189, 164, 249, 71, 190, 170, 141, 6, 61, 216, 185, 141, 62, 246, 51, 101, 62, 9, 221, 167, 62, 95, 186, 64, 191, 201, 192, 8, 62, 86, 81, 14, 62, 136, 87, 128, 62, 62, 95, 132, 189, 185, 237, 187, 61, 232, 196, 181, 61, 144, 62, 12, 191, 153, 16, 226, 61, 117, 33, 186, 190, 236, 41, 186, 61, 24, 134, 7, 189, 212, 226, 98, 190, 208, 222, 222, 190, 115, 30, 166, 190, 142, 31, 108, 62, 41, 63, 41, 191, 243, 129, 137, 61, 195, 194, 54, 62, 103, 248, 4, 190, 61, 252, 151, 62, 215, 106, 108, 189, 10, 137, 232, 189, 239, 130, 2, 62, 184, 182, 212, 61, 78, 99, 160, 62, 88, 19, 134, 62, 90, 212, 177, 190, 95, 132, 3, 191, 190, 167, 38, 191, 174, 134, 68, 190, 208, 172, 159, 190, 178, 63, 196, 59, 92, 163, 69, 190, 109, 176, 253, 190, 214, 204, 119, 188, 72, 162, 65, 191, 109, 89, 93, 191, 217, 159, 108, 190, 11, 82, 213, 62, 50, 253, 244, 61, 29, 4, 149, 62, 43, 211, 173, 60, 193, 191, 32, 190, 21, 65, 3, 63, 29, 136, 154, 62, 20, 178, 151, 62, 100, 122, 207, 62, 233, 125, 32, 62, 126, 67, 112, 190, 84, 182, 132, 62, 104, 241, 150, 62, 234, 135, 181, 190, 142, 221, 138, 62, 60, 163, 134, 61, 90, 46, 224, 189, 87, 214, 10, 191, 6, 100, 253, 190, 226, 74, 247, 189, 116, 87, 131, 61, 150, 171, 187, 62, 185, 83, 105, 189, 2, 188, 41, 189, 203, 252, 125, 62, 158, 169, 172, 190, 62, 169, 252, 59, 109, 4, 174, 188, 147, 121, 245, 61, 239, 90, 162, 61, 105, 82, 145, 61, 37, 110, 39, 190, 10, 94, 212, 190, 127, 167, 221, 61, 23, 83, 182, 190, 34, 163, 135, 61, 149, 17, 138, 190, 47, 213, 146, 189, 252, 66, 250, 61, 176, 156, 201, 190, 170, 221, 205, 60, 109, 173, 230, 190, 56, 241, 240, 188, 35, 33, 15, 190, 178, 39, 140, 189, 185, 240, 147, 61, 7, 74, 15, 61, 253, 154, 237, 61, 1, 122, 65, 189, 155, 103, 150, 190, 46, 156, 81, 62, 138, 194, 185, 61, 184, 166, 35, 62, 216, 184, 147, 60, 175, 34, 59, 190, 102, 154, 74, 191, 239, 116, 70, 189, 42, 203, 147, 62, 123, 213, 239, 189, 190, 214, 162, 190, 45, 217, 30, 191, 85, 114, 232, 189, 48, 107, 251, 190, 206, 207, 183, 188, 130, 218, 86, 61, 152, 142, 9, 190, 171, 45, 211, 189, 88, 78, 179, 62, 163, 28, 71, 61, 90, 55, 79, 62, 179, 247, 194, 189, 246, 173, 213, 189, 143, 70, 129, 189, 190, 46, 134, 190, 6, 39, 110, 188, 40, 240, 221, 62, 165, 37, 36, 61, 103, 251, 27, 190, 71, 169, 46, 62, 127, 226, 66, 188, 85, 100, 160, 61, 219, 26, 223, 61, 208, 103, 170, 61, 120, 9, 13, 189, 116, 165, 135, 62, 219, 184, 20, 62, 29, 56, 184, 189, 95, 112, 138, 62, 15, 8, 205, 62, 95, 189, 104, 191, 207, 248, 47, 62, 128, 82, 0, 62, 17, 106, 255, 61, 100, 173, 190, 61, 193, 186, 42, 62, 18, 6, 205, 61, 13, 47, 41, 191, 166, 182, 255, 61, 130, 249, 180, 190, 145, 10, 142, 62, 159, 182, 76, 62, 171, 64, 231, 62, 226, 49, 116, 190, 179, 245, 58, 191, 89, 182, 168, 62, 68, 60, 0, 191, 19, 113, 172, 62, 114, 5, 24, 61, 202, 222, 112, 61, 72, 233, 105, 62, 151, 239, 129, 189, 72, 39, 170, 188, 234, 89, 193, 61, 118, 227, 177, 189, 231, 135, 253, 62, 203, 30, 234, 62, 148, 86, 11, 191, 239, 48, 192, 190, 225, 243, 18, 191, 93, 46, 175, 190, 35, 66, 19, 190, 85, 3, 164, 190, 137, 170, 240, 190, 80, 79, 197, 189, 204, 233, 60, 191, 57, 4, 43, 191, 142, 95, 162, 190, 73, 202, 105, 190, 196, 3, 102, 62, 76, 206, 60, 60, 59, 76, 208, 61, 12, 227, 17, 62, 144, 97, 157, 190, 1, 30, 76, 62, 147, 79, 40, 62, 57, 235, 147, 62, 26, 238, 189, 60, 221, 29, 69, 62, 97, 75, 59, 191, 215, 217, 161, 62, 187, 209, 20, 62, 35, 77, 144, 190, 96, 112, 153, 61, 25, 65, 112, 61, 208, 152, 217, 61, 114, 164, 231, 190, 79, 241, 200, 190, 183, 225, 65, 190, 27, 213, 65, 189, 171, 134, 24, 190, 229, 7, 31, 190, 180, 47, 124, 190, 92, 221, 213, 61, 128, 135, 104, 61, 163, 47, 189, 189, 110, 107, 152, 190, 28, 57, 154, 190, 172, 240, 220, 189, 10, 204, 66, 190, 252, 16, 2, 191, 203, 150, 1, 62, 195, 187, 104, 62, 118, 20, 149, 62, 47, 226, 2, 190, 169, 11, 105, 190, 176, 236, 39, 61, 111, 231, 184, 62, 23, 167, 17, 61, 34, 174, 33, 62, 112, 132, 66, 62, 135, 95, 48, 190, 37, 148, 69, 190, 255, 10, 47, 62, 45, 118, 67, 189, 182, 247, 223, 189, 213, 253, 65, 62, 252, 162, 40, 61, 4, 233, 193, 190, 126, 96, 154, 190, 164, 216, 81, 190, 179, 21, 204, 189, 51, 117, 244, 61, 151, 52, 197, 189, 195, 62, 216, 61, 205, 164, 30, 190, 186, 20, 170, 61, 43, 220, 175, 189, 96, 148, 20, 190, 254, 212, 179, 60, 49, 84, 177, 188, 204, 187, 211, 60, 119, 111, 0, 62, 210, 174, 6, 62, 182, 225, 250, 189, 219, 115, 12, 189, 68, 5, 84, 190, 167, 224, 237, 61, 194, 120, 212, 190, 169, 252, 236, 187, 223, 40, 74, 190, 46, 178, 252, 189, 245, 151, 154, 189, 211, 130, 198, 61, 238, 24, 219, 189, 114, 216, 96, 60, 227, 135, 30, 61, 250, 8, 139, 189, 14, 52, 236, 59, 201, 9, 42, 62, 193, 71, 24, 190, 184, 48, 31, 190, 236, 189, 112, 61, 179, 20, 134, 187, 238, 236, 221, 61, 122, 108, 117, 190, 187, 228, 248, 190, 79, 120, 149, 189, 181, 221, 21, 191, 183, 77, 193, 190, 95, 216, 228, 61, 189, 171, 75, 191, 64, 10, 232, 189, 51, 165, 49, 190, 108, 171, 130, 61, 43, 128, 68, 61, 248, 170, 105, 62, 129, 27, 6, 61, 17, 201, 141, 61, 194, 227, 162, 189, 50, 49, 32, 190, 145, 62, 62, 188, 80, 244, 209, 189, 117, 35, 178, 190, 115, 6, 66, 190, 61, 18, 182, 188, 57, 247, 107, 62, 165, 152, 191, 62, 157, 16, 83, 190, 115, 55, 201, 188, 140, 92, 173, 190, 105, 5, 150, 61, 112, 154, 158, 62, 86, 81, 23, 62, 201, 24, 95, 61, 3, 124, 188, 190, 116, 251, 191, 190, 235, 230, 49, 62, 178, 183, 153, 190, 228, 191, 90, 61, 45, 31, 56, 62, 4, 222, 174, 189, 109, 8, 145, 190, 234, 237, 214, 189, 47, 112, 242, 188, 74, 4, 6, 62, 163, 61, 150, 190, 222, 173, 52, 190, 78, 167, 103, 62, 203, 57, 121, 190, 146, 236, 138, 62, 242, 213, 115, 190, 143, 32, 87, 62, 13, 176, 57, 62, 199, 189, 169, 62, 113, 68, 175, 189, 40, 233, 127, 190, 215, 150, 254, 190, 107, 149, 6, 62, 190, 17, 24, 62, 57, 4, 118, 190, 63, 55, 170, 61, 76, 100, 165, 61, 191, 160, 168, 61, 7, 115, 33, 189, 3, 4, 71, 190, 83, 117, 106, 189, 149, 209, 31, 190, 247, 215, 158, 188, 148, 235, 124, 190, 73, 65, 241, 58, 15, 7, 20, 62, 130, 74, 161, 190, 200, 186, 34, 190, 63, 88, 105, 62, 43, 192, 77, 61, 99, 71, 134, 190, 160, 70, 144, 190, 130, 221, 71, 190, 145, 182, 218, 190, 245, 77, 76, 190, 48, 236, 36, 191, 163, 193, 174, 61, 134, 98, 134, 191, 151, 145, 194, 190, 218, 4, 14, 62, 30, 58, 68, 61, 36, 2, 158, 190, 73, 145, 251, 190, 36, 14, 196, 190, 150, 110, 150, 62, 55, 102, 45, 62, 87, 187, 47, 191, 153, 249, 68, 62, 103, 245, 185, 61, 108, 31, 25, 62, 96, 158, 42, 188, 195, 233, 201, 62, 46, 97, 23, 62, 213, 131, 210, 60, 128, 34, 79, 59, 197, 146, 118, 190, 174, 218, 55, 189, 164, 245, 145, 190, 85, 26, 15, 63, 214, 91, 6, 62, 25, 163, 217, 190, 22, 150, 11, 61, 28, 49, 144, 189, 27, 122, 251, 189, 71, 50, 234, 190, 183, 246, 11, 62, 177, 157, 41, 62, 37, 98, 47, 62, 1, 80, 11, 62, 179, 43, 173, 190, 203, 159, 180, 189, 240, 248, 86, 61, 211, 101, 159, 62, 154, 107, 154, 187, 160, 196, 160, 61, 187, 254, 3, 191, 226, 96, 95, 189, 80, 187, 148, 62, 222, 161, 78, 189, 41, 142, 62, 62, 208, 7, 136, 61, 10, 16, 17, 61, 53, 231, 36, 190, 14, 162, 227, 190, 181, 150, 208, 189, 250, 63, 91, 62, 35, 67, 151, 61, 160, 32, 246, 189, 88, 70, 77, 190, 49, 193, 129, 190, 124, 254, 62, 190, 106, 222, 117, 190, 252, 127, 225, 190, 148, 198, 189, 190, 200, 38, 87, 62, 9, 45, 178, 61, 249, 3, 237, 190, 247, 183, 87, 61, 104, 246, 66, 190, 121, 195, 47, 62, 101, 113, 232, 61, 146, 133, 142, 62, 194, 143, 199, 62, 170, 39, 38, 190, 232, 148, 156, 190, 131, 55, 188, 190, 34, 237, 112, 189, 6, 27, 83, 190, 90, 108, 138, 62, 79, 38, 203, 189, 69, 162, 26, 190, 145, 147, 135, 60, 75, 42, 102, 190, 239, 223, 230, 61, 133, 70, 19, 62, 113, 122, 153, 189, 20, 219, 245, 189, 159, 61, 229, 189, 64, 59, 105, 190, 221, 220, 209, 190, 160, 71, 55, 62, 255, 103, 231, 189, 104, 188, 39, 189, 107, 137, 189, 188, 212, 42, 94, 62, 142, 211, 252, 61, 183, 36, 54, 190, 65, 85, 164, 190, 36, 109, 232, 190, 59, 101, 67, 191, 36, 213, 160, 62, 173, 166, 61, 191, 231, 30, 237, 61, 114, 0, 127, 190, 211, 122, 227, 188, 201, 151, 218, 188, 60, 195, 44, 190, 123, 78, 239, 61, 184, 28, 63, 191, 252, 186, 21, 191, 193, 25, 174, 189, 28, 58, 145, 186, 223, 96, 48, 190, 49, 133, 238, 61, 248, 254, 64, 62, 40, 224, 155, 188, 51, 147, 150, 189, 251, 138, 54, 190, 187, 230, 15, 62, 42, 217, 111, 61, 149, 175, 50, 61, 122, 153, 29, 61, 170, 99, 158, 62, 235, 248, 173, 190, 145, 192, 107, 191, 239, 178, 184, 61, 154, 247, 4, 63, 35, 210, 192, 60, 10, 6, 163, 61, 195, 53, 215, 60, 53, 152, 250, 189, 186, 86, 184, 191, 135, 116, 167, 190, 65, 164, 119, 191, 235, 71, 78, 61, 201, 187, 177, 190, 146, 33, 40, 62, 81, 12, 143, 190, 249, 29, 154, 191, 185, 21, 207, 62, 34, 212, 115, 191, 188, 10, 219, 190, 233, 85, 250, 60, 87, 118, 159, 189, 130, 30, 246, 62, 22, 202, 222, 61, 199, 254, 231, 61, 249, 155, 27, 190, 5, 26, 10, 62, 128, 105, 113, 62, 71, 136, 11, 190, 169, 208, 230, 189, 225, 23, 166, 190, 167, 116, 55, 189, 117, 37, 5, 190, 231, 68, 132, 190, 65, 239, 130, 190, 247, 35, 187, 188, 184, 16, 8, 191, 215, 196, 162, 190, 65, 221, 22, 190, 189, 194, 95, 189, 16, 170, 35, 62, 152, 116, 155, 62, 232, 71, 215, 190, 97, 228, 189, 60, 229, 200, 243, 61, 27, 197, 152, 62, 158, 128, 231, 62, 49, 152, 117, 190, 114, 99, 240, 190, 67, 85, 149, 190, 2, 216, 141, 60, 55, 47, 141, 61, 151, 163, 108, 62, 198, 133, 26, 188, 231, 85, 16, 61, 32, 6, 27, 62, 80, 47, 8, 191, 222, 101, 24, 190, 159, 110, 142, 62, 134, 166, 169, 61, 33, 81, 116, 190, 141, 127, 155, 190, 187, 171, 34, 61, 50, 133, 233, 189, 80, 130, 37, 190, 218, 227, 136, 190, 96, 203, 204, 61, 222, 64, 125, 190, 30, 82, 78, 190, 150, 253, 45, 190, 206, 102, 137, 61, 65, 175, 71, 190, 36, 116, 19, 190, 129, 169, 17, 62, 162, 202, 138, 61, 29, 250, 154, 61, 188, 16, 164, 189, 237, 11, 248, 189, 250, 4, 22, 190, 102, 181, 97, 62, 24, 227, 216, 62, 156, 148, 178, 61, 58, 14, 9, 61, 224, 177, 56, 191, 23, 240, 105, 62, 81, 7, 134, 62, 14, 13, 16, 190, 248, 167, 2, 189, 108, 128, 205, 61, 85, 178, 200, 60, 153, 72, 52, 190, 252, 195, 200, 190, 217, 24, 161, 188, 28, 221, 89, 62, 197, 75, 211, 59, 169, 97, 245, 190, 33, 217, 82, 190, 180, 231, 83, 188, 49, 110, 32, 61, 157, 158, 132, 190, 104, 125, 50, 190, 26, 144, 96, 190, 220, 25, 164, 190, 98, 95, 253, 189, 172, 104, 152, 190, 145, 45, 106, 61, 136, 68, 2, 62, 186, 94, 79, 61, 52, 120, 21, 190, 235, 164, 150, 190, 125, 13, 137, 61, 63, 36, 167, 62, 235, 237, 241, 62, 249, 71, 153, 62, 230, 7, 232, 186, 61, 144, 44, 191, 35, 149, 120, 190, 115, 201, 140, 62, 223, 171, 2, 190, 221, 97, 11, 62, 51, 144, 70, 188, 72, 175, 47, 190, 8, 77, 35, 191, 147, 70, 60, 191, 231, 135, 55, 190, 188, 133, 87, 189, 218, 243, 62, 62, 202, 180, 189, 59, 78, 195, 30, 190, 210, 13, 188, 190, 222, 44, 222, 62, 153, 230, 9, 189, 149, 77, 227, 60, 4, 49, 73, 190, 24, 222, 12, 62, 1, 31, 32, 60, 88, 211, 77, 190, 100, 147, 63, 61, 74, 87, 91, 62, 212, 127, 7, 190, 185, 61, 224, 188, 202, 129, 174, 190, 21, 223, 235, 61, 140, 193, 181, 60, 214, 206, 239, 62, 238, 10, 99, 188, 193, 227, 35, 62, 68, 103, 38, 191, 9, 10, 61, 61, 225, 22, 152, 62, 179, 177, 40, 190, 36, 216, 88, 61, 94, 186, 60, 188, 60, 250, 88, 60, 224, 247, 229, 61, 128, 97, 51, 191, 23, 59, 181, 189, 223, 27, 249, 60, 141, 121, 218, 61, 152, 249, 136, 189, 96, 200, 144, 190, 184, 188, 125, 189, 35, 240, 176, 62, 33, 192, 243, 61, 9, 169, 224, 188, 167, 172, 137, 189, 116, 45, 52, 61, 115, 149, 190, 61, 209, 210, 191, 190, 185, 84, 201, 60, 23, 116, 246, 61, 151, 36, 46, 61, 175, 67, 98, 62, 63, 223, 161, 190, 112, 42, 5, 189, 35, 102, 7, 61, 98, 186, 55, 61, 175, 186, 150, 62, 102, 86, 57, 61, 88, 206, 247, 190, 222, 115, 161, 61, 201, 116, 133, 60, 74, 178, 237, 60, 213, 69, 28, 62, 4, 147, 120, 62, 162, 132, 188, 189, 27, 12, 30, 62, 195, 157, 235, 190, 208, 218, 68, 190, 206, 54, 69, 190, 146, 132, 194, 187, 17, 121, 149, 189, 212, 241, 235, 61, 207, 28, 214, 61, 180, 241, 131, 189, 71, 222, 31, 60, 214, 126, 220, 189, 41, 201, 204, 60, 137, 120, 195, 189, 201, 73, 76, 61, 88, 79, 241, 61, 215, 36, 122, 61, 123, 13, 131, 189, 74, 148, 115, 60, 239, 138, 77, 190, 184, 138, 212, 189, 40, 8, 104, 190, 195, 96, 2, 62, 25, 192, 40, 190, 227, 193, 83, 61, 141, 66, 227, 189, 222, 77, 183, 189, 59, 0, 32, 61, 114, 41, 198, 187, 47, 14, 250, 189, 246, 169, 218, 189, 242, 42, 84, 189, 255, 213, 48, 62, 101, 179, 174, 61, 79, 139, 224, 189, 149, 142, 5, 190, 210, 239, 65, 190, 252, 84, 149, 61};
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
                alignas(float) const unsigned char memory[] = {126, 27, 148, 190, 130, 81, 101, 62, 59, 126, 50, 62, 153, 34, 123, 62, 24, 79, 63, 62, 147, 192, 182, 61, 166, 0, 68, 190, 112, 57, 82, 190, 24, 34, 218, 188, 233, 216, 12, 61, 94, 40, 228, 61, 106, 3, 172, 61, 85, 90, 20, 62, 26, 176, 13, 62, 231, 139, 191, 62, 227, 134, 105, 62, 16, 180, 164, 62, 63, 5, 2, 62, 16, 233, 21, 189, 80, 84, 157, 62, 244, 68, 190, 62, 154, 231, 173, 189, 198, 118, 185, 61, 131, 165, 43, 62, 117, 201, 23, 61, 103, 90, 207, 61, 55, 56, 95, 61, 123, 82, 114, 62, 58, 251, 27, 61, 50, 227, 149, 189, 136, 95, 147, 62, 144, 123, 43, 190};
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
                alignas(float) const unsigned char memory[] = {42, 227, 242, 187, 197, 44, 173, 61, 48, 55, 139, 188, 33, 129, 225, 190, 165, 191, 83, 62, 178, 59, 3, 190, 248, 177, 67, 190, 55, 230, 186, 61, 127, 32, 142, 190, 174, 106, 55, 190, 247, 119, 166, 61, 175, 121, 238, 190, 171, 44, 13, 63, 117, 170, 30, 190, 2, 179, 8, 63, 112, 211, 79, 191, 253, 60, 72, 63, 228, 92, 184, 62, 97, 193, 254, 188, 129, 165, 60, 190, 45, 116, 88, 62, 77, 179, 173, 190, 151, 7, 18, 62, 10, 164, 52, 191, 67, 224, 220, 190, 115, 254, 159, 191, 89, 103, 186, 190, 206, 111, 235, 62, 4, 177, 93, 63, 162, 51, 236, 62, 73, 135, 96, 62, 29, 142, 43, 60, 36, 18, 101, 62, 80, 160, 192, 190, 231, 198, 136, 190, 173, 118, 15, 190, 147, 152, 4, 190, 187, 14, 216, 60, 52, 206, 124, 62, 28, 239, 4, 62, 139, 145, 15, 190, 140, 213, 165, 62, 14, 161, 56, 189, 106, 76, 41, 62, 61, 134, 108, 61, 140, 78, 68, 190, 160, 107, 28, 190, 216, 128, 5, 188, 237, 11, 94, 190, 220, 163, 239, 188, 230, 41, 40, 62, 34, 224, 199, 190, 75, 174, 2, 190, 251, 36, 164, 190, 115, 55, 188, 61, 169, 56, 199, 189, 245, 176, 137, 189, 189, 129, 36, 61, 38, 51, 158, 62, 57, 15, 54, 190, 66, 159, 156, 62, 130, 185, 84, 62, 35, 200, 14, 190, 44, 122, 168, 61};
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
                alignas(float) const unsigned char memory[] = {61, 76, 22, 189, 80, 17, 141, 189};
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
    alignas(float) const unsigned char memory[] = {223, 160, 26, 191, 189, 101, 205, 190, 132, 176, 167, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {54, 92, 8, 191, 150, 56, 105, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0045/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}