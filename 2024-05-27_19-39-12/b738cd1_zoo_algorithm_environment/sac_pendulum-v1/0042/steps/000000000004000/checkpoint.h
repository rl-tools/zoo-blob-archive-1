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
                alignas(float) const unsigned char memory[] = {133, 243, 79, 61, 145, 161, 81, 189, 189, 33, 186, 62, 144, 198, 187, 61, 3, 37, 80, 191, 101, 102, 181, 189, 89, 11, 234, 190, 3, 96, 3, 62, 133, 32, 207, 190, 18, 56, 23, 190, 32, 147, 248, 190, 192, 190, 18, 63, 139, 120, 239, 190, 66, 16, 27, 63, 32, 173, 57, 62, 214, 107, 29, 61, 242, 237, 162, 190, 34, 228, 25, 191, 191, 116, 64, 61, 162, 156, 95, 63, 44, 176, 58, 191, 19, 190, 183, 190, 75, 189, 203, 190, 234, 18, 148, 62, 22, 231, 208, 190, 79, 153, 69, 63, 118, 158, 60, 191, 62, 111, 76, 62, 134, 129, 195, 62, 123, 219, 116, 62, 178, 136, 181, 190, 250, 55, 19, 191, 29, 150, 72, 189, 115, 32, 67, 191, 219, 152, 64, 191, 231, 188, 241, 190, 97, 129, 208, 62, 139, 79, 109, 63, 46, 234, 67, 188, 76, 206, 201, 62, 223, 55, 66, 190, 154, 253, 61, 191, 238, 28, 127, 62, 141, 219, 97, 191, 26, 46, 146, 62, 10, 91, 107, 62, 224, 136, 115, 191, 57, 175, 188, 62, 249, 86, 145, 190, 165, 192, 227, 62, 245, 146, 0, 63, 51, 138, 244, 190, 60, 82, 142, 190, 244, 145, 152, 188, 8, 40, 128, 190, 158, 193, 108, 63, 207, 109, 15, 62, 9, 196, 146, 190, 221, 68, 151, 62, 255, 101, 82, 191, 33, 215, 237, 61, 248, 245, 39, 63, 194, 225, 143, 190, 130, 28, 239, 190, 212, 120, 67, 189, 14, 99, 52, 191, 249, 81, 9, 191, 63, 111, 64, 191, 171, 227, 14, 190, 141, 42, 31, 191, 131, 88, 62, 62, 215, 189, 77, 190, 177, 62, 69, 190, 102, 93, 59, 63, 10, 249, 132, 62, 127, 228, 204, 190, 193, 74, 130, 190, 93, 39, 116, 62, 94, 241, 177, 62, 194, 237, 14, 63, 141, 75, 24, 189, 166, 124, 10, 62, 92, 1, 82, 191, 104, 137, 119, 190, 139, 64, 244, 188, 241, 29, 197, 61, 173, 203, 27, 191, 248, 126, 172, 190, 55, 237, 63, 63, 115, 59, 3, 62, 36, 217, 22, 63, 0, 13, 249, 190, 232, 209, 235, 62, 237, 160, 111, 61, 123, 32, 218, 190, 252, 249, 1, 191};
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
                alignas(float) const unsigned char memory[] = {192, 142, 233, 190, 108, 233, 247, 62, 38, 31, 198, 190, 115, 121, 8, 62, 134, 133, 52, 63, 234, 235, 2, 63, 189, 46, 38, 188, 32, 176, 166, 62, 31, 23, 202, 190, 100, 96, 231, 190, 230, 20, 181, 62, 233, 254, 179, 190, 172, 77, 200, 62, 9, 213, 105, 190, 253, 149, 146, 62, 154, 108, 187, 62, 34, 107, 163, 188, 210, 19, 190, 62, 1, 218, 64, 63, 45, 9, 188, 189, 40, 123, 102, 60, 203, 109, 101, 190, 199, 32, 46, 63, 41, 205, 219, 190, 205, 15, 251, 61, 53, 35, 223, 190, 227, 67, 54, 62, 119, 56, 30, 63, 235, 10, 91, 62, 58, 95, 22, 63, 78, 52, 3, 63, 42, 173, 217, 190};
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
                alignas(float) const unsigned char memory[] = {57, 78, 95, 61, 205, 249, 177, 189, 146, 48, 59, 190, 101, 44, 78, 188, 37, 193, 135, 189, 10, 17, 49, 61, 137, 92, 105, 61, 241, 20, 46, 188, 167, 105, 142, 189, 184, 185, 181, 189, 141, 98, 54, 189, 243, 66, 72, 189, 157, 157, 15, 190, 70, 117, 47, 62, 54, 232, 56, 189, 78, 42, 173, 189, 51, 236, 222, 60, 23, 163, 49, 190, 182, 27, 53, 189, 133, 86, 245, 61, 240, 145, 60, 190, 93, 157, 33, 62, 48, 206, 115, 189, 104, 47, 193, 189, 68, 24, 242, 60, 2, 230, 164, 61, 185, 99, 28, 190, 139, 67, 71, 60, 122, 107, 47, 190, 93, 141, 188, 61, 65, 120, 83, 188, 212, 118, 158, 61, 230, 77, 144, 61, 52, 238, 160, 62, 141, 153, 242, 189, 1, 107, 59, 62, 89, 236, 48, 188, 245, 231, 240, 189, 43, 11, 154, 189, 184, 27, 9, 62, 184, 97, 114, 190, 14, 226, 121, 190, 22, 55, 167, 62, 176, 144, 104, 62, 254, 56, 122, 190, 152, 133, 165, 61, 60, 56, 155, 62, 132, 47, 138, 62, 234, 239, 105, 61, 6, 236, 5, 62, 127, 39, 42, 190, 248, 231, 160, 190, 43, 217, 109, 60, 135, 232, 215, 190, 58, 193, 133, 189, 207, 13, 31, 191, 98, 52, 3, 190, 40, 70, 14, 190, 206, 225, 230, 62, 230, 91, 158, 189, 161, 176, 157, 190, 201, 9, 13, 188, 10, 117, 65, 62, 48, 250, 31, 190, 61, 117, 225, 61, 46, 162, 41, 62, 128, 96, 35, 191, 138, 172, 89, 62, 198, 69, 16, 61, 44, 175, 134, 61, 192, 150, 95, 190, 107, 181, 111, 61, 102, 28, 3, 191, 7, 182, 4, 61, 115, 109, 252, 61, 138, 147, 160, 190, 163, 212, 138, 190, 151, 238, 220, 62, 94, 40, 111, 62, 70, 7, 80, 62, 186, 188, 35, 62, 55, 8, 29, 62, 137, 194, 52, 188, 124, 165, 115, 190, 182, 116, 18, 190, 128, 54, 109, 190, 10, 69, 201, 61, 153, 0, 193, 61, 12, 59, 81, 62, 85, 138, 46, 190, 86, 109, 68, 190, 96, 125, 124, 62, 67, 74, 63, 61, 236, 39, 14, 61, 255, 126, 105, 190, 41, 234, 222, 62, 70, 139, 105, 61, 61, 85, 184, 189, 158, 120, 29, 190, 236, 56, 45, 189, 105, 54, 75, 61, 207, 3, 54, 62, 229, 238, 66, 187, 24, 162, 216, 58, 60, 2, 224, 189, 240, 221, 197, 189, 191, 160, 25, 191, 178, 148, 94, 190, 249, 11, 5, 63, 240, 165, 135, 62, 71, 122, 235, 189, 193, 197, 240, 61, 234, 221, 245, 61, 255, 119, 166, 190, 33, 29, 161, 62, 243, 17, 135, 60, 25, 107, 86, 61, 166, 34, 142, 189, 140, 192, 94, 191, 201, 183, 251, 190, 128, 188, 227, 54, 233, 36, 36, 190, 28, 82, 99, 62, 128, 60, 132, 188, 242, 36, 84, 189, 33, 171, 8, 60, 252, 64, 131, 62, 195, 254, 70, 62, 127, 147, 23, 60, 17, 85, 29, 190, 164, 128, 170, 59, 228, 14, 193, 61, 169, 131, 55, 190, 167, 96, 220, 189, 182, 226, 229, 189, 42, 111, 15, 189, 172, 220, 158, 61, 88, 242, 234, 61, 233, 247, 143, 61, 53, 241, 190, 61, 7, 64, 79, 188, 0, 160, 190, 61, 3, 149, 9, 190, 34, 144, 133, 189, 175, 141, 45, 61, 54, 61, 19, 190, 150, 200, 30, 190, 125, 213, 102, 189, 12, 46, 125, 188, 229, 40, 182, 189, 217, 117, 180, 189, 235, 80, 3, 187, 208, 78, 247, 189, 133, 56, 184, 61, 7, 125, 9, 190, 70, 101, 255, 61, 173, 75, 25, 61, 72, 179, 22, 60, 61, 87, 135, 61, 119, 191, 216, 187, 18, 139, 58, 190, 129, 196, 152, 61, 22, 100, 154, 187, 250, 122, 130, 190, 90, 18, 37, 62, 73, 38, 168, 188, 143, 209, 226, 61, 21, 151, 184, 189, 84, 38, 35, 62, 126, 166, 211, 189, 140, 104, 108, 189, 227, 44, 123, 61, 171, 73, 199, 62, 136, 198, 221, 190, 228, 177, 143, 190, 141, 240, 160, 190, 155, 134, 33, 189, 162, 98, 3, 62, 204, 213, 21, 62, 93, 128, 159, 60, 249, 244, 140, 60, 48, 71, 219, 187, 95, 85, 32, 190, 82, 68, 60, 62, 49, 139, 7, 61, 206, 212, 78, 62, 164, 107, 107, 62, 112, 246, 116, 62, 216, 181, 119, 62, 107, 78, 33, 62, 44, 231, 161, 62, 162, 1, 255, 190, 117, 196, 95, 61, 108, 219, 246, 60, 122, 74, 240, 61, 146, 57, 27, 191, 153, 248, 3, 62, 221, 157, 104, 62, 27, 104, 21, 190, 237, 10, 219, 189, 130, 214, 33, 62, 142, 218, 178, 189, 139, 158, 0, 61, 87, 92, 49, 62, 175, 92, 41, 62, 21, 65, 238, 189, 17, 163, 31, 191, 66, 140, 35, 191, 99, 180, 23, 191, 251, 159, 138, 62, 252, 86, 70, 61, 84, 175, 75, 62, 251, 0, 13, 62, 70, 71, 101, 62, 248, 175, 37, 62, 194, 122, 235, 60, 73, 18, 211, 190, 115, 146, 167, 189, 155, 187, 24, 190, 25, 69, 172, 61, 207, 0, 183, 61, 91, 69, 92, 62, 123, 61, 112, 61, 96, 183, 171, 190, 90, 235, 141, 189, 92, 40, 69, 189, 70, 164, 24, 191, 175, 30, 228, 61, 111, 164, 255, 61, 253, 38, 14, 190, 71, 207, 49, 191, 55, 3, 49, 62, 20, 35, 28, 191, 47, 231, 241, 189, 201, 217, 105, 62, 46, 248, 43, 190, 92, 159, 106, 190, 129, 240, 3, 62, 6, 83, 49, 62, 207, 35, 188, 187, 226, 182, 138, 61, 8, 236, 107, 62, 212, 56, 7, 189, 123, 10, 0, 191, 136, 227, 132, 190, 192, 163, 62, 190, 134, 78, 141, 189, 145, 7, 137, 60, 5, 35, 134, 61, 139, 82, 35, 190, 73, 27, 98, 191, 94, 77, 79, 189, 219, 117, 203, 190, 162, 151, 158, 62, 177, 202, 168, 187, 101, 67, 56, 190, 129, 177, 158, 189, 100, 17, 37, 190, 226, 190, 148, 189, 96, 170, 212, 61, 234, 149, 142, 189, 241, 170, 97, 61, 173, 179, 205, 189, 123, 99, 212, 185, 108, 116, 22, 62, 48, 14, 174, 189, 233, 241, 164, 188, 66, 46, 255, 189, 41, 74, 98, 190, 73, 55, 22, 190, 238, 178, 17, 62, 81, 45, 212, 188, 160, 19, 172, 189, 245, 48, 137, 189, 222, 54, 50, 189, 44, 203, 125, 189, 58, 99, 121, 189, 144, 37, 183, 188, 6, 201, 127, 189, 200, 145, 39, 190, 66, 178, 218, 61, 63, 118, 24, 190, 149, 231, 127, 61, 181, 52, 41, 190, 159, 244, 86, 188, 234, 206, 42, 60, 204, 240, 170, 189, 231, 232, 217, 189, 176, 204, 105, 190, 94, 218, 90, 61, 193, 154, 166, 190, 52, 49, 55, 62, 10, 121, 194, 61, 95, 27, 1, 190, 163, 176, 4, 191, 210, 254, 151, 61, 64, 122, 22, 191, 169, 229, 83, 190, 253, 9, 65, 62, 228, 161, 230, 189, 19, 154, 142, 189, 156, 237, 121, 190, 11, 83, 210, 61, 230, 30, 230, 61, 232, 91, 147, 59, 58, 116, 221, 59, 217, 25, 75, 62, 129, 225, 195, 190, 204, 151, 162, 188, 185, 119, 176, 190, 64, 45, 9, 189, 66, 249, 252, 61, 211, 15, 35, 60, 34, 213, 134, 189, 121, 193, 206, 190, 185, 89, 40, 190, 26, 109, 75, 190, 238, 25, 181, 61, 174, 32, 227, 61, 86, 174, 96, 190, 80, 216, 32, 189, 33, 45, 66, 62, 198, 114, 134, 61, 167, 184, 190, 189, 82, 162, 207, 61, 24, 223, 42, 62, 156, 198, 16, 188, 221, 19, 208, 189, 201, 135, 207, 61, 154, 150, 7, 190, 210, 76, 161, 190, 91, 95, 56, 62, 130, 175, 156, 62, 134, 1, 202, 190, 116, 8, 193, 189, 105, 216, 174, 188, 159, 113, 9, 189, 197, 24, 174, 60, 63, 191, 168, 61, 152, 126, 76, 189, 73, 89, 153, 62, 162, 65, 86, 59, 188, 157, 78, 59, 63, 99, 144, 189, 129, 228, 117, 189, 27, 84, 71, 189, 67, 98, 188, 189, 159, 150, 16, 190, 194, 246, 46, 62, 53, 105, 212, 61, 202, 152, 183, 61, 171, 241, 194, 190, 184, 105, 68, 190, 175, 171, 232, 190, 202, 234, 119, 61, 16, 71, 73, 189, 199, 183, 204, 62, 96, 214, 148, 189, 239, 82, 123, 189, 185, 240, 133, 190, 6, 117, 133, 61, 147, 189, 246, 189, 149, 21, 39, 188, 158, 98, 222, 190, 61, 87, 218, 61, 244, 226, 217, 190, 248, 83, 3, 61, 100, 116, 33, 60, 44, 107, 98, 190, 74, 234, 43, 62, 130, 145, 117, 62, 225, 99, 226, 61, 92, 28, 141, 62, 5, 78, 46, 61, 175, 72, 242, 60, 71, 167, 26, 62, 109, 239, 177, 61, 125, 240, 226, 190, 94, 40, 180, 61, 114, 205, 134, 190, 101, 184, 55, 62, 29, 0, 76, 62, 86, 147, 113, 190, 240, 38, 135, 190, 219, 247, 46, 190, 27, 19, 18, 190, 189, 177, 0, 190, 211, 77, 29, 190, 50, 44, 0, 62, 158, 111, 239, 61, 187, 219, 126, 189, 60, 218, 81, 190, 204, 115, 38, 189, 176, 238, 150, 187, 108, 234, 22, 62, 89, 137, 64, 190, 89, 150, 137, 189, 100, 190, 49, 61, 61, 188, 0, 62, 38, 51, 193, 189, 162, 152, 164, 188, 166, 112, 14, 190, 7, 141, 166, 61, 100, 133, 237, 189, 186, 254, 29, 190, 225, 3, 62, 61, 197, 131, 197, 61, 122, 109, 21, 188, 115, 248, 138, 60, 250, 59, 42, 62, 21, 71, 26, 190, 4, 95, 153, 61, 251, 115, 225, 189, 250, 171, 70, 190, 205, 18, 164, 60, 253, 31, 230, 189, 100, 137, 164, 189, 54, 61, 105, 189, 41, 133, 210, 60, 155, 184, 6, 190, 203, 225, 135, 189, 183, 242, 103, 188, 11, 104, 158, 59, 67, 123, 141, 189, 34, 231, 152, 187, 108, 63, 130, 61, 55, 188, 187, 61, 12, 141, 3, 190, 200, 16, 217, 187, 31, 221, 12, 61, 14, 81, 107, 189, 27, 8, 96, 188, 22, 51, 194, 187, 253, 90, 195, 61, 30, 54, 48, 190, 14, 27, 217, 189, 151, 196, 6, 190, 56, 193, 2, 190, 42, 187, 164, 188, 97, 101, 236, 60, 170, 247, 156, 189, 113, 231, 40, 190, 197, 85, 204, 188, 76, 237, 190, 61, 116, 113, 201, 189, 10, 70, 130, 61, 88, 54, 75, 189, 59, 0, 32, 190, 208, 68, 249, 189, 112, 13, 0, 62, 32, 67, 21, 191, 162, 66, 235, 60, 169, 18, 43, 62, 212, 207, 57, 190, 54, 79, 24, 191, 135, 122, 151, 61, 70, 20, 91, 191, 214, 242, 12, 190, 134, 133, 183, 62, 255, 192, 6, 190, 95, 5, 149, 189, 255, 192, 192, 62, 206, 212, 23, 61, 146, 87, 104, 62, 223, 4, 192, 59, 229, 123, 73, 62, 84, 86, 2, 62, 23, 193, 25, 191, 95, 50, 24, 191, 87, 117, 219, 190, 238, 225, 14, 62, 242, 237, 231, 60, 185, 88, 55, 189, 94, 222, 168, 189, 246, 106, 43, 191, 47, 36, 91, 62, 159, 28, 185, 190, 229, 111, 18, 190, 180, 4, 170, 190, 50, 17, 76, 62, 179, 232, 223, 61, 126, 204, 226, 189, 54, 180, 155, 189, 67, 94, 93, 188, 0, 97, 167, 188, 30, 153, 216, 189, 179, 182, 10, 62, 191, 8, 53, 190, 181, 133, 68, 189, 32, 106, 170, 61, 158, 111, 135, 190, 121, 1, 223, 60, 101, 140, 105, 62, 255, 45, 47, 189, 93, 224, 83, 189, 201, 245, 67, 189, 65, 193, 50, 62, 145, 179, 22, 190, 171, 162, 148, 189, 148, 243, 58, 190, 123, 61, 39, 62, 132, 211, 83, 190, 55, 245, 229, 190, 249, 48, 4, 61, 245, 82, 51, 62, 82, 159, 31, 58, 60, 250, 152, 61, 248, 3, 86, 188, 91, 109, 156, 61, 8, 32, 7, 62, 243, 205, 33, 62, 63, 205, 18, 190, 109, 203, 196, 61, 86, 176, 28, 190, 241, 26, 180, 61, 202, 178, 240, 189, 114, 215, 62, 190, 160, 138, 44, 61, 39, 211, 64, 190, 198, 61, 36, 62, 76, 115, 238, 189, 48, 108, 160, 61, 25, 62, 209, 61, 233, 120, 175, 61, 73, 9, 7, 190, 30, 2, 103, 187, 2, 190, 105, 186, 7, 10, 149, 189, 16, 53, 24, 190, 221, 198, 254, 189, 88, 225, 27, 190, 42, 4, 72, 61, 122, 13, 184, 61, 216, 163, 15, 61, 24, 194, 179, 189, 67, 212, 199, 189, 132, 112, 172, 61, 245, 191, 2, 62, 161, 221, 193, 188, 72, 230, 131, 61, 38, 52, 128, 61, 138, 39, 213, 59, 180, 197, 238, 61, 208, 228, 69, 190, 249, 82, 17, 189, 0, 33, 104, 187, 123, 133, 127, 190, 139, 92, 13, 62, 245, 188, 41, 62, 87, 120, 155, 189, 31, 203, 3, 191, 30, 203, 18, 62, 32, 132, 219, 190, 41, 38, 38, 62, 128, 83, 177, 60, 222, 145, 129, 190, 106, 215, 34, 190, 183, 72, 71, 61, 100, 5, 251, 188, 126, 146, 89, 62, 59, 220, 159, 61, 51, 161, 193, 61, 199, 238, 99, 61, 191, 24, 187, 190, 48, 115, 175, 190, 229, 218, 152, 190, 3, 241, 78, 62, 78, 58, 160, 61, 28, 107, 223, 61, 233, 187, 130, 61, 36, 15, 3, 191, 155, 173, 30, 60, 212, 207, 31, 190, 33, 182, 40, 186, 178, 134, 47, 190, 213, 221, 218, 189, 194, 56, 209, 60, 238, 102, 247, 186, 65, 122, 182, 190, 214, 180, 82, 60, 100, 147, 126, 62, 119, 0, 20, 190, 144, 158, 217, 190, 174, 110, 106, 62, 85, 49, 148, 190, 39, 31, 111, 190, 101, 164, 54, 189, 89, 30, 202, 190, 122, 2, 55, 189, 201, 83, 49, 190, 166, 50, 27, 190, 187, 223, 135, 61, 61, 152, 226, 61, 196, 194, 35, 62, 27, 120, 231, 61, 215, 129, 227, 190, 0, 26, 162, 190, 214, 76, 132, 190, 69, 162, 124, 62, 7, 31, 238, 188, 121, 69, 255, 61, 9, 126, 58, 61, 170, 49, 89, 191, 78, 220, 61, 190, 163, 200, 153, 190, 102, 59, 132, 62, 148, 212, 225, 60, 12, 164, 133, 60, 224, 34, 215, 55, 153, 251, 120, 59, 63, 185, 32, 62, 8, 103, 36, 190, 45, 80, 45, 62, 112, 130, 146, 61, 48, 88, 36, 62, 238, 98, 119, 189, 13, 245, 80, 62, 122, 38, 189, 60, 112, 129, 152, 61, 23, 176, 130, 61, 189, 3, 139, 62, 251, 79, 200, 190, 81, 177, 238, 189, 34, 54, 212, 188, 239, 247, 151, 61, 240, 170, 50, 62, 151, 115, 106, 62, 241, 6, 67, 62, 95, 69, 181, 60, 0, 228, 177, 189, 156, 49, 142, 61, 220, 245, 1, 61, 166, 131, 1, 62, 28, 39, 160, 61, 25, 111, 217, 60, 105, 108, 129, 188, 231, 249, 151, 189, 198, 92, 189, 61, 36, 229, 143, 62, 86, 157, 230, 190, 224, 102, 238, 190, 151, 88, 166, 189, 203, 49, 75, 191, 4, 207, 89, 189, 169, 35, 210, 61, 214, 120, 29, 190, 178, 84, 226, 190, 186, 3, 132, 60, 142, 133, 55, 191, 144, 88, 161, 190, 27, 46, 11, 62, 138, 67, 121, 190, 146, 180, 173, 190, 79, 60, 219, 61, 50, 58, 191, 62, 13, 6, 15, 62, 36, 22, 241, 59, 76, 35, 250, 61, 110, 243, 31, 62, 113, 129, 225, 190, 171, 132, 26, 191, 87, 238, 12, 191, 209, 8, 139, 62, 164, 109, 76, 190, 12, 246, 83, 62, 255, 56, 170, 189, 116, 172, 62, 191, 121, 76, 50, 62, 168, 127, 52, 190, 145, 152, 165, 61, 192, 235, 109, 190, 110, 201, 144, 62, 31, 70, 113, 61, 249, 87, 99, 62, 27, 8, 206, 61, 128, 157, 78, 62, 159, 202, 183, 189, 24, 197, 214, 189, 16, 89, 213, 188, 230, 222, 33, 62, 239, 90, 180, 61, 103, 158, 202, 189, 13, 10, 45, 190, 32, 125, 161, 61, 199, 208, 139, 62, 225, 69, 189, 62, 215, 119, 18, 62, 161, 38, 76, 189, 4, 59, 213, 60, 54, 233, 43, 189, 109, 87, 41, 189, 35, 44, 82, 189, 116, 146, 129, 189, 31, 226, 75, 60, 28, 60, 25, 190, 1, 58, 196, 190, 37, 102, 10, 62, 104, 255, 65, 62, 119, 75, 205, 61, 104, 163, 148, 189, 207, 171, 9, 190, 217, 92, 185, 58, 12, 148, 82, 62, 91, 44, 141, 61, 119, 211, 194, 188, 188, 113, 147, 61, 12, 101, 55, 62, 41, 94, 95, 190, 35, 127, 199, 59, 40, 177, 71, 62, 248, 220, 57, 190, 163, 104, 131, 61, 254, 25, 168, 60, 149, 59, 55, 62, 161, 12, 6, 190, 19, 104, 253, 61, 161, 193, 158, 62, 113, 224, 243, 190, 152, 83, 85, 190, 123, 189, 131, 189, 136, 68, 8, 190, 45, 145, 3, 61, 106, 140, 10, 61, 190, 28, 5, 62, 30, 210, 143, 62, 150, 60, 132, 62, 233, 136, 70, 190, 24, 125, 32, 62, 208, 14, 217, 60, 212, 66, 86, 61, 25, 137, 97, 62, 165, 47, 30, 61, 48, 163, 140, 61, 40, 16, 111, 62, 142, 136, 138, 62, 36, 106, 26, 191, 47, 20, 160, 189, 103, 168, 183, 60, 237, 22, 255, 189, 47, 137, 236, 190, 95, 199, 71, 189, 254, 5, 19, 62, 175, 91, 157, 60, 231, 106, 250, 59, 54, 218, 16, 62, 67, 188, 174, 189, 164, 23, 16, 190, 83, 60, 9, 189, 21, 44, 197, 62, 13, 174, 221, 190, 78, 174, 100, 190, 140, 232, 240, 190, 98, 80, 83, 190, 181, 222, 49, 62, 11, 203, 220, 61, 146, 136, 214, 61, 152, 89, 153, 61, 131, 185, 97, 62, 111, 115, 160, 189, 137, 85, 28, 59, 68, 108, 34, 190, 239, 210, 67, 190, 26, 14, 56, 62, 28, 212, 38, 61, 37, 23, 13, 62, 192, 108, 143, 62, 244, 67, 52, 62, 248, 31, 23, 191, 6, 233, 44, 61, 213, 214, 21, 61, 194, 81, 28, 190, 243, 40, 122, 60, 151, 157, 202, 188, 66, 204, 134, 62, 226, 100, 29, 189, 9, 45, 20, 190, 233, 32, 30, 190, 255, 61, 43, 62, 214, 24, 197, 61, 203, 138, 4, 191, 166, 11, 218, 187, 187, 254, 196, 60, 141, 62, 111, 62, 99, 66, 107, 62, 176, 45, 41, 190, 14, 72, 203, 190, 142, 178, 48, 190, 221, 94, 166, 60, 69, 112, 149, 186, 98, 35, 145, 189, 15, 161, 127, 189, 180, 38, 25, 190, 145, 65, 193, 60, 48, 50, 33, 61, 126, 230, 190, 190, 253, 71, 24, 62, 207, 117, 201, 60, 184, 54, 211, 60, 105, 179, 107, 62, 8, 80, 213, 61, 254, 71, 143, 190, 80, 175, 246, 189, 62, 65, 110, 190, 97, 247, 144, 61, 72, 242, 25, 190, 173, 52, 218, 189, 7, 91, 223, 61, 116, 65, 188, 188, 31, 136, 241, 188, 86, 209, 179, 189, 94, 254, 39, 62, 79, 93, 140, 189, 86, 230, 194, 189, 189, 23, 193, 62, 83, 217, 21, 62, 163, 145, 174, 60, 181, 118, 186, 61, 28, 167, 198, 189, 59, 90, 5, 62, 102, 11, 251, 61, 98, 235, 82, 190, 146, 228, 5, 62, 250, 81, 21, 62, 44, 186, 184, 189, 47, 219, 18, 61, 223, 159, 67, 189, 227, 205, 251, 189, 205, 172, 61, 62, 86, 60, 199, 187, 154, 101, 98, 61, 221, 71, 219, 189, 25, 208, 179, 61, 199, 176, 162, 189, 231, 168, 97, 188, 50, 201, 96, 190, 95, 118, 145, 61, 209, 208, 112, 62, 25, 3, 107, 190, 72, 184, 171, 189, 251, 177, 245, 188, 147, 234, 79, 190, 118, 87, 156, 190, 136, 246, 80, 190, 201, 73, 71, 189, 59, 3, 91, 62, 247, 62, 24, 190, 75, 210, 184, 189, 175, 82, 31, 190, 101, 112, 20, 61, 160, 171, 41, 190, 33, 135, 121, 61, 132, 24, 136, 190, 193, 37, 142, 62, 95, 50, 135, 60, 201, 231, 121, 190, 154, 176, 5, 191, 229, 45, 60, 62, 188, 100, 173, 61, 141, 186, 11, 58, 45, 211, 91, 190, 180, 140, 59, 61, 96, 126, 160, 189, 16, 200, 92, 190, 121, 89, 111, 190, 190, 65, 108, 62, 38, 125, 203, 189, 73, 125, 147, 189, 184, 210, 9, 62, 70, 133, 169, 61, 9, 130, 132, 189, 209, 179, 136, 61, 108, 44, 6, 60, 115, 79, 17, 190, 83, 63, 78, 189, 30, 110, 34, 190, 132, 173, 134, 60, 25, 131, 105, 189, 230, 59, 223, 61, 89, 212, 159, 61, 122, 175, 51, 61, 70, 154, 251, 188, 97, 122, 25, 60, 127, 151, 171, 61, 201, 87, 148, 188, 75, 77, 41, 189, 165, 222, 145, 61, 78, 175, 55, 61, 136, 19, 16, 62, 173, 185, 119, 61, 244, 92, 25, 62, 118, 178, 123, 61, 27, 106, 54, 189, 215, 83, 11, 62, 69, 131, 208, 189, 157, 120, 182, 189, 81, 59, 126, 61, 9, 5, 76, 190, 226, 201, 44, 62, 208, 108, 114, 189, 124, 205, 224, 189, 227, 177, 222, 190, 62, 119, 202, 61, 197, 153, 74, 61, 1, 152, 237, 61, 62, 39, 208, 189, 132, 159, 111, 190, 160, 190, 14, 62, 201, 41, 137, 188, 141, 15, 182, 190, 149, 172, 149, 62, 169, 242, 182, 61, 92, 30, 144, 62, 195, 10, 156, 187, 2, 200, 75, 188, 174, 69, 216, 190, 88, 184, 140, 61, 6, 243, 143, 190, 92, 98, 65, 189, 8, 243, 146, 60, 198, 105, 188, 189, 124, 129, 229, 188, 1, 204, 26, 190, 32, 191, 44, 189, 147, 140, 171, 62, 97, 193, 231, 188, 215, 52, 56, 191, 6, 162, 39, 62, 6, 86, 131, 62, 37, 83, 105, 189, 178, 37, 151, 62, 233, 5, 135, 189, 182, 244, 49, 61, 156, 40, 175, 61, 230, 231, 165, 188, 11, 189, 255, 61, 197, 147, 35, 62, 99, 195, 148, 61, 190, 85, 113, 190, 131, 178, 68, 62, 95, 57, 248, 61, 235, 95, 167, 62, 6, 75, 244, 190, 232, 52, 216, 61, 14, 179, 68, 190, 127, 177, 160, 189, 68, 30, 69, 188, 244, 168, 150, 60, 2, 50, 34, 61, 193, 50, 141, 62, 155, 112, 56, 189, 232, 149, 49, 62, 165, 19, 99, 189, 96, 182, 35, 190, 0, 216, 72, 190, 19, 98, 49, 188, 171, 190, 6, 189, 125, 64, 162, 187, 159, 197, 54, 62, 58, 212, 153, 61, 187, 227, 91, 190, 1, 230, 19, 62, 210, 246, 198, 61, 114, 142, 34, 190, 118, 105, 234, 189, 210, 239, 29, 190, 105, 102, 188, 61, 10, 162, 209, 188, 183, 97, 45, 62, 55, 36, 254, 61, 138, 3, 116, 62, 38, 78, 55, 61, 58, 108, 0, 190, 179, 140, 122, 190, 33, 192, 239, 188, 192, 110, 87, 60, 192, 179, 36, 62, 116, 56, 249, 189, 1, 251, 132, 190, 233, 133, 56, 61, 1, 249, 45, 190, 40, 1, 227, 61, 6, 58, 194, 189, 210, 129, 143, 188, 213, 67, 241, 61, 81, 57, 23, 188, 78, 84, 53, 189, 32, 21, 26, 191, 48, 170, 143, 62, 241, 10, 191, 188, 10, 148, 92, 61, 9, 33, 14, 62, 73, 132, 146, 189, 52, 250, 150, 188, 118, 193, 239, 189, 226, 245, 144, 62, 185, 123, 157, 189, 159, 110, 134, 186, 244, 42, 70, 188, 87, 212, 131, 62, 101, 150, 38, 190, 156, 232, 102, 62, 161, 97, 177, 189, 191, 8, 178, 190, 253, 163, 248, 188, 189, 25, 70, 62, 18, 100, 45, 62, 199, 26, 183, 187, 219, 172, 233, 189, 244, 212, 26, 190, 229, 182, 160, 187, 2, 234, 16, 62, 205, 64, 29, 61, 87, 31, 118, 62, 54, 113, 197, 61, 216, 94, 146, 61, 63, 115, 131, 61, 157, 153, 40, 62, 49, 38, 122, 189, 253, 36, 54, 62, 164, 34, 8, 190, 155, 82, 20, 187, 218, 224, 223, 61, 61, 130, 165, 61, 124, 32, 147, 61};
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
                alignas(float) const unsigned char memory[] = {192, 6, 220, 61, 18, 26, 176, 61, 232, 32, 27, 61, 214, 244, 112, 61, 81, 193, 31, 189, 28, 190, 129, 61, 211, 132, 104, 60, 235, 178, 238, 61, 13, 255, 41, 61, 7, 28, 38, 62, 89, 129, 119, 62, 88, 6, 154, 61, 45, 225, 48, 190, 160, 70, 197, 60, 90, 26, 69, 62, 93, 199, 6, 188, 74, 35, 171, 189, 5, 9, 128, 189, 236, 0, 197, 189, 17, 231, 167, 62, 206, 101, 19, 62, 248, 43, 156, 61, 172, 104, 181, 61, 84, 5, 33, 62, 30, 49, 221, 189, 69, 181, 66, 61, 31, 221, 47, 60, 239, 249, 40, 190, 247, 73, 246, 61, 110, 98, 168, 62, 106, 59, 185, 189, 96, 59, 204, 61};
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
                alignas(float) const unsigned char memory[] = {88, 171, 169, 189, 228, 128, 195, 190, 1, 31, 182, 62, 38, 249, 237, 190, 60, 109, 182, 189, 69, 217, 159, 190, 245, 136, 192, 190, 157, 228, 177, 62, 214, 100, 117, 61, 127, 105, 25, 62, 49, 138, 154, 190, 16, 208, 57, 63, 107, 183, 40, 188, 84, 150, 37, 62, 214, 209, 18, 63, 187, 205, 144, 189, 244, 124, 15, 190, 123, 161, 112, 62, 3, 14, 154, 62, 92, 247, 110, 190, 96, 179, 16, 63, 239, 86, 74, 190, 81, 108, 155, 190, 71, 172, 18, 191, 56, 222, 147, 62, 69, 138, 255, 61, 187, 29, 19, 190, 11, 66, 237, 60, 116, 181, 238, 62, 67, 89, 106, 190, 47, 245, 58, 62, 131, 98, 161, 62, 54, 198, 239, 61, 201, 82, 63, 189, 39, 191, 178, 61, 48, 114, 155, 189, 133, 247, 253, 189, 144, 94, 220, 188, 0, 130, 208, 61, 208, 249, 4, 190, 142, 52, 21, 62, 109, 162, 48, 190, 163, 32, 150, 189, 59, 165, 106, 62, 223, 158, 150, 189, 32, 15, 212, 189, 116, 8, 107, 61, 183, 206, 132, 62, 95, 27, 220, 189, 88, 85, 21, 62, 82, 135, 113, 189, 51, 124, 46, 190, 44, 134, 106, 61, 178, 22, 104, 61, 104, 145, 194, 61, 192, 113, 35, 190, 225, 185, 111, 190, 234, 6, 159, 189, 58, 253, 44, 190, 105, 161, 184, 61, 95, 122, 176, 189, 43, 117, 237, 189, 157, 109, 34, 187, 110, 170, 86, 189};
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
                alignas(float) const unsigned char memory[] = {134, 181, 60, 189, 166, 49, 115, 190};
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
    alignas(float) const unsigned char memory[] = {225, 57, 81, 62, 8, 43, 0, 63, 247, 4, 230, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {96, 252, 254, 191, 160, 73, 49, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0042/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}