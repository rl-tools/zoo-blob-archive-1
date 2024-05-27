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
                alignas(float) const unsigned char memory[] = {120, 131, 77, 191, 225, 120, 30, 189, 183, 160, 58, 191, 155, 209, 22, 191, 66, 215, 214, 191, 5, 141, 165, 190, 199, 220, 49, 63, 185, 185, 1, 63, 89, 70, 0, 63, 68, 189, 12, 63, 56, 40, 128, 190, 217, 121, 75, 190, 201, 29, 191, 190, 51, 231, 33, 191, 2, 122, 14, 191, 169, 149, 151, 188, 255, 2, 163, 191, 196, 176, 184, 62, 59, 103, 168, 189, 175, 151, 194, 191, 157, 223, 247, 190, 41, 95, 189, 189, 75, 233, 50, 62, 226, 102, 44, 191, 126, 152, 74, 191, 62, 168, 8, 62, 232, 85, 251, 190, 2, 15, 55, 63, 149, 247, 123, 63, 61, 147, 225, 61, 209, 108, 64, 190, 168, 252, 166, 63, 42, 248, 193, 62, 12, 175, 232, 189, 126, 206, 184, 190, 252, 47, 215, 62, 18, 64, 120, 190, 5, 59, 151, 63, 160, 136, 58, 63, 40, 116, 146, 189, 153, 78, 137, 61, 145, 105, 150, 188, 241, 10, 99, 62, 169, 70, 118, 63, 181, 137, 151, 62, 113, 51, 40, 191, 192, 225, 137, 63, 105, 154, 8, 188, 235, 133, 214, 62, 172, 17, 152, 191, 225, 87, 151, 190, 201, 18, 176, 62, 21, 97, 154, 191, 141, 106, 188, 62, 33, 208, 179, 191, 220, 37, 168, 190, 138, 100, 197, 189, 167, 18, 61, 62, 236, 32, 245, 62, 92, 33, 11, 63, 188, 36, 45, 63, 136, 197, 44, 63, 245, 199, 186, 62, 49, 230, 15, 63, 44, 136, 4, 63, 253, 41, 38, 190, 121, 61, 38, 63, 90, 42, 83, 191, 127, 123, 249, 189, 117, 42, 17, 191, 29, 32, 216, 62, 182, 138, 22, 63, 186, 125, 29, 62, 230, 70, 181, 189, 105, 186, 57, 190, 106, 212, 21, 190, 219, 193, 127, 191, 152, 233, 64, 190, 204, 216, 89, 190, 61, 149, 227, 62, 31, 14, 126, 58, 251, 177, 232, 62, 9, 50, 49, 63, 99, 193, 121, 60, 107, 244, 65, 63, 102, 213, 108, 63, 102, 192, 125, 62, 138, 64, 3, 63, 140, 132, 31, 63, 94, 34, 17, 63, 3, 10, 2, 63, 232, 116, 174, 191, 212, 149, 197, 190, 51, 52, 18, 61, 195, 121, 192, 191, 98, 149, 2, 191};
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
                alignas(float) const unsigned char memory[] = {150, 82, 13, 191, 164, 151, 219, 189, 212, 92, 214, 190, 24, 75, 68, 191, 169, 108, 117, 62, 80, 65, 42, 62, 191, 18, 3, 62, 238, 254, 221, 190, 210, 205, 2, 191, 240, 132, 8, 191, 100, 30, 94, 190, 105, 217, 189, 62, 53, 39, 133, 61, 89, 243, 170, 62, 102, 172, 131, 189, 43, 204, 173, 62, 141, 136, 17, 190, 157, 201, 186, 189, 145, 19, 178, 188, 92, 222, 75, 190, 10, 99, 7, 191, 136, 150, 48, 63, 128, 59, 21, 63, 186, 126, 63, 190, 56, 162, 15, 63, 1, 114, 93, 62, 223, 133, 6, 191, 131, 10, 186, 60, 116, 41, 120, 190, 41, 250, 227, 189, 162, 174, 227, 190, 196, 102, 248, 189};
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
                alignas(float) const unsigned char memory[] = {45, 213, 31, 189, 118, 185, 120, 190, 177, 11, 12, 62, 44, 25, 52, 62, 223, 240, 8, 190, 188, 26, 185, 61, 49, 170, 230, 60, 1, 4, 212, 61, 168, 74, 17, 61, 221, 102, 20, 191, 234, 82, 247, 60, 254, 143, 59, 190, 116, 89, 215, 60, 69, 1, 64, 190, 233, 72, 130, 189, 87, 195, 14, 191, 9, 132, 19, 190, 114, 109, 156, 61, 196, 23, 191, 190, 126, 105, 241, 188, 226, 90, 139, 188, 22, 196, 213, 190, 125, 80, 7, 190, 163, 245, 34, 61, 131, 205, 158, 190, 251, 185, 204, 190, 86, 20, 16, 62, 157, 109, 205, 190, 230, 190, 63, 62, 164, 248, 153, 189, 81, 97, 255, 61, 16, 59, 138, 189, 246, 253, 77, 62, 250, 95, 99, 190, 71, 180, 51, 61, 37, 7, 164, 61, 149, 66, 217, 60, 180, 61, 149, 61, 175, 180, 79, 190, 111, 216, 81, 62, 227, 224, 18, 190, 14, 233, 44, 190, 74, 205, 243, 190, 16, 67, 37, 62, 15, 188, 47, 190, 137, 95, 22, 62, 8, 112, 28, 191, 154, 169, 211, 190, 38, 2, 142, 190, 42, 179, 33, 62, 211, 215, 106, 190, 141, 250, 7, 59, 73, 9, 56, 191, 36, 179, 46, 62, 160, 82, 134, 62, 128, 82, 156, 62, 47, 212, 214, 188, 4, 134, 5, 62, 57, 48, 176, 60, 81, 119, 163, 61, 13, 56, 76, 60, 219, 41, 22, 189, 26, 66, 161, 190, 187, 200, 11, 190, 212, 249, 143, 189, 250, 159, 189, 189, 29, 0, 179, 188, 17, 29, 24, 190, 91, 221, 222, 61, 208, 123, 109, 189, 134, 166, 194, 190, 8, 119, 158, 59, 228, 83, 255, 61, 222, 212, 217, 61, 206, 66, 168, 189, 65, 225, 130, 61, 149, 51, 129, 61, 215, 116, 12, 62, 182, 158, 154, 189, 238, 53, 65, 60, 13, 183, 146, 190, 230, 118, 222, 190, 70, 7, 119, 190, 172, 85, 168, 61, 102, 24, 138, 62, 61, 188, 4, 62, 193, 62, 98, 189, 153, 78, 31, 190, 2, 121, 199, 61, 147, 40, 29, 190, 151, 210, 214, 189, 231, 192, 204, 61, 18, 205, 215, 62, 204, 77, 112, 62, 69, 21, 247, 190, 193, 114, 84, 190, 98, 236, 135, 190, 28, 177, 1, 191, 51, 199, 82, 61, 140, 2, 22, 62, 83, 121, 3, 191, 129, 39, 133, 62, 74, 147, 21, 191, 160, 15, 134, 190, 74, 1, 234, 61, 105, 56, 17, 191, 68, 42, 253, 189, 221, 12, 129, 62, 55, 124, 61, 61, 197, 22, 31, 61, 28, 152, 150, 190, 252, 101, 236, 190, 148, 149, 147, 191, 154, 79, 231, 62, 250, 31, 82, 62, 193, 113, 157, 190, 127, 175, 253, 190, 153, 250, 236, 58, 171, 226, 156, 189, 226, 92, 5, 190, 14, 8, 138, 189, 50, 90, 187, 191, 90, 236, 131, 61, 54, 154, 13, 61, 23, 8, 66, 190, 120, 159, 30, 190, 253, 174, 114, 191, 195, 25, 160, 190, 84, 246, 58, 190, 168, 137, 28, 191, 0, 9, 173, 61, 102, 121, 27, 62, 213, 121, 214, 61, 143, 148, 240, 186, 37, 61, 111, 188, 11, 158, 115, 61, 220, 203, 139, 61, 230, 94, 0, 190, 201, 131, 227, 61, 226, 69, 86, 62, 233, 122, 133, 60, 97, 112, 81, 62, 170, 51, 61, 190, 93, 243, 25, 62, 228, 108, 65, 190, 117, 5, 151, 61, 212, 101, 96, 62, 84, 231, 98, 62, 100, 89, 218, 190, 216, 217, 153, 62, 76, 104, 98, 60, 248, 233, 42, 190, 117, 0, 26, 62, 111, 43, 59, 189, 86, 88, 117, 189, 80, 93, 63, 62, 216, 228, 207, 190, 242, 39, 20, 190, 248, 207, 155, 190, 152, 41, 140, 189, 123, 120, 176, 61, 187, 227, 125, 61, 219, 209, 41, 190, 210, 100, 219, 189, 139, 41, 63, 190, 38, 53, 49, 60, 1, 239, 48, 190, 210, 194, 63, 61, 183, 105, 214, 61, 149, 35, 15, 190, 132, 245, 3, 61, 21, 171, 49, 188, 83, 214, 216, 188, 114, 20, 0, 61, 101, 86, 238, 189, 50, 29, 70, 189, 58, 98, 27, 190, 162, 0, 240, 189, 123, 145, 245, 187, 124, 211, 35, 190, 131, 132, 255, 189, 62, 52, 172, 189, 111, 113, 128, 59, 184, 196, 246, 188, 69, 210, 178, 189, 54, 41, 32, 60, 227, 2, 2, 189, 129, 210, 132, 60, 45, 236, 24, 62, 12, 221, 28, 188, 201, 234, 198, 189, 49, 62, 135, 189, 77, 160, 41, 191, 49, 210, 194, 62, 144, 64, 248, 61, 166, 147, 143, 61, 227, 70, 201, 190, 158, 185, 105, 61, 15, 255, 136, 60, 30, 237, 132, 190, 231, 24, 170, 190, 38, 92, 174, 190, 228, 29, 45, 188, 187, 46, 11, 190, 132, 80, 161, 188, 99, 197, 237, 61, 82, 162, 124, 190, 84, 65, 82, 60, 30, 143, 32, 62, 48, 201, 25, 62, 216, 207, 81, 191, 74, 245, 113, 190, 226, 12, 168, 189, 230, 196, 245, 61, 170, 78, 232, 60, 118, 59, 245, 60, 59, 219, 51, 189, 32, 228, 204, 189, 109, 138, 230, 61, 73, 91, 92, 190, 214, 110, 110, 62, 164, 142, 136, 61, 102, 38, 167, 62, 186, 203, 35, 62, 225, 135, 0, 190, 161, 237, 135, 61, 240, 10, 230, 187, 94, 25, 223, 60, 120, 191, 8, 190, 129, 241, 32, 190, 107, 186, 170, 189, 105, 141, 51, 61, 53, 159, 89, 189, 210, 207, 206, 61, 217, 28, 190, 61, 179, 141, 221, 61, 113, 7, 165, 188, 50, 84, 80, 190, 223, 176, 164, 189, 203, 244, 39, 189, 155, 206, 173, 60, 5, 237, 87, 190, 225, 60, 118, 61, 22, 228, 71, 189, 186, 85, 0, 188, 234, 76, 49, 190, 129, 113, 1, 62, 11, 34, 16, 60, 106, 124, 7, 62, 210, 89, 220, 189, 103, 37, 207, 61, 250, 25, 154, 61, 246, 2, 150, 188, 242, 155, 224, 188, 191, 162, 46, 190, 15, 56, 93, 189, 164, 84, 189, 190, 128, 54, 23, 62, 44, 187, 178, 61, 122, 249, 146, 190, 212, 245, 181, 190, 195, 79, 141, 62, 207, 48, 111, 189, 255, 111, 42, 190, 229, 211, 78, 60, 144, 134, 15, 190, 44, 227, 1, 62, 58, 49, 127, 62, 214, 140, 82, 62, 66, 142, 56, 62, 47, 100, 19, 190, 14, 7, 130, 59, 170, 136, 158, 62, 54, 1, 143, 62, 62, 49, 246, 190, 83, 212, 154, 62, 101, 90, 173, 187, 204, 221, 163, 188, 87, 133, 166, 62, 33, 146, 53, 189, 66, 214, 110, 189, 30, 134, 120, 190, 97, 138, 157, 61, 71, 98, 110, 190, 228, 90, 176, 62, 103, 122, 17, 190, 91, 191, 23, 63, 7, 146, 66, 62, 226, 238, 2, 190, 46, 107, 197, 61, 71, 150, 193, 62, 83, 154, 206, 190, 6, 34, 81, 61, 132, 244, 156, 62, 100, 221, 167, 189, 250, 178, 163, 61, 73, 234, 0, 62, 111, 66, 118, 62, 72, 251, 173, 191, 203, 246, 39, 190, 132, 4, 160, 190, 154, 14, 222, 189, 95, 134, 63, 189, 229, 221, 38, 188, 19, 207, 154, 191, 26, 243, 113, 190, 8, 198, 7, 61, 215, 48, 39, 191, 248, 231, 132, 62, 113, 10, 65, 60, 122, 149, 62, 190, 12, 209, 75, 61, 172, 88, 2, 62, 30, 216, 7, 191, 118, 43, 178, 188, 157, 107, 135, 62, 110, 54, 60, 62, 73, 15, 40, 61, 54, 197, 127, 191, 251, 118, 62, 190, 97, 176, 5, 189, 157, 160, 246, 190, 203, 94, 176, 189, 177, 47, 83, 61, 238, 182, 154, 189, 246, 206, 234, 60, 222, 99, 80, 190, 249, 148, 106, 190, 62, 137, 90, 188, 71, 8, 15, 191, 127, 189, 31, 190, 56, 72, 166, 60, 129, 36, 87, 189, 155, 223, 147, 189, 33, 236, 45, 191, 145, 135, 37, 190, 4, 13, 9, 188, 86, 124, 161, 62, 23, 245, 73, 62, 180, 255, 83, 189, 159, 197, 53, 191, 172, 115, 160, 61, 194, 33, 174, 61, 95, 50, 15, 190, 95, 203, 25, 59, 27, 223, 34, 61, 92, 63, 25, 189, 40, 217, 239, 60, 47, 211, 168, 190, 131, 66, 133, 188, 200, 222, 187, 190, 103, 1, 99, 189, 43, 97, 14, 62, 148, 150, 69, 60, 145, 224, 152, 62, 7, 45, 82, 191, 212, 203, 62, 62, 70, 212, 202, 61, 239, 41, 72, 61, 156, 32, 146, 189, 2, 157, 21, 189, 89, 131, 80, 62, 87, 175, 171, 191, 255, 200, 200, 61, 231, 16, 40, 191, 69, 208, 23, 62, 52, 109, 45, 190, 29, 71, 222, 190, 24, 86, 203, 190, 187, 204, 152, 190, 129, 153, 43, 62, 214, 208, 129, 191, 236, 25, 12, 188, 130, 130, 133, 62, 71, 133, 92, 189, 250, 1, 22, 62, 222, 216, 183, 60, 44, 2, 4, 190, 239, 130, 2, 62, 212, 82, 47, 62, 226, 54, 177, 62, 112, 184, 106, 62, 222, 97, 161, 190, 193, 3, 89, 191, 11, 211, 31, 191, 57, 54, 53, 191, 145, 58, 170, 190, 213, 211, 54, 63, 196, 123, 212, 190, 40, 55, 21, 191, 0, 224, 15, 190, 168, 56, 22, 191, 80, 233, 135, 191, 241, 138, 158, 190, 180, 121, 228, 62, 153, 24, 43, 61, 223, 87, 50, 62, 79, 137, 14, 61, 109, 27, 11, 190, 244, 74, 70, 63, 118, 41, 104, 62, 197, 42, 39, 62, 149, 246, 70, 62, 76, 228, 213, 188, 47, 253, 154, 190, 162, 205, 134, 62, 124, 76, 140, 62, 75, 174, 7, 191, 43, 125, 135, 62, 111, 21, 48, 189, 90, 46, 224, 189, 209, 252, 246, 190, 219, 187, 240, 190, 7, 169, 0, 190, 109, 252, 212, 189, 209, 62, 193, 62, 16, 123, 151, 188, 245, 173, 196, 62, 118, 149, 128, 62, 50, 220, 19, 61, 128, 151, 75, 61, 232, 138, 19, 61, 54, 169, 70, 62, 55, 194, 207, 61, 169, 198, 233, 61, 247, 40, 42, 62, 40, 135, 148, 190, 8, 20, 39, 62, 67, 28, 252, 190, 145, 221, 214, 61, 80, 75, 54, 62, 249, 80, 21, 190, 12, 23, 121, 62, 163, 178, 146, 190, 54, 236, 88, 60, 161, 171, 90, 191, 68, 48, 212, 61, 171, 179, 202, 189, 196, 228, 121, 188, 186, 216, 67, 62, 29, 6, 195, 61, 85, 9, 131, 62, 1, 122, 65, 189, 216, 249, 144, 190, 82, 50, 118, 62, 128, 31, 246, 61, 38, 19, 185, 62, 137, 214, 160, 61, 96, 154, 204, 190, 49, 93, 162, 191, 51, 136, 99, 58, 251, 244, 40, 63, 90, 145, 106, 190, 248, 227, 101, 190, 184, 201, 157, 190, 251, 81, 111, 190, 73, 243, 76, 191, 87, 203, 62, 62, 68, 62, 113, 62, 241, 0, 246, 189, 255, 37, 201, 189, 132, 139, 190, 62, 52, 81, 133, 62, 135, 238, 127, 62, 209, 237, 61, 189, 200, 179, 168, 189, 205, 190, 130, 190, 142, 92, 174, 190, 48, 65, 5, 62, 94, 8, 236, 62, 9, 57, 35, 61, 118, 108, 224, 190, 204, 179, 56, 62, 6, 144, 55, 61, 85, 100, 160, 61, 229, 217, 62, 62, 14, 74, 22, 62, 249, 62, 214, 60, 160, 87, 190, 62, 180, 1, 54, 63, 161, 57, 198, 189, 115, 235, 177, 62, 202, 127, 196, 62, 162, 210, 86, 191, 33, 172, 92, 62, 148, 118, 171, 61, 175, 132, 233, 187, 42, 226, 232, 61, 51, 165, 30, 62, 87, 32, 163, 189, 4, 243, 77, 191, 143, 180, 17, 62, 36, 205, 166, 190, 247, 53, 138, 62, 75, 79, 211, 60, 181, 111, 155, 62, 91, 187, 68, 190, 61, 213, 49, 191, 214, 143, 153, 62, 255, 42, 191, 190, 114, 230, 99, 62, 222, 126, 26, 61, 111, 53, 240, 61, 57, 166, 228, 62, 65, 65, 8, 189, 13, 199, 214, 188, 234, 89, 193, 61, 69, 92, 29, 190, 105, 67, 232, 62, 103, 188, 214, 62, 159, 236, 242, 190, 134, 245, 11, 191, 7, 248, 105, 191, 184, 205, 70, 191, 68, 151, 188, 189, 175, 145, 14, 61, 171, 192, 46, 191, 228, 81, 157, 189, 10, 63, 73, 191, 118, 191, 55, 191, 46, 181, 27, 191, 32, 252, 9, 190, 114, 32, 185, 62, 68, 255, 208, 60, 83, 46, 9, 62, 246, 226, 60, 62, 113, 104, 215, 189, 212, 184, 8, 63, 253, 63, 50, 62, 131, 251, 128, 62, 11, 31, 24, 61, 78, 246, 64, 62, 73, 209, 60, 191, 69, 231, 184, 62, 100, 116, 35, 62, 63, 92, 157, 190, 248, 16, 177, 61, 163, 24, 78, 61, 208, 152, 217, 61, 48, 166, 189, 190, 40, 94, 181, 190, 152, 54, 213, 189, 42, 16, 147, 189, 37, 51, 79, 62, 179, 228, 56, 190, 58, 116, 0, 191, 164, 92, 59, 62, 43, 110, 132, 61, 5, 89, 159, 190, 165, 26, 145, 190, 32, 248, 9, 191, 148, 51, 250, 189, 241, 132, 90, 190, 24, 27, 105, 191, 52, 100, 58, 62, 98, 107, 122, 62, 7, 237, 164, 62, 27, 193, 209, 189, 5, 133, 82, 190, 170, 165, 31, 189, 99, 167, 8, 63, 147, 160, 82, 61, 96, 133, 127, 61, 168, 128, 105, 62, 21, 15, 79, 190, 243, 238, 0, 190, 125, 208, 142, 62, 42, 73, 13, 188, 253, 28, 233, 189, 37, 109, 155, 62, 252, 162, 40, 61, 100, 216, 66, 191, 77, 66, 182, 190, 98, 182, 5, 190, 48, 108, 32, 190, 153, 169, 40, 190, 38, 188, 138, 189, 159, 140, 211, 61, 205, 164, 30, 190, 140, 73, 132, 61, 214, 210, 162, 189, 100, 213, 70, 190, 164, 29, 255, 60, 36, 143, 6, 188, 86, 16, 93, 61, 119, 111, 0, 62, 210, 174, 6, 62, 139, 153, 0, 190, 219, 115, 12, 189, 80, 236, 120, 190, 167, 224, 237, 61, 201, 45, 216, 190, 27, 212, 223, 188, 200, 244, 105, 190, 55, 66, 4, 190, 245, 151, 154, 189, 211, 130, 198, 61, 139, 155, 34, 190, 169, 197, 39, 188, 227, 135, 30, 61, 224, 85, 218, 189, 148, 93, 83, 188, 201, 9, 42, 62, 17, 3, 26, 190, 184, 48, 31, 190, 236, 189, 112, 61, 96, 214, 157, 188, 122, 171, 236, 61, 208, 89, 125, 190, 8, 161, 37, 191, 20, 189, 188, 189, 130, 240, 226, 190, 250, 122, 216, 190, 83, 3, 204, 61, 51, 180, 222, 191, 193, 13, 113, 190, 206, 42, 109, 190, 184, 154, 153, 190, 237, 186, 138, 190, 195, 251, 123, 62, 79, 212, 117, 188, 77, 104, 7, 188, 124, 58, 120, 190, 80, 69, 8, 191, 222, 65, 194, 189, 149, 61, 21, 189, 240, 71, 42, 191, 146, 54, 12, 190, 1, 5, 246, 189, 41, 176, 7, 62, 126, 166, 205, 62, 170, 65, 135, 189, 21, 82, 98, 189, 32, 244, 245, 190, 105, 5, 150, 61, 40, 9, 22, 62, 107, 98, 56, 61, 212, 125, 116, 60, 118, 227, 4, 191, 111, 14, 228, 191, 155, 168, 246, 61, 21, 29, 105, 191, 244, 104, 79, 61, 241, 216, 180, 62, 125, 36, 11, 190, 128, 20, 128, 190, 181, 1, 66, 190, 124, 126, 19, 189, 128, 89, 133, 61, 63, 19, 204, 190, 215, 214, 39, 60, 183, 141, 106, 62, 18, 41, 34, 190, 202, 188, 112, 62, 193, 2, 141, 190, 148, 136, 149, 62, 18, 171, 193, 61, 174, 246, 160, 62, 207, 59, 105, 190, 248, 70, 73, 190, 62, 111, 45, 191, 121, 200, 213, 61, 189, 176, 171, 61, 242, 220, 170, 189, 104, 155, 156, 60, 217, 122, 21, 189, 191, 160, 168, 61, 22, 245, 125, 60, 170, 144, 112, 190, 231, 54, 42, 189, 22, 160, 151, 190, 3, 249, 114, 188, 125, 137, 72, 191, 73, 232, 184, 62, 135, 11, 25, 62, 171, 128, 143, 191, 110, 35, 170, 190, 208, 94, 136, 62, 101, 204, 239, 189, 232, 14, 223, 190, 82, 122, 34, 191, 68, 140, 205, 61, 246, 90, 89, 191, 230, 254, 20, 190, 53, 28, 72, 191, 123, 251, 19, 62, 253, 221, 28, 191, 169, 44, 198, 190, 137, 183, 14, 62, 37, 199, 48, 62, 74, 17, 212, 190, 204, 72, 74, 191, 19, 157, 105, 190, 82, 161, 185, 62, 196, 135, 96, 62, 240, 102, 81, 191, 227, 24, 124, 62, 158, 110, 237, 61, 108, 31, 25, 62, 184, 98, 96, 61, 4, 150, 232, 62, 193, 164, 51, 62, 114, 133, 29, 186, 142, 20, 150, 190, 30, 227, 145, 190, 228, 164, 34, 191, 243, 183, 141, 190, 209, 49, 108, 63, 185, 171, 75, 61, 14, 19, 214, 190, 203, 209, 189, 60, 186, 212, 149, 61, 206, 156, 186, 190, 96, 128, 105, 191, 95, 36, 50, 190, 21, 13, 15, 62, 60, 197, 149, 62, 228, 197, 7, 62, 80, 244, 132, 191, 133, 118, 229, 187, 241, 118, 139, 61, 5, 196, 146, 62, 238, 39, 152, 189, 227, 64, 117, 62, 90, 128, 128, 191, 96, 129, 50, 189, 180, 124, 162, 62, 184, 168, 198, 186, 155, 148, 62, 62, 25, 228, 121, 61, 10, 16, 17, 61, 58, 92, 36, 190, 131, 45, 253, 190, 249, 224, 211, 189, 143, 109, 83, 62, 155, 158, 184, 60, 4, 60, 61, 190, 255, 147, 27, 191, 137, 190, 186, 190, 93, 186, 40, 190, 247, 92, 75, 190, 187, 18, 71, 191, 6, 101, 13, 191, 67, 40, 96, 62, 102, 88, 184, 60, 196, 115, 245, 190, 135, 10, 30, 190, 60, 66, 134, 190, 210, 254, 37, 62, 42, 216, 216, 61, 4, 52, 148, 59, 223, 76, 75, 62, 59, 214, 29, 190, 167, 118, 76, 191, 40, 146, 186, 190, 167, 6, 167, 61, 110, 187, 194, 190, 189, 168, 156, 62, 75, 78, 146, 61, 63, 133, 246, 61, 156, 74, 165, 61, 65, 199, 179, 190, 239, 223, 230, 61, 147, 208, 34, 62, 168, 173, 18, 190, 92, 36, 153, 190, 110, 118, 222, 189, 174, 148, 158, 190, 28, 203, 222, 190, 254, 142, 55, 63, 34, 234, 39, 190, 30, 158, 121, 61, 217, 57, 65, 189, 101, 108, 159, 62, 111, 249, 76, 62, 231, 127, 56, 190, 139, 158, 119, 190, 217, 224, 155, 190, 101, 188, 85, 191, 99, 71, 188, 62, 199, 79, 125, 191, 182, 145, 35, 62, 131, 121, 140, 189, 206, 26, 193, 190, 11, 226, 168, 61, 231, 21, 193, 188, 16, 101, 208, 189, 192, 146, 152, 191, 169, 159, 19, 191, 35, 93, 47, 189, 62, 45, 94, 61, 136, 11, 206, 189, 147, 80, 51, 62, 106, 216, 173, 62, 40, 224, 155, 188, 63, 212, 146, 189, 156, 190, 51, 190, 153, 94, 242, 61, 9, 0, 104, 62, 132, 1, 130, 188, 51, 234, 208, 60, 212, 242, 0, 63, 133, 154, 15, 191, 75, 62, 94, 191, 241, 181, 89, 61, 105, 234, 155, 62, 155, 29, 96, 189, 151, 124, 121, 61, 244, 222, 0, 60, 223, 250, 9, 62, 215, 235, 167, 191, 164, 11, 1, 191, 252, 236, 124, 191, 133, 92, 143, 188, 209, 100, 128, 190, 67, 2, 68, 62, 129, 72, 170, 190, 59, 5, 167, 191, 206, 13, 14, 63, 242, 31, 102, 191, 6, 53, 250, 190, 190, 64, 115, 188, 40, 249, 52, 190, 149, 229, 212, 62, 229, 19, 94, 61, 193, 58, 206, 60, 249, 155, 27, 190, 186, 96, 187, 61, 3, 219, 88, 62, 190, 124, 158, 190, 142, 83, 171, 189, 9, 205, 180, 190, 64, 73, 129, 189, 202, 139, 117, 190, 250, 65, 169, 190, 103, 126, 184, 190, 174, 0, 227, 60, 115, 148, 90, 191, 183, 135, 225, 190, 107, 31, 222, 189, 54, 209, 119, 189, 169, 121, 87, 60, 11, 176, 105, 62, 141, 102, 186, 190, 136, 189, 155, 61, 6, 7, 190, 61, 8, 157, 134, 61, 123, 161, 182, 62, 68, 182, 142, 190, 149, 183, 114, 191, 120, 24, 150, 190, 250, 31, 94, 62, 174, 180, 187, 189, 169, 7, 78, 62, 104, 51, 190, 61, 203, 25, 238, 62, 129, 153, 33, 62, 232, 151, 30, 191, 222, 101, 24, 190, 189, 65, 94, 62, 210, 61, 72, 188, 160, 14, 181, 190, 37, 32, 188, 190, 48, 72, 48, 189, 144, 177, 146, 189, 223, 2, 31, 191, 180, 170, 112, 190, 113, 48, 19, 63, 157, 17, 70, 190, 213, 13, 136, 190, 240, 77, 81, 190, 33, 154, 22, 62, 38, 172, 146, 190, 140, 246, 129, 190, 158, 195, 55, 61, 155, 159, 230, 60, 35, 63, 61, 61, 83, 17, 206, 189, 95, 128, 76, 190, 223, 169, 103, 190, 64, 171, 46, 62, 212, 66, 163, 62, 241, 138, 230, 61, 21, 206, 157, 188, 57, 109, 78, 191, 84, 175, 87, 62, 209, 68, 110, 62, 183, 54, 51, 190, 3, 200, 141, 189, 114, 72, 177, 60, 85, 178, 200, 60, 88, 80, 28, 190, 0, 51, 209, 190, 133, 58, 126, 59, 59, 242, 226, 61, 100, 226, 1, 62, 105, 96, 2, 191, 32, 217, 16, 191, 42, 220, 2, 62, 12, 31, 59, 61, 1, 117, 254, 190, 108, 133, 10, 190, 175, 6, 33, 191, 195, 228, 157, 190, 120, 186, 7, 190, 167, 168, 200, 190, 240, 188, 58, 61, 131, 64, 35, 62, 13, 79, 153, 61, 111, 50, 12, 190, 185, 12, 173, 190, 135, 231, 105, 190, 108, 152, 141, 62, 125, 32, 6, 63, 0, 155, 163, 62, 169, 129, 225, 60, 148, 4, 69, 191, 158, 94, 157, 188, 168, 215, 162, 62, 129, 15, 181, 189, 111, 5, 225, 61, 80, 16, 201, 189, 72, 175, 47, 190, 215, 58, 145, 191, 131, 133, 58, 191, 31, 197, 131, 189, 90, 170, 227, 190, 38, 145, 196, 190, 51, 245, 14, 59, 236, 79, 103, 191, 171, 84, 188, 190, 11, 25, 234, 62, 77, 73, 96, 189, 60, 148, 46, 187, 149, 91, 77, 190, 106, 70, 10, 62, 21, 219, 233, 59, 236, 27, 107, 191, 11, 233, 73, 190, 2, 79, 55, 62, 152, 239, 129, 189, 230, 13, 203, 188, 78, 146, 135, 191, 122, 178, 23, 61, 83, 225, 154, 61, 165, 75, 216, 62, 5, 135, 163, 189, 131, 73, 74, 62, 51, 191, 166, 191, 64, 53, 189, 61, 75, 75, 175, 62, 52, 22, 190, 189, 82, 201, 169, 61, 182, 10, 38, 189, 60, 250, 88, 60, 128, 143, 254, 61, 195, 165, 51, 191, 220, 193, 214, 189, 90, 251, 96, 61, 192, 46, 153, 61, 158, 63, 246, 189, 61, 238, 66, 191, 139, 54, 7, 60, 246, 234, 1, 63, 89, 109, 159, 61, 55, 30, 70, 59, 23, 60, 1, 190, 195, 240, 240, 60, 248, 4, 231, 60, 157, 220, 241, 190, 112, 6, 63, 188, 93, 133, 23, 62, 136, 12, 98, 61, 36, 78, 93, 62, 164, 235, 147, 190, 110, 224, 102, 189, 143, 195, 215, 188, 178, 60, 205, 60, 217, 116, 27, 62, 237, 138, 126, 61, 208, 7, 254, 190, 244, 240, 158, 61, 148, 248, 215, 59, 85, 91, 85, 61, 51, 53, 251, 61, 79, 1, 38, 62, 162, 132, 188, 189, 128, 123, 87, 62, 98, 253, 235, 190, 215, 209, 1, 190, 41, 35, 160, 190, 119, 182, 174, 60, 17, 121, 149, 189, 212, 241, 235, 61, 207, 28, 214, 61, 180, 241, 131, 189, 71, 222, 31, 60, 214, 126, 220, 189, 41, 201, 204, 60, 137, 120, 195, 189, 201, 73, 76, 61, 88, 79, 241, 61, 215, 36, 122, 61, 123, 13, 131, 189, 74, 148, 115, 60, 239, 138, 77, 190, 184, 138, 212, 189, 40, 8, 104, 190, 195, 96, 2, 62, 25, 192, 40, 190, 227, 193, 83, 61, 141, 66, 227, 189, 222, 77, 183, 189, 59, 0, 32, 61, 114, 41, 198, 187, 47, 14, 250, 189, 246, 169, 218, 189, 242, 42, 84, 189, 255, 213, 48, 62, 101, 179, 174, 61, 79, 139, 224, 189, 149, 142, 5, 190, 210, 239, 65, 190, 252, 84, 149, 61};
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
                alignas(float) const unsigned char memory[] = {105, 122, 205, 190, 198, 83, 140, 62, 224, 237, 44, 62, 191, 114, 52, 62, 92, 230, 63, 62, 147, 192, 182, 61, 205, 150, 86, 190, 112, 57, 82, 190, 224, 175, 117, 188, 153, 70, 2, 61, 45, 125, 5, 61, 55, 0, 22, 62, 59, 155, 36, 62, 87, 126, 56, 62, 205, 158, 208, 62, 140, 44, 100, 62, 155, 99, 191, 62, 230, 185, 0, 62, 209, 86, 169, 189, 45, 105, 105, 62, 69, 10, 174, 62, 29, 105, 233, 188, 65, 98, 202, 61, 97, 7, 52, 62, 204, 103, 164, 61, 138, 211, 41, 61, 38, 65, 176, 60, 247, 204, 98, 62, 181, 195, 187, 60, 23, 24, 129, 189, 192, 194, 146, 62, 144, 123, 43, 190};
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
                alignas(float) const unsigned char memory[] = {190, 73, 0, 62, 28, 65, 55, 61, 68, 61, 129, 60, 160, 190, 7, 191, 244, 93, 250, 61, 178, 59, 3, 190, 210, 21, 197, 189, 55, 230, 186, 61, 193, 17, 144, 190, 34, 242, 137, 191, 145, 15, 250, 61, 174, 51, 13, 191, 111, 237, 223, 62, 68, 53, 40, 190, 212, 68, 20, 63, 235, 75, 46, 191, 26, 11, 75, 63, 17, 113, 221, 62, 139, 107, 214, 187, 240, 145, 137, 190, 199, 93, 30, 62, 111, 183, 194, 190, 34, 149, 4, 63, 60, 220, 71, 191, 100, 100, 0, 191, 87, 10, 157, 191, 215, 87, 174, 190, 118, 93, 159, 62, 86, 232, 135, 63, 17, 113, 105, 63, 145, 231, 3, 62, 29, 142, 43, 60, 135, 76, 170, 62, 250, 22, 24, 191, 209, 70, 196, 190, 30, 16, 83, 190, 2, 194, 70, 190, 187, 14, 216, 60, 15, 164, 162, 62, 28, 239, 4, 62, 141, 17, 35, 190, 247, 249, 58, 63, 3, 121, 100, 62, 27, 253, 135, 189, 156, 247, 110, 62, 144, 107, 16, 190, 251, 4, 149, 190, 9, 251, 223, 189, 159, 41, 138, 188, 52, 11, 48, 61, 174, 235, 22, 62, 94, 237, 22, 191, 148, 79, 247, 189, 132, 20, 172, 190, 53, 76, 215, 61, 103, 219, 64, 190, 16, 87, 226, 61, 221, 128, 128, 62, 193, 215, 135, 62, 51, 123, 180, 188, 121, 156, 123, 62, 235, 242, 38, 62, 166, 21, 7, 190, 44, 122, 168, 61};
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
                alignas(float) const unsigned char memory[] = {153, 220, 134, 188, 225, 185, 79, 190};
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
    alignas(float) const unsigned char memory[] = {240, 172, 202, 191, 50, 244, 142, 189, 19, 45, 74, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {201, 211, 6, 192, 195, 200, 227, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0045/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}