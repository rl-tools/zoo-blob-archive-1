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
                alignas(float) const unsigned char memory[] = {76, 135, 90, 63, 163, 202, 149, 191, 41, 182, 181, 190, 98, 144, 163, 60, 198, 227, 124, 191, 247, 14, 165, 62, 160, 174, 124, 190, 228, 64, 154, 63, 112, 142, 10, 61, 230, 1, 82, 191, 173, 166, 18, 63, 211, 172, 164, 62, 143, 250, 250, 190, 249, 105, 88, 190, 164, 72, 48, 190, 60, 233, 211, 62, 130, 84, 154, 191, 124, 216, 47, 62, 13, 105, 174, 190, 229, 202, 148, 61, 153, 169, 172, 61, 52, 160, 122, 62, 118, 92, 168, 190, 49, 128, 129, 188, 219, 250, 213, 190, 156, 179, 133, 191, 61, 173, 13, 190, 190, 35, 116, 62, 173, 21, 192, 63, 158, 118, 152, 190, 180, 237, 61, 63, 201, 112, 154, 191, 81, 94, 131, 190, 43, 127, 131, 62, 248, 175, 38, 191, 238, 190, 172, 190, 116, 224, 66, 191, 223, 28, 195, 190, 138, 226, 210, 60, 34, 233, 12, 63, 22, 111, 123, 190, 9, 8, 207, 190, 130, 89, 189, 190, 238, 77, 130, 63, 199, 68, 88, 62, 151, 60, 154, 61, 193, 166, 28, 62, 56, 115, 204, 190, 229, 32, 74, 190, 163, 29, 93, 63, 200, 212, 46, 190, 105, 172, 194, 62, 203, 172, 148, 63, 145, 149, 136, 62, 241, 41, 118, 60, 137, 66, 78, 62, 121, 82, 138, 190, 206, 246, 163, 188, 65, 9, 191, 191, 255, 33, 86, 190, 89, 91, 62, 63, 147, 189, 187, 189, 93, 246, 48, 62, 183, 114, 79, 63, 58, 20, 16, 191, 187, 103, 243, 190, 228, 35, 222, 190, 180, 8, 128, 62, 193, 168, 178, 190, 207, 8, 101, 62, 219, 20, 121, 62, 44, 95, 19, 63, 112, 245, 31, 63, 80, 9, 201, 63, 114, 55, 42, 62, 178, 144, 36, 191, 141, 9, 144, 191, 219, 215, 27, 62, 189, 204, 204, 190, 231, 52, 227, 191, 180, 125, 147, 190, 251, 145, 154, 61, 203, 95, 24, 63, 79, 224, 231, 190, 71, 46, 27, 191, 211, 122, 172, 63, 65, 61, 29, 63, 160, 162, 105, 191, 50, 153, 166, 61, 197, 208, 36, 63, 237, 79, 5, 63, 214, 28, 64, 62, 73, 180, 246, 62, 70, 26, 83, 63, 101, 23, 88, 63, 173, 65, 166, 62};
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
                alignas(float) const unsigned char memory[] = {45, 207, 23, 191, 62, 219, 41, 62, 87, 132, 143, 62, 196, 143, 70, 61, 221, 125, 242, 62, 96, 7, 227, 62, 214, 248, 200, 62, 143, 120, 97, 62, 49, 165, 248, 62, 137, 27, 208, 189, 121, 73, 240, 61, 177, 224, 228, 189, 148, 212, 47, 63, 131, 66, 184, 189, 6, 232, 193, 189, 35, 234, 8, 191, 214, 80, 186, 62, 226, 49, 186, 188, 94, 166, 3, 63, 34, 72, 206, 190, 66, 179, 209, 61, 220, 144, 64, 191, 76, 186, 18, 63, 59, 93, 132, 190, 171, 245, 140, 62, 108, 177, 213, 62, 208, 144, 241, 190, 104, 115, 2, 62, 150, 212, 17, 190, 71, 6, 16, 190, 153, 25, 26, 189, 172, 69, 24, 191};
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
                alignas(float) const unsigned char memory[] = {46, 117, 42, 191, 66, 211, 158, 190, 68, 20, 231, 61, 179, 209, 175, 190, 3, 225, 151, 61, 243, 114, 148, 189, 37, 208, 39, 62, 188, 145, 181, 61, 57, 112, 216, 190, 155, 166, 72, 190, 57, 201, 179, 61, 184, 6, 138, 190, 182, 96, 0, 62, 61, 99, 165, 60, 76, 145, 149, 190, 229, 0, 154, 187, 18, 238, 64, 62, 38, 221, 218, 62, 65, 48, 52, 62, 65, 173, 206, 61, 3, 24, 254, 60, 25, 15, 53, 190, 198, 117, 23, 61, 12, 105, 20, 62, 161, 53, 63, 62, 169, 215, 14, 62, 122, 19, 119, 189, 119, 79, 7, 62, 108, 142, 107, 190, 139, 90, 194, 190, 68, 80, 187, 61, 68, 31, 221, 62, 211, 174, 40, 189, 191, 165, 1, 189, 144, 184, 45, 190, 98, 169, 151, 190, 84, 10, 65, 62, 167, 224, 179, 62, 9, 130, 36, 62, 51, 59, 168, 62, 90, 20, 124, 62, 87, 92, 65, 191, 115, 203, 130, 62, 36, 173, 87, 190, 71, 184, 113, 60, 61, 155, 231, 61, 229, 7, 70, 188, 71, 97, 226, 61, 212, 155, 81, 188, 130, 58, 172, 190, 133, 222, 221, 61, 128, 22, 86, 190, 203, 38, 61, 62, 111, 109, 22, 188, 184, 151, 133, 61, 83, 49, 216, 189, 174, 60, 6, 62, 241, 53, 117, 189, 242, 149, 242, 61, 207, 185, 22, 190, 48, 33, 203, 190, 240, 0, 7, 190, 0, 167, 72, 189, 86, 50, 54, 190, 77, 221, 186, 59, 199, 109, 61, 62, 162, 25, 61, 191, 231, 113, 4, 189, 183, 130, 145, 189, 26, 80, 46, 63, 140, 173, 212, 61, 146, 243, 142, 62, 171, 230, 176, 62, 207, 139, 131, 190, 146, 77, 254, 188, 190, 206, 201, 61, 93, 184, 43, 62, 81, 246, 195, 189, 26, 237, 64, 190, 193, 167, 51, 191, 193, 13, 253, 190, 144, 139, 6, 191, 153, 36, 169, 190, 55, 87, 61, 61, 63, 197, 228, 60, 197, 249, 153, 189, 19, 78, 161, 60, 188, 229, 23, 191, 191, 241, 250, 190, 175, 17, 67, 62, 94, 192, 39, 190, 56, 103, 129, 190, 46, 11, 51, 191, 47, 45, 69, 191, 125, 202, 127, 190, 134, 248, 233, 189, 196, 1, 219, 61, 11, 150, 157, 61, 157, 73, 158, 190, 6, 8, 32, 190, 63, 95, 224, 189, 77, 47, 190, 62, 47, 27, 144, 189, 18, 21, 140, 62, 58, 21, 140, 62, 60, 212, 32, 191, 66, 152, 116, 62, 240, 114, 237, 187, 81, 62, 184, 189, 167, 177, 78, 189, 132, 208, 49, 190, 27, 188, 236, 61, 155, 211, 154, 187, 224, 190, 254, 190, 110, 53, 76, 62, 110, 242, 163, 191, 125, 158, 195, 60, 144, 130, 135, 190, 223, 99, 108, 190, 103, 243, 144, 190, 12, 173, 131, 190, 160, 131, 116, 190, 80, 159, 136, 191, 230, 114, 9, 62, 26, 200, 12, 189, 122, 208, 183, 60, 58, 44, 58, 189, 51, 154, 35, 191, 1, 110, 129, 189, 97, 136, 139, 187, 84, 134, 187, 62, 248, 183, 94, 188, 165, 72, 178, 189, 237, 224, 13, 62, 195, 193, 92, 62, 143, 66, 43, 62, 183, 136, 187, 61, 171, 68, 162, 189, 100, 186, 87, 62, 154, 24, 14, 60, 54, 201, 1, 62, 6, 109, 67, 62, 174, 81, 182, 62, 141, 197, 129, 189, 119, 201, 108, 62, 45, 146, 168, 62, 51, 114, 107, 62, 242, 78, 40, 190, 68, 153, 136, 189, 75, 189, 122, 189, 78, 9, 224, 61, 168, 170, 14, 188, 180, 209, 167, 62, 72, 174, 210, 61, 116, 158, 186, 61, 75, 13, 27, 190, 159, 157, 202, 188, 106, 112, 90, 61, 243, 23, 8, 190, 49, 147, 173, 61, 185, 219, 15, 191, 146, 236, 8, 62, 113, 14, 32, 62, 41, 19, 44, 61, 173, 127, 33, 62, 18, 27, 98, 62, 32, 127, 159, 62, 21, 199, 186, 61, 131, 113, 209, 61, 44, 171, 140, 188, 167, 241, 138, 189, 5, 88, 122, 190, 200, 130, 146, 62, 163, 65, 6, 190, 32, 54, 122, 190, 176, 20, 153, 189, 65, 61, 197, 60, 192, 171, 99, 61, 61, 96, 57, 62, 141, 11, 147, 189, 22, 131, 137, 61, 104, 165, 17, 188, 133, 116, 79, 190, 100, 60, 15, 190, 27, 130, 108, 61, 102, 89, 21, 62, 80, 213, 75, 61, 156, 158, 244, 61, 77, 182, 101, 190, 188, 97, 178, 189, 68, 226, 121, 62, 95, 145, 154, 61, 52, 206, 135, 191, 43, 5, 162, 60, 57, 173, 138, 191, 93, 91, 115, 190, 171, 116, 62, 62, 95, 28, 65, 62, 46, 17, 147, 189, 130, 133, 169, 61, 14, 101, 157, 62, 171, 95, 34, 62, 208, 106, 143, 62, 103, 75, 45, 191, 48, 151, 78, 62, 156, 141, 31, 191, 39, 173, 100, 190, 243, 18, 192, 190, 46, 114, 62, 191, 246, 144, 23, 191, 99, 232, 1, 190, 177, 250, 113, 61, 71, 163, 224, 60, 210, 112, 79, 191, 201, 128, 6, 188, 222, 79, 22, 189, 168, 76, 12, 189, 11, 252, 130, 62, 151, 152, 117, 62, 202, 236, 25, 191, 48, 130, 26, 191, 67, 94, 217, 189, 46, 2, 135, 189, 60, 147, 137, 190, 103, 69, 46, 191, 132, 127, 216, 190, 159, 214, 91, 62, 144, 36, 152, 190, 106, 214, 136, 62, 99, 225, 150, 190, 124, 14, 129, 62, 208, 123, 216, 61, 34, 156, 193, 61, 112, 54, 115, 62, 125, 194, 209, 189, 54, 178, 103, 190, 64, 43, 178, 62, 145, 164, 180, 190, 16, 194, 215, 190, 123, 20, 159, 189, 143, 24, 96, 62, 49, 164, 135, 62, 255, 111, 7, 190, 36, 62, 12, 62, 199, 241, 142, 62, 49, 72, 211, 189, 77, 199, 86, 62, 200, 220, 205, 62, 73, 65, 89, 62, 112, 95, 163, 189, 128, 31, 33, 62, 141, 138, 49, 61, 229, 180, 16, 191, 172, 190, 147, 191, 56, 127, 44, 62, 191, 67, 199, 62, 149, 197, 70, 190, 101, 219, 25, 190, 148, 60, 13, 61, 70, 95, 97, 188, 84, 2, 195, 61, 133, 122, 91, 61, 136, 206, 39, 188, 142, 176, 40, 61, 140, 239, 135, 189, 126, 142, 242, 60, 19, 70, 4, 62, 154, 122, 131, 61, 13, 216, 16, 62, 111, 253, 17, 61, 101, 191, 167, 60, 225, 173, 160, 61, 178, 129, 251, 189, 27, 51, 30, 190, 83, 14, 62, 61, 99, 158, 204, 60, 206, 7, 21, 189, 74, 135, 125, 188, 113, 194, 149, 189, 198, 148, 130, 187, 94, 222, 16, 190, 233, 234, 53, 190, 143, 207, 36, 190, 57, 58, 173, 189, 23, 28, 104, 189, 111, 32, 217, 189, 96, 25, 42, 61, 34, 156, 7, 190, 215, 193, 44, 191, 244, 177, 5, 62, 88, 104, 104, 62, 233, 148, 142, 190, 118, 235, 101, 62, 190, 163, 119, 189, 46, 104, 70, 61, 42, 248, 96, 62, 78, 150, 101, 62, 65, 113, 50, 62, 147, 179, 113, 189, 37, 138, 179, 189, 217, 57, 93, 62, 16, 199, 194, 189, 251, 47, 117, 191, 185, 247, 133, 190, 255, 73, 56, 62, 65, 247, 135, 62, 2, 187, 88, 61, 23, 247, 17, 63, 38, 13, 86, 62, 251, 99, 135, 190, 40, 250, 3, 62, 178, 220, 251, 58, 67, 209, 212, 61, 37, 142, 194, 62, 144, 190, 201, 62, 168, 98, 54, 62, 65, 153, 128, 190, 195, 209, 221, 188, 50, 234, 70, 62, 243, 34, 8, 63, 144, 221, 4, 63, 90, 40, 190, 61, 68, 170, 187, 190, 106, 124, 38, 62, 193, 207, 158, 190, 228, 67, 68, 62, 254, 101, 36, 190, 140, 123, 241, 61, 35, 87, 195, 62, 239, 117, 12, 191, 35, 127, 118, 62, 64, 166, 22, 62, 41, 158, 0, 189, 126, 118, 11, 190, 147, 142, 169, 62, 22, 161, 57, 190, 186, 38, 73, 190, 23, 235, 125, 190, 51, 146, 209, 59, 101, 72, 141, 191, 220, 157, 142, 61, 177, 31, 11, 62, 97, 112, 220, 60, 72, 2, 129, 190, 195, 116, 237, 189, 183, 41, 0, 191, 248, 39, 123, 191, 51, 101, 204, 189, 160, 183, 96, 62, 30, 131, 157, 188, 202, 58, 2, 190, 64, 19, 253, 190, 198, 222, 139, 61, 231, 48, 193, 61, 84, 180, 146, 189, 55, 181, 177, 189, 32, 24, 37, 61, 213, 168, 99, 60, 112, 67, 28, 62, 74, 149, 158, 60, 205, 179, 139, 189, 57, 49, 17, 61, 145, 4, 169, 60, 195, 3, 61, 61, 216, 88, 189, 60, 179, 226, 251, 189, 253, 230, 210, 189, 73, 66, 10, 190, 89, 178, 113, 189, 169, 252, 65, 61, 190, 47, 5, 62, 239, 225, 73, 61, 168, 219, 44, 189, 3, 40, 96, 189, 197, 77, 27, 189, 6, 139, 7, 190, 32, 24, 250, 189, 197, 92, 36, 190, 25, 152, 10, 188, 182, 86, 53, 189, 53, 235, 19, 190, 144, 96, 66, 61, 157, 130, 15, 189, 199, 56, 118, 188, 220, 247, 181, 190, 1, 127, 95, 61, 132, 23, 74, 191, 27, 26, 139, 190, 111, 95, 219, 189, 54, 176, 33, 62, 251, 16, 25, 190, 134, 215, 58, 61, 10, 103, 98, 62, 134, 241, 99, 191, 51, 205, 128, 62, 91, 58, 199, 190, 76, 7, 151, 62, 241, 135, 138, 190, 143, 109, 21, 62, 189, 64, 67, 190, 141, 81, 243, 190, 103, 5, 236, 190, 86, 214, 144, 190, 134, 157, 81, 189, 135, 186, 7, 61, 205, 239, 242, 189, 40, 99, 84, 190, 33, 108, 170, 190, 87, 184, 50, 190, 111, 79, 193, 62, 116, 32, 201, 61, 79, 195, 178, 190, 100, 37, 179, 190, 174, 183, 59, 60, 37, 58, 186, 60, 66, 250, 70, 191, 125, 60, 32, 190, 140, 68, 57, 191, 54, 119, 72, 190, 83, 86, 6, 62, 243, 40, 254, 61, 71, 121, 84, 191, 154, 33, 7, 62, 202, 140, 158, 189, 73, 234, 166, 62, 13, 133, 131, 190, 221, 95, 97, 188, 16, 35, 100, 190, 66, 67, 12, 63, 250, 45, 189, 186, 76, 87, 18, 62, 44, 144, 4, 190, 14, 30, 236, 189, 73, 149, 5, 62, 79, 210, 197, 61, 73, 220, 104, 62, 26, 111, 5, 190, 2, 68, 180, 190, 238, 179, 90, 62, 211, 44, 16, 191, 171, 138, 220, 62, 61, 106, 206, 189, 156, 60, 154, 62, 25, 26, 20, 62, 173, 63, 219, 190, 210, 3, 62, 191, 153, 98, 203, 190, 240, 241, 47, 190, 213, 225, 92, 191, 235, 119, 22, 191, 163, 56, 254, 61, 79, 159, 83, 60, 81, 200, 185, 62, 172, 91, 207, 190, 92, 48, 190, 61, 218, 237, 182, 61, 53, 83, 22, 189, 87, 44, 166, 61, 225, 224, 144, 190, 119, 127, 132, 190, 59, 49, 120, 62, 249, 135, 237, 189, 208, 57, 111, 190, 245, 237, 98, 190, 193, 200, 15, 62, 32, 195, 140, 62, 2, 115, 85, 62, 18, 241, 139, 62, 154, 234, 95, 62, 183, 179, 194, 190, 37, 247, 149, 62, 131, 203, 209, 188, 139, 1, 155, 62, 113, 255, 216, 189, 11, 1, 210, 61, 222, 158, 252, 188, 100, 242, 251, 190, 26, 139, 107, 191, 160, 126, 195, 61, 12, 4, 53, 62, 116, 34, 99, 60, 67, 83, 17, 61, 34, 108, 4, 190, 0, 91, 254, 190, 91, 161, 215, 61, 243, 212, 244, 60, 209, 174, 118, 61, 166, 115, 241, 61, 210, 113, 130, 190, 156, 249, 167, 62, 170, 118, 41, 62, 90, 103, 136, 61, 213, 104, 1, 190, 190, 195, 199, 189, 70, 16, 130, 191, 143, 98, 108, 189, 187, 161, 44, 62, 137, 205, 43, 190, 6, 95, 76, 188, 199, 55, 155, 189, 8, 134, 111, 62, 204, 188, 62, 61, 110, 200, 2, 62, 116, 81, 209, 189, 189, 230, 6, 190, 213, 67, 61, 62, 21, 56, 253, 61, 54, 122, 108, 189, 19, 46, 125, 191, 181, 121, 115, 62, 68, 71, 120, 62, 195, 182, 101, 189, 130, 170, 147, 61, 4, 66, 99, 62, 188, 59, 156, 62, 11, 211, 17, 62, 253, 97, 84, 190, 139, 65, 230, 61, 76, 51, 130, 62, 20, 185, 102, 61, 92, 170, 117, 62, 233, 94, 23, 191, 98, 98, 234, 62, 12, 129, 0, 61, 141, 45, 105, 62, 100, 59, 101, 61, 193, 56, 116, 63, 24, 58, 204, 190, 7, 44, 154, 189, 164, 8, 89, 190, 172, 96, 197, 190, 125, 88, 65, 191, 192, 43, 247, 59, 109, 214, 47, 63, 45, 120, 26, 190, 129, 97, 28, 190, 204, 154, 249, 188, 35, 174, 240, 190, 203, 51, 169, 191, 8, 204, 38, 191, 61, 171, 148, 62, 50, 127, 45, 189, 165, 152, 218, 189, 98, 30, 27, 191, 137, 133, 110, 191, 148, 78, 166, 190, 99, 158, 110, 62, 245, 156, 241, 190, 247, 204, 254, 62, 181, 210, 194, 61, 70, 54, 203, 62, 220, 139, 255, 188, 12, 87, 217, 62, 140, 141, 100, 62, 114, 233, 115, 191, 18, 31, 48, 190, 81, 147, 174, 62, 175, 183, 1, 191, 198, 43, 196, 61, 102, 127, 171, 190, 102, 143, 71, 61, 168, 147, 199, 62, 61, 59, 205, 188, 95, 144, 161, 62, 207, 180, 51, 190, 215, 206, 16, 191, 118, 193, 161, 61, 186, 137, 172, 60, 214, 191, 191, 62, 128, 224, 181, 62, 6, 218, 22, 63, 170, 216, 16, 62, 231, 9, 215, 189, 27, 249, 232, 190, 148, 172, 56, 61, 82, 194, 106, 61, 236, 31, 250, 62, 215, 128, 75, 62, 66, 26, 44, 62, 185, 161, 207, 62, 122, 40, 234, 189, 34, 38, 233, 61, 151, 200, 22, 62, 105, 100, 168, 61, 151, 147, 15, 188, 44, 60, 194, 189, 62, 122, 212, 62, 158, 134, 51, 62, 158, 11, 117, 190, 177, 182, 40, 61, 92, 231, 60, 63, 123, 101, 167, 62, 103, 174, 3, 190, 18, 158, 169, 190, 167, 231, 254, 189, 91, 112, 37, 191, 70, 68, 242, 61, 86, 246, 77, 62, 222, 240, 120, 189, 45, 102, 126, 190, 147, 198, 112, 190, 205, 84, 240, 190, 237, 223, 255, 190, 231, 60, 152, 190, 120, 45, 194, 62, 207, 250, 58, 62, 62, 93, 62, 190, 42, 13, 6, 190, 214, 68, 138, 60, 182, 138, 226, 61, 131, 3, 22, 62, 175, 59, 10, 62, 207, 242, 32, 190, 143, 237, 150, 61, 127, 51, 84, 189, 97, 34, 144, 61, 15, 47, 29, 190, 230, 191, 222, 188, 113, 65, 24, 190, 42, 100, 142, 189, 169, 150, 91, 189, 32, 187, 133, 189, 197, 196, 38, 189, 199, 146, 48, 190, 29, 182, 17, 189, 195, 80, 252, 188, 54, 46, 218, 61, 15, 5, 232, 61, 187, 198, 49, 190, 13, 108, 165, 188, 167, 217, 207, 60, 152, 45, 5, 61, 247, 211, 9, 190, 188, 163, 10, 190, 109, 239, 10, 189, 136, 208, 36, 190, 156, 43, 195, 189, 132, 221, 32, 61, 184, 153, 4, 190, 202, 203, 39, 62, 246, 15, 171, 60, 54, 108, 247, 189, 253, 208, 228, 188, 110, 122, 145, 61, 12, 177, 156, 189, 46, 20, 184, 188, 107, 164, 138, 189, 123, 211, 30, 189, 158, 109, 220, 189, 132, 115, 50, 190, 9, 222, 202, 189, 14, 241, 49, 61, 23, 49, 97, 61, 37, 171, 41, 190, 234, 111, 31, 62, 208, 183, 21, 190, 44, 232, 13, 190, 41, 87, 162, 61, 48, 179, 132, 61, 87, 28, 130, 61, 97, 25, 229, 60, 188, 100, 31, 62, 61, 165, 31, 190, 75, 90, 185, 189, 78, 54, 242, 189, 179, 49, 65, 189, 36, 195, 122, 189, 68, 220, 215, 189, 181, 70, 41, 190, 65, 111, 250, 189, 160, 162, 105, 59, 47, 114, 42, 62, 88, 229, 243, 190, 36, 94, 4, 190, 207, 198, 145, 189, 201, 3, 187, 62, 171, 72, 78, 62, 97, 114, 185, 190, 36, 215, 180, 62, 43, 166, 21, 61, 76, 251, 242, 189, 254, 197, 160, 187, 193, 169, 156, 190, 246, 156, 138, 190, 218, 79, 114, 62, 225, 212, 252, 189, 146, 180, 4, 189, 227, 14, 131, 189, 219, 23, 40, 62, 126, 162, 157, 60, 135, 214, 67, 62, 174, 178, 140, 190, 39, 105, 217, 190, 162, 163, 180, 190, 68, 52, 107, 62, 177, 164, 12, 190, 213, 229, 67, 61, 120, 230, 170, 60, 255, 54, 191, 190, 228, 240, 217, 61, 159, 234, 148, 190, 170, 249, 113, 191, 135, 57, 218, 190, 5, 185, 16, 191, 205, 223, 168, 59, 27, 29, 94, 187, 127, 123, 35, 189, 231, 179, 249, 189, 231, 80, 94, 186, 221, 219, 227, 189, 81, 57, 45, 60, 198, 129, 16, 190, 7, 143, 44, 190, 48, 152, 195, 61, 189, 78, 180, 60, 139, 136, 222, 61, 226, 85, 1, 62, 187, 141, 116, 61, 139, 80, 175, 61, 127, 18, 242, 61, 130, 71, 36, 189, 56, 31, 19, 62, 77, 63, 54, 189, 46, 181, 54, 189, 66, 63, 42, 190, 121, 96, 23, 190, 131, 234, 16, 190, 112, 27, 42, 190, 124, 58, 224, 60, 250, 48, 127, 61, 5, 141, 216, 189, 47, 188, 50, 190, 139, 253, 37, 190, 79, 146, 138, 61, 252, 92, 41, 62, 82, 234, 11, 62, 253, 43, 153, 190, 239, 144, 14, 62, 121, 239, 42, 191, 42, 161, 224, 60, 198, 76, 159, 60, 11, 196, 132, 59, 231, 216, 166, 61, 249, 140, 133, 188, 138, 213, 149, 62, 153, 50, 151, 61, 187, 74, 159, 62, 202, 51, 165, 190, 91, 113, 155, 62, 35, 17, 189, 190, 213, 42, 63, 63, 166, 175, 227, 190, 53, 139, 23, 191, 214, 34, 4, 191, 82, 15, 7, 190, 177, 130, 191, 190, 72, 29, 141, 190, 0, 75, 101, 191, 0, 181, 10, 190, 233, 44, 60, 189, 230, 22, 104, 190, 40, 20, 177, 62, 30, 151, 72, 189, 199, 45, 191, 190, 243, 78, 167, 190, 185, 4, 135, 61, 1, 149, 188, 61, 81, 106, 121, 191, 102, 43, 186, 60, 140, 160, 136, 62, 6, 245, 199, 190, 193, 246, 12, 191, 48, 2, 172, 61, 153, 223, 205, 61, 4, 20, 183, 185, 117, 50, 119, 62, 85, 150, 122, 189, 170, 95, 193, 62, 89, 90, 23, 62, 208, 207, 165, 61, 62, 147, 158, 190, 187, 4, 135, 62, 114, 184, 127, 190, 5, 30, 185, 61, 63, 80, 5, 190, 103, 16, 38, 191, 34, 244, 237, 61, 251, 102, 94, 190, 163, 180, 190, 62, 167, 61, 30, 62, 71, 251, 134, 62, 151, 119, 150, 61, 19, 144, 210, 190, 232, 126, 34, 62, 97, 89, 226, 188, 87, 72, 35, 62, 145, 173, 32, 191, 239, 217, 216, 189, 238, 183, 99, 61, 85, 176, 25, 191, 150, 209, 11, 63, 249, 123, 63, 62, 248, 209, 26, 191, 1, 209, 58, 62, 122, 174, 199, 190, 42, 60, 155, 62, 31, 60, 254, 61, 10, 112, 132, 62, 224, 117, 157, 62, 173, 53, 249, 190, 208, 181, 73, 62, 128, 236, 224, 61, 23, 240, 84, 189, 41, 78, 157, 189, 190, 47, 167, 189, 75, 219, 75, 190, 131, 131, 77, 189, 230, 11, 142, 190, 134, 180, 98, 61, 97, 177, 176, 191, 119, 33, 32, 62, 252, 248, 64, 184, 79, 234, 224, 188, 193, 251, 41, 191, 214, 155, 90, 190, 6, 2, 235, 189, 211, 75, 145, 191, 46, 113, 33, 190, 210, 75, 207, 62, 104, 165, 139, 189, 145, 6, 226, 190, 50, 152, 194, 190, 158, 224, 189, 190, 143, 54, 40, 62, 177, 15, 143, 62, 195, 37, 94, 62, 15, 199, 74, 61, 242, 214, 118, 62, 22, 102, 36, 61, 205, 125, 71, 62, 6, 225, 9, 189, 54, 143, 160, 62, 2, 80, 222, 189, 201, 54, 225, 189, 170, 248, 127, 62, 20, 134, 4, 61, 159, 0, 51, 191, 171, 16, 50, 189, 129, 104, 31, 62, 231, 44, 96, 190, 50, 105, 137, 188, 14, 193, 147, 190, 44, 229, 93, 62, 200, 227, 198, 190, 154, 49, 230, 189, 150, 221, 1, 62, 169, 3, 148, 61, 96, 135, 222, 62, 210, 182, 236, 190, 5, 163, 142, 61, 164, 63, 64, 189, 230, 63, 203, 189, 42, 54, 20, 62, 218, 20, 224, 189, 100, 77, 160, 191, 108, 86, 44, 189, 160, 153, 60, 61, 143, 194, 43, 61, 89, 150, 100, 188, 70, 224, 13, 62, 101, 93, 166, 189, 171, 135, 178, 62, 121, 179, 35, 191, 123, 88, 40, 63, 180, 93, 198, 190, 209, 39, 202, 190, 99, 169, 104, 190, 182, 23, 51, 62, 235, 197, 112, 191, 80, 150, 132, 62, 69, 242, 176, 59, 189, 176, 92, 62, 233, 190, 82, 61, 100, 85, 28, 188, 6, 201, 146, 61, 24, 162, 1, 191, 239, 76, 231, 61, 239, 254, 249, 60, 248, 24, 2, 62, 198, 92, 128, 62, 147, 95, 58, 189, 110, 161, 13, 62, 17, 123, 8, 190, 120, 253, 3, 190, 28, 30, 102, 62, 179, 10, 170, 62, 45, 38, 175, 189, 254, 209, 187, 190, 115, 201, 161, 189, 214, 251, 10, 191, 115, 153, 145, 60, 32, 95, 36, 61, 17, 227, 17, 190, 212, 69, 99, 62, 241, 119, 127, 189, 145, 66, 92, 191, 24, 137, 172, 61, 185, 95, 19, 190, 222, 65, 136, 190, 38, 219, 150, 61, 20, 135, 192, 60, 188, 137, 65, 190, 82, 74, 165, 189, 13, 71, 36, 62, 110, 46, 132, 61, 167, 174, 10, 189, 219, 240, 176, 62, 52, 17, 180, 190, 79, 138, 173, 61, 105, 114, 135, 190, 165, 166, 52, 62, 191, 198, 137, 190, 162, 177, 201, 61, 62, 198, 78, 190, 37, 35, 54, 191, 8, 83, 202, 190, 62, 43, 33, 62, 139, 77, 42, 61, 166, 30, 236, 190, 99, 71, 246, 190, 253, 111, 144, 61, 96, 231, 225, 190, 85, 7, 109, 188, 4, 204, 180, 190, 225, 48, 13, 62, 117, 91, 207, 61, 41, 4, 53, 62, 116, 98, 11, 189, 89, 16, 163, 190, 239, 32, 249, 189, 43, 94, 240, 61, 252, 45, 56, 189, 16, 29, 14, 190, 79, 66, 42, 190, 81, 227, 133, 62, 72, 139, 246, 62, 235, 94, 35, 62, 71, 181, 236, 61, 206, 243, 23, 62, 64, 29, 37, 190, 207, 21, 76, 62, 224, 28, 130, 190, 14, 182, 211, 62, 149, 27, 191, 61, 52, 151, 204, 62, 175, 238, 59, 185, 73, 63, 194, 190, 20, 176, 70, 191, 16, 95, 180, 189, 10, 156, 20, 63, 142, 251, 245, 62, 224, 61, 188, 187, 226, 138, 2, 190, 7, 114, 53, 62, 94, 119, 197, 190, 129, 32, 183, 62, 185, 21, 43, 62, 125, 201, 25, 62, 228, 156, 197, 62, 248, 167, 180, 190, 91, 193, 173, 62, 144, 254, 174, 189, 2, 197, 43, 62, 207, 32, 53, 61, 136, 163, 0, 63, 197, 157, 151, 62, 88, 213, 59, 61, 53, 7, 132, 190, 89, 185, 99, 190, 16, 182, 182, 191, 82, 147, 143, 61, 196, 111, 112, 61, 58, 2, 13, 190, 203, 56, 47, 190, 38, 255, 252, 189, 207, 124, 105, 190, 35, 104, 213, 191, 44, 38, 222, 190, 159, 31, 74, 61, 94, 68, 131, 189, 115, 52, 117, 188, 78, 252, 123, 191, 212, 63, 93, 62, 164, 139, 32, 62, 40, 150, 238, 187, 153, 134, 63, 60, 117, 67, 123, 189, 54, 51, 61, 62, 115, 244, 3, 62, 63, 0, 27, 61, 25, 182, 188, 62, 2, 15, 62, 190, 44, 5, 212, 62, 250, 194, 232, 61, 44, 144, 176, 61, 212, 11, 64, 61, 171, 90, 160, 62, 180, 219, 125, 62, 46, 29, 114, 62, 129, 255, 179, 190, 133, 101, 20, 189, 85, 102, 170, 191, 4, 172, 245, 189, 142, 225, 180, 61, 165, 154, 165, 61, 3, 217, 60, 190, 26, 152, 249, 60, 23, 222, 119, 190, 205, 52, 135, 191, 250, 218, 2, 60, 56, 107, 149, 60, 218, 55, 149, 61, 198, 186, 145, 61, 143, 142, 8, 191};
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
                alignas(float) const unsigned char memory[] = {211, 227, 150, 187, 42, 12, 243, 61, 59, 200, 244, 61, 117, 102, 106, 62, 172, 240, 208, 62, 248, 117, 159, 62, 172, 232, 92, 188, 182, 144, 68, 62, 0, 234, 63, 190, 155, 131, 170, 189, 120, 123, 188, 61, 10, 208, 192, 189, 105, 61, 72, 190, 177, 53, 189, 187, 182, 174, 86, 62, 238, 149, 178, 189, 154, 73, 123, 62, 10, 125, 117, 62, 120, 219, 228, 188, 182, 91, 78, 61, 182, 166, 11, 62, 48, 250, 183, 60, 27, 65, 52, 190, 28, 162, 48, 62, 63, 185, 14, 189, 9, 154, 132, 61, 252, 133, 180, 61, 13, 147, 4, 190, 235, 11, 69, 190, 8, 205, 131, 189, 205, 246, 134, 62, 97, 215, 137, 62};
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
                alignas(float) const unsigned char memory[] = {185, 214, 66, 190, 10, 99, 221, 61, 225, 40, 100, 191, 59, 189, 1, 63, 101, 16, 30, 61, 164, 229, 159, 189, 146, 226, 112, 63, 18, 220, 240, 190, 25, 180, 30, 62, 209, 156, 10, 191, 119, 95, 237, 62, 115, 76, 109, 61, 74, 97, 252, 62, 92, 189, 39, 191, 34, 39, 59, 191, 245, 118, 103, 61, 111, 115, 118, 63, 231, 160, 156, 63, 44, 52, 187, 62, 38, 187, 197, 61, 213, 78, 221, 189, 8, 91, 27, 191, 190, 113, 51, 189, 29, 245, 145, 63, 26, 248, 202, 62, 36, 185, 114, 63, 254, 90, 20, 190, 172, 196, 9, 191, 197, 7, 137, 61, 182, 115, 38, 191, 20, 235, 51, 63, 106, 247, 205, 62, 132, 137, 247, 190, 185, 141, 209, 190, 51, 247, 44, 62, 243, 124, 211, 61, 4, 210, 185, 190, 217, 165, 204, 190, 128, 210, 131, 189, 58, 165, 149, 189, 184, 247, 241, 189, 234, 228, 80, 189, 93, 158, 38, 63, 45, 4, 47, 190, 66, 33, 59, 62, 136, 212, 65, 62, 240, 160, 30, 62, 203, 85, 74, 190, 71, 148, 103, 62, 141, 219, 127, 62, 31, 136, 203, 62, 232, 232, 230, 189, 223, 45, 20, 62, 75, 130, 36, 62, 215, 138, 172, 186, 124, 173, 218, 62, 99, 115, 254, 60, 11, 122, 160, 63, 214, 131, 152, 190, 197, 218, 231, 62, 100, 37, 177, 190, 13, 207, 188, 61, 40, 108, 30, 62, 238, 154, 187, 189};
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
                alignas(float) const unsigned char memory[] = {74, 95, 169, 188, 224, 217, 179, 190};
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
    alignas(float) const unsigned char memory[] = {229, 86, 241, 60, 12, 127, 203, 190, 2, 170, 19, 64};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {139, 205, 12, 64, 224, 118, 146, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0006/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}