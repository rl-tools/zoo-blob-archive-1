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
                alignas(float) const unsigned char memory[] = {146, 249, 221, 62, 198, 50, 4, 191, 176, 147, 24, 63, 231, 164, 70, 189, 121, 129, 2, 62, 223, 240, 7, 61, 65, 4, 171, 62, 211, 121, 123, 62, 2, 247, 217, 62, 194, 231, 124, 189, 114, 173, 108, 189, 62, 56, 215, 62, 216, 226, 128, 62, 22, 210, 169, 62, 49, 88, 156, 60, 53, 31, 90, 190, 115, 228, 229, 62, 225, 135, 155, 190, 232, 176, 165, 62, 180, 191, 40, 191, 67, 39, 198, 190, 166, 106, 42, 62, 210, 5, 118, 190, 180, 98, 44, 62, 89, 236, 147, 62, 89, 16, 26, 191, 63, 22, 158, 190, 65, 206, 228, 190, 113, 139, 68, 191, 196, 2, 151, 62, 242, 170, 188, 189, 252, 248, 47, 62, 231, 18, 178, 62, 245, 244, 18, 191, 230, 138, 59, 63, 160, 148, 107, 62, 128, 61, 214, 61, 24, 61, 97, 191, 67, 111, 151, 62, 153, 170, 90, 62, 118, 149, 19, 191, 29, 122, 108, 190, 16, 192, 160, 62, 144, 137, 84, 191, 102, 113, 235, 62, 251, 120, 172, 189, 203, 16, 215, 62, 60, 207, 107, 190, 81, 70, 116, 190, 235, 39, 177, 190, 224, 206, 219, 62, 233, 174, 244, 190, 59, 58, 167, 190, 111, 41, 5, 62, 110, 42, 89, 190, 170, 207, 35, 63, 27, 230, 23, 62, 41, 179, 84, 63, 227, 32, 201, 190, 93, 71, 62, 190, 98, 32, 214, 190, 211, 8, 69, 62, 15, 203, 255, 189, 199, 172, 139, 62, 223, 194, 216, 190, 134, 143, 255, 190, 243, 92, 166, 190, 21, 97, 150, 62, 188, 52, 18, 191, 164, 75, 49, 190, 118, 46, 232, 62, 170, 10, 210, 62, 254, 149, 35, 62, 76, 90, 58, 189, 233, 146, 122, 62, 125, 3, 7, 62, 115, 30, 76, 191, 4, 9, 104, 61, 89, 141, 72, 191, 2, 34, 68, 62, 32, 173, 149, 190, 20, 113, 211, 62, 98, 181, 183, 62, 117, 20, 169, 190, 198, 88, 118, 190, 90, 29, 80, 191, 253, 174, 233, 61, 194, 24, 0, 63, 218, 245, 29, 191, 226, 24, 186, 62, 107, 64, 236, 62, 149, 245, 18, 191, 89, 197, 218, 61, 254, 194, 8, 56, 94, 3, 80, 63, 142, 51, 35, 190};
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
                alignas(float) const unsigned char memory[] = {101, 7, 0, 191, 48, 191, 170, 190, 139, 88, 152, 61, 105, 204, 5, 190, 160, 145, 203, 62, 100, 178, 248, 62, 178, 120, 12, 63, 47, 251, 212, 62, 228, 72, 193, 62, 22, 11, 10, 63, 241, 172, 230, 190, 177, 85, 0, 63, 118, 0, 208, 62, 64, 151, 38, 190, 34, 94, 222, 62, 18, 247, 110, 62, 62, 210, 131, 62, 223, 89, 13, 63, 76, 248, 92, 190, 35, 104, 113, 189, 41, 95, 172, 190, 83, 89, 224, 190, 134, 69, 211, 62, 56, 237, 110, 190, 129, 222, 92, 190, 62, 74, 145, 62, 213, 115, 243, 190, 37, 177, 95, 189, 97, 214, 134, 189, 179, 229, 128, 62, 58, 228, 18, 63, 226, 118, 155, 62};
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
                alignas(float) const unsigned char memory[] = {189, 58, 4, 190, 173, 229, 25, 62, 31, 223, 7, 62, 127, 56, 103, 61, 190, 58, 99, 62, 132, 99, 1, 62, 188, 97, 10, 62, 187, 54, 30, 62, 184, 156, 133, 189, 229, 135, 33, 189, 179, 24, 240, 61, 235, 75, 252, 61, 219, 183, 128, 60, 187, 176, 235, 189, 24, 234, 153, 59, 14, 44, 74, 189, 33, 13, 67, 190, 123, 13, 182, 61, 240, 98, 0, 62, 16, 146, 131, 62, 174, 96, 0, 62, 43, 5, 183, 189, 223, 105, 243, 189, 37, 85, 133, 189, 73, 57, 23, 60, 239, 66, 38, 190, 212, 89, 12, 189, 165, 115, 63, 189, 48, 214, 25, 188, 231, 55, 27, 62, 242, 115, 134, 61, 78, 64, 124, 61, 190, 126, 132, 190, 106, 134, 23, 62, 86, 84, 32, 60, 43, 155, 147, 189, 99, 237, 246, 186, 192, 93, 231, 61, 223, 86, 22, 62, 240, 153, 235, 189, 166, 207, 30, 62, 101, 4, 38, 62, 145, 54, 111, 190, 10, 98, 206, 61, 242, 150, 65, 62, 35, 45, 6, 62, 127, 94, 230, 60, 197, 71, 255, 189, 181, 7, 238, 61, 80, 85, 186, 61, 86, 163, 74, 190, 66, 184, 248, 190, 155, 27, 107, 190, 58, 64, 25, 189, 109, 162, 186, 61, 226, 130, 74, 190, 155, 16, 24, 189, 52, 207, 70, 61, 145, 71, 123, 189, 85, 112, 111, 60, 204, 0, 71, 62, 129, 239, 174, 189, 203, 34, 36, 62, 204, 144, 120, 190, 255, 45, 152, 189, 228, 152, 192, 189, 221, 139, 60, 190, 171, 80, 45, 190, 38, 87, 114, 61, 4, 21, 216, 188, 236, 145, 152, 61, 201, 66, 77, 61, 229, 59, 241, 188, 54, 100, 71, 189, 191, 89, 91, 189, 132, 19, 79, 61, 26, 147, 129, 189, 154, 71, 43, 190, 187, 39, 23, 188, 71, 125, 153, 188, 62, 54, 253, 61, 174, 170, 31, 190, 6, 240, 176, 59, 140, 29, 241, 189, 1, 227, 4, 190, 140, 237, 199, 188, 107, 253, 240, 189, 106, 246, 135, 61, 40, 67, 2, 62, 98, 110, 156, 61, 235, 99, 148, 188, 145, 244, 110, 189, 113, 52, 111, 189, 244, 186, 232, 61, 255, 199, 208, 61, 186, 146, 253, 188, 188, 255, 239, 60, 159, 8, 239, 61, 104, 142, 23, 62, 54, 26, 249, 189, 244, 173, 147, 61, 9, 60, 130, 62, 66, 174, 164, 189, 93, 17, 241, 61, 32, 8, 193, 189, 111, 128, 3, 60, 147, 111, 64, 62, 93, 238, 98, 61, 202, 197, 9, 190, 187, 11, 132, 189, 157, 118, 182, 61, 68, 96, 217, 60, 214, 124, 78, 61, 12, 119, 3, 61, 244, 209, 193, 62, 112, 91, 96, 62, 165, 194, 138, 62, 31, 6, 6, 59, 18, 18, 181, 60, 223, 110, 217, 189, 108, 145, 196, 61, 33, 56, 160, 190, 107, 180, 32, 61, 175, 237, 34, 62, 111, 30, 57, 190, 39, 118, 120, 61, 254, 153, 100, 190, 48, 70, 202, 62, 132, 41, 132, 190, 104, 151, 169, 189, 67, 95, 164, 190, 78, 156, 136, 61, 16, 128, 156, 60, 40, 238, 84, 62, 83, 106, 108, 62, 172, 129, 19, 62, 97, 47, 156, 189, 186, 32, 178, 60, 180, 229, 131, 187, 183, 132, 111, 190, 31, 193, 120, 60, 64, 107, 174, 61, 54, 53, 15, 61, 172, 148, 168, 189, 180, 85, 11, 62, 65, 106, 11, 61, 122, 63, 242, 189, 220, 34, 18, 191, 232, 21, 129, 190, 154, 245, 8, 62, 31, 201, 240, 187, 70, 156, 32, 187, 125, 183, 75, 190, 170, 196, 45, 62, 132, 122, 110, 190, 81, 103, 136, 62, 59, 95, 172, 62, 187, 240, 136, 190, 80, 231, 170, 61, 15, 1, 148, 61, 94, 0, 23, 62, 151, 180, 38, 62, 85, 177, 5, 61, 7, 60, 159, 189, 248, 246, 137, 189, 143, 242, 105, 62, 82, 138, 110, 190, 178, 151, 197, 61, 141, 84, 154, 188, 247, 40, 203, 189, 201, 208, 139, 61, 44, 141, 37, 62, 227, 82, 225, 189, 222, 105, 50, 189, 184, 103, 186, 60, 55, 103, 15, 60, 29, 162, 214, 61, 129, 71, 182, 61, 37, 175, 21, 62, 139, 229, 234, 189, 214, 218, 135, 61, 24, 232, 74, 189, 74, 0, 245, 189, 35, 116, 73, 62, 46, 47, 34, 61, 175, 68, 183, 189, 123, 76, 140, 62, 39, 91, 134, 190, 113, 101, 62, 189, 180, 143, 44, 62, 205, 188, 38, 190, 177, 113, 154, 62, 224, 26, 176, 61, 116, 22, 197, 61, 117, 209, 159, 189, 190, 123, 0, 189, 154, 184, 197, 189, 6, 78, 39, 187, 249, 251, 245, 61, 51, 49, 139, 61, 240, 210, 28, 190, 189, 96, 216, 188, 225, 117, 168, 61, 117, 33, 199, 189, 10, 252, 44, 62, 191, 12, 50, 62, 92, 252, 54, 189, 136, 230, 88, 189, 212, 189, 130, 188, 198, 225, 105, 61, 145, 78, 73, 61, 176, 139, 32, 190, 134, 249, 13, 190, 200, 214, 239, 186, 172, 159, 4, 190, 45, 251, 167, 61, 251, 202, 8, 62, 15, 164, 151, 60, 226, 239, 203, 189, 65, 116, 153, 60, 112, 129, 63, 62, 215, 167, 183, 61, 187, 49, 220, 61, 71, 187, 77, 190, 170, 92, 183, 189, 230, 214, 73, 188, 78, 12, 237, 61, 201, 78, 65, 190, 98, 81, 19, 188, 236, 196, 17, 62, 0, 69, 11, 190, 197, 88, 46, 190, 139, 208, 231, 189, 71, 193, 91, 61, 169, 130, 63, 190, 184, 221, 30, 61, 0, 94, 39, 190, 174, 36, 243, 189, 142, 84, 157, 61, 58, 44, 181, 189, 83, 36, 136, 189, 5, 200, 161, 61, 53, 249, 31, 190, 234, 177, 114, 61, 22, 198, 238, 189, 163, 50, 234, 189, 11, 114, 90, 189, 195, 4, 241, 61, 158, 246, 175, 61, 111, 186, 240, 188, 254, 209, 169, 60, 217, 73, 240, 61, 147, 51, 44, 62, 200, 239, 191, 186, 211, 137, 139, 61, 181, 110, 7, 190, 79, 56, 131, 60, 124, 49, 138, 189, 215, 122, 103, 61, 40, 33, 33, 188, 154, 7, 13, 189, 26, 253, 6, 188, 174, 28, 149, 59, 236, 173, 5, 62, 106, 38, 205, 61, 121, 234, 247, 60, 111, 98, 148, 189, 255, 73, 166, 188, 61, 4, 55, 61, 159, 3, 28, 62, 1, 132, 255, 188, 225, 192, 213, 60, 210, 116, 36, 189, 162, 233, 17, 62, 182, 134, 104, 190, 179, 222, 212, 190, 245, 233, 114, 190, 240, 121, 253, 61, 35, 79, 161, 61, 19, 215, 106, 61, 156, 134, 26, 61, 173, 70, 189, 62, 11, 102, 50, 190, 75, 130, 156, 62, 75, 90, 204, 62, 4, 168, 159, 61, 104, 224, 150, 62, 83, 15, 59, 61, 8, 17, 54, 190, 42, 110, 145, 61, 112, 208, 10, 190, 173, 52, 149, 60, 90, 39, 114, 61, 82, 159, 75, 189, 187, 164, 9, 61, 197, 236, 64, 61, 161, 253, 4, 190, 7, 182, 28, 190, 140, 208, 0, 62, 182, 155, 200, 61, 30, 222, 24, 62, 34, 205, 45, 62, 217, 113, 16, 189, 196, 118, 107, 189, 20, 13, 140, 187, 249, 56, 150, 188, 154, 73, 227, 188, 238, 246, 50, 190, 74, 245, 32, 189, 119, 214, 141, 188, 132, 172, 94, 189, 13, 239, 8, 190, 202, 226, 131, 57, 222, 103, 134, 189, 230, 76, 245, 189, 83, 192, 162, 188, 188, 89, 27, 62, 188, 162, 24, 190, 204, 86, 20, 189, 54, 12, 144, 189, 16, 9, 245, 60, 114, 101, 129, 61, 215, 20, 59, 62, 126, 215, 33, 62, 224, 70, 48, 61, 80, 170, 96, 190, 121, 179, 2, 190, 81, 16, 236, 61, 230, 252, 0, 190, 55, 30, 127, 189, 108, 244, 51, 59, 14, 76, 18, 190, 224, 138, 131, 60, 167, 179, 10, 61, 253, 131, 205, 189, 76, 240, 99, 61, 220, 132, 160, 189, 220, 88, 52, 190, 121, 104, 48, 189, 7, 183, 223, 61, 254, 71, 34, 62, 248, 218, 10, 190, 36, 191, 153, 189, 50, 210, 8, 62, 114, 102, 7, 62, 185, 97, 254, 189, 219, 197, 9, 189, 67, 133, 70, 188, 158, 28, 9, 190, 227, 73, 180, 189, 87, 202, 68, 189, 98, 158, 48, 62, 79, 216, 19, 62, 236, 146, 219, 61, 191, 172, 174, 189, 96, 172, 148, 60, 58, 84, 62, 62, 158, 3, 22, 62, 189, 21, 26, 190, 122, 120, 33, 62, 77, 223, 96, 189, 215, 98, 119, 189, 227, 223, 2, 190, 247, 11, 106, 62, 152, 90, 10, 62, 209, 190, 243, 189, 112, 120, 39, 62, 235, 212, 208, 61, 9, 138, 48, 61, 15, 36, 243, 61, 26, 83, 36, 62, 7, 38, 70, 62, 24, 195, 170, 61, 36, 40, 178, 61, 253, 15, 139, 61, 43, 6, 14, 62, 41, 173, 226, 189, 192, 96, 125, 189, 106, 201, 162, 61, 60, 13, 3, 190, 100, 251, 156, 190, 90, 129, 35, 62, 45, 81, 105, 60, 245, 11, 46, 62, 220, 3, 61, 61, 20, 54, 245, 61, 18, 16, 174, 189, 25, 183, 130, 61, 80, 23, 181, 61, 219, 38, 169, 189, 23, 98, 131, 61, 102, 12, 99, 189, 219, 139, 59, 190, 188, 232, 8, 61, 69, 182, 70, 62, 112, 46, 121, 62, 146, 182, 111, 190, 125, 225, 54, 189, 162, 198, 20, 188, 23, 4, 239, 61, 207, 138, 185, 189, 2, 27, 59, 61, 112, 202, 77, 189, 66, 6, 110, 189, 172, 171, 45, 189, 30, 244, 208, 60, 117, 195, 68, 61, 181, 47, 199, 60, 98, 13, 173, 189, 109, 116, 79, 189, 33, 138, 118, 62, 229, 233, 221, 190, 151, 7, 79, 190, 123, 135, 215, 189, 169, 3, 95, 190, 86, 224, 97, 62, 98, 15, 186, 189, 67, 243, 182, 60, 160, 128, 236, 189, 104, 122, 161, 189, 7, 41, 38, 189, 90, 100, 174, 189, 216, 219, 82, 190, 130, 108, 23, 190, 197, 92, 146, 189, 59, 82, 8, 61, 202, 33, 24, 61, 196, 237, 166, 61, 216, 172, 172, 61, 193, 244, 178, 61, 187, 140, 154, 61, 155, 80, 91, 189, 3, 72, 5, 62, 89, 95, 81, 190, 158, 172, 100, 62, 59, 28, 22, 62, 87, 64, 252, 189, 217, 130, 137, 189, 5, 140, 81, 190, 151, 100, 203, 189, 183, 202, 77, 61, 75, 180, 87, 190, 52, 73, 54, 189, 196, 134, 18, 190, 3, 96, 229, 60, 14, 6, 198, 60, 96, 209, 195, 59, 100, 1, 188, 61, 82, 69, 33, 190, 108, 103, 106, 61, 218, 249, 21, 62, 251, 235, 21, 62, 62, 32, 145, 61, 198, 39, 245, 189, 173, 219, 211, 189, 218, 131, 88, 60, 0, 128, 255, 61, 197, 156, 10, 189, 145, 158, 38, 190, 6, 161, 51, 190, 181, 76, 15, 190, 198, 224, 46, 190, 137, 219, 225, 61, 222, 31, 35, 190, 251, 176, 242, 60, 0, 21, 49, 190, 52, 191, 151, 61, 227, 46, 176, 60, 42, 46, 193, 189, 93, 152, 23, 188, 33, 130, 81, 61, 201, 190, 154, 61, 140, 244, 29, 190, 214, 42, 35, 61, 124, 255, 213, 61, 107, 212, 154, 61, 33, 23, 49, 190, 151, 101, 121, 189, 54, 171, 115, 61, 3, 196, 51, 60, 116, 156, 68, 189, 1, 153, 16, 190, 133, 7, 3, 62, 189, 139, 25, 62, 31, 226, 48, 62, 231, 198, 65, 61, 50, 157, 173, 61, 165, 44, 152, 59, 222, 127, 240, 189, 184, 129, 32, 188, 204, 128, 237, 61, 235, 234, 34, 62, 119, 91, 233, 189, 130, 15, 57, 190, 202, 146, 155, 58, 14, 97, 186, 61, 201, 208, 116, 61, 68, 16, 74, 61, 46, 119, 192, 62, 109, 30, 155, 62, 115, 90, 224, 61, 205, 173, 52, 61, 199, 107, 149, 189, 50, 246, 201, 189, 85, 187, 6, 61, 2, 123, 157, 189, 1, 171, 12, 60, 6, 87, 95, 190, 51, 104, 192, 190, 94, 54, 120, 61, 236, 175, 113, 61, 233, 206, 39, 62, 72, 221, 8, 190, 105, 210, 43, 190, 73, 247, 244, 61, 222, 41, 12, 61, 117, 225, 235, 189, 2, 128, 67, 189, 125, 244, 142, 61, 171, 250, 135, 189, 13, 40, 72, 62, 35, 195, 188, 61, 74, 3, 136, 61, 13, 70, 2, 190, 78, 228, 37, 62, 253, 77, 240, 189, 155, 183, 141, 61, 137, 243, 42, 189, 70, 83, 192, 188, 222, 200, 41, 189, 191, 115, 185, 189, 103, 145, 96, 190, 47, 38, 168, 188, 253, 254, 64, 62, 153, 4, 154, 61, 77, 238, 183, 60, 78, 46, 25, 61, 124, 117, 137, 61, 239, 251, 77, 190, 105, 254, 53, 62, 232, 108, 136, 62, 215, 31, 47, 190, 122, 224, 151, 62, 4, 237, 206, 61, 46, 100, 8, 190, 23, 14, 231, 61, 35, 6, 78, 61, 112, 119, 198, 189, 186, 21, 116, 62, 172, 251, 96, 60, 99, 23, 96, 61, 7, 102, 70, 189, 43, 253, 154, 61, 204, 172, 93, 61, 129, 215, 232, 61, 70, 22, 51, 188, 84, 26, 195, 187, 104, 162, 30, 190, 90, 179, 160, 61, 244, 49, 99, 61, 164, 149, 174, 61, 138, 194, 10, 190, 20, 94, 120, 62, 249, 163, 103, 188, 131, 93, 45, 187, 181, 64, 204, 189, 189, 69, 233, 61, 171, 253, 17, 189, 76, 217, 58, 190, 173, 130, 152, 188, 188, 238, 91, 58, 23, 3, 100, 187, 199, 4, 0, 189, 91, 246, 15, 62, 90, 80, 152, 61, 90, 68, 112, 62, 10, 112, 87, 61, 81, 225, 153, 61, 143, 17, 49, 189, 44, 170, 9, 62, 15, 231, 216, 61, 135, 90, 149, 189, 16, 119, 5, 60, 99, 211, 11, 190, 250, 197, 67, 190, 35, 105, 130, 189, 187, 231, 194, 60, 174, 66, 145, 62, 6, 121, 14, 61, 6, 47, 128, 61, 62, 244, 107, 190, 100, 208, 146, 61, 185, 133, 207, 188, 148, 67, 232, 61, 161, 252, 240, 61, 53, 131, 139, 60, 24, 55, 150, 61, 101, 166, 99, 188, 10, 232, 195, 61, 7, 111, 173, 189, 49, 118, 3, 190, 172, 75, 119, 190, 27, 233, 99, 62, 30, 212, 141, 190, 134, 193, 102, 190, 156, 109, 220, 61, 134, 65, 184, 190, 190, 244, 232, 61, 45, 196, 87, 61, 134, 64, 35, 190, 58, 124, 14, 62, 222, 60, 219, 61, 188, 111, 199, 61, 64, 48, 96, 62, 107, 230, 92, 190, 34, 126, 57, 185, 143, 156, 82, 190, 10, 29, 166, 61, 115, 188, 146, 189, 218, 151, 86, 61, 102, 125, 134, 190, 86, 238, 20, 190, 46, 122, 211, 189, 105, 225, 122, 61, 72, 0, 195, 188, 6, 84, 17, 62, 199, 206, 51, 62, 26, 143, 20, 190, 109, 197, 73, 62, 65, 118, 15, 190, 81, 60, 165, 60, 251, 32, 91, 62, 47, 210, 21, 62, 181, 4, 185, 190, 40, 59, 252, 62, 206, 231, 143, 190, 43, 154, 79, 190, 210, 105, 23, 190, 148, 182, 133, 190, 220, 139, 101, 62, 0, 174, 236, 61, 223, 145, 205, 189, 147, 105, 248, 61, 117, 128, 226, 61, 63, 247, 6, 62, 97, 230, 41, 190, 198, 58, 156, 189, 58, 27, 142, 188, 181, 124, 158, 61, 237, 131, 31, 190, 49, 71, 29, 190, 109, 195, 50, 61, 160, 244, 233, 189, 163, 221, 176, 188, 145, 156, 242, 189, 9, 8, 5, 190, 35, 145, 142, 59, 213, 1, 6, 190, 201, 132, 20, 60, 5, 181, 181, 59, 104, 34, 14, 190, 26, 124, 243, 189, 43, 11, 183, 61, 15, 160, 96, 189, 53, 159, 132, 189, 21, 31, 5, 190, 131, 209, 170, 60, 140, 4, 198, 61, 105, 236, 132, 188, 128, 188, 247, 189, 110, 85, 29, 190, 160, 36, 56, 187, 4, 90, 131, 190, 220, 71, 221, 61, 8, 8, 235, 61, 184, 1, 83, 61, 142, 110, 205, 61, 143, 240, 255, 60, 248, 246, 202, 189, 246, 183, 164, 188, 254, 12, 80, 190, 97, 64, 234, 60, 136, 5, 152, 189, 158, 180, 175, 62, 85, 116, 209, 190, 61, 75, 113, 61, 60, 134, 155, 190, 219, 77, 147, 62, 218, 186, 115, 189, 44, 74, 211, 61, 9, 157, 233, 62, 70, 45, 44, 190, 95, 75, 176, 189, 186, 226, 20, 189, 85, 233, 213, 61, 70, 19, 182, 59, 63, 79, 5, 190, 219, 42, 201, 190, 57, 247, 65, 62, 195, 140, 100, 190, 44, 207, 34, 191, 162, 90, 10, 190, 67, 60, 242, 190, 241, 94, 160, 62, 8, 70, 214, 189, 152, 110, 4, 62, 27, 11, 233, 188, 137, 125, 237, 189, 140, 220, 40, 62, 19, 166, 8, 61, 67, 150, 235, 188, 26, 19, 255, 188, 15, 72, 122, 189, 69, 13, 204, 61, 218, 132, 6, 62, 139, 225, 142, 189, 28, 132, 52, 190, 159, 162, 68, 189, 108, 187, 31, 189, 224, 169, 130, 61, 92, 91, 255, 188, 55, 253, 136, 61, 104, 157, 189, 189, 144, 214, 192, 189, 8, 170, 241, 188, 43, 16, 0, 190, 222, 114, 22, 189, 61, 254, 225, 188, 120, 168, 22, 190, 197, 212, 62, 188, 215, 162, 226, 61, 65, 10, 21, 190, 242, 21, 235, 60, 208, 206, 129, 61, 247, 171, 142, 60, 208, 151, 1, 189, 125, 96, 197, 189, 240, 235, 134, 189, 117, 43, 169, 61, 124, 131, 127, 61, 7, 152, 17, 62, 58, 28, 52, 190, 80, 81, 177, 60, 6, 228, 135, 189, 97, 141, 254, 189, 196, 101, 155, 189, 199, 98, 46, 62, 228, 64, 34, 190, 240, 86, 8, 190, 171, 216, 173, 61, 174, 12, 21, 62, 214, 59, 220, 189, 129, 93, 171, 60, 47, 78, 110, 189, 160, 238, 164, 61, 89, 222, 228, 61, 174, 106, 7, 190, 118, 158, 45, 190, 253, 0, 128, 60, 177, 82, 187, 189, 238, 39, 198, 188, 179, 215, 220, 60, 42, 212, 185, 61, 31, 7, 5, 62, 207, 78, 208, 59, 110, 138, 84, 61, 30, 3, 11, 190, 120, 222, 228, 189, 0, 231, 201, 61, 242, 245, 26, 62, 136, 98, 147, 189, 241, 239, 21, 190, 70, 127, 164, 189, 119, 160, 87, 190, 10, 28, 3, 62, 207, 143, 58, 62, 104, 145, 175, 189, 121, 154, 255, 61, 23, 0, 20, 189, 185, 133, 83, 60, 240, 222, 96, 60, 123, 136, 48, 190, 67, 72, 129, 61, 239, 213, 205, 189, 85, 246, 101, 61, 99, 121, 62, 62, 205, 152, 5, 190, 163, 103, 248, 189, 64, 179, 235, 189, 111, 153, 166, 189, 67, 41, 149, 189, 98, 21, 155, 189, 184, 215, 146, 61, 10, 81, 9, 62, 38, 186, 14, 190, 11, 139, 41, 190, 29, 131, 64, 62, 241, 33, 24, 190, 133, 120, 4, 189, 106, 15, 28, 189, 127, 65, 125, 61, 95, 231, 33, 62, 161, 237, 33, 61, 118, 234, 20, 189, 200, 128, 183, 189, 90, 147, 10, 62, 161, 63, 225, 61, 67, 41, 15, 190, 229, 248, 31, 190, 80, 58, 195, 61, 148, 206, 60, 62, 39, 239, 8, 62, 247, 174, 69, 190, 201, 178, 28, 189, 203, 199, 8, 190, 221, 189, 186, 189, 232, 252, 205, 61, 63, 23, 182, 59, 193, 65, 137, 59, 118, 146, 44, 189, 234, 206, 69, 62, 155, 118, 166, 190, 146, 17, 38, 62, 199, 174, 204, 61, 134, 137, 157, 60, 53, 179, 218, 190, 62, 62, 20, 62, 247, 136, 187, 190, 152, 211, 197, 190, 212, 86, 9, 61, 232, 96, 163, 190, 230, 71, 250, 60, 57, 75, 240, 189, 50, 56, 165, 189, 180, 230, 22, 61, 196, 253, 185, 61, 21, 253, 166, 62, 254, 218, 148, 61, 135, 111, 155, 60, 80, 166, 84, 60, 80, 139, 13, 189, 84, 89, 24, 190, 63, 124, 181, 189, 51, 96, 135, 62, 68, 89, 102, 61, 191, 208, 57, 190, 220, 243, 148, 187, 44, 92, 77, 61, 211, 156, 255, 189, 105, 64, 255, 61, 72, 148, 37, 62, 210, 196, 17, 63, 26, 6, 164, 62, 21, 230, 106, 190, 185, 82, 78, 189, 194, 159, 92, 189, 125, 138, 246, 61, 156, 207, 157, 190, 121, 27, 155, 59, 74, 228, 51, 189, 18, 149, 190, 190, 39, 35, 30, 190, 107, 237, 47, 190, 240, 99, 136, 62, 29, 100, 189, 190, 11, 115, 244, 189, 210, 173, 85, 190, 41, 243, 150, 61, 238, 155, 158, 190, 165, 68, 173, 59, 149, 26, 32, 61, 45, 79, 72, 62, 200, 220, 67, 62, 222, 163, 79, 62, 138, 78, 96, 190, 69, 236, 211, 189, 99, 86, 142, 62, 215, 222, 248, 61, 239, 239, 53, 190, 142, 211, 128, 190, 248, 60, 18, 60, 129, 133, 169, 62, 165, 36, 138, 60, 148, 99, 160, 190, 208, 79, 69, 190, 29, 210, 122, 187, 182, 40, 1, 190, 149, 25, 175, 60, 80, 230, 140, 190, 55, 21, 237, 62, 64, 153, 45, 189, 249, 159, 58, 186, 164, 173, 219, 62, 71, 177, 139, 189, 212, 130, 60, 62, 157, 181, 3, 191, 78, 90, 140, 189, 237, 61, 135, 61, 172, 38, 132, 61, 246, 196, 30, 62, 120, 28, 22, 190, 34, 102, 0, 62, 14, 34, 222, 189, 214, 207, 187, 188, 63, 187, 83, 61, 19, 241, 226, 61, 107, 127, 230, 189, 155, 120, 161, 189, 110, 130, 195, 186, 89, 254, 5, 61, 54, 16, 21, 61, 167, 78, 47, 185, 119, 117, 152, 60, 1, 191, 214, 189, 249, 216, 15, 62, 69, 135, 65, 189, 112, 28, 152, 188, 124, 116, 227, 61, 167, 180, 17, 190, 97, 104, 54, 189, 35, 207, 131, 59, 28, 190, 158, 61, 200, 100, 237, 189, 158, 153, 209, 189, 130, 74, 96, 189, 135, 29, 226, 188, 242, 75, 53, 189, 103, 93, 7, 189, 169, 142, 190, 189, 232, 123, 29, 62, 222, 225, 77, 189, 63, 200, 16, 189, 166, 62, 0, 62, 70, 242, 101, 187, 139, 143, 49, 62, 18, 232, 36, 62, 247, 253, 169, 61, 27, 187, 47, 62, 125, 234, 70, 61, 91, 135, 155, 189, 69, 58, 79, 62, 246, 86, 143, 188, 0, 57, 194, 61, 3, 9, 248, 59, 87, 73, 140, 189, 211, 73, 181, 61, 67, 253, 15, 62, 105, 134, 151, 190, 185, 27, 93, 190, 15, 122, 6, 190, 207, 176, 212, 61, 18, 146, 57, 189, 231, 66, 27, 62, 188, 153, 153, 61, 232, 208, 137, 189, 105, 223, 58, 62, 210, 40, 228, 62, 16, 11, 228, 187, 241, 196, 129, 61, 134, 4, 55, 190, 62, 76, 40, 190, 19, 179, 187, 189, 74, 51, 12, 61, 132, 46, 247, 189, 88, 58, 214, 61, 253, 155, 208, 60, 177, 99, 206, 189, 150, 236, 142, 189, 5, 233, 15, 62, 218, 234, 211, 61, 205, 61, 115, 189, 251, 9, 128, 189, 65, 157, 242, 61, 122, 194, 7, 62, 200, 204, 140, 189, 17, 81, 8, 190, 17, 207, 142, 188, 193, 46, 104, 189, 69, 52, 94, 61, 223, 166, 156, 189, 37, 239, 199, 189, 161, 172, 97, 61, 251, 67, 28, 190, 220, 139, 216, 61, 175, 208, 11, 189, 21, 249, 64, 190, 200, 156, 65, 188, 8, 27, 136, 61, 241, 147, 191, 60, 78, 179, 14, 62, 111, 214, 184, 188, 44, 246, 58, 189, 52, 250, 40, 190, 232, 13, 146, 61, 210, 152, 87, 61, 145, 26, 124, 189, 240, 33, 208, 188, 188, 120, 129, 188, 8, 225, 238, 61, 226, 142, 63, 190, 21, 3, 51, 190, 219, 121, 128, 61, 51, 222, 98, 189, 241, 33, 22, 190, 134, 116, 24, 62, 224, 121, 14, 61, 99, 230, 242, 187, 142, 154, 230, 189, 90, 136, 205, 60, 90, 238, 50, 190, 66, 122, 106, 189, 55, 49, 37, 62, 255, 224, 176, 188, 184, 3, 34, 190, 74, 203, 90, 61, 143, 53, 45, 62, 226, 25, 187, 61, 206, 243, 160, 61, 56, 102, 13, 61, 2, 196, 148, 189, 162, 23, 164, 60, 152, 150, 50, 190, 109, 13, 87, 60, 92, 244, 134, 189};
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
                alignas(float) const unsigned char memory[] = {229, 46, 190, 61, 213, 133, 132, 61, 136, 104, 63, 190, 138, 153, 70, 62, 167, 145, 11, 61, 157, 253, 180, 188, 124, 242, 131, 188, 168, 200, 230, 189, 97, 171, 243, 61, 191, 243, 51, 61, 184, 204, 251, 60, 50, 177, 46, 61, 76, 135, 79, 59, 128, 140, 40, 60, 213, 55, 243, 189, 236, 243, 120, 60, 162, 228, 14, 62, 114, 229, 78, 62, 221, 117, 225, 187, 139, 252, 218, 58, 166, 61, 138, 189, 143, 123, 134, 61, 32, 79, 42, 190, 222, 20, 17, 189, 8, 255, 2, 62, 161, 109, 193, 61, 115, 244, 119, 62, 156, 39, 12, 62, 117, 143, 52, 190, 161, 195, 200, 60, 248, 132, 167, 189, 46, 124, 10, 189};
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
                alignas(float) const unsigned char memory[] = {40, 252, 246, 188, 218, 207, 121, 62, 156, 67, 15, 62, 146, 157, 229, 189, 124, 33, 162, 62, 249, 122, 35, 190, 206, 29, 114, 190, 115, 118, 26, 62, 188, 106, 236, 61, 164, 13, 13, 62, 94, 23, 223, 61, 198, 108, 242, 189, 191, 119, 51, 190, 228, 212, 194, 188, 141, 108, 7, 62, 24, 155, 3, 190, 91, 172, 35, 62, 155, 170, 190, 188, 28, 54, 48, 190, 231, 71, 129, 190, 28, 91, 133, 61, 201, 34, 235, 190, 125, 254, 169, 189, 47, 210, 62, 61, 141, 227, 22, 62, 59, 20, 58, 190, 255, 230, 150, 190, 71, 171, 188, 62, 200, 234, 78, 186, 209, 128, 107, 62, 106, 105, 131, 61, 211, 224, 149, 61, 222, 201, 184, 189, 101, 148, 192, 61, 7, 36, 220, 61, 213, 69, 198, 189, 104, 159, 81, 190, 208, 149, 22, 62, 118, 152, 232, 189, 45, 29, 167, 188, 161, 173, 211, 189, 49, 208, 115, 189, 113, 70, 32, 62, 166, 243, 218, 189, 20, 241, 14, 62, 49, 98, 159, 61, 26, 169, 176, 58, 163, 5, 209, 189, 0, 13, 26, 190, 52, 170, 62, 190, 91, 67, 249, 60, 88, 109, 151, 61, 191, 36, 175, 61, 82, 131, 228, 189, 198, 37, 34, 62, 121, 208, 21, 62, 147, 61, 226, 61, 65, 249, 45, 62, 216, 149, 102, 190, 94, 245, 76, 60, 84, 162, 4, 189, 171, 0, 15, 190, 47, 16, 212, 188, 181, 94, 18, 62};
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
                alignas(float) const unsigned char memory[] = {197, 138, 196, 61, 43, 33, 240, 189};
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
    alignas(float) const unsigned char memory[] = {247, 132, 83, 191, 120, 123, 46, 63, 95, 0, 89, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {182, 98, 245, 191, 116, 3, 27, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0097/steps/000000000002000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}