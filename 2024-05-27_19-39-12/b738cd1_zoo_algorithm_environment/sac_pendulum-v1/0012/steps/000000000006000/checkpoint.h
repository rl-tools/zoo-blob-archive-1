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
                alignas(float) const unsigned char memory[] = {110, 91, 208, 62, 219, 87, 41, 63, 148, 75, 35, 63, 140, 180, 157, 62, 18, 87, 205, 190, 226, 114, 194, 62, 217, 93, 10, 191, 101, 55, 17, 63, 207, 212, 187, 61, 177, 71, 21, 63, 250, 191, 94, 63, 54, 155, 216, 61, 115, 114, 21, 191, 43, 104, 174, 63, 97, 31, 163, 62, 149, 113, 227, 62, 141, 12, 202, 62, 240, 184, 49, 191, 86, 247, 206, 62, 38, 255, 179, 190, 74, 65, 143, 58, 113, 11, 37, 191, 68, 70, 88, 63, 108, 138, 13, 63, 21, 177, 75, 190, 80, 81, 111, 191, 31, 192, 9, 191, 35, 133, 43, 63, 211, 81, 128, 63, 246, 180, 14, 62, 131, 111, 89, 190, 139, 114, 33, 191, 120, 230, 224, 62, 10, 216, 167, 62, 137, 147, 66, 191, 40, 54, 39, 190, 132, 154, 62, 62, 60, 46, 7, 62, 185, 239, 28, 191, 80, 16, 237, 59, 228, 246, 60, 189, 102, 26, 26, 191, 12, 227, 13, 63, 252, 177, 115, 63, 208, 60, 157, 62, 170, 179, 178, 190, 126, 71, 249, 190, 104, 132, 209, 190, 112, 244, 198, 60, 228, 157, 255, 190, 134, 155, 97, 190, 119, 165, 108, 62, 74, 68, 196, 61, 76, 48, 58, 63, 88, 60, 130, 62, 188, 174, 226, 62, 1, 29, 86, 191, 117, 25, 246, 187, 0, 76, 0, 63, 38, 58, 31, 191, 128, 63, 11, 62, 133, 198, 11, 63, 81, 120, 12, 63, 212, 103, 148, 190, 46, 237, 243, 61, 177, 83, 7, 191, 188, 111, 44, 62, 127, 218, 110, 61, 7, 84, 43, 63, 84, 158, 213, 62, 64, 20, 14, 63, 246, 147, 240, 62, 0, 242, 118, 63, 112, 210, 62, 62, 252, 98, 34, 189, 122, 188, 165, 190, 82, 71, 126, 63, 167, 120, 254, 190, 241, 109, 106, 190, 165, 166, 227, 190, 136, 172, 118, 187, 251, 209, 110, 62, 147, 224, 176, 62, 156, 19, 88, 62, 122, 93, 126, 190, 90, 167, 103, 190, 243, 193, 58, 63, 40, 115, 35, 63, 247, 115, 31, 190, 83, 145, 64, 62, 65, 233, 241, 62, 117, 15, 105, 191, 156, 33, 123, 190, 126, 145, 163, 62, 92, 192, 50, 191, 40, 15, 183, 190};
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
                alignas(float) const unsigned char memory[] = {223, 79, 193, 190, 67, 217, 4, 63, 111, 240, 54, 63, 117, 133, 105, 62, 74, 74, 241, 61, 164, 230, 76, 62, 101, 192, 19, 191, 232, 66, 19, 61, 182, 193, 6, 190, 221, 95, 107, 190, 245, 14, 223, 61, 219, 131, 187, 62, 117, 18, 40, 62, 7, 128, 103, 190, 216, 144, 100, 190, 108, 119, 7, 63, 225, 218, 191, 62, 113, 158, 193, 61, 145, 135, 83, 62, 178, 212, 25, 190, 48, 171, 222, 62, 123, 252, 219, 190, 181, 218, 39, 63, 208, 193, 120, 59, 150, 126, 9, 189, 212, 108, 157, 61, 58, 72, 48, 63, 82, 252, 192, 62, 163, 211, 87, 190, 7, 79, 228, 190, 206, 203, 241, 189, 71, 185, 36, 190};
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
                alignas(float) const unsigned char memory[] = {146, 110, 198, 189, 156, 151, 6, 61, 49, 173, 226, 189, 97, 210, 134, 62, 121, 88, 116, 60, 157, 54, 91, 190, 225, 97, 38, 190, 104, 107, 28, 190, 226, 138, 2, 62, 0, 91, 93, 62, 1, 23, 7, 62, 148, 38, 139, 190, 19, 26, 6, 189, 59, 115, 35, 190, 201, 12, 153, 62, 85, 204, 85, 189, 231, 202, 137, 190, 31, 80, 0, 62, 206, 69, 74, 189, 79, 91, 21, 190, 239, 90, 154, 189, 173, 187, 30, 190, 87, 26, 24, 189, 7, 29, 197, 61, 6, 120, 158, 62, 44, 67, 88, 190, 79, 174, 219, 190, 241, 238, 92, 61, 214, 191, 18, 190, 157, 124, 93, 61, 129, 191, 118, 190, 234, 240, 128, 190, 224, 79, 159, 187, 65, 241, 167, 60, 9, 48, 56, 61, 89, 202, 63, 62, 66, 134, 188, 62, 108, 91, 71, 62, 191, 68, 132, 189, 23, 158, 2, 60, 8, 253, 59, 62, 169, 115, 142, 61, 18, 1, 174, 190, 239, 212, 240, 189, 170, 125, 137, 62, 92, 252, 215, 61, 65, 232, 195, 60, 47, 115, 56, 62, 101, 87, 207, 189, 94, 187, 188, 188, 82, 54, 250, 61, 136, 147, 44, 62, 158, 154, 114, 189, 80, 29, 222, 187, 42, 165, 34, 190, 185, 93, 149, 61, 23, 80, 246, 60, 21, 153, 93, 62, 50, 239, 6, 190, 44, 85, 12, 189, 198, 120, 168, 190, 175, 31, 118, 190, 215, 59, 136, 62, 45, 167, 5, 62, 84, 137, 191, 190, 143, 101, 191, 189, 227, 30, 133, 189, 99, 47, 81, 61, 236, 41, 172, 62, 97, 83, 165, 62, 12, 110, 6, 190, 144, 106, 144, 62, 195, 60, 140, 191, 22, 171, 51, 191, 173, 232, 19, 188, 240, 17, 157, 62, 74, 81, 162, 190, 148, 205, 122, 62, 180, 135, 17, 191, 72, 119, 132, 190, 150, 67, 72, 190, 54, 170, 191, 189, 99, 218, 169, 190, 232, 91, 168, 62, 161, 110, 221, 60, 234, 60, 207, 190, 57, 224, 219, 61, 227, 198, 181, 189, 250, 134, 137, 62, 9, 21, 62, 62, 136, 77, 73, 62, 185, 65, 86, 61, 217, 181, 110, 62, 8, 111, 59, 190, 151, 170, 56, 62, 142, 110, 113, 189, 82, 94, 121, 188, 188, 91, 116, 62, 242, 90, 94, 191, 125, 173, 98, 190, 125, 46, 220, 190, 9, 178, 164, 60, 72, 89, 0, 62, 36, 162, 20, 61, 23, 48, 80, 188, 8, 115, 80, 190, 34, 170, 228, 188, 124, 11, 178, 62, 158, 95, 31, 190, 28, 206, 32, 61, 206, 61, 15, 191, 29, 63, 17, 190, 12, 10, 183, 61, 145, 47, 20, 62, 158, 91, 46, 61, 70, 232, 163, 61, 124, 34, 177, 189, 77, 168, 215, 190, 240, 241, 198, 189, 137, 46, 89, 190, 131, 192, 225, 189, 193, 131, 129, 190, 114, 1, 246, 189, 98, 121, 51, 189, 143, 59, 39, 62, 224, 140, 141, 62, 198, 67, 198, 62, 70, 222, 73, 62, 126, 11, 97, 57, 237, 252, 178, 61, 167, 55, 240, 189, 221, 43, 197, 62, 71, 95, 214, 190, 32, 12, 103, 62, 128, 236, 199, 61, 89, 83, 175, 190, 250, 89, 50, 190, 214, 190, 12, 62, 127, 97, 229, 189, 47, 142, 16, 189, 13, 13, 57, 61, 212, 69, 71, 62, 156, 25, 132, 62, 106, 222, 41, 190, 67, 85, 41, 190, 119, 209, 203, 61, 88, 21, 221, 61, 171, 246, 55, 61, 136, 202, 13, 189, 29, 165, 220, 189, 45, 218, 62, 62, 121, 177, 45, 59, 141, 206, 134, 62, 244, 97, 232, 61, 78, 9, 25, 190, 130, 95, 114, 62, 110, 245, 220, 189, 18, 14, 149, 62, 70, 193, 195, 190, 87, 65, 214, 189, 227, 85, 152, 190, 149, 227, 136, 189, 179, 114, 145, 62, 153, 252, 72, 190, 225, 20, 32, 62, 141, 45, 52, 62, 170, 127, 34, 190, 238, 197, 180, 62, 29, 189, 159, 191, 203, 109, 171, 190, 93, 123, 141, 189, 201, 209, 216, 189, 156, 165, 202, 190, 163, 178, 15, 189, 167, 62, 199, 190, 228, 177, 36, 190, 117, 72, 69, 189, 96, 125, 167, 189, 163, 43, 8, 191, 47, 131, 149, 62, 35, 114, 143, 187, 97, 207, 74, 191, 82, 222, 157, 62, 31, 33, 141, 190, 125, 33, 65, 62, 200, 65, 245, 60, 26, 233, 226, 61, 171, 107, 246, 61, 143, 139, 13, 62, 92, 3, 184, 190, 60, 132, 186, 61, 152, 114, 70, 190, 89, 26, 139, 189, 228, 90, 41, 61, 165, 117, 66, 190, 68, 231, 143, 188, 152, 16, 12, 62, 61, 229, 15, 62, 26, 237, 223, 61, 13, 32, 172, 189, 61, 9, 133, 190, 229, 77, 16, 190, 93, 169, 145, 190, 213, 6, 75, 62, 193, 69, 211, 189, 162, 13, 94, 62, 26, 6, 253, 189, 238, 197, 23, 61, 168, 156, 175, 61, 176, 189, 32, 190, 33, 23, 162, 189, 88, 249, 80, 62, 159, 83, 199, 189, 82, 69, 240, 190, 145, 90, 76, 62, 80, 103, 234, 59, 164, 194, 179, 62, 82, 125, 189, 190, 99, 153, 74, 62, 158, 183, 51, 62, 92, 69, 61, 62, 170, 216, 141, 61, 108, 3, 174, 62, 178, 96, 192, 188, 155, 28, 3, 62, 33, 242, 40, 189, 220, 157, 87, 62, 170, 181, 154, 188, 1, 55, 30, 190, 119, 250, 202, 61, 190, 26, 69, 188, 10, 74, 169, 61, 165, 49, 159, 60, 27, 221, 141, 62, 80, 230, 31, 190, 212, 17, 190, 62, 157, 171, 70, 62, 10, 242, 12, 190, 71, 40, 157, 188, 185, 149, 174, 61, 122, 164, 184, 61, 4, 74, 207, 61, 17, 60, 36, 62, 98, 72, 213, 61, 138, 78, 251, 61, 115, 226, 72, 189, 53, 39, 115, 61, 195, 101, 17, 62, 8, 82, 54, 189, 99, 244, 117, 188, 159, 246, 88, 62, 143, 111, 65, 190, 16, 210, 23, 190, 248, 111, 18, 61, 108, 6, 142, 190, 96, 62, 234, 60, 221, 83, 16, 61, 158, 118, 132, 62, 82, 74, 93, 62, 14, 186, 116, 62, 178, 18, 43, 191, 100, 165, 196, 190, 127, 96, 221, 61, 230, 202, 34, 191, 235, 187, 163, 188, 216, 41, 151, 62, 62, 117, 150, 62, 11, 12, 35, 190, 240, 87, 43, 62, 246, 89, 34, 190, 13, 131, 193, 62, 82, 81, 161, 62, 39, 50, 47, 189, 217, 170, 252, 61, 59, 25, 78, 61, 204, 154, 237, 58, 222, 32, 183, 190, 230, 54, 143, 62, 20, 181, 37, 189, 210, 11, 163, 62, 248, 5, 68, 62, 40, 4, 245, 61, 255, 142, 156, 62, 129, 211, 123, 189, 27, 188, 14, 191, 11, 233, 223, 62, 156, 250, 228, 190, 131, 227, 199, 189, 121, 242, 3, 189, 57, 114, 24, 61, 163, 75, 138, 190, 209, 42, 135, 189, 92, 130, 86, 62, 255, 206, 203, 61, 245, 249, 178, 61, 228, 82, 13, 62, 108, 187, 189, 190, 153, 143, 211, 190, 178, 38, 61, 190, 193, 144, 248, 187, 244, 195, 19, 61, 183, 34, 131, 61, 117, 171, 136, 190, 63, 178, 87, 61, 125, 246, 40, 62, 46, 150, 109, 61, 227, 26, 187, 189, 223, 191, 195, 61, 9, 64, 65, 60, 25, 241, 155, 190, 5, 208, 115, 60, 168, 141, 111, 61, 209, 84, 137, 62, 50, 156, 145, 61, 25, 122, 68, 189, 234, 114, 237, 188, 135, 10, 128, 61, 36, 25, 243, 61, 184, 249, 240, 62, 118, 75, 166, 61, 179, 155, 189, 59, 214, 106, 201, 60, 37, 217, 136, 60, 141, 197, 232, 189, 247, 133, 242, 61, 49, 189, 57, 190, 38, 109, 7, 62, 20, 150, 228, 188, 118, 115, 13, 61, 165, 157, 178, 59, 243, 106, 162, 61, 37, 189, 243, 188, 25, 232, 35, 190, 102, 63, 43, 190, 13, 68, 153, 189, 241, 54, 164, 61, 166, 34, 150, 60, 162, 189, 26, 190, 137, 20, 8, 62, 136, 111, 232, 61, 209, 51, 6, 62, 11, 186, 222, 59, 234, 74, 94, 61, 187, 41, 38, 189, 222, 253, 45, 190, 161, 187, 87, 189, 127, 47, 80, 190, 66, 120, 2, 190, 201, 142, 179, 189, 227, 57, 126, 61, 228, 39, 26, 62, 121, 224, 155, 188, 224, 74, 37, 61, 124, 92, 23, 62, 17, 101, 69, 62, 221, 120, 248, 188, 1, 5, 169, 61, 71, 101, 35, 61, 206, 205, 134, 189, 98, 19, 174, 188, 236, 168, 148, 189, 111, 84, 9, 62, 8, 20, 174, 61, 80, 102, 140, 61, 54, 59, 0, 62, 33, 118, 115, 190, 126, 34, 203, 61, 65, 221, 181, 60, 32, 165, 113, 62, 104, 150, 239, 59, 202, 33, 46, 62, 144, 90, 83, 189, 17, 58, 254, 189, 117, 238, 16, 189, 182, 24, 229, 61, 184, 13, 232, 189, 37, 134, 54, 62, 34, 19, 45, 61, 142, 172, 100, 62, 224, 190, 141, 186, 208, 67, 61, 61, 93, 147, 139, 188, 222, 109, 194, 190, 41, 163, 115, 61, 231, 84, 120, 62, 157, 240, 12, 60, 0, 54, 116, 60, 224, 187, 67, 62, 91, 150, 186, 190, 165, 235, 210, 189, 172, 255, 196, 189, 176, 228, 42, 190, 26, 222, 207, 60, 149, 38, 117, 62, 203, 130, 57, 62, 5, 80, 82, 62, 145, 34, 32, 62, 112, 197, 158, 60, 135, 251, 1, 62, 112, 139, 120, 62, 82, 144, 141, 61, 180, 35, 162, 62, 67, 45, 90, 62, 73, 150, 6, 189, 77, 198, 95, 190, 185, 29, 181, 61, 48, 243, 102, 189, 196, 105, 175, 61, 187, 197, 121, 62, 252, 134, 118, 62, 71, 173, 35, 189, 232, 172, 136, 190, 211, 186, 113, 190, 176, 154, 128, 62, 21, 224, 163, 190, 83, 216, 138, 190, 181, 70, 227, 189, 52, 171, 27, 190, 122, 69, 35, 190, 162, 146, 186, 188, 40, 90, 9, 190, 249, 190, 160, 61, 239, 20, 68, 189, 64, 81, 219, 61, 234, 148, 53, 189, 103, 59, 229, 61, 176, 18, 106, 61, 154, 141, 226, 189, 38, 6, 6, 190, 137, 126, 198, 189, 45, 25, 32, 189, 90, 16, 253, 61, 97, 53, 80, 190, 165, 18, 26, 62, 61, 174, 71, 190, 228, 2, 149, 189, 169, 87, 100, 189, 244, 186, 58, 190, 190, 159, 4, 189, 19, 115, 0, 61, 46, 91, 26, 188, 34, 70, 153, 189, 79, 249, 254, 188, 234, 171, 129, 61, 70, 225, 122, 189, 201, 189, 153, 189, 228, 249, 234, 189, 110, 186, 183, 61, 248, 207, 61, 190, 31, 220, 112, 62, 108, 179, 44, 191, 56, 63, 38, 61, 103, 183, 60, 190, 252, 111, 156, 61, 155, 97, 157, 189, 88, 168, 170, 189, 223, 92, 57, 190, 235, 255, 140, 190, 36, 61, 65, 62, 62, 106, 220, 62, 190, 177, 59, 62, 142, 163, 52, 61, 88, 36, 184, 190, 133, 171, 120, 190, 231, 37, 49, 62, 151, 145, 171, 61, 114, 78, 168, 189, 125, 126, 120, 190, 143, 23, 206, 189, 142, 144, 83, 190, 146, 174, 99, 61, 64, 30, 10, 190, 84, 133, 189, 62, 134, 179, 42, 190, 159, 25, 141, 189, 147, 163, 255, 61, 65, 221, 137, 189, 146, 143, 46, 188, 36, 37, 137, 62, 72, 71, 120, 61, 153, 11, 233, 61, 3, 249, 151, 190, 76, 119, 162, 62, 0, 99, 97, 62, 152, 113, 149, 62, 62, 211, 193, 62, 242, 219, 46, 190, 64, 50, 80, 62, 87, 143, 195, 191, 32, 173, 215, 188, 251, 228, 68, 190, 169, 50, 127, 191, 7, 18, 51, 191, 50, 211, 75, 62, 137, 132, 160, 189, 179, 208, 140, 62, 15, 9, 177, 60, 141, 157, 146, 190, 102, 161, 35, 191, 241, 42, 219, 62, 21, 125, 254, 61, 204, 106, 47, 191, 143, 13, 115, 190, 140, 136, 145, 189, 209, 113, 92, 190, 140, 88, 149, 62, 180, 196, 72, 189, 0, 96, 204, 189, 172, 26, 240, 189, 24, 114, 18, 190, 208, 210, 149, 190, 15, 20, 174, 190, 68, 208, 118, 190, 10, 90, 181, 189, 91, 93, 129, 190, 87, 193, 182, 61, 210, 118, 173, 62, 156, 94, 71, 62, 218, 15, 24, 190, 112, 249, 251, 61, 255, 203, 149, 190, 255, 224, 196, 190, 68, 204, 10, 190, 153, 192, 120, 62, 6, 116, 25, 189, 221, 97, 141, 62, 214, 199, 159, 190, 124, 18, 211, 187, 136, 248, 63, 189, 155, 164, 141, 190, 176, 5, 60, 190, 35, 160, 108, 62, 87, 205, 130, 62, 46, 24, 199, 190, 174, 202, 193, 60, 230, 123, 9, 189, 176, 173, 77, 61, 142, 81, 170, 189, 221, 73, 207, 61, 39, 30, 112, 62, 178, 229, 103, 62, 35, 59, 205, 61, 94, 195, 214, 62, 191, 142, 10, 61, 99, 22, 58, 190, 168, 135, 104, 189, 19, 100, 23, 61, 137, 76, 92, 61, 169, 194, 226, 61, 0, 12, 161, 62, 250, 153, 23, 190, 183, 94, 181, 61, 20, 50, 86, 191, 38, 228, 139, 190, 63, 187, 37, 61, 213, 241, 18, 62, 130, 212, 127, 189, 184, 70, 31, 188, 149, 222, 20, 190, 246, 12, 22, 190, 43, 39, 62, 61, 141, 201, 154, 189, 82, 68, 43, 189, 3, 5, 140, 189, 32, 197, 243, 61, 155, 235, 194, 190, 140, 148, 76, 189, 124, 27, 91, 189, 118, 250, 23, 62, 244, 1, 17, 190, 159, 27, 244, 61, 15, 211, 233, 187, 134, 250, 176, 61, 1, 171, 166, 61, 114, 253, 222, 188, 250, 59, 88, 190, 64, 105, 135, 190, 108, 83, 119, 61, 145, 79, 187, 190, 52, 80, 127, 60, 110, 70, 63, 60, 92, 43, 250, 61, 178, 67, 191, 189, 36, 211, 122, 62, 33, 209, 39, 190, 164, 68, 174, 190, 167, 98, 159, 189, 80, 22, 192, 61, 171, 104, 38, 61, 101, 96, 1, 188, 248, 138, 32, 191, 137, 200, 25, 190, 18, 147, 199, 61, 54, 153, 129, 190, 144, 142, 163, 61, 55, 1, 23, 62, 93, 81, 89, 62, 28, 149, 83, 190, 99, 163, 205, 62, 202, 171, 151, 61, 97, 94, 174, 62, 63, 54, 91, 190, 192, 222, 178, 61, 95, 90, 146, 61, 100, 177, 148, 61, 226, 40, 193, 189, 141, 209, 36, 62, 17, 135, 209, 61, 0, 203, 203, 61, 133, 130, 125, 61, 126, 168, 178, 61, 31, 145, 70, 189, 202, 170, 113, 190, 199, 42, 113, 190, 235, 162, 38, 62, 139, 135, 161, 190, 142, 87, 91, 62, 181, 242, 145, 62, 49, 191, 160, 62, 109, 35, 17, 62, 116, 54, 212, 61, 227, 42, 152, 190, 8, 68, 159, 62, 220, 47, 31, 62, 197, 8, 82, 60, 40, 115, 131, 61, 31, 7, 10, 62, 207, 248, 241, 188, 74, 162, 155, 190, 34, 241, 78, 60, 212, 211, 50, 189, 142, 192, 14, 58, 103, 25, 161, 189, 199, 82, 147, 188, 46, 173, 60, 62, 32, 133, 15, 188, 8, 30, 140, 190, 219, 208, 75, 61, 163, 132, 12, 191, 42, 32, 87, 190, 120, 36, 64, 188, 242, 233, 75, 190, 97, 205, 47, 187, 98, 68, 230, 187, 65, 194, 181, 188, 49, 42, 240, 61, 174, 71, 156, 61, 133, 176, 48, 190, 34, 157, 11, 190, 157, 70, 106, 189, 153, 222, 4, 189, 81, 253, 59, 189, 98, 186, 93, 61, 124, 124, 15, 190, 153, 198, 48, 60, 11, 176, 217, 189, 66, 117, 153, 60, 251, 146, 31, 190, 246, 53, 209, 188, 58, 131, 163, 61, 143, 133, 203, 189, 0, 211, 88, 189, 67, 207, 23, 60, 133, 251, 173, 61, 52, 138, 56, 189, 211, 51, 180, 189, 247, 185, 65, 189, 102, 41, 187, 60, 139, 21, 95, 189, 93, 86, 205, 188, 12, 112, 13, 62, 122, 65, 232, 189, 89, 106, 225, 60, 70, 162, 97, 189, 66, 217, 140, 190, 208, 65, 23, 190, 228, 58, 237, 62, 156, 67, 29, 62, 205, 182, 134, 189, 194, 168, 191, 189, 135, 39, 149, 61, 85, 68, 223, 190, 26, 161, 188, 190, 221, 74, 69, 62, 232, 151, 72, 61, 167, 36, 13, 189, 63, 178, 128, 190, 48, 250, 113, 62, 148, 204, 106, 62, 40, 50, 161, 189, 196, 176, 218, 61, 13, 131, 80, 62, 252, 211, 15, 62, 233, 101, 26, 188, 238, 12, 147, 190, 233, 144, 156, 190, 250, 83, 133, 189, 101, 223, 212, 61, 159, 217, 201, 189, 70, 6, 163, 62, 94, 216, 17, 190, 12, 91, 168, 61, 88, 76, 128, 61, 15, 169, 246, 59, 236, 223, 101, 59, 234, 170, 244, 188, 235, 156, 178, 190, 106, 216, 27, 62, 183, 88, 213, 188, 207, 126, 85, 62, 150, 13, 7, 190, 20, 46, 255, 61, 32, 161, 88, 188, 29, 99, 83, 190, 69, 217, 150, 190, 201, 28, 41, 62, 168, 197, 49, 190, 37, 186, 136, 189, 66, 209, 105, 190, 105, 147, 166, 188, 10, 139, 221, 59, 176, 128, 123, 189, 11, 124, 156, 189, 93, 42, 91, 189, 60, 181, 47, 188, 113, 64, 139, 190, 252, 32, 120, 61, 204, 229, 46, 189, 168, 172, 187, 62, 38, 123, 173, 189, 15, 27, 221, 61, 154, 228, 148, 61, 178, 139, 41, 62, 78, 64, 44, 61, 60, 157, 210, 62, 126, 183, 167, 189, 50, 56, 156, 190, 237, 132, 213, 61, 14, 224, 170, 189, 3, 6, 143, 62, 212, 114, 134, 60, 84, 41, 151, 62, 162, 51, 139, 189, 25, 208, 137, 61, 112, 168, 23, 191, 4, 144, 1, 190, 40, 94, 209, 187, 142, 244, 35, 62, 137, 60, 209, 190, 13, 230, 32, 62, 174, 105, 152, 190, 215, 213, 190, 60, 63, 148, 5, 62, 93, 190, 91, 189, 209, 59, 130, 190, 10, 215, 44, 188, 131, 186, 64, 62, 204, 62, 5, 191, 249, 190, 143, 189, 169, 246, 8, 62, 236, 56, 32, 63, 181, 128, 141, 60, 184, 124, 180, 61, 217, 75, 2, 62, 12, 174, 223, 61, 98, 82, 233, 61, 225, 69, 241, 62, 208, 180, 23, 61, 141, 32, 129, 62, 71, 45, 47, 62, 36, 168, 160, 190, 92, 84, 130, 62, 93, 201, 175, 189, 13, 182, 28, 190, 187, 48, 113, 189, 14, 224, 29, 190, 79, 141, 99, 61, 5, 192, 251, 61, 203, 70, 167, 189, 61, 232, 87, 190, 229, 147, 125, 189, 164, 165, 43, 62, 47, 198, 85, 61, 241, 222, 136, 190, 249, 0, 216, 189, 208, 63, 223, 61, 99, 24, 81, 62, 113, 75, 235, 61, 216, 144, 45, 189, 161, 90, 215, 61, 16, 76, 150, 188, 84, 73, 108, 62, 161, 226, 185, 62, 10, 74, 205, 61, 83, 197, 56, 190, 148, 17, 221, 189, 168, 191, 18, 61, 125, 163, 212, 62, 175, 94, 26, 191, 191, 151, 150, 190, 37, 104, 215, 188, 111, 164, 149, 60, 56, 185, 138, 62, 3, 232, 122, 61, 208, 100, 88, 60, 143, 146, 197, 190, 106, 52, 147, 61, 91, 87, 181, 189, 153, 83, 75, 62, 14, 14, 128, 62, 223, 178, 142, 61, 209, 110, 129, 189, 160, 100, 123, 62, 36, 56, 154, 190, 85, 252, 156, 62, 249, 198, 95, 62, 158, 63, 202, 61, 38, 65, 28, 62, 248, 200, 62, 62, 196, 33, 12, 190, 38, 44, 53, 189, 56, 197, 172, 62, 63, 106, 22, 187, 212, 14, 168, 60, 178, 110, 213, 189, 119, 190, 23, 62, 9, 117, 190, 61, 86, 210, 15, 61, 147, 251, 132, 189, 5, 182, 33, 190, 87, 156, 44, 191, 202, 166, 141, 189, 87, 205, 55, 62, 160, 71, 214, 58, 51, 235, 68, 61, 247, 97, 58, 61, 211, 247, 106, 190, 143, 75, 166, 190, 232, 251, 120, 189, 222, 126, 105, 190, 145, 208, 144, 62, 186, 89, 187, 62, 216, 202, 134, 62, 44, 36, 224, 188, 185, 97, 130, 61, 146, 154, 168, 190, 199, 244, 164, 62, 53, 213, 148, 62, 145, 95, 140, 61, 55, 223, 26, 62, 84, 110, 37, 62, 108, 165, 129, 190, 112, 159, 24, 190, 186, 81, 206, 62, 97, 39, 193, 190, 64, 125, 84, 62, 145, 20, 66, 62, 97, 110, 240, 61, 138, 216, 187, 186, 106, 47, 37, 190, 124, 36, 153, 190, 54, 35, 73, 190, 141, 215, 240, 190, 116, 185, 125, 190, 245, 127, 94, 61, 126, 13, 243, 188, 243, 202, 44, 62, 43, 19, 151, 188, 48, 239, 54, 61, 162, 122, 95, 190, 107, 129, 20, 187, 138, 52, 32, 61, 61, 75, 168, 61, 196, 55, 117, 62, 152, 101, 41, 62, 160, 97, 52, 190, 34, 129, 222, 61, 4, 128, 116, 190, 11, 227, 173, 62, 161, 40, 141, 62, 112, 45, 51, 61, 193, 245, 93, 62, 187, 75, 232, 61, 65, 4, 48, 190, 51, 153, 87, 189, 123, 211, 143, 62, 73, 184, 51, 61, 211, 251, 104, 61, 80, 150, 255, 188, 237, 45, 137, 62, 157, 219, 98, 188, 29, 104, 58, 190, 37, 81, 36, 190, 2, 25, 75, 189, 117, 1, 43, 191, 197, 153, 80, 190, 26, 151, 24, 62, 228, 203, 179, 189, 216, 161, 46, 190, 144, 184, 105, 62, 118, 238, 198, 189, 210, 254, 204, 189, 197, 164, 132, 188, 65, 106, 126, 189, 220, 144, 128, 61, 102, 151, 159, 62, 42, 93, 101, 188, 105, 242, 128, 190, 228, 84, 153, 189, 193, 195, 187, 61, 241, 238, 89, 62, 189, 194, 58, 189, 250, 151, 72, 190, 107, 215, 99, 61, 27, 8, 32, 190, 178, 113, 156, 61, 167, 151, 203, 61, 55, 7, 1, 190, 153, 3, 242, 59, 251, 230, 53, 61, 65, 105, 1, 63, 227, 131, 19, 61, 220, 190, 237, 190, 222, 4, 74, 189, 91, 17, 55, 190, 32, 251, 95, 62, 206, 30, 87, 190, 142, 131, 174, 190, 187, 18, 110, 61, 185, 117, 105, 61, 178, 48, 39, 62, 80, 106, 30, 190, 83, 213, 72, 61, 182, 129, 98, 190, 147, 187, 19, 62, 186, 54, 196, 61, 119, 215, 74, 61, 253, 57, 165, 61, 234, 136, 5, 188, 152, 218, 49, 62, 199, 228, 123, 62, 100, 205, 165, 190, 150, 216, 87, 62, 82, 72, 18, 62, 105, 176, 135, 61, 12, 77, 139, 61, 67, 198, 92, 62, 165, 50, 215, 189, 154, 208, 246, 61, 237, 138, 248, 62, 18, 24, 39, 62, 128, 229, 202, 61, 107, 140, 110, 62, 105, 129, 13, 62, 227, 46, 145, 62, 147, 75, 87, 190, 82, 206, 115, 61, 72, 147, 180, 188, 183, 226, 12, 191, 225, 59, 94, 190, 226, 59, 190, 190, 33, 190, 26, 190, 22, 135, 5, 190, 107, 149, 70, 61, 18, 27, 183, 62, 212, 182, 74, 62, 55, 64, 34, 62, 228, 1, 120, 62, 3, 73, 226, 190, 43, 170, 70, 190, 250, 66, 138, 191, 69, 155, 114, 61, 26, 144, 251, 189, 124, 180, 214, 61, 176, 189, 156, 190, 49, 196, 91, 61, 99, 63, 148, 189, 97, 222, 72, 191, 86, 237, 107, 190, 249, 147, 186, 61, 244, 223, 129, 61, 219, 229, 154, 190, 171, 248, 182, 61, 3, 94, 41, 190, 154, 113, 235, 62, 118, 8, 194, 61, 139, 235, 57, 60, 15, 131, 3, 62, 130, 190, 164, 59, 161, 192, 99, 190, 224, 232, 120, 61, 62, 183, 233, 61, 89, 101, 37, 190, 136, 173, 178, 186, 72, 33, 137, 190, 77, 68, 245, 189, 249, 154, 165, 61, 154, 187, 160, 62, 64, 116, 35, 190, 230, 232, 102, 60, 152, 219, 162, 190, 190, 250, 11, 190, 41, 250, 169, 189, 181, 9, 245, 61, 9, 236, 237, 189, 241, 143, 129, 62, 221, 186, 166, 190, 208, 169, 164, 189, 92, 111, 94, 61, 250, 134, 106, 61, 194, 73, 43, 190, 118, 42, 67, 62, 117, 175, 42, 190, 212, 168, 20, 191, 96, 230, 89, 189, 198, 203, 113, 61, 174, 224, 129, 61, 254, 249, 157, 190, 101, 250, 88, 62, 123, 150, 183, 61, 195, 45, 79, 62, 55, 75, 149, 61, 162, 151, 197, 62, 91, 90, 66, 62};
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
                alignas(float) const unsigned char memory[] = {48, 135, 36, 190, 175, 223, 230, 189, 22, 44, 124, 62, 7, 217, 164, 59, 147, 174, 51, 189, 60, 87, 178, 61, 86, 164, 25, 190, 214, 82, 170, 62, 11, 70, 137, 62, 16, 122, 42, 62, 36, 188, 235, 189, 41, 186, 138, 62, 127, 168, 93, 62, 21, 168, 232, 61, 125, 55, 42, 62, 110, 187, 112, 186, 231, 91, 52, 62, 79, 180, 7, 62, 16, 178, 56, 62, 36, 171, 128, 61, 208, 57, 221, 189, 71, 119, 111, 188, 114, 109, 163, 59, 219, 251, 80, 61, 25, 40, 237, 189, 181, 50, 96, 60, 111, 142, 83, 62, 10, 102, 133, 62, 87, 21, 75, 190, 104, 176, 35, 62, 98, 192, 144, 61, 83, 249, 215, 61};
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
                alignas(float) const unsigned char memory[] = {140, 104, 181, 62, 234, 107, 130, 62, 11, 81, 72, 63, 88, 44, 183, 62, 97, 80, 186, 190, 199, 110, 49, 63, 63, 38, 128, 62, 175, 72, 132, 190, 121, 204, 89, 191, 135, 62, 133, 62, 97, 15, 41, 185, 236, 224, 165, 189, 183, 186, 179, 190, 5, 241, 248, 59, 116, 126, 164, 62, 36, 64, 132, 63, 141, 233, 193, 62, 250, 206, 192, 61, 130, 178, 184, 62, 124, 225, 8, 191, 224, 242, 172, 61, 237, 104, 36, 62, 175, 143, 24, 62, 166, 8, 159, 62, 115, 45, 44, 190, 211, 101, 43, 190, 41, 217, 190, 190, 252, 235, 68, 190, 161, 225, 141, 62, 50, 163, 62, 190, 87, 143, 20, 63, 39, 159, 158, 62, 111, 96, 61, 62, 250, 237, 222, 61, 91, 71, 70, 62, 84, 49, 185, 62, 248, 156, 136, 190, 253, 204, 56, 62, 128, 122, 230, 189, 118, 244, 81, 190, 114, 90, 180, 189, 154, 57, 195, 61, 39, 122, 252, 61, 142, 94, 238, 189, 183, 134, 137, 187, 144, 84, 252, 61, 58, 17, 111, 190, 7, 105, 157, 189, 191, 17, 86, 61, 157, 137, 20, 190, 218, 86, 201, 189, 31, 124, 183, 61, 220, 197, 210, 61, 68, 177, 71, 61, 44, 30, 187, 189, 35, 108, 92, 190, 203, 171, 167, 62, 222, 24, 20, 60, 160, 247, 140, 62, 107, 210, 224, 61, 33, 41, 176, 62, 167, 30, 54, 190, 57, 75, 255, 61, 71, 245, 144, 61};
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
                alignas(float) const unsigned char memory[] = {240, 108, 210, 189, 8, 114, 162, 190};
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
    alignas(float) const unsigned char memory[] = {40, 207, 236, 189, 207, 39, 80, 63, 231, 77, 30, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {118, 35, 117, 63, 71, 228, 7, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0012/steps/000000000006000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}