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
                alignas(float) const unsigned char memory[] = {54, 58, 242, 190, 92, 61, 45, 63, 20, 208, 240, 190, 83, 80, 181, 190, 53, 129, 182, 63, 61, 72, 181, 62, 234, 98, 50, 191, 112, 5, 142, 191, 23, 8, 161, 190, 136, 136, 157, 191, 21, 71, 21, 190, 181, 209, 190, 188, 40, 241, 73, 62, 227, 254, 181, 190, 78, 195, 73, 63, 68, 20, 31, 63, 38, 100, 63, 191, 8, 242, 43, 63, 18, 144, 14, 191, 2, 84, 196, 63, 35, 196, 174, 62, 131, 16, 1, 63, 87, 213, 16, 191, 168, 208, 181, 190, 124, 82, 119, 60, 125, 206, 124, 190, 188, 56, 100, 62, 76, 12, 6, 190, 245, 9, 76, 191, 143, 219, 139, 190, 150, 7, 25, 62, 235, 207, 152, 63, 193, 80, 213, 62, 105, 151, 7, 191, 61, 220, 23, 191, 247, 44, 118, 62, 206, 252, 170, 62, 40, 23, 124, 191, 91, 241, 209, 62, 149, 181, 33, 63, 228, 175, 162, 189, 144, 225, 227, 62, 28, 153, 219, 190, 42, 172, 137, 62, 44, 155, 184, 62, 128, 116, 218, 189, 240, 89, 129, 63, 28, 87, 216, 190, 177, 175, 159, 190, 67, 176, 102, 63, 154, 36, 79, 189, 61, 80, 108, 191, 1, 103, 10, 191, 47, 245, 128, 190, 219, 167, 85, 58, 39, 96, 34, 190, 147, 244, 18, 189, 172, 251, 36, 190, 241, 32, 135, 191, 192, 220, 243, 188, 86, 17, 11, 63, 142, 44, 194, 62, 202, 32, 40, 63, 173, 140, 245, 190, 127, 154, 175, 191, 79, 6, 225, 190, 97, 109, 33, 63, 210, 29, 132, 63, 243, 220, 100, 62, 12, 238, 79, 63, 107, 216, 28, 191, 23, 83, 1, 62, 167, 76, 131, 190, 206, 163, 22, 63, 248, 171, 21, 191, 5, 250, 92, 61, 129, 136, 190, 191, 135, 207, 191, 190, 41, 143, 136, 189, 170, 245, 42, 63, 178, 213, 9, 63, 156, 168, 244, 62, 9, 129, 84, 63, 179, 83, 73, 62, 41, 103, 83, 63, 96, 23, 32, 191, 220, 198, 150, 190, 63, 255, 60, 191, 209, 108, 83, 63, 67, 192, 50, 62, 152, 121, 133, 63, 133, 166, 140, 191, 136, 221, 178, 190, 44, 173, 185, 62, 66, 118, 42, 189, 233, 204, 251, 62};
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
                alignas(float) const unsigned char memory[] = {244, 191, 228, 189, 99, 37, 89, 190, 111, 136, 175, 62, 174, 153, 5, 62, 153, 39, 239, 190, 114, 132, 215, 190, 1, 199, 9, 190, 68, 141, 74, 191, 187, 73, 6, 189, 21, 74, 145, 61, 221, 157, 23, 191, 36, 246, 12, 63, 123, 87, 241, 62, 169, 7, 145, 62, 97, 6, 72, 191, 17, 194, 147, 190, 68, 169, 195, 61, 64, 56, 231, 62, 116, 88, 9, 191, 225, 204, 151, 190, 104, 126, 86, 191, 231, 19, 132, 189, 185, 184, 217, 62, 226, 9, 88, 189, 103, 37, 40, 63, 1, 99, 214, 62, 87, 87, 170, 190, 185, 9, 230, 189, 1, 247, 32, 191, 200, 252, 251, 62, 64, 239, 53, 62, 86, 9, 42, 190};
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
                alignas(float) const unsigned char memory[] = {208, 164, 230, 189, 238, 69, 161, 61, 192, 28, 230, 61, 169, 80, 87, 189, 172, 144, 187, 61, 100, 117, 225, 189, 55, 252, 194, 189, 42, 119, 42, 188, 8, 106, 160, 189, 19, 70, 71, 190, 218, 5, 155, 186, 83, 163, 25, 190, 155, 199, 149, 61, 53, 111, 9, 190, 241, 108, 147, 189, 100, 110, 225, 188, 175, 120, 170, 61, 174, 242, 48, 190, 247, 202, 42, 189, 88, 94, 136, 189, 158, 44, 241, 189, 39, 214, 29, 189, 193, 14, 190, 61, 66, 79, 96, 61, 179, 131, 164, 61, 250, 210, 235, 189, 92, 226, 181, 189, 107, 237, 2, 61, 112, 224, 11, 62, 138, 196, 89, 190, 77, 50, 200, 189, 175, 86, 226, 189, 174, 56, 180, 190, 128, 45, 79, 189, 7, 36, 56, 189, 221, 73, 111, 190, 10, 121, 230, 190, 154, 159, 111, 189, 155, 182, 198, 190, 105, 131, 105, 189, 123, 112, 144, 190, 149, 95, 240, 189, 179, 4, 88, 189, 144, 41, 209, 189, 152, 189, 197, 189, 130, 23, 133, 62, 62, 181, 85, 191, 6, 90, 55, 62, 175, 143, 7, 62, 208, 8, 45, 190, 168, 181, 3, 190, 201, 109, 72, 190, 228, 209, 232, 190, 137, 43, 170, 190, 113, 28, 171, 62, 150, 227, 206, 61, 49, 160, 191, 61, 104, 99, 79, 189, 103, 89, 211, 190, 80, 111, 142, 62, 35, 217, 145, 190, 255, 43, 245, 61, 232, 97, 71, 60, 183, 218, 2, 62, 205, 106, 57, 190, 155, 109, 146, 190, 45, 88, 146, 189, 177, 67, 34, 190, 74, 194, 10, 61, 30, 129, 19, 62, 18, 209, 82, 191, 136, 197, 83, 189, 156, 120, 249, 189, 253, 208, 9, 62, 224, 31, 173, 61, 57, 225, 250, 189, 32, 136, 68, 189, 4, 58, 20, 62, 101, 85, 231, 189, 71, 190, 165, 62, 212, 118, 59, 61, 166, 165, 30, 62, 105, 62, 244, 189, 129, 87, 222, 190, 48, 220, 164, 61, 57, 22, 10, 190, 19, 227, 87, 189, 92, 235, 115, 190, 220, 81, 84, 62, 222, 4, 207, 190, 6, 254, 23, 190, 115, 166, 92, 61, 61, 191, 121, 191, 218, 12, 156, 188, 42, 129, 68, 190, 55, 235, 29, 190, 43, 107, 0, 61, 172, 166, 49, 192, 225, 172, 57, 191, 192, 14, 70, 62, 179, 217, 183, 190, 83, 202, 179, 191, 230, 232, 97, 190, 1, 120, 169, 189, 222, 47, 31, 191, 176, 190, 57, 190, 115, 6, 189, 191, 64, 238, 60, 189, 236, 48, 153, 190, 101, 184, 83, 62, 121, 24, 139, 190, 134, 2, 168, 188, 51, 82, 244, 61, 86, 3, 33, 191, 182, 190, 43, 62, 251, 17, 84, 191, 197, 170, 13, 190, 68, 134, 94, 190, 96, 107, 201, 61, 246, 181, 164, 189, 52, 156, 7, 62, 51, 248, 34, 191, 226, 196, 126, 191, 236, 157, 241, 188, 19, 184, 133, 61, 73, 172, 167, 191, 11, 125, 109, 62, 157, 165, 7, 191, 42, 244, 179, 189, 61, 75, 54, 191, 74, 234, 12, 190, 197, 152, 222, 190, 201, 0, 143, 61, 178, 170, 85, 190, 129, 214, 153, 190, 53, 213, 33, 60, 168, 206, 117, 62, 214, 53, 244, 189, 54, 40, 161, 191, 52, 205, 143, 62, 145, 27, 193, 62, 118, 89, 221, 189, 163, 81, 165, 190, 9, 181, 50, 190, 33, 177, 12, 190, 14, 169, 182, 190, 44, 225, 229, 189, 9, 47, 80, 62, 198, 118, 178, 190, 86, 48, 225, 189, 217, 176, 9, 189, 106, 214, 103, 62, 182, 212, 24, 62, 224, 240, 147, 62, 111, 20, 0, 189, 191, 180, 41, 191, 196, 30, 201, 190, 5, 241, 67, 191, 198, 202, 134, 62, 69, 116, 231, 61, 99, 142, 146, 62, 138, 210, 26, 192, 40, 44, 99, 189, 168, 6, 61, 191, 195, 95, 47, 191, 1, 116, 88, 191, 14, 86, 132, 190, 58, 225, 177, 62, 206, 86, 222, 189, 121, 43, 177, 61, 92, 211, 229, 190, 115, 234, 146, 190, 125, 192, 151, 188, 48, 91, 86, 62, 222, 0, 133, 190, 4, 178, 131, 61, 109, 172, 132, 190, 58, 96, 119, 190, 58, 14, 30, 190, 15, 107, 1, 191, 112, 251, 112, 190, 198, 82, 104, 188, 150, 225, 195, 188, 139, 250, 11, 63, 14, 16, 165, 59, 117, 137, 33, 62, 84, 93, 24, 191, 55, 241, 134, 190, 187, 2, 130, 62, 213, 5, 207, 191, 124, 0, 210, 62, 79, 172, 119, 190, 74, 36, 184, 61, 174, 220, 116, 191, 99, 81, 0, 190, 246, 236, 87, 59, 220, 181, 228, 61, 185, 36, 53, 190, 45, 216, 18, 62, 86, 23, 197, 62, 141, 76, 246, 61, 245, 13, 46, 190, 8, 131, 133, 191, 41, 56, 140, 62, 240, 206, 227, 61, 152, 51, 224, 188, 135, 166, 134, 190, 70, 51, 239, 60, 188, 28, 106, 190, 216, 98, 16, 190, 141, 244, 19, 189, 24, 72, 57, 61, 233, 66, 163, 190, 229, 71, 144, 190, 218, 76, 230, 189, 156, 32, 53, 63, 216, 184, 105, 189, 206, 19, 42, 61, 48, 210, 218, 189, 155, 105, 221, 190, 31, 129, 48, 62, 250, 68, 25, 191, 145, 93, 216, 62, 31, 129, 0, 61, 149, 210, 91, 190, 218, 63, 5, 191, 187, 52, 77, 188, 42, 132, 134, 190, 26, 250, 20, 62, 33, 19, 131, 62, 243, 247, 142, 190, 46, 33, 24, 190, 104, 201, 2, 189, 240, 182, 27, 188, 231, 38, 67, 191, 11, 194, 175, 189, 39, 60, 206, 187, 162, 30, 36, 62, 253, 103, 29, 62, 19, 243, 219, 61, 93, 238, 36, 62, 230, 191, 24, 190, 159, 69, 13, 62, 159, 65, 137, 61, 215, 77, 134, 62, 31, 60, 68, 190, 66, 93, 14, 62, 183, 1, 232, 62, 22, 121, 180, 62, 240, 49, 12, 190, 241, 109, 223, 189, 167, 122, 58, 190, 157, 154, 192, 189, 173, 92, 203, 190, 33, 13, 166, 62, 87, 214, 187, 61, 158, 22, 2, 190, 71, 243, 217, 61, 10, 130, 42, 190, 139, 43, 36, 62, 73, 198, 33, 61, 62, 38, 237, 189, 241, 75, 6, 190, 9, 231, 239, 189, 112, 70, 100, 190, 152, 74, 53, 190, 210, 223, 95, 60, 100, 106, 17, 189, 154, 1, 79, 190, 158, 206, 253, 187, 180, 252, 133, 61, 16, 244, 152, 61, 167, 252, 16, 62, 92, 20, 238, 189, 229, 90, 49, 190, 104, 30, 27, 190, 16, 107, 182, 188, 50, 254, 80, 189, 27, 216, 213, 188, 193, 73, 111, 190, 101, 90, 1, 189, 124, 242, 17, 62, 247, 63, 48, 188, 182, 92, 48, 189, 53, 99, 1, 62, 176, 44, 9, 190, 231, 178, 64, 190, 121, 223, 197, 61, 211, 6, 204, 190, 224, 219, 8, 192, 198, 96, 113, 60, 150, 247, 123, 62, 105, 182, 244, 190, 88, 109, 162, 190, 219, 237, 240, 190, 80, 99, 136, 190, 140, 75, 71, 190, 199, 82, 148, 190, 16, 53, 207, 189, 36, 36, 105, 62, 156, 83, 76, 62, 162, 46, 39, 191, 225, 123, 178, 190, 110, 127, 2, 62, 46, 194, 45, 62, 199, 40, 35, 62, 28, 107, 41, 190, 22, 90, 70, 61, 254, 163, 21, 190, 144, 25, 222, 189, 78, 53, 244, 60, 142, 18, 44, 191, 200, 213, 132, 62, 84, 46, 37, 61, 163, 225, 1, 191, 209, 245, 5, 63, 71, 211, 123, 191, 68, 217, 22, 62, 230, 121, 136, 190, 215, 246, 9, 191, 181, 168, 140, 189, 102, 12, 227, 60, 210, 182, 38, 190, 127, 89, 19, 190, 135, 14, 32, 190, 85, 210, 252, 189, 42, 123, 15, 190, 190, 246, 81, 61, 222, 26, 145, 189, 151, 247, 44, 189, 0, 8, 25, 190, 8, 72, 147, 189, 229, 39, 3, 62, 241, 97, 234, 189, 56, 163, 15, 190, 229, 184, 43, 189, 63, 201, 18, 60, 233, 102, 27, 189, 126, 126, 29, 62, 22, 5, 11, 62, 196, 6, 181, 189, 113, 150, 247, 60, 236, 164, 197, 189, 12, 32, 2, 62, 245, 214, 117, 189, 152, 180, 113, 189, 62, 232, 134, 189, 103, 144, 21, 190, 71, 194, 177, 189, 194, 132, 202, 188, 71, 178, 141, 189, 53, 30, 240, 185, 111, 51, 195, 189, 166, 6, 123, 62, 31, 228, 217, 62, 154, 78, 191, 190, 206, 174, 54, 62, 40, 177, 160, 189, 90, 63, 117, 60, 251, 243, 203, 62, 173, 149, 129, 62, 116, 127, 151, 62, 149, 168, 31, 62, 241, 160, 125, 61, 150, 128, 200, 61, 198, 179, 184, 188, 197, 200, 238, 62, 230, 253, 69, 190, 11, 82, 158, 191, 29, 35, 144, 62, 180, 180, 50, 61, 212, 48, 63, 62, 71, 102, 227, 189, 82, 116, 179, 61, 168, 232, 137, 190, 114, 166, 144, 190, 204, 139, 214, 190, 49, 178, 160, 62, 115, 175, 188, 61, 77, 144, 233, 185, 67, 185, 209, 62, 222, 13, 141, 190, 140, 251, 211, 61, 204, 46, 242, 61, 199, 185, 138, 190, 100, 135, 7, 61, 38, 177, 171, 188, 131, 131, 152, 61, 78, 197, 198, 61, 187, 26, 130, 62, 86, 142, 137, 62, 167, 203, 176, 61, 113, 84, 151, 188, 76, 108, 58, 62, 121, 219, 24, 190, 127, 99, 236, 61, 85, 123, 17, 189, 208, 179, 20, 190, 37, 92, 251, 61, 10, 22, 253, 189, 118, 253, 210, 61, 155, 65, 26, 190, 98, 88, 136, 61, 164, 19, 7, 60, 57, 198, 27, 61, 77, 207, 221, 60, 123, 107, 165, 61, 129, 234, 108, 190, 224, 142, 150, 62, 252, 188, 194, 187, 39, 153, 232, 187, 12, 141, 146, 190, 136, 51, 137, 190, 246, 181, 235, 61, 66, 154, 91, 62, 225, 10, 120, 61, 18, 238, 218, 62, 115, 19, 182, 189, 213, 247, 163, 190, 174, 34, 117, 191, 40, 159, 15, 62, 7, 83, 240, 61, 73, 228, 4, 191, 39, 175, 21, 190, 232, 206, 150, 59, 211, 124, 39, 190, 125, 229, 60, 61, 80, 221, 140, 190, 216, 251, 52, 189, 67, 73, 44, 62, 225, 103, 169, 62, 153, 50, 92, 61, 151, 248, 146, 190, 55, 245, 60, 190, 115, 75, 183, 61, 154, 51, 154, 190, 146, 248, 27, 61, 112, 144, 143, 190, 109, 225, 164, 62, 231, 79, 115, 61, 40, 219, 53, 61, 128, 17, 0, 191, 225, 84, 40, 62, 199, 10, 194, 62, 103, 135, 246, 190, 99, 65, 163, 190, 136, 222, 65, 62, 209, 252, 181, 61, 241, 237, 123, 61, 223, 4, 247, 189, 182, 2, 250, 61, 26, 177, 151, 62, 110, 160, 79, 187, 163, 12, 115, 190, 114, 220, 161, 60, 235, 188, 135, 60, 117, 161, 30, 62, 206, 246, 57, 190, 20, 226, 42, 191, 185, 97, 105, 62, 19, 80, 171, 60, 100, 239, 204, 60, 205, 184, 17, 190, 1, 102, 237, 61, 196, 137, 19, 188, 144, 161, 83, 59, 31, 252, 233, 60, 250, 255, 159, 60, 194, 86, 237, 189, 112, 75, 178, 189, 14, 115, 11, 190, 43, 69, 6, 62, 26, 106, 81, 62, 51, 250, 60, 62, 247, 129, 134, 61, 82, 132, 10, 191, 97, 11, 89, 189, 35, 211, 97, 61, 243, 83, 108, 61, 236, 69, 7, 62, 198, 208, 192, 190, 226, 126, 40, 62, 169, 88, 174, 189, 12, 228, 164, 190, 76, 79, 57, 62, 200, 60, 46, 62, 124, 55, 18, 62, 140, 64, 252, 189, 222, 65, 219, 58, 165, 194, 219, 188, 184, 255, 60, 61, 16, 55, 139, 59, 130, 90, 229, 188, 235, 225, 211, 189, 60, 40, 142, 189, 153, 127, 52, 61, 166, 55, 203, 62, 143, 208, 55, 190, 144, 207, 214, 60, 114, 163, 183, 190, 61, 133, 147, 189, 6, 68, 213, 189, 83, 91, 21, 62, 193, 76, 151, 190, 174, 93, 36, 62, 11, 105, 205, 189, 113, 143, 50, 62, 46, 24, 135, 187, 200, 81, 12, 191, 107, 174, 99, 62, 211, 104, 6, 61, 227, 96, 6, 62, 174, 139, 41, 190, 138, 39, 8, 192, 120, 47, 25, 189, 182, 244, 36, 62, 182, 135, 203, 190, 19, 138, 68, 62, 117, 212, 6, 190, 17, 232, 159, 59, 158, 93, 74, 62, 119, 109, 62, 191, 154, 145, 171, 190, 216, 170, 169, 61, 201, 34, 141, 61, 74, 58, 72, 62, 129, 249, 24, 191, 170, 53, 58, 62, 114, 23, 121, 62, 127, 63, 34, 60, 105, 12, 191, 61, 187, 43, 182, 190, 171, 168, 41, 190, 120, 80, 172, 190, 241, 12, 152, 191, 254, 242, 122, 62, 117, 31, 218, 188, 34, 240, 31, 190, 17, 140, 22, 191, 193, 249, 98, 190, 70, 67, 156, 189, 74, 94, 129, 62, 164, 29, 40, 190, 83, 164, 54, 191, 165, 211, 192, 189, 19, 45, 131, 61, 15, 126, 139, 189, 169, 143, 98, 61, 73, 155, 25, 62, 150, 81, 0, 189, 109, 23, 175, 189, 77, 74, 97, 189, 4, 184, 235, 61, 69, 166, 21, 62, 125, 16, 153, 61, 180, 208, 58, 189, 245, 183, 76, 189, 49, 209, 219, 60, 163, 222, 24, 190, 216, 213, 215, 61, 59, 30, 38, 189, 174, 15, 191, 60, 203, 78, 210, 189, 188, 88, 23, 62, 180, 94, 144, 186, 69, 100, 2, 190, 88, 207, 145, 189, 199, 246, 46, 190, 203, 130, 13, 190, 134, 213, 13, 190, 156, 156, 14, 190, 245, 233, 51, 190, 53, 221, 131, 189, 3, 229, 160, 61, 139, 190, 8, 190, 204, 235, 32, 189, 86, 50, 94, 63, 1, 65, 106, 190, 87, 99, 5, 190, 164, 38, 171, 62, 204, 31, 161, 190, 237, 102, 8, 190, 24, 40, 52, 61, 119, 79, 143, 190, 208, 173, 163, 190, 210, 43, 172, 191, 109, 152, 83, 191, 134, 233, 7, 191, 33, 158, 202, 190, 152, 60, 57, 191, 13, 118, 6, 190, 41, 6, 252, 190, 191, 6, 87, 62, 226, 139, 214, 61, 21, 162, 135, 61, 238, 225, 237, 187, 201, 1, 29, 189, 86, 188, 9, 192, 112, 171, 248, 190, 66, 94, 202, 190, 232, 35, 203, 188, 148, 47, 231, 191, 71, 84, 93, 191, 125, 87, 71, 190, 145, 1, 206, 190, 49, 23, 182, 62, 123, 178, 13, 191, 123, 65, 251, 190, 183, 172, 208, 61, 211, 18, 130, 188, 111, 56, 96, 190, 53, 224, 173, 61, 123, 164, 87, 62, 193, 246, 199, 190, 153, 138, 144, 61, 124, 248, 135, 62, 8, 197, 230, 62, 65, 49, 200, 188, 144, 29, 76, 191, 135, 195, 6, 63, 251, 169, 191, 62, 162, 242, 37, 189, 222, 98, 123, 62, 73, 238, 206, 190, 215, 178, 0, 191, 24, 74, 165, 190, 107, 129, 130, 189, 255, 118, 140, 62, 127, 246, 13, 191, 4, 181, 109, 190, 67, 106, 192, 189, 59, 58, 135, 62, 191, 167, 49, 60, 239, 177, 237, 61, 118, 89, 208, 59, 16, 172, 86, 191, 188, 39, 6, 190, 209, 173, 151, 190, 105, 37, 173, 62, 210, 182, 93, 189, 235, 218, 37, 190, 116, 138, 162, 191, 113, 86, 130, 60, 21, 62, 240, 61, 187, 204, 211, 190, 117, 6, 127, 62, 12, 249, 210, 191, 63, 24, 178, 190, 57, 70, 197, 189, 53, 254, 231, 189, 115, 226, 216, 62, 189, 6, 60, 189, 80, 19, 37, 190, 19, 44, 186, 62, 79, 216, 181, 190, 194, 103, 56, 62, 16, 157, 135, 61, 221, 25, 33, 187, 78, 60, 130, 60, 221, 141, 0, 62, 140, 59, 160, 61, 91, 98, 114, 190, 4, 154, 175, 62, 2, 71, 237, 189, 143, 42, 58, 62, 6, 143, 248, 60, 157, 23, 164, 189, 145, 82, 171, 62, 75, 47, 63, 191, 16, 23, 95, 62, 50, 109, 117, 190, 171, 93, 225, 61, 122, 125, 182, 190, 35, 143, 73, 61, 23, 235, 53, 189, 128, 38, 184, 190, 46, 90, 79, 62, 190, 2, 61, 62, 249, 62, 29, 187, 103, 111, 140, 188, 90, 53, 25, 60, 119, 40, 139, 189, 234, 59, 226, 189, 243, 202, 218, 62, 94, 129, 128, 189, 104, 16, 37, 190, 114, 243, 89, 61, 232, 49, 46, 62, 219, 101, 156, 61, 29, 109, 128, 59, 160, 94, 48, 60, 112, 69, 145, 189, 56, 178, 128, 189, 146, 115, 122, 61, 200, 225, 157, 61, 85, 227, 107, 190, 168, 204, 244, 188, 110, 165, 18, 189, 107, 189, 162, 188, 31, 214, 153, 60, 93, 39, 176, 189, 241, 24, 153, 61, 221, 11, 155, 62, 217, 191, 6, 190, 106, 168, 63, 62, 118, 76, 167, 190, 102, 9, 9, 191, 113, 3, 152, 191, 149, 154, 211, 187, 146, 97, 150, 61, 7, 241, 58, 191, 185, 178, 43, 190, 101, 50, 170, 60, 157, 205, 129, 190, 161, 97, 161, 190, 143, 187, 49, 190, 8, 221, 144, 62, 220, 162, 179, 62, 116, 24, 12, 61, 173, 145, 201, 61, 95, 160, 243, 62, 178, 206, 55, 190, 152, 175, 139, 61, 161, 250, 232, 189, 242, 16, 54, 190, 37, 246, 33, 190, 182, 186, 13, 63, 167, 186, 17, 62, 184, 74, 66, 62, 250, 157, 45, 191, 158, 246, 212, 189, 230, 63, 145, 62, 62, 201, 185, 191, 40, 7, 211, 61, 48, 177, 142, 61, 149, 164, 171, 61, 158, 172, 3, 63, 201, 43, 71, 61, 156, 91, 27, 191, 222, 241, 96, 62, 10, 33, 113, 60, 189, 87, 235, 188, 99, 159, 19, 62, 127, 44, 244, 61, 162, 187, 171, 62, 6, 152, 208, 190, 3, 174, 106, 190, 246, 45, 56, 62, 109, 4, 99, 188, 36, 50, 8, 189, 171, 113, 33, 190, 54, 98, 18, 191, 5, 75, 203, 61, 48, 195, 145, 191, 135, 69, 200, 61, 220, 192, 1, 61, 223, 78, 149, 190, 131, 68, 93, 191, 117, 230, 2, 190, 2, 41, 149, 62, 216, 199, 184, 189, 19, 17, 209, 61, 171, 21, 32, 62, 139, 189, 177, 190, 170, 24, 222, 61, 184, 228, 228, 189, 153, 57, 171, 62, 187, 13, 110, 189, 186, 124, 100, 63, 129, 88, 106, 62, 122, 253, 149, 190, 75, 77, 158, 62, 251, 81, 220, 61, 244, 222, 217, 190, 54, 3, 21, 61, 205, 117, 131, 62, 168, 183, 199, 61, 185, 37, 195, 191, 145, 209, 195, 190, 143, 183, 162, 62, 107, 86, 148, 62, 76, 37, 62, 190, 239, 154, 145, 62, 11, 138, 14, 191, 225, 248, 30, 63, 29, 167, 8, 191, 174, 187, 1, 190, 149, 149, 38, 63, 247, 26, 148, 190, 35, 141, 182, 191, 76, 10, 160, 189, 229, 247, 237, 189, 138, 33, 126, 190, 47, 51, 130, 191, 11, 108, 118, 61, 189, 250, 36, 191, 234, 59, 80, 190, 90, 174, 172, 62, 45, 184, 3, 62, 190, 200, 203, 189, 249, 232, 193, 61, 14, 185, 80, 188, 82, 13, 17, 62, 248, 237, 157, 189, 8, 142, 145, 61, 182, 241, 30, 190, 188, 251, 216, 61, 217, 36, 41, 190, 247, 52, 149, 189, 181, 108, 240, 189, 65, 88, 1, 62, 171, 25, 17, 190, 115, 251, 243, 187, 90, 168, 140, 60, 4, 67, 161, 61, 64, 250, 82, 61, 243, 219, 29, 190, 165, 152, 239, 189, 239, 55, 22, 190, 121, 107, 7, 62, 109, 97, 8, 190, 148, 165, 162, 189, 22, 215, 212, 189, 169, 131, 3, 190, 177, 136, 229, 189, 223, 255, 85, 61, 116, 168, 3, 190, 152, 46, 132, 59, 7, 149, 173, 189, 213, 151, 46, 189, 72, 141, 212, 189, 93, 8, 238, 61, 97, 249, 51, 190, 249, 9, 18, 61, 48, 63, 29, 189, 116, 45, 41, 190, 197, 122, 177, 189, 128, 182, 21, 62, 136, 89, 96, 61, 237, 92, 182, 189, 76, 47, 129, 60, 198, 120, 162, 61, 26, 1, 41, 62, 122, 228, 199, 189, 92, 234, 33, 190, 231, 33, 140, 189, 61, 55, 141, 189, 71, 6, 45, 61, 232, 132, 6, 190, 87, 248, 144, 61, 146, 247, 136, 61, 12, 200, 162, 61, 255, 108, 185, 189, 228, 199, 111, 188, 113, 126, 32, 190, 43, 108, 123, 189, 24, 10, 92, 188, 44, 196, 93, 189, 237, 138, 168, 189, 72, 192, 84, 189, 152, 229, 76, 189, 79, 222, 54, 190, 136, 219, 17, 61, 17, 184, 192, 189, 53, 1, 201, 190, 128, 224, 188, 62, 88, 111, 190, 61, 93, 6, 238, 62, 248, 167, 124, 191, 225, 24, 128, 191, 55, 125, 163, 62, 203, 22, 15, 61, 40, 80, 208, 190, 229, 144, 43, 190, 167, 217, 189, 62, 161, 226, 251, 61, 255, 112, 140, 190, 193, 246, 202, 190, 232, 34, 45, 191, 251, 245, 183, 190, 115, 36, 251, 61, 116, 59, 173, 61, 181, 67, 6, 190, 13, 122, 241, 62, 48, 200, 125, 191, 91, 84, 92, 62, 176, 17, 119, 62, 10, 252, 46, 191, 253, 156, 132, 61, 95, 105, 133, 62, 109, 140, 35, 190, 101, 168, 101, 61, 13, 145, 129, 61, 183, 13, 237, 62, 50, 78, 15, 190, 80, 27, 222, 190, 249, 219, 192, 190, 57, 169, 30, 192, 57, 224, 21, 62, 20, 184, 28, 62, 192, 169, 193, 190, 0, 132, 106, 190, 192, 46, 54, 191, 59, 152, 30, 190, 59, 212, 43, 187, 2, 233, 42, 61, 138, 94, 16, 190, 196, 246, 32, 62, 22, 195, 61, 62, 61, 142, 22, 191, 34, 34, 209, 190, 12, 30, 172, 61, 18, 246, 93, 62, 53, 224, 26, 189, 150, 182, 206, 189, 221, 39, 35, 62, 9, 206, 157, 190, 231, 27, 128, 190, 229, 15, 77, 61, 174, 223, 28, 191, 147, 106, 170, 62, 83, 160, 56, 62, 147, 193, 128, 190, 69, 218, 91, 62, 209, 97, 185, 191, 93, 57, 111, 62, 218, 146, 189, 189, 137, 56, 193, 190, 104, 22, 31, 190, 149, 66, 11, 189, 60, 76, 35, 191, 158, 250, 32, 191, 250, 105, 35, 189, 16, 82, 111, 62, 124, 179, 127, 190, 197, 5, 176, 189, 244, 172, 151, 188, 50, 33, 114, 189, 42, 54, 84, 62, 23, 190, 241, 60, 34, 207, 29, 189, 65, 117, 215, 189, 108, 60, 107, 61, 9, 85, 253, 62, 105, 4, 36, 190, 220, 103, 153, 190, 0, 180, 125, 61, 147, 150, 21, 189, 30, 86, 168, 61, 255, 226, 52, 190, 47, 31, 18, 62, 236, 182, 95, 190, 199, 89, 136, 61, 92, 78, 167, 190, 166, 120, 163, 189, 186, 120, 217, 61, 107, 132, 186, 190, 185, 145, 87, 190, 195, 145, 70, 61, 126, 187, 215, 61, 113, 114, 32, 191, 216, 168, 197, 191, 203, 191, 144, 59, 12, 178, 161, 61, 234, 112, 220, 190, 96, 139, 109, 189, 86, 91, 114, 190, 86, 244, 110, 62, 2, 135, 45, 62, 111, 60, 56, 191, 234, 94, 131, 190, 101, 135, 135, 61, 171, 200, 137, 62, 163, 51, 140, 188, 62, 104, 18, 191, 41, 96, 93, 190, 91, 212, 202, 190, 243, 97, 67, 190, 224, 162, 41, 60, 232, 203, 90, 190, 155, 103, 221, 188, 49, 240, 147, 190, 167, 55, 7, 186, 15, 31, 242, 62, 143, 17, 204, 190, 126, 131, 83, 61, 165, 24, 7, 191, 197, 50, 145, 190, 139, 33, 41, 63, 134, 193, 156, 188, 70, 35, 16, 61, 51, 71, 156, 190, 208, 23, 11, 189, 154, 163, 147, 61, 91, 192, 186, 61, 191, 103, 46, 190, 57, 212, 144, 188, 172, 209, 234, 189, 235, 57, 139, 189, 182, 180, 130, 60, 61, 172, 174, 189, 22, 45, 235, 187, 152, 194, 156, 189, 222, 170, 124, 189, 72, 30, 108, 188, 177, 173, 188, 60, 205, 150, 225, 189, 232, 138, 48, 190, 92, 231, 73, 190, 209, 7, 154, 188, 66, 84, 247, 189, 220, 238, 154, 188, 15, 138, 120, 60, 251, 34, 22, 189, 218, 111, 142, 189, 35, 196, 22, 62, 100, 121, 19, 61, 120, 60, 52, 190, 101, 46, 32, 61, 111, 173, 21, 61, 149, 200, 169, 62, 242, 190, 229, 61, 245, 73, 61, 60, 189, 61, 10, 61};
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
                alignas(float) const unsigned char memory[] = {254, 112, 0, 190, 207, 164, 161, 62, 90, 107, 249, 61, 125, 79, 103, 62, 125, 10, 188, 62, 3, 99, 200, 59, 20, 136, 19, 187, 239, 66, 238, 61, 141, 132, 137, 189, 133, 22, 242, 61, 69, 241, 148, 189, 25, 191, 141, 190, 27, 154, 214, 62, 154, 43, 110, 190, 248, 34, 146, 62, 161, 84, 184, 62, 107, 107, 149, 190, 96, 5, 31, 190, 193, 19, 51, 62, 192, 246, 171, 62, 237, 44, 171, 62, 230, 172, 38, 62, 82, 129, 35, 62, 154, 97, 143, 62, 5, 73, 122, 62, 18, 150, 32, 189, 12, 110, 32, 61, 165, 233, 21, 190, 213, 164, 186, 62, 2, 8, 12, 190, 225, 61, 0, 189, 152, 83, 127, 190};
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
                alignas(float) const unsigned char memory[] = {152, 235, 112, 61, 168, 116, 158, 190, 67, 42, 109, 190, 98, 210, 254, 62, 226, 92, 29, 63, 138, 219, 37, 63, 132, 25, 2, 63, 73, 241, 222, 188, 226, 228, 81, 61, 197, 17, 128, 191, 35, 90, 172, 187, 29, 140, 196, 190, 53, 214, 176, 60, 233, 80, 212, 190, 52, 86, 209, 61, 9, 98, 152, 61, 125, 53, 102, 191, 124, 179, 192, 189, 44, 36, 198, 63, 45, 206, 50, 63, 40, 183, 33, 191, 39, 91, 65, 60, 69, 195, 67, 191, 107, 199, 30, 62, 67, 207, 136, 63, 6, 199, 50, 62, 91, 176, 9, 62, 10, 186, 63, 191, 48, 235, 194, 191, 250, 239, 116, 189, 106, 180, 113, 191, 54, 190, 6, 190, 212, 197, 200, 61, 143, 250, 59, 188, 205, 35, 62, 62, 155, 203, 122, 191, 50, 207, 167, 190, 204, 1, 145, 189, 182, 252, 149, 61, 164, 100, 19, 191, 135, 239, 244, 60, 3, 133, 189, 62, 55, 135, 23, 62, 206, 46, 16, 61, 196, 185, 163, 190, 246, 84, 51, 62, 36, 187, 146, 189, 161, 173, 122, 190, 147, 214, 54, 62, 87, 159, 135, 61, 124, 53, 128, 62, 93, 90, 39, 62, 112, 199, 30, 190, 128, 43, 172, 190, 59, 130, 29, 190, 176, 235, 186, 190, 120, 204, 190, 62, 142, 232, 56, 55, 68, 0, 52, 190, 48, 183, 18, 61, 242, 12, 72, 62, 156, 27, 164, 189, 123, 171, 86, 62, 181, 210, 147, 61};
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
                alignas(float) const unsigned char memory[] = {38, 11, 148, 62, 195, 16, 148, 190};
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
    alignas(float) const unsigned char memory[] = {166, 62, 5, 63, 233, 216, 24, 62, 168, 159, 108, 61};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {182, 46, 146, 191, 80, 156, 196, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0028/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}