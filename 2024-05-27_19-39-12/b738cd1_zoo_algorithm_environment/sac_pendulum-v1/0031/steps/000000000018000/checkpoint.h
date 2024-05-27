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
                alignas(float) const unsigned char memory[] = {204, 160, 72, 191, 202, 59, 62, 191, 155, 137, 207, 62, 211, 251, 250, 190, 54, 31, 63, 63, 52, 209, 22, 63, 247, 78, 131, 62, 180, 45, 226, 62, 206, 140, 211, 62, 84, 41, 231, 190, 159, 236, 233, 63, 83, 247, 215, 62, 129, 35, 26, 63, 101, 231, 137, 191, 15, 173, 135, 190, 96, 216, 27, 63, 126, 115, 182, 63, 193, 59, 151, 62, 163, 103, 97, 63, 9, 44, 145, 63, 189, 173, 195, 62, 247, 146, 226, 189, 143, 127, 79, 191, 161, 236, 189, 62, 212, 113, 178, 60, 232, 42, 129, 61, 210, 63, 132, 59, 78, 250, 51, 191, 3, 139, 150, 63, 127, 37, 90, 62, 63, 65, 191, 189, 218, 160, 170, 191, 122, 174, 164, 190, 54, 229, 15, 191, 248, 119, 130, 191, 78, 157, 19, 190, 203, 183, 248, 62, 153, 96, 53, 63, 17, 246, 2, 190, 155, 78, 97, 63, 164, 210, 51, 191, 61, 7, 53, 190, 4, 204, 51, 62, 228, 33, 59, 191, 31, 4, 55, 63, 66, 76, 43, 191, 209, 136, 70, 190, 145, 99, 135, 190, 53, 88, 13, 63, 10, 118, 41, 61, 93, 2, 17, 63, 213, 18, 244, 189, 2, 85, 191, 191, 99, 132, 100, 190, 230, 173, 17, 61, 103, 39, 138, 63, 138, 23, 27, 63, 71, 232, 15, 191, 22, 250, 149, 62, 212, 92, 131, 62, 180, 222, 120, 191, 252, 198, 175, 186, 109, 245, 11, 191, 27, 94, 49, 190, 86, 139, 154, 191, 148, 76, 13, 190, 247, 22, 175, 190, 238, 2, 46, 61, 162, 41, 142, 61, 69, 117, 7, 191, 197, 86, 163, 62, 99, 41, 204, 190, 103, 53, 240, 62, 49, 177, 107, 190, 183, 206, 227, 190, 175, 106, 149, 59, 38, 68, 72, 191, 31, 131, 15, 63, 88, 224, 174, 190, 203, 75, 69, 61, 128, 44, 226, 190, 48, 87, 146, 63, 71, 244, 33, 63, 245, 92, 178, 62, 236, 237, 179, 62, 154, 27, 155, 63, 155, 50, 202, 62, 196, 96, 148, 190, 75, 132, 180, 62, 200, 80, 250, 190, 153, 226, 95, 63, 192, 179, 118, 191, 247, 141, 62, 190, 231, 111, 203, 62, 119, 34, 134, 191, 60, 61, 192, 62};
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
                alignas(float) const unsigned char memory[] = {42, 67, 227, 190, 142, 16, 223, 190, 10, 121, 115, 62, 9, 230, 36, 188, 142, 159, 144, 190, 47, 167, 31, 62, 178, 233, 229, 190, 220, 12, 64, 190, 52, 10, 240, 189, 7, 157, 128, 190, 22, 221, 100, 189, 13, 90, 161, 62, 50, 32, 0, 63, 96, 167, 126, 189, 192, 106, 54, 62, 139, 153, 35, 63, 219, 136, 85, 62, 31, 199, 103, 190, 31, 134, 97, 62, 198, 14, 243, 190, 180, 33, 199, 190, 144, 140, 148, 62, 40, 238, 66, 63, 45, 45, 90, 190, 193, 185, 143, 190, 98, 101, 208, 61, 78, 118, 237, 62, 234, 163, 139, 191, 162, 3, 204, 62, 15, 29, 48, 190, 191, 34, 194, 62, 96, 50, 211, 62};
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
                alignas(float) const unsigned char memory[] = {246, 132, 49, 191, 76, 18, 6, 191, 152, 165, 113, 62, 94, 243, 148, 61, 41, 116, 146, 190, 97, 75, 242, 62, 108, 142, 90, 62, 21, 137, 29, 191, 204, 15, 160, 61, 114, 48, 140, 62, 20, 70, 132, 190, 101, 249, 136, 61, 12, 163, 68, 62, 102, 196, 66, 190, 75, 48, 39, 61, 45, 185, 154, 61, 123, 35, 25, 62, 114, 111, 181, 191, 40, 154, 176, 190, 13, 106, 170, 190, 215, 181, 150, 62, 105, 122, 87, 62, 167, 101, 215, 61, 4, 88, 4, 190, 91, 116, 126, 190, 63, 100, 167, 62, 100, 222, 152, 188, 124, 20, 76, 62, 176, 9, 139, 62, 188, 46, 183, 61, 231, 56, 23, 190, 161, 167, 160, 61, 157, 170, 141, 188, 244, 218, 185, 58, 191, 184, 7, 62, 188, 103, 88, 61, 163, 40, 31, 61, 156, 86, 118, 60, 231, 163, 130, 189, 125, 196, 21, 190, 192, 165, 218, 189, 187, 15, 230, 189, 245, 162, 17, 62, 150, 111, 243, 189, 53, 162, 11, 190, 215, 40, 170, 59, 89, 230, 73, 190, 134, 225, 171, 189, 126, 248, 30, 190, 254, 151, 165, 60, 32, 165, 74, 190, 202, 228, 24, 188, 130, 176, 237, 61, 102, 213, 190, 61, 177, 177, 98, 62, 56, 156, 213, 61, 71, 171, 36, 61, 136, 6, 22, 190, 219, 210, 77, 190, 12, 158, 137, 60, 149, 23, 27, 190, 125, 123, 36, 190, 103, 178, 0, 190, 155, 46, 60, 190, 11, 118, 191, 62, 218, 247, 65, 191, 111, 103, 25, 62, 145, 33, 165, 191, 230, 44, 39, 60, 187, 227, 7, 190, 59, 250, 34, 190, 97, 161, 165, 62, 231, 25, 111, 60, 223, 113, 5, 192, 28, 166, 209, 188, 199, 75, 137, 189, 43, 144, 6, 62, 226, 161, 145, 61, 107, 79, 143, 189, 189, 178, 13, 189, 59, 74, 90, 62, 39, 73, 133, 61, 53, 241, 15, 191, 187, 223, 29, 61, 214, 51, 150, 61, 213, 138, 176, 61, 164, 73, 86, 61, 159, 211, 203, 58, 134, 212, 67, 61, 15, 137, 155, 62, 172, 90, 26, 62, 70, 204, 191, 190, 236, 25, 92, 190, 86, 147, 35, 61, 212, 33, 170, 62, 164, 65, 22, 62, 67, 159, 159, 190, 57, 208, 205, 61, 81, 75, 92, 62, 12, 91, 217, 61, 132, 171, 59, 189, 195, 185, 69, 190, 58, 166, 79, 190, 1, 73, 119, 62, 227, 188, 15, 62, 50, 241, 199, 62, 209, 58, 100, 191, 11, 144, 49, 62, 132, 218, 93, 191, 7, 229, 49, 189, 26, 37, 148, 62, 8, 190, 11, 62, 254, 22, 141, 188, 17, 19, 55, 191, 65, 4, 119, 62, 147, 64, 166, 60, 178, 150, 0, 190, 136, 209, 201, 61, 2, 162, 43, 189, 82, 216, 25, 62, 187, 83, 178, 190, 11, 151, 152, 190, 218, 219, 21, 190, 10, 52, 198, 190, 117, 185, 55, 62, 149, 120, 216, 62, 231, 176, 242, 61, 233, 167, 135, 62, 105, 29, 186, 62, 130, 146, 154, 191, 224, 66, 175, 59, 9, 39, 51, 191, 208, 218, 96, 190, 212, 233, 241, 62, 244, 153, 249, 61, 43, 21, 190, 190, 159, 253, 166, 188, 142, 167, 118, 190, 204, 219, 210, 61, 37, 70, 81, 62, 154, 157, 190, 61, 132, 151, 151, 190, 97, 213, 214, 60, 33, 142, 126, 62, 56, 225, 199, 61, 140, 71, 255, 60, 56, 9, 77, 191, 87, 197, 14, 61, 40, 5, 185, 61, 132, 251, 62, 62, 101, 246, 179, 188, 254, 227, 74, 61, 38, 117, 175, 190, 11, 146, 12, 63, 239, 247, 41, 62, 193, 98, 45, 62, 39, 96, 3, 187, 247, 71, 240, 189, 39, 25, 77, 190, 177, 208, 252, 60, 127, 213, 86, 188, 112, 61, 187, 189, 32, 190, 50, 190, 190, 64, 148, 189, 158, 235, 164, 189, 117, 179, 225, 188, 250, 233, 168, 189, 54, 244, 18, 190, 215, 52, 218, 188, 22, 27, 172, 189, 21, 164, 221, 61, 203, 78, 1, 190, 14, 180, 170, 189, 196, 147, 216, 189, 231, 64, 47, 189, 132, 204, 186, 61, 130, 65, 36, 189, 2, 64, 243, 61, 126, 185, 151, 61, 86, 147, 223, 61, 223, 219, 142, 60, 199, 16, 201, 186, 152, 207, 178, 60, 92, 11, 236, 189, 215, 32, 48, 60, 70, 82, 155, 59, 251, 37, 44, 190, 36, 170, 219, 61, 27, 126, 63, 61, 208, 98, 12, 190, 205, 69, 117, 189, 225, 9, 16, 62, 129, 163, 134, 189, 43, 239, 11, 62, 228, 235, 53, 62, 121, 202, 175, 188, 66, 117, 82, 62, 40, 78, 100, 61, 183, 70, 11, 190, 22, 124, 63, 61, 108, 119, 1, 189, 117, 192, 227, 62, 157, 129, 207, 61, 136, 195, 201, 62, 171, 20, 224, 189, 218, 25, 108, 62, 121, 178, 10, 61, 83, 69, 24, 62, 172, 135, 63, 190, 131, 70, 1, 62, 151, 16, 164, 188, 129, 118, 126, 60, 83, 123, 204, 190, 107, 113, 153, 61, 9, 160, 101, 62, 120, 159, 86, 190, 236, 233, 239, 189, 90, 86, 227, 189, 113, 93, 206, 61, 78, 105, 216, 190, 198, 1, 65, 62, 56, 43, 155, 189, 158, 0, 102, 61, 73, 234, 5, 189, 197, 12, 81, 188, 116, 26, 247, 188, 164, 32, 106, 61, 180, 177, 135, 187, 141, 72, 28, 189, 88, 238, 140, 189, 213, 69, 192, 187, 204, 101, 56, 190, 12, 44, 15, 62, 160, 73, 80, 190, 52, 181, 52, 190, 223, 74, 129, 189, 5, 76, 40, 190, 15, 67, 3, 61, 25, 141, 32, 190, 52, 14, 34, 189, 142, 253, 210, 60, 49, 140, 16, 62, 252, 215, 245, 59, 199, 61, 47, 190, 246, 110, 238, 60, 97, 58, 40, 190, 245, 153, 183, 61, 128, 221, 41, 190, 233, 37, 50, 189, 57, 143, 29, 190, 135, 156, 124, 61, 189, 7, 26, 59, 50, 182, 6, 190, 81, 69, 218, 61, 172, 119, 74, 190, 221, 144, 201, 61, 49, 233, 25, 63, 116, 67, 48, 191, 187, 236, 208, 190, 39, 233, 247, 191, 40, 28, 140, 191, 87, 63, 70, 63, 9, 218, 35, 63, 218, 151, 130, 190, 117, 116, 31, 190, 196, 114, 102, 191, 10, 125, 79, 190, 103, 188, 109, 190, 77, 50, 144, 62, 196, 135, 67, 191, 101, 130, 129, 189, 164, 24, 142, 62, 228, 161, 176, 59, 17, 98, 216, 190, 177, 125, 26, 191, 231, 97, 70, 62, 35, 171, 95, 62, 39, 177, 131, 190, 12, 53, 43, 62, 86, 228, 84, 190, 253, 186, 224, 190, 189, 44, 148, 62, 126, 135, 253, 61, 122, 34, 172, 61, 226, 171, 215, 188, 116, 132, 11, 190, 16, 72, 189, 190, 114, 250, 174, 190, 89, 80, 253, 189, 238, 194, 128, 61, 150, 120, 177, 189, 166, 98, 129, 187, 141, 197, 163, 61, 21, 174, 238, 60, 1, 157, 245, 61, 34, 200, 189, 60, 120, 177, 79, 189, 165, 119, 33, 190, 228, 209, 136, 189, 36, 179, 236, 61, 235, 106, 45, 190, 131, 230, 57, 61, 47, 235, 180, 188, 20, 38, 129, 60, 110, 201, 172, 61, 236, 125, 3, 190, 82, 238, 11, 190, 216, 34, 24, 62, 97, 201, 35, 190, 10, 146, 81, 190, 53, 235, 222, 189, 210, 244, 181, 60, 166, 181, 50, 189, 97, 54, 42, 190, 157, 162, 16, 61, 167, 121, 39, 60, 106, 33, 53, 189, 127, 2, 170, 61, 246, 59, 252, 189, 241, 44, 153, 189, 168, 169, 52, 190, 182, 7, 130, 189, 183, 170, 38, 62, 148, 9, 59, 62, 181, 142, 3, 188, 116, 27, 162, 189, 247, 14, 227, 189, 51, 110, 201, 61, 184, 161, 147, 189, 186, 78, 205, 62, 31, 93, 53, 61, 23, 86, 30, 62, 63, 78, 153, 61, 238, 127, 35, 62, 30, 177, 54, 61, 250, 63, 191, 189, 220, 207, 24, 189, 32, 37, 0, 62, 143, 84, 132, 62, 10, 6, 143, 190, 134, 246, 212, 189, 249, 241, 3, 62, 23, 68, 27, 189, 215, 196, 152, 61, 192, 46, 255, 61, 226, 11, 26, 190, 194, 206, 144, 61, 186, 134, 144, 190, 212, 67, 0, 190, 250, 201, 172, 59, 116, 143, 77, 62, 118, 197, 100, 62, 25, 100, 173, 190, 252, 180, 159, 62, 26, 248, 18, 62, 131, 192, 152, 190, 216, 94, 54, 61, 130, 13, 5, 191, 188, 40, 13, 191, 205, 2, 252, 62, 248, 165, 167, 61, 206, 222, 160, 62, 201, 149, 248, 189, 194, 140, 7, 62, 40, 15, 83, 62, 164, 123, 68, 62, 87, 76, 167, 62, 209, 111, 4, 190, 231, 232, 193, 190, 200, 42, 236, 60, 8, 185, 107, 62, 154, 8, 195, 190, 219, 82, 22, 190, 56, 182, 14, 62, 124, 242, 229, 61, 52, 204, 112, 188, 226, 0, 139, 62, 250, 176, 15, 191, 151, 11, 9, 62, 206, 26, 107, 191, 161, 47, 99, 190, 255, 156, 93, 61, 185, 34, 198, 62, 1, 90, 144, 62, 122, 81, 78, 63, 105, 48, 50, 191, 116, 163, 16, 190, 21, 254, 251, 191, 41, 100, 238, 189, 156, 193, 12, 63, 5, 134, 5, 63, 219, 139, 3, 61, 205, 60, 27, 190, 130, 248, 23, 191, 27, 146, 161, 189, 94, 92, 133, 61, 1, 57, 134, 62, 213, 23, 252, 189, 136, 144, 166, 190, 202, 235, 63, 62, 33, 11, 103, 188, 103, 121, 150, 62, 202, 226, 13, 190, 19, 29, 122, 62, 207, 122, 20, 62, 255, 254, 158, 62, 135, 41, 9, 61, 54, 81, 132, 61, 176, 79, 93, 190, 13, 176, 4, 63, 30, 75, 179, 61, 42, 38, 12, 62, 228, 38, 102, 62, 17, 102, 23, 190, 98, 224, 5, 190, 148, 194, 13, 191, 16, 251, 30, 61, 107, 99, 110, 190, 74, 223, 12, 62, 60, 174, 136, 189, 57, 204, 8, 191, 59, 177, 149, 62, 29, 219, 56, 62, 76, 64, 250, 190, 147, 92, 110, 61, 104, 16, 25, 190, 198, 67, 53, 189, 220, 126, 185, 189, 7, 182, 179, 62, 179, 90, 67, 190, 111, 250, 235, 189, 189, 206, 85, 61, 141, 81, 161, 62, 238, 103, 157, 191, 42, 148, 107, 189, 137, 103, 21, 61, 71, 233, 122, 62, 116, 149, 27, 190, 156, 128, 140, 61, 205, 121, 176, 189, 193, 65, 155, 190, 90, 59, 228, 62, 255, 243, 93, 62, 44, 33, 196, 62, 250, 119, 179, 61, 142, 241, 50, 190, 0, 151, 130, 189, 155, 12, 226, 189, 138, 99, 174, 190, 29, 217, 43, 62, 40, 54, 168, 62, 238, 76, 121, 62, 71, 42, 164, 189, 54, 103, 236, 190, 226, 238, 147, 190, 24, 255, 172, 62, 149, 84, 205, 189, 213, 1, 65, 63, 121, 137, 133, 190, 210, 254, 51, 62, 254, 30, 210, 189, 127, 192, 165, 62, 226, 147, 156, 62, 92, 36, 10, 62, 82, 1, 203, 190, 148, 47, 209, 190, 164, 136, 159, 62, 26, 202, 59, 190, 82, 195, 80, 61, 7, 234, 181, 60, 133, 138, 6, 62, 80, 75, 152, 62, 135, 58, 32, 62, 86, 198, 176, 190, 175, 26, 66, 58, 88, 206, 167, 190, 131, 13, 1, 190, 211, 45, 156, 62, 251, 215, 138, 190, 163, 29, 157, 62, 124, 114, 68, 61, 250, 217, 130, 190, 224, 84, 171, 183, 46, 199, 69, 62, 14, 204, 96, 190, 170, 222, 246, 62, 34, 231, 203, 62, 129, 209, 147, 190, 194, 150, 202, 61, 8, 168, 151, 61, 185, 119, 205, 190, 123, 124, 80, 191, 229, 42, 190, 62, 158, 79, 188, 62, 143, 170, 37, 188, 237, 23, 121, 190, 51, 103, 129, 62, 35, 107, 194, 190, 10, 169, 85, 62, 186, 142, 160, 62, 88, 54, 85, 190, 7, 238, 87, 191, 218, 14, 150, 189, 159, 38, 35, 188, 193, 130, 82, 190, 73, 165, 60, 190, 22, 62, 6, 61, 110, 254, 203, 62, 139, 11, 56, 62, 151, 72, 98, 189, 63, 52, 218, 189, 198, 120, 103, 190, 253, 159, 158, 61, 37, 70, 7, 62, 244, 215, 176, 189, 52, 4, 62, 189, 227, 252, 192, 60, 48, 179, 47, 189, 240, 80, 244, 189, 250, 80, 200, 61, 239, 18, 1, 190, 218, 144, 148, 189, 14, 19, 36, 190, 69, 13, 53, 190, 252, 82, 132, 189, 201, 18, 200, 188, 167, 180, 32, 190, 33, 180, 52, 190, 106, 235, 93, 61, 59, 19, 93, 189, 241, 206, 110, 61, 164, 17, 47, 190, 169, 175, 60, 189, 217, 171, 157, 61, 108, 68, 158, 189, 53, 201, 238, 61, 153, 220, 10, 61, 232, 55, 160, 61, 127, 222, 124, 61, 125, 81, 33, 190, 66, 208, 27, 189, 137, 112, 20, 189, 223, 121, 203, 189, 231, 65, 6, 190, 254, 188, 234, 190, 86, 236, 98, 62, 197, 47, 75, 61, 146, 21, 14, 62, 235, 94, 130, 62, 88, 21, 19, 191, 108, 92, 190, 190, 204, 212, 172, 62, 48, 91, 10, 190, 39, 60, 61, 63, 243, 233, 255, 189, 76, 30, 251, 189, 64, 151, 95, 62, 43, 66, 172, 62, 205, 204, 99, 62, 23, 17, 69, 190, 31, 124, 153, 190, 11, 33, 113, 190, 13, 3, 145, 62, 10, 175, 246, 190, 17, 188, 38, 190, 115, 85, 8, 190, 162, 114, 167, 61, 107, 174, 1, 190, 102, 132, 198, 62, 47, 209, 1, 191, 250, 14, 245, 189, 51, 21, 131, 191, 72, 93, 27, 190, 166, 149, 9, 62, 111, 38, 218, 62, 90, 50, 200, 62, 227, 40, 171, 190, 27, 108, 46, 190, 185, 139, 140, 60, 16, 195, 121, 190, 21, 1, 26, 191, 253, 136, 137, 62, 94, 226, 78, 62, 139, 44, 23, 191, 87, 98, 255, 61, 120, 133, 184, 189, 82, 195, 215, 188, 245, 196, 16, 189, 61, 101, 188, 62, 201, 128, 185, 190, 251, 75, 107, 61, 12, 203, 139, 60, 191, 116, 113, 61, 135, 131, 144, 191, 79, 213, 103, 60, 94, 49, 25, 190, 221, 145, 44, 61, 229, 39, 145, 61, 100, 162, 253, 60, 116, 99, 253, 61, 52, 33, 206, 188, 51, 203, 57, 62, 145, 139, 106, 62, 122, 92, 146, 61, 3, 187, 130, 62, 37, 64, 65, 62, 181, 193, 80, 189, 121, 144, 168, 61, 142, 247, 108, 61, 207, 213, 132, 59, 239, 74, 162, 190, 181, 22, 216, 190, 186, 46, 143, 62, 28, 162, 131, 191, 164, 33, 127, 191, 73, 78, 198, 62, 250, 101, 9, 190, 73, 73, 31, 62, 42, 139, 8, 61, 241, 197, 216, 61, 194, 155, 195, 59, 60, 159, 96, 62, 224, 57, 216, 62, 7, 229, 30, 189, 159, 221, 165, 190, 152, 68, 78, 188, 251, 12, 244, 61, 178, 206, 68, 191, 10, 59, 154, 189, 33, 92, 97, 62, 67, 37, 130, 62, 255, 93, 8, 61, 7, 60, 55, 189, 151, 197, 139, 189, 186, 236, 160, 61, 191, 240, 192, 189, 105, 23, 166, 190, 101, 166, 223, 189, 5, 41, 90, 62, 52, 239, 189, 62, 183, 29, 102, 62, 91, 191, 107, 62, 80, 49, 172, 62, 133, 173, 164, 189, 29, 71, 201, 190, 144, 248, 74, 188, 103, 63, 252, 61, 206, 204, 167, 62, 108, 246, 71, 188, 97, 158, 60, 190, 129, 101, 3, 190, 174, 179, 117, 62, 152, 46, 115, 62, 133, 159, 151, 190, 215, 105, 172, 62, 60, 162, 213, 61, 29, 94, 59, 62, 106, 199, 116, 190, 69, 4, 101, 62, 140, 96, 230, 61, 203, 87, 34, 191, 244, 115, 69, 190, 67, 54, 51, 62, 199, 239, 100, 63, 118, 42, 201, 190, 227, 8, 171, 62, 54, 253, 187, 190, 89, 182, 217, 62, 171, 225, 13, 190, 67, 23, 244, 62, 28, 242, 84, 60, 130, 139, 143, 62, 155, 145, 81, 56, 112, 223, 7, 62, 189, 77, 251, 189, 87, 89, 107, 189, 215, 252, 21, 190, 223, 148, 2, 61, 252, 185, 51, 190, 33, 175, 46, 190, 175, 10, 16, 190, 143, 22, 45, 61, 179, 38, 123, 189, 152, 174, 136, 61, 191, 122, 13, 190, 203, 59, 194, 60, 225, 65, 43, 61, 66, 60, 24, 190, 46, 125, 185, 189, 235, 29, 52, 190, 20, 63, 15, 62, 218, 146, 113, 188, 83, 29, 248, 60, 251, 8, 156, 189, 196, 40, 125, 61, 202, 225, 40, 61, 192, 74, 125, 59, 126, 208, 196, 189, 185, 97, 9, 190, 155, 9, 216, 61, 168, 190, 24, 190, 37, 48, 12, 61, 22, 28, 240, 186, 251, 179, 240, 188, 30, 101, 106, 190, 222, 88, 167, 190, 232, 53, 15, 190, 228, 119, 147, 61, 101, 252, 123, 62, 150, 43, 53, 190, 234, 5, 138, 61, 78, 143, 21, 63, 0, 19, 129, 61, 227, 3, 244, 189, 153, 207, 210, 60, 194, 156, 112, 189, 157, 153, 78, 61, 248, 187, 144, 62, 33, 20, 150, 190, 123, 224, 27, 62, 175, 191, 0, 191, 242, 119, 22, 61, 174, 174, 199, 62, 168, 243, 241, 190, 242, 128, 17, 190, 104, 59, 27, 190, 208, 119, 95, 62, 70, 175, 206, 61, 96, 64, 70, 62, 3, 119, 73, 191, 0, 239, 5, 189, 164, 248, 14, 191, 15, 101, 149, 61, 22, 119, 146, 60, 211, 160, 163, 62, 78, 174, 155, 189, 79, 242, 233, 189, 52, 142, 218, 189, 212, 78, 136, 189, 166, 3, 38, 62, 253, 237, 167, 189, 211, 122, 185, 189, 72, 222, 21, 189, 243, 3, 136, 61, 166, 2, 70, 61, 191, 112, 204, 60, 51, 190, 35, 190, 145, 172, 136, 188, 244, 215, 44, 189, 0, 99, 28, 61, 12, 246, 220, 189, 164, 247, 44, 61, 41, 196, 122, 189, 226, 145, 104, 189, 140, 237, 140, 189, 116, 139, 27, 190, 158, 132, 103, 61, 141, 217, 165, 189, 131, 213, 9, 190, 122, 67, 47, 188, 206, 22, 5, 190, 252, 6, 40, 60, 7, 249, 61, 190, 55, 61, 138, 188, 93, 80, 218, 189, 91, 112, 67, 61, 8, 112, 13, 62, 92, 14, 140, 189, 216, 158, 14, 190, 218, 65, 197, 189, 57, 176, 161, 62, 168, 143, 49, 191, 7, 103, 203, 188, 252, 208, 183, 189, 114, 141, 43, 190, 147, 156, 231, 62, 71, 121, 190, 189, 247, 185, 141, 61, 195, 144, 64, 189, 49, 139, 57, 62, 133, 13, 177, 60, 149, 141, 238, 62, 1, 158, 27, 188, 57, 79, 125, 62, 144, 3, 153, 61, 220, 112, 33, 62, 40, 157, 122, 61, 8, 213, 29, 190, 173, 196, 130, 190, 125, 29, 223, 61, 160, 162, 247, 61, 172, 29, 36, 61, 211, 14, 96, 61, 94, 132, 94, 189, 73, 83, 175, 61, 239, 58, 223, 190, 92, 87, 42, 61, 176, 5, 208, 61, 190, 166, 225, 62, 29, 187, 72, 189, 114, 17, 50, 62, 93, 17, 25, 61, 24, 183, 239, 189, 65, 252, 98, 190, 250, 223, 248, 61, 77, 254, 166, 189, 16, 232, 103, 190, 79, 179, 140, 189, 114, 40, 152, 189, 161, 205, 46, 183, 159, 85, 42, 60, 51, 208, 39, 190, 32, 187, 177, 189, 103, 143, 222, 188, 168, 41, 170, 187, 3, 242, 247, 189, 252, 187, 209, 61, 37, 7, 158, 61, 79, 116, 237, 61, 45, 217, 120, 190, 143, 47, 217, 61, 152, 236, 206, 61, 146, 60, 57, 61, 101, 111, 29, 190, 195, 191, 148, 189, 134, 83, 101, 187, 101, 204, 28, 190, 95, 213, 129, 190, 65, 64, 62, 190, 221, 231, 152, 189, 220, 160, 132, 61, 46, 96, 246, 189, 11, 161, 56, 62, 168, 135, 105, 190, 242, 225, 19, 62, 165, 187, 34, 190, 152, 174, 172, 190, 50, 122, 199, 62, 33, 216, 132, 62, 235, 235, 111, 190, 156, 253, 252, 189, 202, 107, 14, 191, 229, 199, 182, 61, 40, 97, 217, 189, 242, 0, 141, 62, 216, 19, 241, 190, 203, 232, 1, 190, 5, 242, 155, 189, 174, 211, 184, 62, 59, 186, 75, 191, 161, 71, 255, 189, 148, 46, 178, 188, 35, 105, 90, 62, 76, 83, 210, 189, 74, 100, 121, 62, 171, 134, 141, 61, 114, 189, 173, 190, 198, 66, 159, 62, 89, 120, 52, 62, 4, 4, 161, 62, 245, 237, 221, 61, 76, 234, 154, 190, 3, 236, 47, 189, 187, 223, 202, 189, 214, 111, 139, 189, 82, 21, 47, 190, 9, 173, 236, 189, 183, 215, 75, 189, 206, 81, 0, 62, 188, 97, 246, 189, 186, 162, 173, 188, 33, 191, 230, 61, 29, 222, 233, 61, 171, 170, 32, 62, 150, 243, 4, 190, 234, 196, 255, 60, 102, 53, 29, 62, 97, 1, 141, 61, 58, 199, 249, 60, 149, 214, 48, 190, 80, 123, 74, 190, 179, 165, 21, 190, 2, 160, 79, 60, 145, 111, 210, 189, 191, 75, 108, 61, 232, 230, 1, 62, 182, 93, 64, 190, 195, 148, 197, 57, 208, 11, 246, 188, 115, 242, 215, 60, 20, 105, 139, 189, 250, 87, 227, 61, 122, 218, 181, 187, 102, 0, 172, 189, 4, 58, 55, 190, 204, 181, 25, 61, 109, 204, 132, 63, 11, 66, 131, 191, 31, 214, 74, 191, 138, 252, 219, 191, 143, 64, 123, 62, 186, 176, 169, 191, 101, 76, 81, 191, 52, 144, 6, 188, 83, 46, 6, 190, 87, 176, 35, 191, 138, 93, 159, 61, 179, 33, 217, 62, 103, 150, 143, 189, 19, 126, 200, 186, 203, 115, 242, 61, 232, 80, 136, 62, 14, 57, 35, 62, 7, 138, 103, 62, 103, 13, 6, 191, 89, 176, 166, 62, 75, 147, 103, 62, 189, 214, 186, 62, 76, 255, 1, 62, 223, 129, 126, 190, 228, 100, 122, 189, 238, 1, 18, 63, 123, 131, 207, 60, 160, 196, 60, 61, 148, 169, 4, 192, 247, 137, 236, 190, 16, 122, 87, 62, 29, 78, 244, 189, 249, 163, 0, 191, 225, 23, 51, 190, 41, 81, 38, 190, 155, 34, 32, 188, 122, 4, 18, 191, 89, 181, 8, 189, 33, 88, 91, 188, 210, 73, 242, 61, 233, 208, 35, 62, 30, 44, 173, 189, 20, 90, 160, 189, 201, 166, 20, 63, 232, 76, 40, 190, 195, 254, 206, 191, 9, 157, 240, 60, 186, 204, 154, 62, 245, 31, 22, 191, 17, 22, 54, 190, 225, 194, 146, 61, 114, 171, 182, 190, 215, 243, 2, 190, 240, 51, 1, 63, 140, 187, 10, 63, 206, 113, 150, 61, 32, 29, 232, 190, 61, 185, 36, 191, 46, 160, 31, 62, 140, 185, 64, 191, 102, 133, 190, 62, 128, 173, 246, 186, 201, 191, 0, 191, 227, 154, 180, 189, 217, 138, 148, 190, 123, 220, 226, 189, 230, 70, 39, 62, 168, 22, 10, 190, 42, 224, 13, 62, 158, 70, 10, 191, 81, 211, 40, 191, 242, 21, 237, 61, 20, 37, 154, 61, 126, 126, 164, 62, 218, 252, 74, 191, 98, 86, 205, 61, 251, 26, 193, 190, 209, 22, 177, 188, 121, 157, 248, 61, 154, 215, 33, 189, 60, 190, 200, 189, 214, 64, 85, 191, 241, 40, 156, 61, 205, 147, 103, 190, 248, 163, 73, 190, 119, 143, 18, 61, 13, 106, 210, 62, 105, 228, 120, 62, 12, 254, 183, 190, 13, 228, 109, 187, 31, 224, 42, 190, 212, 110, 93, 191, 67, 177, 139, 60, 71, 67, 129, 62, 221, 68, 14, 62, 12, 60, 37, 62, 91, 158, 20, 190, 54, 61, 255, 189, 193, 8, 44, 62, 157, 20, 0, 190, 207, 133, 227, 60, 4, 136, 176, 189, 225, 128, 234, 60, 137, 105, 145, 189, 103, 130, 249, 61, 29, 202, 47, 190, 35, 217, 176, 61, 98, 177, 4, 190, 230, 87, 9, 60, 132, 30, 16, 62, 174, 130, 164, 189, 128, 147, 5, 190, 139, 161, 49, 190, 128, 234, 2, 189, 214, 60, 45, 190, 237, 116, 236, 61, 100, 49, 43, 190, 2, 58, 227, 61, 212, 136, 33, 190, 162, 184, 158, 60, 64, 236, 118, 189, 69, 160, 28, 190, 201, 40, 217, 188, 1, 86, 42, 190, 62, 186, 31, 62, 129, 201, 189, 189, 87, 225, 107, 189, 250, 48, 43, 190};
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
                alignas(float) const unsigned char memory[] = {55, 134, 67, 62, 48, 213, 244, 189, 191, 210, 176, 188, 244, 217, 127, 62, 135, 190, 131, 62, 172, 210, 206, 189, 137, 42, 183, 62, 11, 89, 10, 188, 29, 241, 194, 62, 140, 78, 168, 61, 149, 92, 167, 188, 178, 111, 182, 62, 49, 203, 25, 62, 228, 15, 105, 62, 177, 11, 28, 190, 157, 91, 109, 190, 224, 35, 134, 189, 109, 21, 60, 62, 0, 241, 13, 62, 206, 188, 71, 61, 216, 249, 18, 61, 20, 252, 5, 190, 118, 217, 68, 62, 98, 44, 224, 61, 5, 110, 123, 62, 84, 19, 9, 190, 148, 229, 65, 62, 229, 5, 37, 188, 20, 195, 246, 61, 66, 199, 81, 62, 30, 48, 101, 62, 136, 14, 200, 60};
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
                alignas(float) const unsigned char memory[] = {149, 213, 72, 191, 204, 215, 139, 189, 100, 73, 50, 62, 166, 166, 191, 62, 231, 64, 247, 190, 220, 46, 129, 189, 210, 192, 51, 62, 24, 74, 238, 58, 48, 130, 251, 191, 216, 143, 173, 61, 163, 81, 19, 61, 245, 31, 237, 62, 63, 43, 31, 191, 94, 99, 144, 190, 84, 208, 10, 63, 107, 149, 42, 63, 73, 250, 140, 60, 225, 111, 52, 63, 232, 39, 237, 189, 239, 58, 27, 63, 232, 224, 165, 190, 199, 237, 40, 62, 180, 136, 126, 62, 22, 52, 229, 60, 166, 112, 91, 62, 250, 226, 222, 188, 103, 175, 247, 190, 178, 160, 52, 187, 253, 159, 137, 191, 137, 134, 131, 63, 253, 60, 73, 63, 86, 155, 126, 61, 77, 81, 157, 189, 103, 128, 246, 61, 237, 112, 136, 60, 141, 58, 79, 190, 76, 14, 78, 190, 226, 14, 116, 189, 104, 251, 139, 190, 135, 94, 193, 61, 122, 22, 128, 190, 31, 58, 59, 189, 17, 182, 10, 190, 120, 165, 75, 187, 215, 218, 0, 191, 249, 230, 57, 190, 174, 106, 47, 62, 166, 248, 69, 62, 219, 42, 195, 61, 165, 116, 150, 62, 36, 140, 217, 190, 105, 116, 160, 61, 226, 110, 106, 189, 68, 75, 86, 61, 214, 230, 233, 189, 150, 92, 27, 62, 37, 78, 235, 190, 36, 1, 188, 61, 66, 197, 19, 189, 224, 173, 232, 188, 145, 205, 163, 61, 67, 103, 91, 62, 252, 157, 185, 190, 159, 99, 93, 189};
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
                alignas(float) const unsigned char memory[] = {221, 173, 145, 59, 30, 174, 163, 190};
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
    alignas(float) const unsigned char memory[] = {205, 224, 165, 62, 176, 30, 51, 63, 85, 15, 155, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {61, 192, 112, 191, 52, 202, 192, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0031/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}