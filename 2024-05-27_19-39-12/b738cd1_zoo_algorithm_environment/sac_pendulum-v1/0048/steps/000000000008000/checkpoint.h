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
                alignas(float) const unsigned char memory[] = {202, 226, 62, 187, 149, 192, 9, 191, 24, 203, 250, 59, 206, 216, 15, 63, 18, 90, 87, 191, 89, 130, 188, 190, 203, 87, 11, 63, 118, 178, 20, 63, 183, 56, 46, 190, 129, 93, 206, 62, 166, 229, 0, 63, 30, 142, 153, 62, 247, 212, 68, 190, 61, 161, 136, 62, 175, 182, 200, 190, 127, 242, 237, 62, 237, 159, 29, 63, 29, 30, 49, 62, 112, 128, 27, 63, 212, 118, 149, 190, 144, 169, 46, 191, 4, 80, 162, 190, 152, 73, 171, 190, 15, 156, 21, 191, 17, 9, 23, 191, 4, 90, 150, 191, 89, 238, 117, 189, 78, 129, 96, 191, 160, 241, 144, 62, 139, 145, 137, 62, 214, 147, 38, 191, 103, 49, 48, 63, 255, 68, 221, 62, 69, 114, 46, 61, 139, 152, 101, 63, 140, 52, 112, 190, 7, 235, 144, 190, 235, 56, 21, 63, 188, 71, 92, 190, 251, 173, 200, 189, 187, 182, 131, 191, 79, 168, 2, 191, 165, 54, 43, 63, 79, 37, 68, 63, 51, 200, 230, 62, 168, 141, 147, 190, 65, 67, 252, 190, 246, 248, 69, 62, 139, 44, 169, 189, 6, 190, 32, 191, 219, 141, 136, 62, 193, 134, 15, 189, 215, 135, 76, 63, 179, 136, 144, 62, 242, 185, 12, 63, 14, 27, 145, 63, 158, 149, 103, 62, 150, 12, 4, 190, 119, 71, 25, 60, 105, 168, 15, 62, 20, 252, 82, 191, 73, 99, 29, 63, 117, 235, 51, 62, 174, 93, 69, 63, 181, 27, 68, 191, 148, 49, 33, 190, 144, 118, 217, 61, 100, 205, 212, 191, 175, 192, 15, 191, 164, 180, 228, 190, 206, 48, 115, 62, 133, 56, 235, 190, 190, 162, 34, 63, 68, 0, 10, 191, 225, 39, 140, 190, 12, 172, 164, 189, 104, 149, 76, 191, 182, 234, 131, 62, 145, 14, 85, 191, 132, 206, 198, 189, 154, 98, 210, 60, 185, 195, 79, 62, 189, 200, 91, 63, 104, 112, 156, 62, 135, 176, 176, 62, 32, 229, 73, 190, 148, 44, 190, 190, 168, 109, 211, 61, 10, 221, 30, 191, 205, 90, 0, 62, 81, 230, 137, 62, 49, 55, 32, 191, 104, 169, 246, 184, 126, 254, 4, 63, 17, 242, 133, 63, 197, 59, 120, 62};
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
                alignas(float) const unsigned char memory[] = {53, 210, 28, 191, 190, 141, 14, 191, 57, 65, 231, 189, 19, 33, 245, 189, 164, 21, 8, 63, 192, 148, 14, 190, 237, 60, 149, 189, 164, 231, 52, 189, 44, 143, 137, 62, 147, 52, 101, 63, 236, 8, 12, 191, 61, 73, 248, 62, 68, 62, 79, 190, 87, 21, 104, 186, 236, 21, 179, 62, 128, 247, 228, 189, 92, 126, 151, 61, 177, 109, 101, 189, 33, 90, 41, 62, 150, 130, 49, 191, 185, 160, 220, 61, 91, 90, 77, 62, 72, 22, 153, 62, 158, 211, 177, 190, 230, 206, 44, 191, 164, 221, 81, 62, 34, 36, 37, 62, 37, 79, 153, 190, 253, 9, 17, 191, 1, 243, 253, 62, 114, 10, 217, 59, 218, 221, 150, 189};
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
                alignas(float) const unsigned char memory[] = {130, 179, 162, 60, 188, 127, 216, 188, 32, 199, 182, 62, 51, 244, 22, 61, 90, 137, 20, 190, 249, 51, 98, 61, 122, 178, 120, 62, 23, 246, 109, 190, 75, 163, 39, 190, 61, 255, 9, 62, 47, 5, 13, 62, 23, 113, 81, 62, 205, 223, 30, 61, 26, 42, 141, 190, 79, 233, 6, 60, 38, 144, 1, 190, 126, 66, 82, 190, 253, 59, 227, 61, 201, 221, 141, 61, 207, 86, 218, 189, 117, 230, 85, 62, 181, 244, 205, 62, 188, 87, 178, 190, 36, 99, 129, 190, 215, 246, 74, 189, 3, 12, 178, 60, 2, 245, 196, 61, 154, 238, 68, 190, 64, 127, 49, 62, 64, 147, 209, 60, 167, 245, 49, 190, 166, 207, 93, 190, 115, 35, 19, 190, 51, 225, 187, 62, 178, 244, 143, 189, 147, 87, 118, 190, 225, 26, 100, 61, 204, 196, 65, 190, 169, 232, 20, 189, 242, 13, 49, 190, 213, 26, 153, 188, 199, 219, 179, 61, 233, 44, 31, 190, 97, 159, 151, 61, 14, 121, 0, 189, 90, 33, 206, 61, 28, 234, 231, 189, 111, 116, 58, 62, 213, 217, 195, 61, 143, 197, 110, 190, 127, 55, 217, 190, 101, 170, 62, 190, 146, 94, 207, 61, 117, 233, 181, 62, 114, 49, 85, 62, 243, 198, 50, 61, 248, 231, 7, 190, 106, 22, 111, 62, 86, 52, 214, 189, 193, 172, 216, 190, 64, 33, 208, 189, 113, 249, 148, 62, 16, 206, 204, 61, 126, 24, 218, 190, 250, 167, 100, 61, 186, 242, 41, 63, 226, 169, 237, 188, 243, 180, 158, 189, 4, 241, 173, 189, 34, 185, 233, 190, 112, 21, 16, 61, 10, 194, 9, 191, 21, 159, 88, 190, 147, 255, 164, 62, 123, 8, 219, 61, 148, 165, 78, 62, 98, 140, 37, 63, 28, 160, 110, 191, 59, 98, 223, 189, 159, 218, 183, 190, 31, 177, 84, 62, 120, 119, 198, 189, 97, 122, 138, 190, 209, 190, 41, 190, 166, 159, 98, 62, 168, 140, 240, 62, 147, 177, 16, 191, 30, 19, 49, 62, 49, 110, 134, 62, 62, 251, 41, 190, 181, 148, 95, 62, 246, 130, 132, 189, 19, 149, 62, 62, 67, 126, 110, 62, 100, 207, 139, 62, 216, 37, 166, 190, 107, 254, 175, 61, 101, 50, 217, 190, 207, 224, 2, 62, 1, 165, 142, 61, 231, 107, 134, 62, 238, 22, 71, 62, 197, 181, 146, 190, 206, 220, 69, 62, 52, 78, 16, 62, 158, 178, 217, 61, 92, 93, 198, 189, 70, 218, 31, 62, 7, 100, 158, 190, 226, 240, 28, 62, 75, 209, 63, 62, 132, 64, 55, 189, 178, 29, 111, 61, 176, 193, 201, 188, 181, 185, 165, 62, 198, 56, 195, 187, 244, 26, 2, 62, 155, 203, 133, 190, 255, 199, 196, 188, 69, 186, 82, 62, 30, 239, 247, 190, 106, 105, 132, 61, 172, 50, 45, 62, 252, 10, 24, 187, 212, 82, 179, 190, 21, 74, 52, 61, 3, 232, 13, 190, 246, 253, 128, 62, 225, 60, 192, 60, 111, 65, 161, 190, 41, 38, 79, 189, 15, 153, 109, 59, 72, 212, 11, 62, 224, 30, 11, 61, 224, 108, 165, 189, 197, 85, 72, 62, 38, 82, 137, 189, 246, 23, 225, 188, 41, 90, 211, 189, 196, 65, 0, 190, 108, 25, 209, 190, 15, 215, 91, 62, 201, 251, 60, 62, 216, 41, 129, 190, 234, 233, 32, 190, 85, 115, 197, 60, 42, 33, 96, 62, 192, 171, 72, 189, 47, 35, 150, 188, 113, 214, 9, 61, 202, 5, 45, 188, 28, 158, 111, 62, 127, 180, 108, 190, 49, 121, 181, 60, 60, 138, 6, 61, 122, 167, 169, 189, 76, 15, 4, 190, 121, 132, 41, 62, 152, 239, 59, 62, 91, 69, 203, 187, 79, 91, 155, 188, 197, 220, 45, 62, 220, 212, 181, 61, 193, 101, 16, 190, 220, 60, 15, 190, 227, 164, 32, 62, 83, 15, 11, 190, 26, 172, 14, 62, 33, 240, 221, 61, 249, 60, 39, 190, 58, 79, 192, 61, 92, 174, 135, 189, 2, 90, 8, 190, 92, 242, 45, 61, 130, 176, 150, 189, 96, 54, 184, 61, 86, 26, 66, 189, 98, 197, 202, 61, 2, 188, 1, 190, 206, 132, 225, 61, 49, 200, 250, 189, 209, 1, 155, 188, 161, 174, 49, 190, 109, 8, 25, 62, 236, 106, 203, 61, 4, 169, 252, 189, 6, 113, 253, 61, 221, 181, 155, 189, 240, 96, 209, 189, 188, 50, 181, 187, 151, 28, 62, 61, 147, 103, 16, 62, 67, 125, 221, 61, 71, 246, 97, 190, 198, 34, 62, 62, 233, 134, 142, 61, 227, 7, 78, 190, 101, 119, 141, 190, 92, 52, 128, 62, 176, 214, 14, 191, 194, 60, 116, 190, 204, 178, 82, 62, 33, 216, 99, 62, 107, 167, 17, 61, 101, 130, 135, 62, 37, 65, 179, 190, 148, 51, 146, 189, 193, 200, 126, 190, 229, 180, 208, 61, 148, 122, 70, 190, 92, 216, 18, 190, 176, 56, 2, 190, 37, 75, 175, 60, 55, 8, 204, 62, 194, 162, 144, 190, 53, 83, 0, 191, 66, 79, 72, 189, 239, 21, 153, 189, 178, 3, 71, 62, 18, 83, 140, 190, 122, 35, 190, 189, 35, 252, 87, 62, 158, 75, 198, 61, 144, 154, 10, 190, 77, 42, 64, 61, 132, 103, 168, 61, 52, 157, 200, 62, 121, 213, 171, 61, 145, 216, 111, 62, 245, 8, 166, 62, 12, 145, 202, 190, 84, 157, 17, 62, 137, 242, 126, 190, 244, 173, 60, 190, 227, 245, 117, 190, 70, 117, 198, 189, 189, 38, 29, 190, 210, 86, 119, 190, 34, 244, 82, 62, 175, 30, 35, 62, 181, 2, 117, 61, 185, 89, 38, 60, 227, 54, 243, 61, 131, 56, 34, 62, 208, 134, 55, 190, 216, 214, 8, 191, 133, 52, 51, 190, 74, 221, 192, 61, 176, 135, 34, 189, 230, 179, 241, 188, 157, 241, 161, 190, 137, 159, 129, 62, 103, 129, 25, 62, 252, 82, 146, 190, 210, 27, 52, 190, 83, 123, 55, 62, 128, 40, 139, 189, 203, 48, 139, 61, 212, 181, 143, 61, 168, 255, 64, 61, 214, 86, 208, 187, 215, 0, 74, 190, 118, 80, 19, 62, 54, 6, 110, 189, 216, 31, 20, 189, 168, 231, 99, 190, 142, 47, 43, 62, 201, 0, 62, 189, 77, 145, 200, 61, 241, 170, 195, 61, 77, 117, 157, 61, 196, 204, 167, 61, 246, 190, 161, 61, 128, 149, 138, 190, 73, 217, 97, 189, 77, 195, 169, 190, 53, 126, 253, 190, 135, 212, 251, 62, 167, 236, 168, 60, 196, 195, 103, 190, 148, 45, 142, 62, 209, 96, 109, 60, 64, 135, 202, 190, 130, 219, 119, 191, 230, 224, 133, 61, 39, 77, 131, 61, 242, 25, 36, 188, 84, 118, 180, 189, 242, 84, 50, 190, 5, 236, 0, 62, 99, 185, 22, 190, 88, 213, 136, 189, 75, 29, 147, 189, 35, 66, 197, 189, 189, 106, 192, 61, 211, 194, 149, 189, 209, 89, 9, 60, 124, 120, 23, 190, 135, 41, 36, 62, 185, 117, 97, 189, 167, 12, 160, 188, 252, 62, 29, 62, 110, 181, 193, 189, 2, 185, 210, 189, 217, 118, 156, 189, 215, 106, 161, 189, 227, 24, 174, 61, 240, 253, 51, 190, 161, 199, 140, 61, 237, 168, 198, 189, 170, 141, 247, 189, 111, 98, 75, 190, 39, 72, 191, 61, 207, 110, 238, 189, 89, 182, 39, 190, 81, 34, 179, 61, 254, 166, 60, 188, 118, 161, 49, 190, 67, 210, 140, 61, 99, 205, 138, 61, 42, 163, 211, 61, 231, 75, 246, 189, 130, 133, 206, 190, 233, 214, 21, 62, 219, 226, 9, 188, 211, 229, 5, 191, 247, 151, 127, 190, 126, 171, 210, 190, 61, 206, 57, 190, 236, 165, 157, 62, 9, 105, 189, 61, 163, 6, 144, 62, 104, 100, 36, 63, 209, 198, 145, 191, 61, 70, 71, 188, 159, 174, 100, 190, 131, 173, 226, 61, 191, 207, 156, 190, 207, 72, 129, 190, 38, 227, 70, 190, 23, 165, 216, 62, 112, 70, 151, 189, 43, 136, 175, 191, 47, 172, 91, 62, 103, 188, 162, 60, 43, 82, 135, 190, 227, 177, 163, 62, 121, 200, 230, 189, 254, 154, 81, 190, 70, 125, 15, 62, 142, 108, 44, 61, 202, 128, 158, 190, 158, 189, 31, 62, 59, 34, 180, 189, 22, 156, 92, 190, 195, 104, 97, 62, 200, 213, 226, 59, 78, 190, 72, 190, 107, 101, 157, 61, 229, 26, 122, 62, 37, 15, 77, 189, 138, 90, 223, 189, 35, 151, 35, 190, 71, 247, 209, 61, 42, 55, 100, 62, 204, 91, 89, 189, 84, 132, 39, 62, 58, 121, 112, 62, 48, 218, 170, 189, 112, 198, 55, 190, 85, 161, 106, 190, 11, 235, 155, 61, 9, 220, 37, 62, 187, 238, 189, 62, 179, 160, 21, 62, 37, 221, 112, 62, 60, 52, 182, 189, 151, 45, 131, 61, 4, 9, 98, 190, 210, 51, 66, 191, 6, 254, 141, 61, 239, 44, 4, 62, 104, 110, 246, 61, 227, 179, 234, 190, 190, 60, 10, 62, 38, 148, 22, 62, 185, 59, 34, 190, 119, 219, 165, 61, 145, 114, 53, 189, 189, 229, 91, 190, 52, 138, 157, 189, 0, 130, 178, 189, 96, 37, 85, 190, 99, 35, 230, 189, 80, 240, 128, 188, 193, 48, 109, 189, 232, 47, 28, 190, 185, 206, 175, 61, 6, 34, 137, 61, 46, 221, 204, 189, 221, 26, 42, 190, 134, 111, 5, 190, 164, 139, 76, 190, 172, 208, 169, 61, 236, 217, 55, 190, 79, 178, 165, 61, 102, 88, 238, 189, 108, 251, 160, 61, 252, 127, 250, 189, 207, 65, 235, 61, 8, 169, 172, 189, 49, 181, 34, 190, 6, 168, 236, 61, 82, 21, 198, 59, 177, 81, 246, 60, 6, 44, 88, 189, 207, 97, 124, 61, 152, 167, 185, 61, 188, 205, 2, 187, 68, 172, 76, 61, 124, 92, 64, 62, 155, 90, 233, 61, 232, 24, 100, 190, 242, 206, 93, 62, 83, 248, 116, 189, 81, 41, 24, 61, 102, 221, 216, 189, 208, 33, 75, 62, 166, 48, 201, 61, 89, 117, 136, 62, 231, 24, 16, 62, 172, 237, 226, 61, 173, 249, 53, 62, 254, 199, 47, 61, 221, 206, 208, 61, 43, 131, 75, 62, 188, 126, 152, 190, 157, 122, 203, 190, 145, 88, 143, 189, 246, 101, 188, 62, 83, 3, 249, 189, 64, 192, 30, 189, 161, 21, 37, 190, 66, 191, 169, 61, 94, 22, 199, 61, 207, 206, 19, 190, 54, 194, 35, 190, 47, 241, 139, 62, 39, 72, 42, 190, 204, 148, 224, 189, 194, 76, 109, 61, 72, 233, 39, 62, 80, 179, 227, 61, 91, 254, 23, 190, 176, 129, 72, 189, 238, 69, 33, 190, 33, 241, 68, 62, 16, 223, 171, 190, 136, 214, 197, 189, 213, 108, 35, 188, 217, 74, 211, 188, 203, 31, 47, 190, 124, 9, 77, 62, 18, 159, 97, 62, 82, 57, 114, 62, 135, 245, 142, 190, 249, 233, 251, 189, 216, 40, 19, 189, 58, 237, 231, 190, 182, 135, 162, 62, 48, 224, 239, 61, 63, 140, 236, 60, 107, 96, 177, 61, 208, 176, 150, 62, 169, 239, 204, 190, 25, 220, 114, 191, 87, 204, 243, 189, 46, 254, 86, 60, 238, 254, 53, 62, 121, 6, 56, 190, 250, 117, 124, 61, 248, 68, 246, 62, 14, 152, 9, 63, 116, 249, 99, 61, 161, 252, 180, 189, 11, 33, 247, 190, 19, 244, 0, 63, 59, 147, 92, 191, 150, 167, 168, 189, 238, 19, 107, 61, 248, 229, 103, 60, 244, 209, 182, 188, 124, 229, 107, 62, 23, 51, 184, 190, 247, 0, 70, 190, 133, 243, 14, 190, 101, 139, 194, 62, 77, 249, 166, 190, 93, 51, 238, 189, 2, 196, 13, 61, 79, 87, 128, 61, 54, 138, 225, 62, 98, 199, 30, 190, 158, 81, 91, 191, 112, 204, 120, 62, 246, 28, 42, 190, 68, 112, 0, 190, 60, 131, 167, 190, 127, 247, 184, 62, 155, 46, 154, 62, 5, 154, 107, 62, 231, 129, 99, 190, 47, 213, 15, 190, 174, 141, 219, 62, 4, 194, 220, 62, 35, 119, 250, 189, 122, 20, 106, 190, 195, 192, 171, 190, 127, 161, 101, 62, 208, 8, 65, 191, 97, 96, 158, 61, 65, 237, 77, 62, 27, 228, 131, 62, 255, 229, 147, 189, 151, 66, 163, 61, 178, 219, 169, 190, 37, 183, 188, 61, 40, 92, 150, 189, 162, 251, 57, 62, 91, 149, 109, 190, 253, 242, 85, 190, 23, 136, 179, 60, 174, 25, 129, 61, 220, 238, 230, 62, 135, 162, 31, 61, 213, 63, 214, 190, 239, 224, 131, 62, 61, 124, 247, 189, 76, 75, 178, 189, 183, 137, 96, 189, 202, 172, 168, 62, 81, 245, 18, 188, 213, 12, 128, 62, 58, 83, 23, 190, 10, 29, 37, 190, 108, 69, 247, 190, 252, 30, 33, 62, 126, 76, 231, 189, 229, 195, 5, 62, 225, 67, 165, 189, 155, 130, 168, 190, 174, 50, 104, 62, 51, 200, 106, 62, 132, 102, 1, 62, 46, 37, 50, 61, 255, 64, 147, 62, 214, 37, 145, 190, 201, 222, 201, 189, 242, 116, 19, 62, 16, 136, 200, 60, 87, 19, 157, 189, 147, 62, 173, 61, 86, 137, 140, 62, 24, 218, 130, 60, 89, 143, 114, 188, 121, 118, 95, 190, 103, 0, 49, 62, 18, 115, 198, 62, 2, 109, 90, 191, 204, 141, 13, 189, 94, 175, 103, 62, 214, 140, 249, 189, 3, 39, 224, 190, 192, 101, 112, 62, 4, 229, 13, 62, 174, 229, 82, 62, 52, 255, 246, 61, 233, 125, 190, 62, 46, 2, 222, 61, 89, 90, 3, 62, 130, 109, 67, 60, 141, 208, 144, 190, 6, 89, 65, 62, 122, 56, 39, 190, 77, 20, 0, 190, 141, 197, 219, 61, 145, 154, 186, 61, 144, 164, 39, 190, 141, 93, 234, 61, 87, 28, 29, 62, 65, 115, 15, 62, 243, 36, 152, 188, 204, 204, 31, 61, 26, 175, 112, 189, 220, 244, 82, 191, 231, 146, 142, 189, 106, 221, 232, 189, 35, 101, 136, 62, 20, 224, 153, 189, 204, 120, 218, 190, 168, 242, 66, 62, 187, 222, 5, 61, 237, 158, 141, 189, 113, 123, 218, 189, 243, 213, 119, 62, 194, 88, 199, 188, 67, 93, 10, 189, 218, 86, 149, 190, 82, 157, 240, 61, 54, 150, 6, 190, 95, 60, 75, 62, 56, 233, 11, 189, 42, 90, 3, 190, 153, 216, 174, 189, 108, 92, 52, 62, 129, 173, 143, 61, 194, 90, 60, 62, 71, 100, 236, 61, 7, 231, 113, 189, 135, 47, 179, 190, 25, 240, 31, 191, 103, 169, 64, 189, 77, 207, 182, 61, 180, 4, 152, 190, 237, 99, 100, 60, 146, 64, 139, 61, 206, 228, 189, 61, 120, 166, 13, 60, 27, 105, 55, 189, 43, 22, 25, 62, 61, 97, 223, 59, 161, 154, 83, 190, 50, 17, 37, 63, 254, 238, 11, 61, 4, 230, 88, 62, 47, 80, 33, 190, 223, 168, 7, 62, 132, 30, 111, 62, 194, 159, 46, 62, 58, 95, 194, 61, 254, 18, 17, 62, 149, 243, 95, 191, 97, 154, 136, 62, 113, 208, 33, 62, 19, 155, 12, 63, 217, 183, 128, 60, 30, 62, 246, 190, 104, 36, 80, 62, 123, 145, 235, 61, 116, 48, 87, 190, 183, 60, 162, 190, 133, 185, 137, 62, 74, 30, 153, 190, 228, 141, 86, 189, 38, 99, 149, 61, 219, 118, 204, 61, 145, 244, 121, 189, 234, 78, 241, 189, 250, 188, 160, 62, 168, 80, 173, 188, 235, 122, 149, 190, 38, 19, 130, 190, 12, 35, 190, 61, 237, 72, 243, 62, 102, 12, 116, 191, 218, 207, 5, 62, 161, 127, 126, 188, 79, 103, 105, 57, 83, 146, 11, 191, 230, 84, 74, 60, 189, 143, 116, 61, 157, 89, 136, 62, 10, 169, 175, 60, 223, 87, 223, 190, 230, 110, 192, 62, 228, 202, 92, 60, 243, 10, 57, 62, 114, 158, 40, 189, 249, 99, 238, 189, 253, 8, 116, 62, 82, 82, 67, 189, 128, 247, 135, 189, 17, 30, 169, 190, 168, 249, 119, 62, 35, 93, 233, 190, 254, 246, 105, 62, 30, 198, 153, 61, 139, 205, 200, 60, 159, 244, 198, 61, 170, 200, 252, 61, 42, 48, 168, 62, 2, 93, 104, 61, 64, 15, 186, 190, 4, 26, 44, 190, 176, 182, 103, 62, 34, 191, 85, 62, 46, 161, 233, 190, 201, 33, 90, 62, 100, 219, 0, 62, 86, 54, 197, 60, 181, 100, 118, 190, 200, 36, 25, 62, 151, 160, 242, 189, 82, 10, 136, 62, 231, 226, 70, 61, 188, 254, 101, 62, 189, 193, 183, 189, 51, 167, 128, 190, 184, 28, 74, 61, 102, 75, 31, 191, 119, 245, 57, 62, 27, 247, 58, 62, 79, 116, 96, 60, 204, 45, 242, 59, 151, 122, 213, 61, 210, 191, 190, 61, 103, 6, 132, 189, 26, 236, 66, 62, 238, 113, 248, 189, 117, 67, 178, 62, 96, 216, 129, 61, 120, 40, 41, 190, 85, 64, 152, 190, 193, 131, 149, 61, 195, 50, 152, 190, 24, 249, 205, 62, 198, 70, 86, 62, 249, 188, 229, 61, 52, 96, 222, 57, 66, 225, 203, 62, 117, 186, 151, 190, 14, 4, 15, 191, 91, 161, 225, 61, 14, 154, 104, 62, 52, 126, 77, 62, 55, 18, 11, 191, 104, 28, 188, 60, 105, 5, 22, 191, 96, 98, 179, 62, 179, 45, 51, 185, 115, 15, 14, 62, 48, 90, 170, 61, 175, 147, 200, 189, 132, 38, 112, 62, 140, 227, 108, 62, 183, 74, 6, 190, 237, 237, 122, 189, 21, 138, 60, 62, 206, 34, 189, 190, 107, 201, 249, 61, 120, 174, 127, 62, 79, 131, 61, 190, 1, 248, 158, 189, 37, 17, 150, 61, 128, 174, 148, 62, 80, 248, 71, 189, 103, 80, 24, 190, 57, 159, 216, 60, 124, 21, 240, 61, 135, 231, 146, 61, 45, 153, 148, 189, 174, 105, 222, 188, 150, 59, 150, 62, 115, 82, 27, 62, 98, 56, 160, 190, 137, 216, 169, 62, 63, 210, 59, 61, 185, 68, 119, 189, 38, 122, 161, 188, 142, 107, 9, 189, 145, 218, 153, 62, 105, 167, 127, 189, 97, 250, 51, 190, 109, 112, 89, 62, 165, 50, 136, 61, 15, 227, 43, 190, 57, 130, 22, 191, 94, 142, 231, 60, 80, 58, 67, 62, 77, 234, 158, 190, 47, 234, 103, 62, 19, 21, 237, 189, 74, 41, 63, 61, 243, 146, 173, 61, 91, 79, 204, 189, 151, 243, 219, 61, 37, 180, 103, 62, 160, 216, 16, 62, 207, 204, 82, 62, 205, 62, 143, 190, 41, 78, 33, 61, 85, 223, 31, 191, 228, 47, 81, 189, 19, 193, 132, 61, 46, 189, 204, 61, 179, 231, 165, 62, 105, 92, 213, 61, 98, 90, 199, 190, 242, 55, 7, 191, 109, 132, 161, 62, 125, 60, 11, 62, 39, 231, 139, 62, 217, 166, 173, 62, 191, 146, 65, 190, 74, 220, 44, 189, 68, 13, 79, 190, 149, 168, 192, 61, 218, 15, 61, 190, 110, 100, 8, 190, 139, 3, 119, 190, 40, 66, 26, 189, 226, 220, 52, 190, 200, 236, 132, 189, 76, 159, 241, 61, 165, 111, 187, 189, 94, 110, 96, 61, 13, 219, 8, 190, 56, 14, 52, 61, 112, 120, 169, 60, 61, 156, 229, 189, 134, 133, 58, 189, 83, 246, 83, 188, 110, 192, 8, 62, 117, 254, 159, 190, 124, 3, 175, 62, 160, 37, 98, 62, 220, 79, 181, 190, 23, 39, 9, 190, 15, 254, 31, 62, 241, 37, 220, 61, 228, 145, 231, 61, 164, 192, 143, 189, 129, 225, 70, 60, 25, 229, 90, 190, 77, 215, 255, 61, 38, 128, 100, 62, 49, 92, 75, 62, 107, 81, 169, 189, 113, 148, 35, 189, 9, 62, 13, 62, 137, 8, 203, 188, 57, 25, 245, 190, 186, 179, 165, 61, 61, 132, 50, 60, 115, 185, 67, 61, 197, 123, 135, 189, 38, 250, 40, 62, 90, 151, 160, 190, 88, 61, 229, 190, 133, 182, 144, 189, 93, 100, 72, 62, 208, 30, 0, 62, 250, 241, 164, 189, 150, 199, 71, 62, 212, 143, 238, 61, 202, 149, 185, 189, 91, 31, 170, 61, 107, 86, 57, 60, 114, 217, 13, 190, 252, 213, 229, 188, 154, 213, 155, 59, 10, 179, 139, 61, 82, 77, 32, 62, 226, 154, 3, 62, 253, 140, 252, 189, 99, 195, 196, 190, 2, 121, 17, 186, 151, 7, 143, 61, 92, 157, 237, 60, 209, 218, 39, 62, 236, 2, 159, 190, 43, 209, 77, 62, 220, 16, 75, 62, 13, 58, 105, 61, 198, 95, 12, 190, 100, 109, 47, 62, 81, 124, 70, 190, 8, 141, 89, 62, 14, 95, 144, 187, 204, 92, 169, 189, 241, 183, 146, 61, 53, 199, 67, 62, 217, 227, 216, 62, 164, 216, 19, 62, 37, 6, 170, 60, 2, 113, 0, 191, 135, 161, 75, 62, 122, 40, 100, 62, 154, 133, 24, 191, 211, 157, 28, 61, 49, 70, 35, 61, 116, 35, 102, 62, 147, 40, 77, 190, 116, 26, 16, 189, 246, 220, 2, 190, 248, 245, 156, 61, 152, 175, 93, 61, 249, 203, 98, 189, 231, 54, 141, 189, 130, 42, 149, 188, 183, 149, 89, 190, 227, 32, 30, 60, 253, 10, 18, 190, 249, 138, 157, 61, 147, 53, 10, 190, 92, 124, 178, 189, 86, 239, 251, 60, 56, 210, 159, 190, 19, 139, 179, 61, 139, 132, 214, 61, 49, 109, 184, 61, 65, 143, 143, 189, 238, 119, 66, 188, 149, 123, 54, 61, 15, 109, 45, 62, 102, 130, 85, 189, 110, 121, 40, 61, 57, 198, 51, 189, 7, 193, 91, 190, 204, 62, 254, 188, 108, 35, 185, 61, 133, 33, 244, 61, 38, 202, 12, 189, 142, 172, 182, 189, 147, 23, 237, 189, 9, 126, 169, 190, 108, 53, 172, 61, 23, 126, 84, 189, 35, 15, 93, 61, 90, 218, 102, 191, 195, 215, 16, 60, 17, 196, 74, 62, 113, 198, 234, 60, 194, 158, 116, 188, 67, 108, 70, 62, 252, 23, 155, 189, 59, 133, 166, 190, 220, 177, 185, 189, 93, 105, 202, 188, 54, 9, 149, 62, 57, 205, 101, 62, 58, 247, 147, 190, 12, 4, 132, 62, 130, 133, 51, 62, 206, 82, 108, 189, 113, 71, 32, 62, 216, 153, 154, 62, 13, 174, 10, 61, 251, 191, 105, 190, 66, 1, 255, 61, 6, 122, 207, 187, 200, 244, 77, 62, 133, 125, 99, 191, 109, 246, 160, 61, 23, 231, 141, 189, 228, 208, 30, 62, 90, 116, 24, 190, 103, 105, 195, 189, 168, 229, 13, 62, 234, 225, 163, 61, 87, 159, 35, 190, 237, 37, 214, 60, 231, 212, 93, 62, 206, 127, 179, 61, 143, 215, 77, 60, 191, 122, 125, 62, 249, 109, 24, 190, 175, 243, 167, 190, 88, 163, 67, 190, 42, 255, 24, 61, 107, 20, 136, 189, 235, 17, 24, 190, 190, 27, 38, 61, 120, 27, 145, 190, 89, 6, 229, 61, 186, 93, 20, 61, 153, 79, 20, 188, 32, 208, 38, 60, 64, 51, 128, 62, 72, 132, 248, 59, 28, 147, 200, 61, 203, 48, 81, 190, 37, 148, 177, 190, 196, 74, 134, 190, 99, 128, 172, 61, 55, 129, 145, 188, 79, 106, 132, 189, 118, 13, 146, 62, 230, 208, 234, 189, 168, 227, 149, 190, 222, 77, 168, 190, 217, 218, 128, 62, 109, 105, 43, 190, 201, 92, 170, 62, 106, 131, 8, 63, 197, 166, 110, 189, 105, 51, 83, 61, 121, 162, 237, 190, 74, 199, 1, 63, 188, 39, 244, 190, 182, 50, 156, 190, 118, 16, 246, 60, 72, 51, 36, 62, 214, 243, 145, 189, 24, 177, 135, 62, 210, 181, 55, 190, 211, 57, 128, 59, 3, 254, 216, 189, 0, 128, 161, 62, 245, 148, 192, 190, 30, 105, 23, 190, 116, 204, 140, 189, 29, 14, 241, 60, 157, 40, 214, 62, 212, 39, 35, 190, 115, 152, 14, 190, 35, 81, 172, 62, 220, 23, 125, 61, 148, 82, 207, 61, 82, 102, 45, 191, 172, 141, 135, 62, 243, 179, 31, 62, 62, 12, 24, 62, 226, 246, 24, 191};
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
                alignas(float) const unsigned char memory[] = {238, 33, 95, 62, 12, 100, 96, 189, 55, 98, 69, 61, 67, 146, 56, 62, 148, 130, 118, 62, 103, 165, 18, 61, 207, 220, 24, 62, 208, 118, 205, 189, 13, 150, 215, 60, 234, 92, 170, 189, 220, 216, 26, 62, 105, 131, 114, 62, 30, 17, 221, 59, 8, 82, 169, 189, 239, 190, 230, 189, 4, 228, 29, 62, 186, 242, 252, 61, 126, 99, 49, 62, 46, 159, 179, 190, 234, 89, 61, 62, 105, 95, 46, 62, 212, 92, 44, 189, 178, 152, 12, 190, 1, 102, 183, 62, 69, 146, 150, 189, 138, 54, 120, 190, 170, 169, 152, 62, 62, 12, 177, 60, 122, 83, 172, 190, 18, 98, 68, 189, 90, 167, 73, 190, 192, 254, 67, 62};
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
                alignas(float) const unsigned char memory[] = {216, 35, 145, 62, 241, 210, 160, 61, 189, 147, 40, 63, 12, 85, 103, 190, 213, 211, 157, 189, 253, 40, 129, 61, 150, 128, 131, 62, 7, 8, 24, 63, 91, 145, 97, 62, 225, 158, 242, 59, 81, 109, 152, 63, 14, 28, 145, 62, 14, 76, 85, 189, 193, 100, 243, 189, 70, 1, 176, 62, 98, 205, 212, 62, 221, 176, 182, 62, 76, 123, 143, 190, 174, 252, 6, 191, 149, 210, 26, 190, 137, 114, 55, 191, 69, 102, 201, 190, 154, 130, 156, 62, 145, 10, 106, 190, 117, 225, 166, 62, 129, 61, 180, 190, 233, 43, 54, 189, 141, 108, 89, 190, 195, 161, 206, 61, 178, 75, 70, 190, 175, 128, 153, 62, 245, 159, 45, 63, 4, 167, 150, 190, 74, 182, 114, 62, 25, 25, 209, 62, 207, 193, 233, 189, 219, 212, 41, 190, 123, 87, 32, 62, 85, 176, 166, 190, 97, 151, 108, 62, 78, 98, 5, 190, 176, 202, 198, 189, 85, 78, 130, 60, 147, 72, 151, 190, 225, 179, 227, 60, 90, 46, 46, 62, 172, 242, 203, 189, 145, 43, 18, 62, 208, 233, 154, 189, 56, 151, 212, 188, 117, 91, 73, 62, 108, 0, 76, 190, 123, 28, 202, 61, 121, 23, 176, 188, 139, 65, 239, 61, 23, 45, 133, 190, 147, 61, 138, 60, 121, 131, 192, 62, 92, 219, 190, 190, 50, 98, 131, 62, 16, 26, 2, 62, 208, 59, 29, 190, 153, 82, 96, 62, 215, 219, 30, 189};
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
                alignas(float) const unsigned char memory[] = {45, 189, 179, 60, 169, 18, 55, 190};
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
    alignas(float) const unsigned char memory[] = {99, 59, 68, 63, 157, 130, 5, 61, 173, 117, 150, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {9, 127, 213, 191, 221, 6, 163, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0048/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}