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
                alignas(float) const unsigned char memory[] = {176, 104, 39, 190, 77, 43, 165, 191, 60, 155, 216, 190, 99, 74, 55, 190, 111, 129, 54, 189, 169, 56, 241, 62, 85, 142, 6, 63, 85, 157, 238, 190, 104, 87, 225, 62, 163, 172, 186, 190, 218, 69, 77, 191, 69, 116, 227, 62, 250, 69, 3, 63, 12, 219, 143, 191, 217, 30, 114, 190, 59, 112, 146, 190, 103, 128, 94, 191, 211, 45, 182, 190, 179, 249, 163, 189, 57, 130, 155, 62, 203, 141, 209, 190, 1, 209, 38, 63, 119, 119, 39, 63, 132, 151, 115, 62, 96, 41, 151, 189, 48, 126, 136, 63, 214, 229, 11, 63, 12, 225, 113, 190, 205, 18, 97, 191, 186, 15, 169, 61, 73, 15, 182, 190, 82, 86, 167, 63, 98, 16, 191, 62, 74, 163, 159, 62, 100, 118, 52, 191, 14, 23, 230, 190, 228, 192, 19, 191, 33, 23, 161, 190, 235, 236, 60, 63, 196, 150, 46, 63, 72, 101, 13, 63, 122, 224, 51, 62, 235, 80, 180, 190, 136, 203, 14, 189, 68, 22, 131, 188, 55, 73, 111, 190, 105, 255, 227, 62, 5, 222, 1, 63, 240, 3, 71, 62, 124, 5, 57, 191, 131, 148, 211, 62, 80, 55, 10, 63, 198, 106, 177, 191, 53, 224, 156, 190, 33, 151, 103, 63, 48, 19, 138, 62, 6, 26, 137, 62, 144, 161, 95, 62, 138, 124, 159, 62, 200, 131, 144, 190, 131, 37, 203, 62, 158, 161, 213, 62, 104, 68, 137, 62, 10, 116, 244, 189, 18, 35, 176, 191, 234, 206, 191, 190, 24, 77, 227, 61, 203, 6, 150, 63, 197, 139, 73, 62, 41, 238, 3, 191, 82, 193, 82, 60, 175, 131, 108, 189, 47, 213, 148, 190, 56, 40, 180, 191, 219, 38, 17, 191, 120, 49, 69, 63, 239, 64, 109, 63, 43, 154, 80, 62, 34, 15, 239, 62, 123, 130, 81, 190, 34, 57, 228, 190, 93, 52, 80, 63, 196, 168, 92, 63, 9, 170, 113, 190, 40, 233, 61, 189, 188, 7, 190, 62, 16, 228, 15, 191, 19, 0, 73, 63, 174, 115, 42, 191, 251, 215, 70, 190, 253, 28, 163, 62, 176, 161, 12, 190, 216, 239, 24, 63, 77, 77, 254, 62, 110, 47, 102, 191, 129, 184, 177, 189};
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
                alignas(float) const unsigned char memory[] = {44, 135, 123, 190, 15, 206, 141, 190, 212, 83, 229, 62, 115, 90, 180, 190, 110, 77, 172, 190, 95, 24, 78, 190, 127, 36, 21, 190, 14, 164, 122, 190, 12, 147, 9, 62, 185, 128, 80, 190, 120, 18, 102, 190, 243, 101, 244, 189, 145, 18, 127, 58, 53, 241, 136, 190, 32, 240, 173, 62, 105, 189, 3, 191, 170, 227, 205, 60, 100, 79, 207, 190, 215, 87, 127, 191, 39, 96, 173, 62, 12, 224, 56, 62, 92, 104, 145, 61, 101, 21, 132, 62, 142, 102, 36, 63, 198, 107, 92, 62, 222, 93, 255, 189, 81, 18, 207, 60, 38, 205, 30, 190, 104, 106, 129, 189, 87, 225, 243, 190, 35, 18, 66, 62, 112, 86, 72, 62};
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
                alignas(float) const unsigned char memory[] = {237, 1, 90, 61, 86, 201, 251, 190, 202, 137, 32, 190, 72, 118, 146, 190, 67, 96, 45, 190, 170, 73, 145, 191, 149, 12, 53, 191, 122, 49, 146, 190, 221, 102, 179, 60, 97, 221, 208, 190, 13, 185, 5, 61, 166, 30, 67, 190, 171, 89, 0, 62, 95, 70, 247, 190, 25, 190, 179, 62, 173, 114, 230, 190, 55, 80, 126, 187, 21, 67, 30, 190, 16, 176, 202, 189, 35, 118, 177, 62, 195, 196, 166, 190, 172, 204, 44, 191, 14, 175, 112, 61, 214, 109, 175, 62, 72, 131, 34, 190, 104, 239, 241, 190, 44, 15, 0, 190, 149, 115, 139, 61, 191, 165, 72, 62, 60, 22, 22, 190, 228, 18, 217, 190, 176, 1, 6, 191, 132, 42, 27, 59, 239, 187, 188, 190, 26, 164, 83, 62, 167, 234, 77, 189, 90, 216, 32, 189, 31, 20, 18, 191, 130, 56, 56, 191, 163, 251, 152, 190, 105, 85, 1, 189, 42, 63, 229, 60, 89, 31, 130, 189, 185, 208, 147, 61, 208, 40, 138, 62, 12, 178, 34, 191, 35, 187, 90, 62, 7, 254, 247, 189, 132, 206, 161, 62, 162, 26, 127, 62, 21, 7, 117, 191, 243, 173, 137, 62, 144, 91, 119, 190, 233, 50, 196, 189, 13, 92, 139, 190, 45, 169, 183, 60, 197, 199, 187, 61, 84, 47, 187, 190, 200, 216, 226, 61, 35, 142, 202, 62, 102, 190, 146, 189, 246, 145, 24, 62, 249, 198, 42, 190, 168, 162, 237, 62, 173, 74, 173, 188, 19, 71, 29, 61, 119, 71, 167, 60, 54, 77, 7, 189, 238, 169, 166, 190, 38, 0, 48, 61, 207, 50, 77, 62, 122, 71, 146, 62, 93, 77, 205, 61, 130, 225, 184, 190, 145, 194, 161, 189, 185, 78, 153, 61, 121, 186, 120, 189, 111, 29, 167, 62, 63, 199, 38, 62, 33, 201, 140, 189, 117, 33, 227, 188, 168, 163, 126, 190, 114, 219, 157, 189, 148, 186, 151, 62, 120, 235, 177, 59, 219, 199, 246, 190, 199, 70, 17, 62, 74, 165, 138, 60, 8, 235, 1, 190, 45, 45, 21, 62, 233, 144, 145, 61, 164, 208, 250, 62, 203, 26, 30, 62, 251, 70, 208, 190, 116, 125, 100, 62, 156, 187, 166, 61, 122, 223, 221, 62, 1, 205, 106, 190, 81, 224, 20, 62, 156, 33, 250, 189, 237, 91, 95, 62, 15, 113, 52, 191, 231, 222, 136, 191, 106, 141, 172, 190, 154, 25, 254, 188, 189, 10, 71, 62, 200, 42, 212, 61, 246, 92, 172, 61, 146, 87, 143, 62, 175, 165, 105, 190, 29, 60, 150, 62, 22, 144, 20, 61, 27, 198, 86, 62, 176, 56, 238, 62, 198, 112, 25, 63, 109, 168, 20, 190, 178, 125, 14, 190, 74, 76, 91, 62, 250, 142, 38, 190, 133, 90, 135, 189, 100, 245, 153, 61, 111, 145, 0, 190, 54, 179, 174, 190, 146, 28, 185, 190, 29, 123, 46, 190, 223, 210, 115, 62, 32, 218, 41, 190, 111, 130, 155, 62, 111, 182, 227, 189, 0, 84, 214, 61, 158, 203, 104, 61, 32, 171, 113, 187, 253, 217, 208, 190, 54, 90, 155, 190, 101, 95, 72, 61, 204, 214, 250, 61, 74, 158, 118, 188, 146, 89, 218, 190, 202, 161, 21, 190, 64, 53, 33, 62, 249, 149, 67, 189, 167, 156, 187, 187, 176, 244, 105, 61, 37, 201, 96, 190, 227, 65, 93, 189, 241, 63, 170, 189, 178, 121, 228, 190, 92, 145, 109, 188, 215, 69, 128, 189, 243, 237, 20, 191, 94, 134, 186, 61, 52, 33, 18, 62, 30, 176, 12, 191, 4, 47, 130, 62, 20, 58, 169, 61, 101, 140, 104, 62, 83, 3, 238, 61, 185, 233, 249, 61, 3, 35, 17, 62, 34, 66, 129, 62, 207, 95, 15, 62, 215, 165, 65, 189, 46, 170, 118, 61, 252, 156, 163, 189, 170, 91, 90, 190, 220, 157, 134, 62, 68, 84, 241, 189, 11, 26, 134, 61, 128, 116, 10, 62, 126, 46, 174, 61, 192, 173, 115, 189, 211, 248, 232, 189, 248, 254, 243, 188, 139, 30, 15, 62, 160, 85, 65, 62, 143, 106, 49, 190, 37, 117, 150, 61, 144, 109, 41, 190, 222, 121, 28, 191, 89, 106, 218, 189, 185, 222, 91, 62, 181, 75, 179, 189, 38, 54, 78, 189, 1, 192, 177, 61, 126, 15, 249, 61, 179, 141, 17, 62, 140, 196, 3, 61, 188, 64, 42, 190, 228, 119, 72, 190, 232, 135, 113, 190, 116, 63, 51, 61, 124, 157, 200, 61, 91, 244, 131, 190, 123, 186, 37, 62, 102, 59, 74, 61, 84, 192, 205, 186, 216, 219, 136, 190, 119, 33, 102, 61, 254, 139, 34, 62, 206, 58, 106, 62, 34, 232, 178, 60, 105, 55, 161, 190, 89, 243, 58, 189, 70, 217, 142, 61, 192, 156, 84, 62, 5, 171, 155, 187, 153, 177, 157, 61, 47, 192, 4, 189, 195, 191, 216, 188, 253, 100, 33, 190, 188, 132, 165, 190, 40, 216, 204, 186, 143, 251, 60, 61, 9, 19, 4, 191, 111, 101, 27, 61, 60, 77, 149, 61, 68, 109, 244, 190, 30, 104, 71, 62, 211, 247, 50, 62, 129, 51, 169, 62, 141, 8, 11, 61, 13, 85, 135, 189, 185, 182, 6, 61, 141, 198, 20, 62, 136, 236, 26, 62, 171, 184, 37, 189, 37, 143, 195, 61, 172, 193, 203, 188, 167, 135, 204, 188, 14, 7, 164, 189, 233, 178, 30, 190, 90, 194, 17, 190, 232, 161, 252, 189, 41, 240, 154, 189, 186, 6, 247, 189, 123, 121, 2, 62, 192, 147, 207, 61, 202, 196, 65, 190, 50, 41, 53, 190, 226, 234, 247, 188, 176, 89, 7, 60, 248, 131, 5, 190, 61, 151, 14, 61, 130, 189, 148, 61, 215, 90, 241, 189, 210, 240, 102, 189, 228, 141, 240, 189, 80, 32, 188, 61, 224, 2, 41, 190, 216, 53, 143, 189, 161, 117, 67, 61, 178, 132, 176, 59, 218, 188, 118, 189, 70, 146, 53, 62, 187, 185, 12, 61, 0, 113, 130, 189, 184, 245, 131, 190, 171, 182, 31, 62, 142, 242, 246, 61, 150, 220, 7, 190, 104, 45, 219, 190, 22, 21, 92, 190, 133, 109, 223, 189, 130, 165, 199, 189, 152, 37, 36, 62, 222, 218, 190, 60, 166, 201, 214, 61, 139, 102, 151, 60, 235, 136, 254, 60, 80, 33, 144, 61, 243, 183, 131, 62, 149, 189, 89, 60, 157, 136, 8, 190, 129, 91, 251, 189, 115, 30, 180, 190, 164, 225, 8, 62, 134, 99, 71, 62, 198, 34, 232, 190, 186, 172, 176, 189, 156, 126, 33, 62, 35, 142, 8, 191, 216, 38, 19, 190, 219, 7, 50, 62, 93, 150, 230, 61, 237, 119, 226, 61, 232, 143, 98, 62, 87, 237, 18, 62, 96, 156, 159, 62, 184, 49, 88, 190, 158, 104, 43, 190, 97, 54, 223, 189, 105, 196, 161, 190, 172, 53, 176, 190, 137, 76, 141, 190, 7, 205, 135, 189, 149, 239, 165, 61, 101, 1, 26, 61, 98, 216, 13, 191, 36, 57, 177, 61, 167, 172, 3, 62, 66, 231, 185, 189, 232, 20, 98, 189, 68, 212, 209, 189, 224, 147, 111, 189, 180, 250, 132, 189, 31, 58, 85, 190, 104, 201, 67, 191, 72, 7, 19, 62, 95, 194, 240, 60, 174, 237, 151, 190, 243, 141, 136, 189, 120, 39, 240, 61, 22, 253, 214, 190, 138, 41, 173, 62, 39, 255, 136, 62, 199, 38, 65, 62, 53, 177, 176, 188, 178, 131, 149, 62, 4, 186, 134, 189, 7, 81, 184, 62, 114, 223, 246, 61, 125, 159, 170, 61, 4, 54, 238, 188, 87, 185, 82, 62, 34, 111, 76, 188, 44, 71, 49, 61, 198, 172, 41, 190, 2, 190, 150, 62, 203, 168, 235, 189, 130, 107, 205, 62, 31, 88, 194, 190, 91, 48, 174, 60, 92, 238, 211, 61, 123, 235, 2, 62, 41, 170, 162, 61, 142, 214, 230, 60, 105, 150, 160, 61, 213, 181, 164, 61, 159, 93, 8, 62, 40, 9, 178, 190, 220, 42, 79, 62, 196, 63, 98, 62, 13, 39, 160, 190, 115, 14, 24, 62, 56, 119, 234, 61, 78, 237, 143, 61, 191, 35, 71, 190, 115, 47, 89, 189, 214, 109, 218, 190, 123, 223, 69, 62, 235, 218, 53, 62, 92, 170, 146, 62, 5, 255, 206, 190, 107, 226, 53, 60, 140, 162, 237, 190, 38, 23, 234, 62, 111, 140, 135, 190, 19, 237, 45, 62, 123, 228, 122, 62, 219, 81, 6, 62, 104, 2, 49, 191, 8, 107, 46, 62, 113, 213, 120, 191, 209, 38, 204, 60, 38, 110, 129, 188, 235, 98, 13, 62, 74, 230, 144, 62, 0, 65, 123, 190, 198, 71, 99, 190, 198, 7, 155, 190, 220, 108, 0, 190, 51, 114, 157, 190, 29, 60, 157, 61, 39, 181, 255, 59, 66, 11, 58, 190, 237, 28, 46, 62, 125, 184, 44, 62, 191, 86, 18, 62, 8, 104, 129, 189, 141, 171, 115, 190, 211, 163, 22, 190, 133, 18, 235, 189, 66, 203, 35, 61, 172, 103, 114, 191, 111, 160, 154, 189, 204, 232, 20, 189, 207, 213, 88, 62, 28, 22, 122, 188, 107, 183, 81, 62, 106, 206, 49, 191, 164, 156, 20, 191, 205, 87, 24, 191, 233, 204, 191, 189, 38, 233, 236, 61, 165, 3, 140, 61, 71, 185, 170, 61, 227, 207, 20, 62, 234, 7, 1, 191, 229, 63, 150, 189, 154, 223, 1, 190, 189, 231, 162, 62, 215, 94, 68, 189, 39, 75, 155, 191, 36, 161, 133, 62, 110, 219, 16, 187, 69, 230, 213, 190, 35, 145, 105, 190, 198, 225, 111, 62, 244, 253, 100, 190, 133, 118, 114, 190, 246, 52, 196, 61, 121, 180, 21, 62, 89, 203, 31, 62, 201, 74, 104, 62, 214, 190, 152, 190, 101, 3, 141, 62, 197, 71, 189, 60, 181, 103, 62, 189, 42, 204, 89, 60, 185, 13, 55, 190, 67, 142, 113, 190, 49, 97, 143, 188, 189, 1, 75, 62, 67, 144, 132, 59, 29, 66, 131, 190, 220, 0, 248, 189, 184, 65, 234, 61, 170, 217, 74, 190, 206, 126, 55, 60, 244, 203, 66, 62, 125, 239, 17, 62, 40, 158, 28, 62, 136, 17, 94, 190, 175, 49, 150, 190, 62, 98, 212, 190, 198, 87, 24, 61, 249, 170, 159, 189, 146, 245, 82, 189, 226, 100, 84, 190, 119, 133, 110, 61, 171, 68, 24, 62, 113, 132, 161, 61, 12, 209, 38, 189, 158, 248, 6, 61, 63, 114, 200, 189, 109, 238, 133, 61, 45, 64, 26, 190, 3, 58, 197, 62, 124, 156, 119, 61, 178, 122, 4, 190, 27, 7, 114, 62, 74, 71, 20, 190, 150, 87, 23, 190, 10, 132, 93, 61, 140, 242, 24, 62, 55, 58, 206, 189, 158, 65, 187, 188, 70, 110, 28, 190, 170, 144, 30, 62, 196, 143, 36, 60, 197, 147, 202, 189, 131, 175, 156, 186, 49, 166, 75, 62, 129, 73, 212, 189, 191, 82, 47, 62, 216, 87, 35, 190, 62, 151, 181, 190, 130, 223, 39, 62, 244, 58, 5, 61, 238, 177, 217, 60, 166, 100, 96, 60, 142, 36, 176, 62, 53, 197, 13, 62, 8, 196, 12, 62, 189, 148, 61, 62, 229, 28, 8, 62, 72, 86, 179, 189, 163, 27, 161, 189, 159, 92, 148, 61, 26, 118, 123, 62, 254, 17, 7, 61, 184, 165, 237, 60, 56, 132, 1, 62, 130, 153, 254, 189, 109, 22, 114, 61, 23, 143, 72, 62, 231, 197, 55, 61, 155, 9, 237, 189, 71, 160, 45, 189, 78, 212, 51, 61, 226, 46, 169, 61, 6, 212, 135, 62, 61, 132, 251, 61, 103, 171, 221, 189, 9, 246, 123, 189, 245, 188, 118, 61, 187, 65, 61, 62, 10, 156, 164, 187, 188, 178, 196, 62, 240, 158, 77, 62, 230, 251, 192, 61, 88, 246, 236, 61, 223, 148, 232, 61, 174, 238, 32, 62, 179, 9, 150, 62, 22, 40, 91, 61, 132, 153, 155, 188, 245, 191, 177, 60, 246, 39, 168, 62, 47, 63, 171, 189, 188, 174, 34, 190, 84, 68, 185, 189, 7, 68, 240, 190, 116, 37, 255, 61, 170, 8, 78, 61, 120, 98, 20, 62, 217, 216, 27, 191, 126, 59, 45, 62, 41, 63, 250, 62, 116, 146, 86, 62, 136, 247, 157, 190, 235, 250, 80, 190, 127, 6, 200, 190, 56, 138, 100, 190, 118, 85, 114, 190, 43, 72, 131, 62, 30, 156, 106, 61, 94, 162, 37, 61, 159, 88, 22, 190, 24, 77, 139, 190, 66, 146, 151, 190, 234, 143, 9, 62, 167, 38, 165, 62, 183, 97, 111, 189, 157, 9, 127, 189, 15, 249, 14, 61, 114, 15, 148, 62, 88, 210, 106, 62, 104, 162, 243, 60, 160, 126, 151, 61, 232, 184, 158, 190, 74, 63, 144, 190, 186, 135, 126, 62, 62, 216, 232, 189, 241, 111, 95, 188, 73, 253, 26, 189, 178, 98, 196, 61, 222, 77, 142, 62, 119, 50, 178, 190, 239, 14, 30, 62, 33, 110, 179, 62, 225, 61, 1, 62, 255, 181, 191, 189, 170, 165, 243, 188, 10, 32, 125, 188, 210, 218, 55, 62, 253, 102, 5, 62, 70, 102, 43, 62, 191, 243, 99, 188, 52, 228, 4, 61, 41, 251, 184, 189, 252, 35, 129, 190, 174, 37, 86, 190, 164, 196, 92, 62, 151, 148, 13, 62, 49, 211, 203, 190, 86, 174, 42, 189, 14, 23, 24, 189, 26, 161, 218, 190, 235, 98, 238, 189, 58, 221, 90, 62, 213, 5, 201, 62, 255, 164, 149, 61, 182, 131, 146, 190, 107, 81, 50, 62, 111, 169, 203, 189, 200, 129, 135, 61, 215, 119, 12, 190, 95, 153, 16, 60, 76, 160, 138, 189, 208, 202, 150, 61, 19, 150, 25, 190, 253, 68, 172, 61, 88, 153, 206, 189, 183, 70, 51, 190, 88, 120, 2, 62, 47, 140, 118, 189, 100, 191, 31, 190, 106, 131, 4, 62, 36, 53, 220, 189, 13, 187, 6, 190, 84, 101, 5, 62, 113, 250, 4, 190, 247, 159, 128, 60, 28, 126, 172, 58, 161, 154, 51, 190, 188, 250, 223, 189, 37, 70, 200, 59, 168, 127, 82, 61, 57, 4, 144, 188, 219, 158, 197, 186, 124, 150, 65, 61, 63, 77, 229, 189, 2, 206, 11, 189, 252, 170, 23, 62, 229, 147, 238, 61, 245, 48, 162, 61, 83, 106, 179, 189, 99, 47, 151, 60, 166, 82, 76, 189, 23, 109, 110, 189, 94, 204, 132, 190, 76, 193, 53, 190, 40, 70, 134, 191, 229, 243, 79, 191, 140, 107, 36, 190, 16, 215, 1, 62, 45, 75, 96, 190, 203, 243, 166, 62, 216, 181, 124, 189, 217, 98, 156, 62, 113, 156, 6, 191, 243, 168, 184, 61, 251, 71, 74, 62, 152, 195, 26, 62, 154, 236, 26, 190, 37, 5, 94, 191, 26, 185, 131, 62, 202, 170, 200, 189, 28, 233, 55, 191, 215, 102, 76, 62, 254, 168, 129, 62, 169, 134, 112, 190, 131, 204, 164, 190, 0, 189, 49, 62, 46, 168, 199, 190, 171, 228, 157, 61, 155, 166, 212, 61, 199, 124, 91, 190, 32, 167, 145, 60, 216, 128, 60, 191, 166, 82, 137, 62, 57, 106, 217, 61, 73, 2, 74, 62, 212, 233, 29, 191, 118, 28, 222, 60, 147, 253, 74, 190, 210, 214, 138, 189, 182, 6, 228, 189, 95, 87, 157, 62, 48, 201, 155, 61, 57, 144, 188, 190, 73, 70, 86, 59, 204, 162, 0, 62, 80, 169, 207, 187, 255, 95, 9, 62, 255, 163, 47, 189, 194, 45, 0, 191, 135, 200, 136, 190, 55, 152, 197, 190, 52, 228, 3, 190, 174, 129, 8, 60, 175, 167, 66, 190, 178, 201, 123, 61, 79, 248, 204, 61, 74, 58, 121, 189, 118, 216, 50, 190, 242, 77, 135, 59, 135, 44, 182, 190, 21, 142, 153, 189, 167, 211, 73, 62, 229, 176, 17, 190, 72, 41, 12, 189, 34, 132, 118, 190, 211, 192, 201, 60, 45, 126, 134, 190, 80, 219, 63, 61, 46, 194, 123, 191, 20, 168, 15, 191, 158, 0, 235, 190, 83, 46, 33, 61, 156, 14, 238, 60, 211, 255, 197, 187, 67, 143, 39, 62, 66, 212, 137, 62, 128, 187, 24, 191, 160, 184, 23, 62, 244, 90, 69, 190, 220, 3, 244, 62, 35, 243, 148, 62, 3, 230, 157, 191, 97, 219, 112, 62, 94, 226, 25, 190, 94, 71, 18, 190, 162, 28, 194, 189, 13, 168, 233, 60, 227, 22, 11, 190, 251, 147, 164, 190, 235, 194, 46, 188, 241, 2, 248, 61, 254, 251, 55, 62, 102, 122, 137, 61, 23, 25, 164, 189, 213, 73, 227, 62, 171, 23, 11, 62, 71, 106, 6, 62, 182, 156, 198, 189, 46, 155, 61, 189, 96, 73, 19, 62, 116, 62, 160, 61, 194, 210, 178, 189, 205, 239, 208, 189, 176, 162, 169, 61, 96, 30, 197, 189, 108, 136, 157, 60, 103, 238, 154, 189, 56, 176, 77, 189, 24, 20, 10, 189, 112, 60, 43, 185, 195, 52, 94, 189, 133, 70, 23, 189, 24, 28, 32, 190, 31, 107, 136, 188, 252, 242, 16, 61, 61, 199, 12, 190, 229, 225, 143, 189, 101, 242, 54, 190, 189, 149, 4, 189, 139, 134, 179, 187, 249, 165, 35, 62, 126, 173, 182, 189, 155, 202, 55, 190, 140, 96, 237, 61, 249, 100, 251, 61, 240, 244, 195, 60, 97, 238, 62, 189, 21, 181, 137, 61, 131, 106, 141, 190, 142, 203, 6, 62, 19, 38, 141, 190, 252, 223, 59, 62, 67, 4, 233, 190, 18, 129, 12, 191, 36, 219, 101, 190, 193, 130, 44, 62, 206, 181, 85, 190, 131, 200, 64, 62, 231, 144, 28, 62, 36, 185, 128, 62, 127, 160, 17, 191, 155, 109, 166, 189, 99, 177, 219, 188, 102, 202, 71, 62, 164, 232, 55, 62, 38, 111, 126, 191, 158, 117, 14, 62, 182, 65, 187, 189, 159, 162, 14, 190, 68, 88, 243, 60, 233, 126, 175, 188, 235, 63, 156, 59, 208, 236, 138, 190, 202, 252, 2, 188, 248, 190, 2, 62, 88, 81, 246, 61, 31, 162, 157, 189, 217, 22, 40, 189, 123, 206, 33, 62, 34, 202, 175, 190, 116, 134, 107, 62, 201, 120, 203, 190, 34, 28, 169, 62, 233, 84, 145, 190, 32, 55, 144, 62, 230, 168, 255, 62, 106, 22, 87, 61, 214, 98, 157, 191, 138, 102, 43, 190, 97, 218, 164, 191, 60, 165, 9, 190, 84, 132, 161, 188, 142, 151, 156, 190, 251, 5, 61, 62, 240, 56, 250, 189, 26, 186, 32, 191, 41, 126, 14, 190, 158, 3, 239, 61, 31, 12, 243, 190, 119, 109, 35, 190, 242, 208, 13, 62, 158, 17, 202, 190, 222, 48, 191, 62, 235, 187, 167, 62, 98, 221, 187, 190, 132, 80, 199, 61, 0, 219, 98, 189, 6, 211, 150, 190, 225, 75, 246, 190, 145, 156, 34, 62, 7, 185, 63, 191, 125, 32, 211, 190, 1, 172, 55, 190, 233, 0, 116, 62, 195, 40, 206, 190, 5, 231, 19, 189, 113, 123, 222, 190, 234, 39, 5, 191, 90, 42, 108, 189, 42, 190, 93, 187, 249, 96, 228, 188, 10, 198, 141, 190, 156, 22, 115, 62, 126, 163, 51, 61, 229, 101, 65, 190, 188, 107, 27, 189, 46, 37, 182, 190, 54, 140, 181, 62, 6, 211, 176, 189, 89, 218, 65, 191, 56, 158, 147, 62, 142, 11, 217, 188, 162, 241, 191, 189, 226, 165, 90, 190, 192, 24, 67, 190, 79, 185, 203, 189, 123, 153, 13, 190, 147, 146, 120, 62, 113, 199, 113, 62, 217, 236, 200, 189, 212, 189, 100, 61, 203, 42, 200, 189, 21, 217, 150, 62, 111, 186, 93, 190, 163, 180, 248, 189, 100, 221, 99, 189, 31, 18, 170, 190, 65, 98, 77, 62, 176, 141, 135, 191, 209, 3, 167, 190, 229, 72, 159, 190, 115, 194, 168, 61, 79, 144, 4, 61, 9, 39, 240, 61, 210, 111, 43, 190, 195, 132, 197, 62, 150, 148, 217, 190, 86, 51, 84, 61, 246, 131, 8, 62, 22, 129, 12, 62, 150, 130, 194, 60, 190, 81, 151, 191, 150, 69, 62, 189, 60, 218, 250, 188, 210, 180, 2, 191, 206, 107, 131, 61, 247, 231, 146, 62, 26, 225, 130, 190, 117, 48, 207, 189, 8, 182, 36, 189, 80, 132, 45, 190, 115, 28, 129, 62, 87, 91, 160, 189, 166, 15, 132, 189, 62, 196, 66, 190, 74, 210, 135, 62, 173, 194, 248, 189, 201, 165, 53, 190, 56, 169, 17, 61, 177, 84, 168, 62, 12, 35, 110, 190, 149, 161, 213, 189, 105, 110, 150, 61, 20, 198, 81, 62, 117, 116, 22, 189, 181, 143, 109, 61, 61, 237, 58, 187, 197, 159, 134, 61, 178, 42, 144, 188, 183, 148, 205, 188, 120, 240, 220, 61, 164, 141, 10, 190, 15, 96, 139, 62, 166, 215, 153, 62, 6, 25, 111, 60, 54, 66, 31, 190, 230, 50, 93, 61, 242, 128, 100, 62, 70, 98, 36, 190, 152, 65, 102, 190, 99, 240, 126, 188, 20, 158, 96, 190, 192, 173, 20, 62, 43, 234, 53, 188, 34, 76, 177, 62, 249, 18, 35, 62, 122, 219, 149, 189, 27, 104, 4, 189, 219, 192, 139, 189, 171, 230, 224, 61, 135, 83, 226, 189, 156, 36, 97, 190, 109, 94, 171, 60, 180, 169, 147, 61, 182, 219, 134, 61, 96, 31, 247, 189, 81, 169, 130, 189, 179, 126, 184, 189, 125, 25, 173, 61, 70, 115, 19, 61, 145, 31, 182, 189, 231, 230, 43, 189, 46, 45, 192, 61, 155, 145, 110, 62, 225, 55, 90, 190, 100, 166, 194, 190, 81, 7, 38, 62, 177, 241, 147, 189, 110, 150, 21, 62, 214, 29, 12, 60, 76, 4, 58, 62, 32, 16, 126, 62, 36, 189, 46, 62, 84, 162, 11, 62, 60, 102, 53, 190, 62, 149, 37, 62, 199, 223, 51, 190, 51, 169, 196, 61, 2, 57, 182, 61, 88, 21, 255, 189, 44, 0, 44, 189, 216, 65, 5, 62, 73, 138, 21, 62, 56, 126, 43, 190, 156, 92, 71, 62, 24, 28, 148, 190, 33, 72, 107, 189, 112, 94, 200, 190, 103, 229, 52, 190, 201, 7, 75, 191, 221, 243, 235, 189, 123, 72, 169, 190, 240, 67, 87, 61, 67, 58, 43, 190, 56, 66, 106, 189, 132, 67, 32, 62, 96, 211, 231, 189, 96, 155, 56, 191, 152, 224, 129, 62, 67, 78, 109, 62, 110, 125, 66, 61, 67, 212, 136, 190, 179, 166, 193, 60, 105, 154, 56, 189, 62, 220, 206, 61, 70, 80, 100, 62, 207, 85, 67, 62, 4, 234, 169, 190, 153, 227, 126, 61, 47, 217, 252, 61, 242, 91, 156, 62, 73, 125, 228, 190, 175, 206, 160, 189, 48, 235, 77, 189, 28, 79, 173, 189, 19, 83, 28, 191, 116, 224, 33, 62, 48, 100, 192, 62, 20, 37, 160, 62, 50, 143, 145, 190, 58, 222, 23, 62, 235, 39, 87, 190, 203, 119, 128, 190, 35, 89, 53, 190, 170, 231, 70, 62, 209, 119, 118, 189, 155, 70, 238, 188, 132, 59, 247, 189, 13, 19, 120, 190, 191, 0, 22, 190, 229, 248, 90, 189, 73, 25, 102, 62, 14, 37, 11, 189, 190, 33, 51, 189, 182, 190, 244, 188, 44, 192, 90, 62, 224, 157, 48, 62, 47, 15, 16, 190, 144, 173, 131, 62, 27, 122, 93, 60, 51, 8, 208, 189, 213, 172, 118, 62, 116, 140, 153, 61, 33, 54, 156, 190, 58, 178, 66, 190, 118, 8, 210, 189, 95, 188, 150, 189, 155, 244, 39, 191, 59, 163, 174, 61, 178, 51, 173, 62, 4, 60, 146, 62, 127, 105, 34, 189, 31, 128, 26, 61, 30, 17, 213, 190, 190, 99, 18, 187, 230, 220, 28, 190, 237, 135, 167, 62, 101, 224, 40, 190, 224, 239, 225, 189, 80, 243, 55, 60, 188, 115, 160, 190, 86, 76, 130, 190, 155, 128, 57, 62, 50, 181, 121, 62, 168, 196, 140, 62, 185, 18, 48, 61, 50, 164, 219, 61, 239, 153, 205, 60, 166, 100, 107, 62, 225, 82, 57, 190, 253, 147, 158, 62, 96, 221, 135, 190, 97, 230, 152, 190, 41, 113, 246, 61, 195, 240, 211, 61};
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
                alignas(float) const unsigned char memory[] = {216, 95, 76, 189, 26, 56, 119, 62, 230, 136, 51, 190, 144, 82, 75, 189, 106, 252, 208, 61, 9, 86, 173, 61, 11, 236, 108, 189, 175, 32, 18, 190, 148, 128, 143, 189, 60, 112, 139, 189, 65, 90, 27, 62, 176, 195, 242, 60, 120, 173, 21, 62, 57, 131, 46, 62, 117, 77, 187, 62, 103, 135, 217, 189, 57, 212, 120, 62, 19, 221, 7, 62, 24, 57, 229, 189, 163, 222, 245, 61, 13, 118, 152, 61, 160, 57, 54, 62, 37, 166, 49, 190, 67, 143, 165, 61, 204, 229, 115, 62, 112, 26, 92, 62, 199, 35, 201, 60, 124, 133, 22, 61, 162, 154, 90, 62, 62, 72, 85, 62, 154, 23, 97, 62, 246, 177, 167, 61};
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
                alignas(float) const unsigned char memory[] = {120, 84, 147, 63, 115, 23, 14, 63, 23, 255, 177, 190, 15, 66, 145, 62, 137, 181, 121, 190, 116, 165, 65, 60, 206, 39, 51, 190, 111, 107, 114, 61, 32, 199, 74, 189, 18, 222, 255, 189, 177, 92, 181, 190, 228, 153, 99, 191, 204, 175, 20, 63, 224, 132, 148, 60, 149, 114, 188, 61, 173, 46, 40, 62, 168, 129, 11, 191, 122, 166, 39, 190, 90, 38, 168, 188, 30, 55, 63, 63, 27, 243, 72, 190, 206, 199, 23, 63, 11, 107, 232, 189, 109, 23, 109, 62, 154, 72, 151, 191, 248, 5, 226, 62, 251, 171, 90, 63, 168, 101, 240, 189, 205, 246, 171, 61, 20, 119, 2, 62, 80, 98, 195, 190, 90, 225, 152, 190, 47, 208, 143, 61, 236, 70, 226, 60, 111, 111, 123, 62, 221, 190, 31, 62, 160, 172, 221, 190, 160, 84, 49, 190, 113, 110, 238, 189, 155, 119, 214, 60, 41, 15, 96, 190, 123, 5, 215, 190, 223, 10, 183, 189, 30, 53, 141, 62, 196, 187, 190, 61, 214, 86, 100, 190, 108, 67, 109, 190, 199, 220, 35, 61, 228, 110, 18, 62, 137, 215, 135, 189, 51, 79, 24, 189, 93, 194, 192, 61, 142, 69, 169, 188, 90, 226, 21, 62, 158, 34, 173, 60, 146, 128, 134, 62, 130, 187, 153, 61, 122, 235, 86, 190, 3, 215, 126, 189, 204, 127, 85, 62, 85, 130, 43, 190, 219, 90, 12, 191, 67, 189, 211, 61, 172, 92, 15, 62};
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
                alignas(float) const unsigned char memory[] = {2, 238, 192, 189, 168, 211, 147, 190};
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
    alignas(float) const unsigned char memory[] = {234, 45, 71, 190, 153, 97, 200, 63, 12, 69, 215, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {162, 22, 159, 190, 78, 61, 66, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0093/steps/000000000008000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}