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
                alignas(float) const unsigned char memory[] = {107, 0, 220, 62, 183, 95, 129, 63, 116, 236, 49, 62, 79, 212, 120, 62, 58, 150, 189, 190, 144, 213, 7, 63, 133, 42, 168, 61, 154, 91, 218, 62, 136, 39, 194, 190, 69, 179, 98, 190, 157, 253, 168, 191, 70, 100, 220, 189, 49, 161, 23, 63, 59, 226, 106, 191, 106, 1, 118, 190, 255, 46, 231, 190, 48, 29, 27, 63, 113, 232, 35, 191, 247, 95, 156, 191, 28, 165, 240, 190, 65, 27, 102, 190, 110, 168, 204, 62, 169, 95, 145, 190, 190, 159, 130, 190, 159, 194, 88, 62, 30, 94, 3, 63, 201, 24, 24, 191, 110, 164, 182, 189, 77, 112, 142, 191, 137, 104, 182, 62, 225, 137, 155, 190, 237, 113, 0, 63, 66, 126, 211, 189, 41, 158, 95, 63, 85, 252, 26, 191, 52, 253, 32, 191, 52, 182, 131, 190, 101, 6, 117, 63, 159, 110, 69, 190, 141, 2, 54, 191, 46, 74, 159, 189, 113, 52, 21, 63, 26, 236, 201, 190, 25, 246, 78, 191, 140, 136, 141, 62, 221, 65, 182, 62, 65, 231, 162, 191, 125, 102, 170, 187, 226, 37, 15, 62, 188, 129, 27, 63, 211, 177, 13, 63, 241, 135, 127, 191, 87, 3, 183, 62, 135, 197, 119, 189, 221, 237, 68, 63, 211, 214, 25, 191, 37, 217, 10, 191, 213, 24, 247, 62, 221, 80, 49, 191, 78, 46, 241, 190, 84, 88, 154, 62, 104, 241, 213, 62, 141, 198, 144, 190, 254, 138, 23, 63, 223, 126, 203, 63, 234, 173, 203, 62, 113, 127, 106, 190, 146, 125, 112, 191, 119, 183, 3, 190, 18, 79, 178, 62, 135, 229, 250, 190, 32, 58, 213, 190, 162, 67, 79, 63, 12, 64, 194, 189, 9, 184, 183, 189, 244, 107, 212, 61, 251, 155, 131, 190, 146, 114, 38, 63, 211, 232, 170, 190, 65, 89, 129, 191, 61, 17, 69, 189, 111, 12, 231, 190, 197, 90, 161, 62, 85, 44, 108, 191, 233, 138, 53, 62, 191, 121, 91, 63, 118, 231, 245, 62, 95, 241, 13, 191, 216, 185, 217, 62, 105, 61, 71, 191, 212, 184, 21, 191, 230, 54, 42, 191, 29, 146, 99, 61, 11, 227, 145, 190, 2, 177, 18, 63, 198, 169, 105, 63};
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
                alignas(float) const unsigned char memory[] = {247, 103, 7, 191, 42, 60, 61, 62, 177, 232, 70, 62, 14, 68, 133, 62, 29, 89, 237, 188, 214, 172, 46, 190, 142, 198, 163, 61, 151, 176, 143, 189, 202, 211, 190, 62, 188, 231, 153, 61, 33, 146, 135, 62, 11, 81, 122, 61, 243, 105, 54, 63, 89, 158, 8, 62, 101, 84, 69, 190, 4, 122, 3, 63, 207, 104, 24, 63, 198, 76, 152, 190, 27, 79, 234, 190, 247, 186, 143, 189, 213, 14, 212, 62, 67, 134, 87, 61, 185, 189, 251, 62, 191, 220, 192, 189, 99, 121, 38, 190, 47, 234, 25, 191, 56, 226, 0, 61, 253, 19, 149, 61, 36, 79, 119, 62, 170, 56, 223, 190, 234, 207, 22, 60, 19, 106, 144, 188};
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
                alignas(float) const unsigned char memory[] = {216, 164, 121, 60, 42, 39, 30, 190, 48, 180, 83, 60, 187, 29, 76, 190, 5, 182, 127, 61, 151, 22, 32, 190, 84, 144, 248, 61, 108, 130, 14, 188, 195, 156, 194, 190, 122, 64, 253, 189, 12, 230, 138, 61, 78, 197, 36, 190, 3, 45, 95, 62, 99, 240, 209, 61, 91, 178, 171, 190, 139, 131, 88, 190, 186, 21, 255, 61, 48, 215, 128, 189, 241, 124, 111, 61, 4, 165, 35, 62, 26, 72, 152, 189, 117, 172, 239, 189, 156, 44, 170, 189, 187, 55, 43, 62, 59, 232, 183, 190, 48, 90, 98, 190, 244, 121, 117, 60, 110, 171, 189, 190, 84, 54, 45, 62, 55, 50, 60, 190, 238, 249, 23, 190, 120, 71, 7, 61, 154, 251, 214, 60, 13, 70, 0, 62, 199, 240, 49, 62, 200, 43, 56, 62, 90, 140, 81, 62, 29, 210, 43, 190, 164, 144, 7, 190, 118, 47, 181, 62, 137, 59, 28, 61, 204, 142, 241, 190, 152, 0, 147, 189, 42, 222, 92, 62, 161, 127, 10, 62, 177, 24, 231, 61, 58, 21, 82, 190, 187, 70, 140, 62, 247, 111, 18, 62, 36, 85, 36, 190, 236, 234, 212, 189, 165, 39, 139, 62, 41, 171, 94, 62, 33, 234, 206, 189, 49, 201, 146, 62, 77, 65, 157, 61, 113, 25, 37, 189, 178, 139, 237, 189, 0, 205, 132, 62, 227, 202, 170, 60, 226, 102, 4, 61, 231, 28, 212, 190, 26, 63, 112, 189, 89, 165, 227, 61, 248, 121, 209, 190, 1, 117, 79, 59, 53, 204, 13, 190, 80, 208, 152, 61, 104, 91, 7, 62, 208, 119, 140, 188, 179, 145, 217, 61, 252, 132, 24, 62, 107, 27, 225, 61, 200, 16, 155, 190, 88, 129, 111, 61, 99, 86, 50, 189, 20, 72, 146, 62, 67, 85, 163, 61, 205, 65, 3, 190, 63, 1, 79, 62, 96, 214, 172, 60, 199, 77, 161, 61, 132, 119, 78, 190, 206, 161, 17, 189, 157, 156, 158, 62, 118, 121, 74, 190, 223, 251, 132, 189, 180, 94, 38, 189, 130, 63, 23, 62, 126, 243, 105, 190, 140, 18, 88, 62, 135, 208, 72, 190, 128, 147, 85, 190, 64, 210, 32, 61, 217, 80, 210, 60, 245, 58, 119, 189, 32, 172, 184, 190, 100, 60, 233, 191, 249, 173, 8, 191, 229, 244, 147, 62, 231, 127, 33, 191, 232, 213, 63, 188, 96, 16, 155, 62, 122, 247, 1, 190, 90, 181, 59, 62, 92, 102, 236, 60, 193, 199, 189, 62, 240, 72, 49, 190, 31, 203, 128, 62, 150, 208, 4, 189, 69, 60, 9, 61, 174, 190, 239, 61, 69, 107, 8, 192, 84, 65, 87, 62, 198, 8, 177, 190, 204, 179, 193, 190, 49, 192, 39, 62, 91, 2, 35, 190, 145, 122, 114, 188, 194, 129, 15, 191, 90, 150, 20, 190, 53, 56, 157, 190, 181, 165, 81, 62, 170, 123, 132, 62, 97, 254, 207, 60, 242, 100, 163, 62, 100, 117, 188, 62, 190, 45, 209, 191, 40, 27, 197, 190, 213, 175, 155, 62, 213, 225, 180, 61, 6, 44, 175, 190, 252, 7, 71, 62, 175, 37, 32, 188, 236, 44, 252, 190, 9, 226, 24, 188, 126, 0, 103, 62, 154, 86, 19, 190, 41, 229, 202, 61, 78, 81, 172, 58, 137, 105, 143, 62, 88, 179, 37, 60, 52, 0, 4, 62, 162, 58, 36, 62, 35, 237, 173, 61, 229, 36, 234, 190, 228, 180, 125, 189, 177, 98, 77, 190, 57, 105, 57, 62, 134, 98, 20, 62, 149, 56, 155, 190, 203, 108, 154, 190, 20, 69, 35, 62, 129, 66, 27, 62, 26, 232, 250, 189, 234, 222, 141, 190, 101, 32, 22, 62, 218, 201, 124, 188, 140, 140, 30, 188, 137, 135, 225, 61, 134, 58, 149, 191, 195, 26, 208, 62, 113, 18, 233, 62, 110, 59, 122, 190, 45, 97, 11, 189, 226, 28, 105, 190, 83, 58, 52, 190, 130, 47, 55, 62, 196, 207, 176, 189, 3, 145, 67, 191, 209, 21, 44, 62, 98, 132, 122, 62, 45, 235, 135, 62, 233, 70, 153, 62, 119, 67, 21, 191, 195, 64, 42, 190, 55, 65, 194, 62, 115, 195, 91, 63, 33, 56, 81, 62, 131, 224, 147, 62, 74, 7, 116, 190, 231, 58, 5, 191, 20, 51, 57, 189, 56, 176, 193, 61, 46, 30, 140, 62, 156, 132, 62, 190, 169, 112, 104, 190, 50, 50, 69, 189, 59, 246, 216, 190, 205, 111, 121, 191, 46, 145, 30, 62, 53, 142, 158, 62, 185, 112, 65, 190, 27, 20, 137, 62, 237, 138, 229, 61, 6, 187, 37, 62, 38, 190, 36, 62, 45, 32, 237, 190, 31, 204, 35, 191, 23, 164, 30, 62, 83, 80, 212, 190, 53, 163, 178, 190, 7, 29, 32, 189, 99, 179, 26, 61, 20, 62, 131, 190, 104, 77, 154, 62, 58, 174, 209, 190, 196, 144, 64, 62, 78, 135, 255, 61, 140, 138, 204, 62, 142, 140, 212, 62, 109, 120, 241, 62, 161, 245, 13, 191, 142, 188, 6, 191, 140, 63, 67, 189, 41, 184, 78, 62, 227, 215, 231, 62, 110, 91, 192, 190, 189, 29, 83, 190, 240, 248, 187, 190, 201, 46, 137, 190, 250, 130, 80, 191, 184, 68, 100, 190, 205, 30, 84, 62, 102, 133, 146, 188, 188, 151, 173, 190, 147, 238, 218, 189, 238, 111, 193, 190, 208, 226, 120, 62, 246, 31, 112, 61, 238, 69, 14, 61, 147, 26, 220, 189, 113, 241, 21, 62, 21, 129, 147, 62, 142, 237, 168, 62, 204, 233, 186, 188, 48, 77, 97, 62, 62, 2, 76, 190, 80, 30, 154, 62, 212, 254, 149, 190, 60, 59, 235, 190, 232, 149, 105, 189, 172, 189, 161, 59, 88, 46, 111, 187, 35, 39, 144, 61, 241, 156, 48, 191, 103, 121, 211, 187, 148, 0, 238, 60, 253, 180, 136, 61, 147, 171, 12, 190, 238, 164, 70, 190, 131, 90, 66, 62, 98, 59, 135, 191, 82, 157, 153, 62, 141, 223, 168, 189, 54, 173, 38, 190, 250, 148, 202, 190, 109, 235, 14, 189, 114, 254, 182, 190, 160, 109, 165, 189, 243, 5, 144, 189, 5, 61, 152, 61, 230, 84, 250, 61, 198, 43, 158, 189, 152, 184, 137, 62, 215, 152, 23, 61, 73, 92, 213, 61, 100, 90, 42, 190, 242, 223, 129, 62, 80, 11, 132, 59, 83, 232, 90, 188, 200, 42, 143, 189, 58, 199, 125, 189, 16, 216, 14, 62, 134, 56, 79, 190, 239, 199, 144, 190, 10, 159, 187, 62, 55, 131, 249, 62, 78, 158, 69, 190, 174, 125, 35, 190, 188, 70, 215, 61, 195, 213, 121, 62, 192, 5, 110, 190, 24, 186, 161, 62, 190, 158, 73, 62, 240, 176, 208, 62, 42, 178, 237, 60, 191, 52, 118, 189, 28, 217, 3, 63, 171, 173, 232, 187, 69, 220, 149, 189, 55, 203, 187, 187, 128, 69, 196, 190, 179, 118, 188, 61, 33, 40, 142, 61, 71, 22, 22, 190, 120, 253, 35, 188, 33, 14, 146, 188, 197, 198, 181, 61, 253, 30, 32, 190, 101, 223, 116, 62, 196, 241, 63, 189, 120, 216, 211, 188, 104, 122, 139, 190, 8, 246, 222, 61, 88, 230, 69, 62, 17, 245, 101, 190, 59, 81, 142, 190, 79, 15, 172, 61, 32, 97, 205, 62, 169, 34, 156, 190, 145, 37, 162, 190, 67, 214, 200, 62, 71, 77, 98, 62, 181, 107, 161, 189, 159, 193, 0, 62, 200, 167, 140, 62, 91, 85, 89, 61, 30, 170, 117, 189, 36, 188, 47, 61, 121, 61, 189, 190, 146, 7, 161, 191, 87, 254, 223, 190, 214, 33, 58, 62, 84, 27, 92, 191, 190, 141, 29, 60, 158, 143, 182, 62, 217, 56, 209, 190, 114, 192, 29, 62, 236, 171, 185, 190, 226, 14, 140, 62, 79, 0, 104, 190, 99, 52, 183, 62, 246, 27, 141, 189, 239, 97, 247, 61, 92, 229, 98, 62, 174, 111, 158, 191, 123, 136, 232, 62, 44, 147, 18, 191, 17, 81, 186, 190, 91, 190, 218, 61, 63, 182, 254, 62, 40, 80, 25, 62, 80, 170, 131, 190, 32, 6, 10, 62, 207, 44, 130, 62, 36, 150, 203, 61, 109, 182, 160, 62, 116, 215, 52, 63, 98, 3, 130, 62, 47, 7, 71, 62, 91, 247, 142, 191, 198, 157, 9, 63, 224, 63, 52, 61, 190, 191, 151, 62, 184, 164, 107, 190, 108, 97, 192, 190, 140, 203, 159, 61, 1, 189, 78, 190, 11, 124, 43, 190, 143, 141, 41, 62, 235, 38, 160, 189, 79, 214, 162, 189, 231, 98, 238, 190, 233, 204, 9, 190, 163, 22, 134, 190, 30, 54, 51, 189, 138, 165, 6, 191, 176, 49, 142, 189, 109, 21, 195, 188, 31, 184, 48, 190, 8, 190, 205, 190, 34, 64, 125, 62, 179, 172, 106, 62, 211, 249, 181, 190, 224, 146, 33, 190, 86, 161, 239, 61, 244, 188, 24, 189, 22, 116, 152, 190, 249, 179, 29, 61, 94, 47, 254, 61, 233, 169, 2, 62, 112, 224, 195, 190, 85, 253, 111, 190, 144, 184, 221, 62, 26, 227, 165, 190, 173, 237, 181, 60, 149, 177, 134, 190, 130, 105, 206, 61, 28, 74, 117, 62, 15, 68, 61, 61, 131, 155, 16, 60, 142, 51, 218, 61, 18, 190, 120, 62, 55, 67, 59, 62, 177, 161, 173, 61, 250, 129, 170, 62, 59, 135, 197, 190, 105, 159, 29, 61, 144, 71, 167, 190, 168, 161, 53, 189, 34, 207, 55, 190, 215, 115, 30, 187, 254, 121, 219, 60, 69, 179, 207, 60, 94, 15, 228, 61, 123, 157, 242, 61, 218, 121, 72, 62, 185, 254, 170, 190, 205, 107, 127, 187, 64, 200, 160, 188, 31, 135, 191, 62, 25, 112, 13, 61, 191, 25, 167, 62, 196, 164, 146, 190, 193, 161, 17, 190, 104, 78, 70, 190, 211, 39, 49, 190, 174, 174, 247, 61, 48, 61, 218, 190, 86, 188, 225, 62, 127, 67, 176, 61, 56, 239, 73, 62, 25, 74, 77, 61, 103, 43, 7, 189, 10, 247, 207, 190, 221, 226, 15, 62, 197, 125, 37, 190, 180, 51, 79, 189, 181, 239, 124, 62, 225, 102, 186, 190, 106, 252, 36, 191, 139, 145, 160, 190, 31, 48, 82, 62, 162, 231, 55, 189, 38, 52, 22, 61, 247, 165, 241, 61, 228, 36, 93, 191, 38, 204, 31, 190, 48, 189, 9, 190, 128, 72, 45, 62, 144, 108, 98, 190, 43, 159, 101, 190, 194, 38, 42, 62, 143, 124, 169, 191, 226, 44, 131, 62, 68, 122, 131, 190, 81, 58, 24, 190, 132, 106, 163, 62, 6, 163, 252, 60, 57, 231, 138, 62, 57, 41, 25, 190, 240, 226, 183, 191, 173, 212, 119, 188, 255, 127, 36, 191, 167, 212, 22, 191, 85, 179, 169, 61, 215, 123, 212, 188, 200, 242, 149, 62, 12, 181, 40, 191, 245, 184, 199, 62, 62, 240, 202, 188, 169, 180, 144, 190, 106, 49, 132, 191, 81, 122, 69, 62, 66, 94, 189, 190, 188, 184, 232, 190, 220, 136, 192, 190, 113, 87, 181, 61, 167, 171, 205, 62, 189, 96, 1, 191, 207, 72, 133, 190, 33, 99, 57, 190, 46, 5, 98, 190, 110, 115, 172, 190, 47, 120, 243, 61, 113, 161, 62, 62, 229, 112, 12, 62, 75, 89, 195, 189, 20, 235, 32, 190, 87, 149, 6, 190, 26, 172, 134, 191, 62, 140, 83, 190, 39, 181, 236, 61, 220, 149, 156, 190, 246, 140, 193, 61, 28, 135, 250, 60, 83, 66, 41, 62, 94, 218, 150, 62, 181, 211, 40, 191, 230, 82, 4, 62, 89, 247, 157, 61, 6, 122, 88, 62, 87, 113, 244, 190, 13, 7, 166, 190, 103, 62, 220, 189, 167, 203, 37, 191, 166, 100, 162, 62, 83, 39, 149, 190, 212, 148, 36, 190, 244, 126, 70, 62, 177, 244, 42, 62, 95, 42, 190, 61, 61, 12, 128, 190, 254, 40, 23, 190, 69, 226, 107, 187, 11, 129, 127, 186, 101, 166, 132, 62, 220, 235, 192, 62, 170, 204, 179, 62, 92, 249, 170, 61, 56, 146, 156, 191, 249, 180, 30, 191, 47, 106, 173, 189, 244, 61, 104, 190, 122, 13, 152, 190, 75, 61, 76, 190, 201, 89, 74, 61, 188, 247, 225, 188, 169, 88, 114, 190, 238, 63, 44, 62, 44, 4, 155, 60, 163, 95, 113, 62, 126, 151, 171, 189, 30, 157, 51, 62, 116, 129, 124, 60, 98, 132, 196, 189, 235, 171, 166, 60, 60, 78, 219, 60, 124, 12, 66, 62, 150, 23, 138, 190, 106, 34, 62, 190, 7, 168, 57, 62, 43, 141, 195, 62, 1, 153, 130, 190, 185, 101, 174, 190, 243, 130, 152, 62, 7, 223, 100, 61, 124, 160, 162, 189, 179, 41, 249, 60, 186, 213, 173, 62, 19, 140, 154, 62, 238, 133, 100, 189, 122, 213, 138, 61, 46, 122, 60, 190, 22, 151, 82, 62, 188, 235, 159, 62, 155, 30, 20, 61, 158, 187, 181, 62, 172, 234, 9, 190, 30, 79, 11, 191, 172, 220, 100, 189, 1, 183, 144, 189, 112, 220, 207, 61, 114, 120, 17, 190, 126, 131, 138, 188, 205, 86, 164, 189, 153, 96, 88, 190, 222, 192, 150, 61, 237, 186, 170, 62, 206, 74, 110, 62, 121, 2, 57, 191, 142, 116, 102, 189, 105, 177, 96, 190, 5, 204, 238, 62, 83, 86, 35, 62, 242, 110, 213, 188, 120, 147, 102, 189, 57, 246, 25, 62, 49, 69, 159, 190, 100, 74, 7, 61, 11, 8, 79, 190, 228, 108, 20, 62, 27, 37, 7, 191, 124, 79, 94, 61, 205, 232, 179, 188, 217, 206, 37, 191, 116, 221, 164, 62, 194, 180, 68, 190, 101, 156, 75, 62, 62, 215, 10, 190, 108, 18, 91, 191, 109, 83, 44, 190, 119, 245, 136, 62, 217, 12, 230, 190, 169, 155, 183, 190, 209, 252, 31, 189, 93, 53, 136, 62, 132, 107, 169, 189, 30, 195, 84, 61, 134, 176, 141, 190, 155, 208, 99, 189, 184, 37, 141, 62, 216, 178, 213, 62, 212, 38, 22, 62, 24, 251, 24, 62, 84, 251, 185, 190, 110, 67, 29, 191, 85, 92, 12, 62, 181, 78, 75, 61, 205, 77, 68, 62, 148, 186, 182, 189, 213, 26, 250, 61, 118, 110, 58, 191, 240, 156, 39, 189, 199, 56, 139, 191, 39, 229, 146, 61, 241, 205, 226, 61, 250, 72, 136, 191, 138, 232, 215, 62, 193, 152, 98, 62, 80, 167, 60, 62, 228, 14, 193, 61, 98, 205, 13, 191, 236, 3, 12, 61, 84, 136, 6, 62, 98, 6, 133, 61, 132, 182, 170, 190, 28, 30, 8, 191, 220, 148, 190, 62, 81, 149, 77, 190, 50, 47, 97, 62, 128, 253, 91, 190, 161, 176, 252, 61, 21, 217, 11, 62, 156, 108, 35, 190, 150, 174, 74, 62, 24, 121, 9, 62, 84, 63, 73, 190, 91, 87, 1, 191, 184, 75, 96, 62, 254, 131, 149, 61, 160, 117, 133, 62, 6, 251, 151, 190, 251, 31, 205, 61, 91, 11, 205, 190, 60, 96, 113, 190, 155, 106, 112, 191, 14, 241, 166, 62, 243, 181, 228, 61, 23, 105, 7, 62, 29, 3, 205, 189, 112, 90, 154, 61, 124, 119, 100, 189, 253, 44, 161, 189, 231, 49, 159, 189, 104, 174, 41, 187, 64, 59, 250, 189, 154, 221, 11, 190, 181, 224, 54, 189, 16, 166, 237, 61, 16, 65, 137, 189, 124, 238, 151, 188, 144, 215, 158, 61, 93, 76, 171, 189, 159, 189, 25, 61, 2, 204, 235, 60, 136, 36, 252, 61, 161, 238, 5, 190, 26, 209, 30, 62, 13, 101, 154, 189, 167, 93, 185, 61, 128, 51, 35, 190, 82, 212, 239, 189, 122, 175, 124, 61, 154, 102, 43, 190, 237, 48, 53, 190, 174, 56, 240, 188, 157, 4, 228, 189, 194, 70, 27, 187, 247, 3, 241, 61, 58, 131, 110, 189, 39, 170, 6, 191, 255, 4, 43, 62, 192, 38, 174, 190, 167, 96, 9, 61, 183, 72, 32, 62, 225, 43, 202, 190, 30, 80, 36, 191, 134, 221, 113, 190, 142, 116, 6, 191, 195, 81, 253, 58, 33, 160, 73, 62, 223, 76, 16, 189, 212, 197, 0, 190, 29, 233, 211, 189, 150, 253, 219, 61, 62, 212, 180, 62, 134, 68, 69, 61, 45, 3, 205, 190, 28, 124, 37, 190, 160, 19, 67, 190, 13, 181, 38, 191, 36, 105, 143, 189, 128, 228, 63, 189, 50, 236, 3, 190, 120, 21, 198, 190, 250, 245, 8, 61, 97, 182, 47, 62, 118, 50, 236, 190, 230, 168, 41, 190, 185, 32, 22, 190, 110, 145, 150, 61, 146, 150, 123, 61, 211, 71, 135, 190, 219, 108, 83, 190, 254, 215, 221, 189, 229, 175, 159, 61, 62, 166, 31, 190, 45, 170, 209, 61, 20, 221, 197, 61, 187, 240, 235, 188, 228, 116, 120, 62, 182, 191, 56, 189, 189, 3, 10, 62, 67, 148, 190, 189, 253, 185, 59, 62, 164, 123, 140, 189, 50, 187, 51, 61, 224, 74, 55, 189, 154, 155, 82, 61, 221, 253, 157, 189, 96, 120, 124, 190, 69, 241, 151, 190, 100, 102, 75, 62, 200, 49, 198, 62, 164, 242, 147, 188, 222, 157, 223, 190, 165, 43, 188, 62, 20, 185, 84, 187, 39, 18, 72, 190, 189, 96, 55, 62, 23, 36, 129, 61, 147, 208, 167, 62, 63, 140, 56, 60, 80, 18, 57, 190, 79, 217, 128, 62, 128, 54, 235, 62, 34, 235, 163, 188, 211, 133, 63, 62, 172, 146, 158, 61, 127, 176, 27, 191, 171, 102, 161, 59, 245, 103, 133, 61, 238, 205, 223, 190, 164, 60, 27, 190, 86, 154, 251, 187, 94, 46, 138, 62, 30, 137, 114, 190, 57, 162, 186, 62, 124, 132, 157, 60, 20, 112, 215, 61, 14, 102, 177, 62, 218, 168, 183, 62, 78, 242, 26, 190, 26, 244, 101, 62, 108, 160, 142, 190, 192, 178, 120, 190, 202, 87, 67, 61, 86, 44, 143, 61, 221, 120, 14, 61, 255, 127, 138, 190, 177, 21, 189, 61, 196, 110, 42, 191, 165, 114, 88, 188, 87, 139, 164, 191, 244, 207, 109, 62, 115, 201, 164, 61, 70, 95, 128, 189, 199, 159, 228, 190, 156, 197, 25, 190, 162, 59, 139, 62, 61, 156, 34, 191, 13, 255, 81, 61, 236, 96, 109, 62, 227, 237, 145, 190, 22, 168, 32, 62, 88, 21, 235, 189, 84, 31, 160, 61, 251, 56, 217, 189, 33, 208, 58, 61, 178, 24, 9, 60, 26, 1, 153, 189, 81, 116, 128, 190, 20, 156, 242, 190, 151, 172, 172, 62, 201, 22, 0, 191, 133, 44, 185, 190, 115, 104, 161, 62, 98, 187, 13, 63, 208, 75, 208, 189, 231, 59, 106, 190, 20, 36, 80, 62, 231, 250, 149, 190, 31, 100, 172, 62, 19, 105, 134, 62, 71, 131, 12, 63, 60, 84, 146, 62, 156, 125, 216, 62, 61, 232, 42, 191, 207, 241, 143, 60, 117, 110, 193, 61, 68, 152, 173, 189, 89, 248, 30, 60, 93, 105, 27, 190, 13, 40, 18, 190, 1, 74, 183, 188, 85, 232, 27, 62, 163, 88, 220, 189, 68, 76, 238, 189, 225, 62, 208, 189, 125, 145, 231, 59, 159, 121, 167, 189, 210, 182, 157, 61, 22, 135, 90, 60, 149, 140, 202, 188, 42, 136, 16, 62, 170, 168, 131, 61, 63, 229, 166, 187, 114, 183, 51, 189, 252, 51, 19, 190, 31, 221, 178, 59, 171, 203, 204, 189, 22, 181, 131, 61, 168, 143, 27, 189, 253, 112, 21, 190, 16, 29, 244, 189, 188, 189, 219, 61, 183, 95, 26, 190, 174, 199, 161, 61, 118, 203, 172, 59, 255, 102, 59, 190, 175, 201, 199, 189, 227, 85, 125, 61, 115, 69, 130, 189, 151, 154, 170, 61, 176, 108, 117, 62, 47, 31, 18, 187, 234, 94, 130, 190, 16, 223, 138, 62, 186, 247, 81, 61, 70, 41, 140, 62, 152, 44, 181, 190, 114, 201, 82, 62, 180, 128, 193, 190, 189, 33, 31, 190, 176, 16, 37, 62, 97, 122, 148, 62, 62, 195, 73, 189, 184, 100, 72, 190, 3, 74, 113, 62, 23, 0, 212, 61, 101, 204, 251, 189, 243, 254, 122, 190, 10, 183, 49, 189, 165, 22, 60, 62, 125, 22, 67, 62, 162, 76, 240, 190, 203, 80, 155, 61, 235, 111, 236, 189, 220, 76, 57, 190, 110, 120, 58, 190, 57, 14, 48, 190, 9, 63, 34, 190, 73, 19, 182, 60, 226, 69, 29, 190, 196, 83, 63, 189, 97, 194, 205, 189, 85, 112, 209, 189, 130, 4, 228, 61, 81, 199, 175, 61, 255, 60, 130, 61, 108, 24, 148, 61, 39, 49, 150, 60, 177, 111, 44, 190, 1, 247, 176, 61, 45, 32, 145, 61, 215, 134, 189, 189, 198, 103, 159, 189, 184, 204, 199, 188, 127, 5, 4, 190, 216, 98, 72, 61, 33, 15, 164, 189, 5, 20, 26, 190, 39, 204, 26, 190, 26, 234, 160, 189, 250, 58, 18, 189, 113, 201, 144, 189, 111, 189, 190, 61, 30, 83, 10, 62, 154, 172, 38, 62, 132, 211, 224, 189, 75, 128, 173, 60, 192, 60, 151, 189, 225, 137, 32, 190, 203, 222, 108, 189, 180, 156, 30, 63, 42, 197, 25, 188, 50, 34, 183, 189, 53, 198, 140, 62, 231, 197, 146, 63, 94, 200, 155, 62, 80, 53, 35, 62, 2, 180, 106, 191, 240, 44, 46, 61, 117, 128, 45, 191, 137, 245, 18, 63, 116, 249, 99, 191, 64, 144, 18, 63, 140, 220, 23, 191, 212, 28, 88, 191, 0, 126, 136, 190, 83, 99, 242, 189, 191, 117, 242, 62, 252, 255, 81, 191, 98, 231, 65, 191, 219, 21, 180, 62, 243, 47, 175, 61, 251, 116, 58, 62, 232, 117, 51, 191, 177, 11, 21, 191, 192, 37, 125, 190, 186, 118, 64, 62, 125, 88, 194, 187, 175, 142, 85, 191, 43, 231, 156, 62, 125, 161, 17, 62, 54, 129, 119, 190, 202, 47, 157, 62, 200, 160, 223, 60, 176, 80, 22, 190, 155, 200, 188, 188, 232, 56, 67, 190, 254, 218, 146, 187, 198, 88, 73, 63, 3, 205, 93, 190, 84, 27, 23, 189, 63, 248, 37, 188, 81, 237, 231, 61, 152, 177, 133, 190, 114, 11, 43, 62, 145, 61, 130, 190, 234, 166, 110, 190, 186, 86, 22, 190, 183, 137, 90, 62, 101, 7, 106, 61, 66, 89, 23, 191, 140, 254, 11, 191, 166, 241, 123, 62, 174, 86, 129, 62, 170, 142, 193, 188, 72, 116, 234, 190, 30, 208, 97, 62, 87, 187, 75, 61, 234, 18, 63, 190, 58, 108, 188, 189, 80, 137, 61, 61, 37, 165, 80, 190, 82, 166, 246, 190, 46, 236, 226, 189, 185, 120, 215, 188, 221, 23, 148, 190, 80, 50, 132, 188, 49, 57, 137, 190, 16, 127, 185, 189, 216, 201, 145, 62, 150, 117, 255, 188, 121, 92, 11, 61, 70, 217, 54, 61, 215, 61, 207, 62, 214, 201, 134, 62, 205, 206, 128, 188, 29, 150, 168, 62, 209, 131, 19, 190, 216, 93, 9, 63, 214, 240, 49, 190, 7, 108, 215, 190, 79, 86, 206, 189, 27, 129, 217, 61, 15, 12, 65, 190, 37, 220, 136, 62, 61, 106, 231, 190, 10, 100, 65, 190, 26, 144, 162, 61, 74, 70, 139, 189, 79, 239, 199, 188, 34, 58, 40, 190, 236, 229, 87, 62, 147, 195, 252, 190, 34, 91, 136, 62, 201, 202, 107, 189, 82, 43, 233, 190, 63, 154, 16, 191, 241, 234, 27, 190, 34, 114, 203, 189, 207, 62, 39, 190, 85, 255, 221, 189, 30, 198, 133, 61, 8, 90, 8, 189, 36, 84, 9, 190, 128, 8, 19, 62, 166, 61, 214, 189, 121, 249, 64, 62, 105, 195, 152, 188, 31, 255, 167, 189, 134, 116, 251, 189, 73, 142, 73, 61, 32, 228, 200, 189, 181, 101, 50, 61, 234, 22, 128, 190, 83, 69, 141, 190, 158, 160, 231, 189, 32, 195, 188, 62, 72, 88, 170, 62, 37, 206, 229, 60, 186, 234, 153, 190, 98, 0, 195, 188, 108, 56, 76, 62, 30, 157, 196, 60, 48, 207, 38, 62, 37, 128, 147, 61, 111, 182, 102, 62, 60, 186, 104, 61, 225, 111, 240, 61};
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
                alignas(float) const unsigned char memory[] = {225, 204, 2, 190, 135, 203, 149, 61, 195, 228, 162, 62, 13, 196, 127, 62, 3, 253, 6, 61, 63, 190, 44, 62, 198, 227, 135, 59, 3, 45, 11, 62, 41, 54, 25, 62, 77, 13, 85, 189, 98, 219, 165, 62, 183, 242, 66, 190, 98, 113, 57, 190, 56, 65, 6, 190, 17, 35, 60, 190, 196, 160, 7, 189, 52, 176, 165, 61, 40, 234, 163, 188, 127, 30, 44, 62, 55, 0, 189, 61, 75, 226, 47, 190, 52, 79, 236, 189, 203, 57, 63, 62, 71, 140, 113, 61, 240, 130, 136, 61, 42, 148, 55, 61, 16, 83, 133, 190, 5, 159, 248, 189, 97, 222, 198, 62, 185, 68, 77, 188, 57, 224, 201, 189, 29, 76, 94, 62};
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
                alignas(float) const unsigned char memory[] = {148, 132, 34, 190, 67, 120, 184, 61, 249, 198, 9, 61, 16, 121, 103, 191, 159, 247, 251, 189, 114, 67, 134, 63, 30, 160, 146, 63, 99, 191, 170, 62, 113, 138, 215, 190, 132, 242, 214, 189, 12, 40, 55, 191, 233, 235, 11, 63, 62, 138, 213, 62, 250, 64, 169, 62, 114, 189, 117, 63, 91, 134, 153, 190, 217, 169, 25, 190, 84, 206, 218, 190, 88, 220, 34, 63, 121, 78, 2, 63, 195, 46, 221, 61, 59, 151, 127, 190, 100, 43, 152, 190, 237, 70, 244, 62, 237, 234, 0, 191, 10, 206, 149, 189, 17, 170, 223, 190, 240, 251, 170, 189, 8, 71, 176, 63, 60, 158, 34, 191, 199, 156, 149, 62, 8, 155, 70, 189, 4, 140, 129, 190, 217, 32, 189, 190, 243, 246, 132, 190, 23, 181, 11, 62, 22, 134, 75, 190, 78, 12, 2, 61, 194, 190, 237, 62, 216, 19, 181, 61, 255, 84, 72, 190, 161, 193, 205, 62, 209, 206, 52, 62, 194, 152, 189, 62, 21, 144, 177, 61, 29, 194, 9, 61, 125, 208, 19, 189, 163, 134, 173, 190, 207, 227, 103, 190, 48, 129, 149, 190, 209, 65, 104, 62, 208, 114, 77, 190, 50, 196, 111, 61, 64, 122, 124, 62, 190, 131, 66, 190, 229, 197, 162, 189, 251, 0, 0, 62, 185, 86, 74, 188, 187, 29, 175, 62, 29, 168, 16, 190, 123, 48, 235, 189, 84, 166, 170, 62, 3, 47, 54, 62, 149, 162, 67, 190};
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
                alignas(float) const unsigned char memory[] = {142, 234, 207, 188, 100, 238, 88, 190};
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
    alignas(float) const unsigned char memory[] = {104, 207, 55, 190, 212, 185, 191, 191, 255, 17, 12, 64};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {27, 161, 156, 63, 252, 80, 94, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0094/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}