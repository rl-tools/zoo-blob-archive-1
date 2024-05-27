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
                alignas(float) const unsigned char memory[] = {193, 231, 56, 191, 55, 13, 146, 63, 16, 99, 212, 62, 33, 249, 41, 190, 74, 104, 94, 191, 80, 234, 149, 62, 62, 150, 26, 63, 114, 127, 145, 63, 38, 32, 143, 62, 227, 52, 42, 63, 49, 49, 156, 191, 237, 194, 209, 190, 153, 150, 32, 190, 149, 105, 151, 189, 230, 112, 104, 190, 254, 199, 140, 62, 125, 150, 109, 191, 208, 133, 148, 190, 139, 79, 166, 190, 201, 3, 190, 191, 43, 247, 193, 190, 50, 214, 1, 191, 104, 134, 68, 63, 211, 99, 231, 189, 177, 75, 200, 190, 23, 61, 147, 190, 175, 18, 151, 190, 172, 213, 47, 62, 73, 198, 245, 62, 252, 92, 75, 190, 84, 2, 159, 62, 102, 234, 197, 62, 116, 133, 198, 190, 120, 172, 240, 62, 2, 50, 10, 191, 174, 142, 6, 188, 177, 6, 72, 191, 228, 205, 216, 63, 121, 23, 180, 62, 4, 113, 50, 189, 210, 155, 102, 63, 176, 33, 87, 63, 32, 24, 132, 190, 112, 38, 76, 63, 43, 23, 53, 190, 30, 168, 201, 62, 107, 51, 236, 62, 0, 126, 187, 190, 224, 107, 44, 62, 35, 210, 213, 191, 140, 78, 173, 190, 130, 124, 4, 63, 133, 197, 168, 62, 21, 40, 211, 62, 191, 197, 141, 191, 71, 208, 232, 190, 45, 139, 25, 189, 32, 45, 131, 191, 70, 244, 113, 62, 114, 75, 29, 60, 207, 254, 189, 62, 170, 176, 183, 62, 127, 29, 18, 63, 149, 82, 239, 190, 171, 194, 68, 63, 151, 171, 79, 62, 26, 200, 163, 61, 50, 142, 206, 191, 3, 122, 195, 190, 242, 248, 176, 62, 181, 12, 233, 61, 102, 201, 142, 188, 86, 120, 181, 62, 117, 24, 50, 191, 125, 128, 2, 62, 40, 152, 206, 62, 42, 88, 11, 190, 248, 44, 5, 191, 26, 125, 129, 191, 112, 19, 150, 190, 166, 229, 213, 59, 6, 173, 168, 61, 155, 147, 222, 189, 116, 170, 52, 191, 175, 210, 152, 190, 179, 160, 75, 191, 194, 30, 54, 190, 169, 90, 251, 62, 223, 59, 125, 190, 195, 130, 54, 63, 244, 237, 204, 189, 176, 125, 47, 191, 187, 174, 180, 62, 123, 132, 129, 190, 179, 23, 221, 62, 42, 143, 224, 61};
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
                alignas(float) const unsigned char memory[] = {203, 207, 2, 191, 163, 33, 235, 190, 184, 19, 201, 189, 182, 75, 8, 191, 145, 68, 147, 190, 215, 77, 105, 62, 180, 56, 24, 190, 146, 26, 59, 61, 45, 227, 16, 191, 74, 120, 41, 189, 37, 119, 218, 61, 161, 75, 61, 63, 218, 252, 222, 58, 67, 188, 183, 190, 239, 125, 35, 61, 44, 246, 13, 62, 123, 218, 19, 62, 134, 63, 130, 62, 165, 202, 17, 190, 61, 93, 158, 62, 189, 194, 128, 191, 121, 165, 31, 63, 158, 135, 217, 62, 177, 67, 0, 191, 165, 23, 27, 189, 94, 209, 146, 190, 185, 192, 28, 189, 86, 148, 188, 190, 42, 206, 151, 62, 47, 101, 151, 61, 234, 199, 129, 190, 105, 28, 172, 62};
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
                alignas(float) const unsigned char memory[] = {169, 31, 160, 190, 209, 54, 130, 60, 102, 167, 170, 190, 194, 236, 237, 190, 37, 250, 217, 60, 173, 23, 11, 62, 4, 78, 97, 62, 15, 207, 180, 61, 165, 248, 229, 189, 0, 6, 196, 188, 18, 128, 0, 189, 20, 12, 70, 188, 112, 220, 83, 61, 5, 81, 227, 189, 20, 161, 46, 190, 173, 221, 118, 61, 191, 141, 136, 61, 145, 139, 217, 190, 229, 130, 237, 62, 16, 181, 190, 62, 76, 2, 164, 190, 255, 223, 195, 62, 113, 160, 187, 189, 146, 215, 14, 62, 229, 168, 211, 190, 170, 0, 140, 190, 74, 235, 105, 62, 85, 192, 140, 61, 116, 175, 163, 62, 20, 9, 54, 190, 108, 128, 239, 188, 183, 166, 176, 62, 146, 82, 73, 62, 188, 179, 106, 61, 155, 33, 135, 190, 235, 166, 138, 62, 36, 89, 168, 190, 131, 44, 81, 189, 113, 27, 24, 191, 106, 102, 78, 190, 165, 189, 130, 191, 64, 227, 239, 189, 23, 66, 236, 189, 223, 74, 150, 62, 148, 226, 237, 60, 230, 85, 73, 189, 73, 59, 12, 62, 248, 64, 182, 189, 71, 75, 173, 190, 242, 144, 177, 189, 80, 144, 177, 188, 31, 22, 209, 189, 38, 92, 194, 190, 201, 22, 62, 190, 55, 244, 202, 61, 24, 188, 34, 62, 86, 144, 20, 62, 183, 213, 163, 62, 51, 161, 79, 62, 96, 207, 142, 190, 131, 39, 132, 62, 56, 176, 2, 190, 141, 103, 134, 62, 11, 110, 2, 61, 1, 32, 60, 190, 45, 86, 95, 185, 83, 146, 144, 190, 12, 251, 14, 190, 164, 101, 136, 62, 130, 129, 190, 61, 23, 110, 147, 189, 245, 24, 46, 62, 49, 187, 204, 62, 99, 94, 140, 61, 110, 218, 209, 61, 240, 59, 115, 190, 65, 24, 119, 60, 107, 81, 77, 190, 182, 32, 4, 61, 235, 154, 196, 189, 58, 145, 144, 190, 233, 118, 210, 190, 47, 11, 255, 61, 190, 38, 53, 62, 96, 1, 39, 190, 189, 76, 205, 189, 21, 219, 156, 189, 144, 72, 32, 190, 89, 104, 125, 190, 75, 60, 170, 188, 137, 31, 52, 190, 117, 3, 17, 62, 206, 140, 236, 60, 230, 80, 49, 190, 18, 255, 63, 190, 12, 28, 244, 189, 172, 201, 215, 190, 114, 10, 60, 190, 128, 41, 94, 62, 126, 50, 51, 191, 98, 184, 130, 188, 101, 232, 140, 189, 126, 25, 122, 59, 132, 167, 30, 62, 33, 42, 70, 62, 254, 119, 188, 186, 196, 74, 197, 60, 172, 101, 19, 62, 84, 130, 122, 191, 72, 58, 134, 190, 44, 232, 221, 60, 106, 152, 25, 62, 41, 130, 241, 190, 202, 82, 111, 62, 131, 252, 108, 62, 192, 184, 1, 62, 9, 62, 30, 61, 130, 150, 28, 61, 147, 240, 136, 190, 130, 198, 49, 190, 190, 205, 41, 61, 111, 212, 20, 189, 49, 45, 31, 188, 239, 15, 201, 61, 214, 56, 231, 189, 246, 127, 42, 62, 200, 88, 208, 188, 148, 19, 80, 189, 56, 75, 17, 191, 36, 232, 59, 190, 69, 132, 4, 189, 177, 248, 192, 190, 134, 72, 31, 189, 33, 120, 82, 62, 106, 248, 116, 61, 188, 168, 50, 62, 159, 108, 34, 62, 225, 2, 39, 62, 4, 25, 48, 62, 50, 253, 145, 62, 171, 2, 26, 191, 22, 36, 172, 61, 38, 133, 155, 189, 83, 193, 75, 62, 89, 89, 240, 190, 3, 228, 5, 62, 148, 138, 117, 61, 150, 89, 74, 61, 248, 15, 16, 190, 65, 174, 97, 190, 38, 101, 212, 60, 253, 188, 20, 61, 52, 18, 132, 62, 180, 165, 66, 190, 122, 105, 246, 189, 216, 11, 38, 62, 19, 187, 34, 190, 180, 241, 173, 189, 22, 198, 64, 189, 239, 169, 252, 189, 167, 106, 76, 61, 113, 94, 219, 61, 137, 209, 185, 190, 209, 232, 27, 62, 26, 183, 46, 191, 171, 169, 179, 61, 166, 24, 28, 191, 229, 154, 31, 190, 197, 160, 108, 191, 57, 26, 1, 189, 246, 55, 168, 59, 41, 220, 179, 62, 100, 51, 47, 190, 9, 65, 52, 61, 48, 83, 146, 189, 124, 230, 69, 62, 238, 115, 224, 189, 116, 112, 134, 189, 252, 95, 185, 62, 71, 35, 157, 59, 126, 25, 146, 190, 211, 113, 156, 190, 52, 184, 44, 189, 206, 112, 158, 61, 40, 129, 20, 62, 211, 73, 133, 62, 100, 49, 136, 62, 233, 121, 9, 190, 192, 175, 209, 62, 139, 96, 246, 189, 102, 167, 158, 61, 95, 126, 69, 190, 113, 185, 80, 187, 211, 51, 127, 62, 171, 217, 102, 190, 158, 47, 228, 62, 12, 97, 35, 190, 204, 226, 145, 189, 10, 120, 94, 190, 52, 71, 254, 188, 27, 69, 95, 188, 219, 211, 219, 189, 44, 60, 249, 61, 150, 181, 30, 62, 67, 168, 130, 189, 51, 175, 39, 189, 158, 136, 109, 60, 222, 154, 234, 61, 252, 158, 19, 62, 32, 152, 153, 188, 141, 232, 25, 59, 47, 19, 168, 190, 42, 107, 153, 190, 198, 23, 7, 191, 93, 203, 103, 61, 248, 120, 14, 62, 255, 60, 57, 62, 17, 34, 203, 61, 214, 243, 89, 189, 232, 3, 140, 188, 188, 103, 30, 62, 15, 76, 2, 190, 169, 2, 210, 62, 191, 13, 172, 190, 106, 198, 26, 190, 69, 28, 98, 189, 221, 223, 139, 189, 31, 232, 208, 61, 230, 21, 177, 60, 212, 3, 13, 190, 20, 49, 5, 190, 153, 33, 136, 189, 74, 58, 125, 61, 13, 66, 0, 189, 124, 117, 39, 62, 82, 54, 205, 187, 224, 100, 212, 61, 208, 160, 55, 59, 95, 206, 142, 61, 84, 227, 173, 189, 32, 75, 159, 189, 226, 144, 37, 190, 51, 16, 23, 189, 49, 138, 152, 189, 28, 8, 221, 61, 113, 203, 52, 190, 200, 77, 206, 188, 73, 97, 105, 189, 175, 64, 30, 62, 238, 152, 17, 190, 12, 133, 15, 189, 86, 205, 244, 61, 39, 165, 181, 61, 236, 202, 199, 61, 217, 211, 49, 190, 247, 82, 236, 189, 237, 188, 15, 190, 59, 116, 116, 189, 185, 251, 6, 62, 250, 227, 41, 60, 221, 23, 126, 188, 199, 74, 15, 62, 206, 110, 34, 62, 131, 49, 219, 61, 138, 56, 1, 189, 240, 226, 31, 190, 121, 131, 134, 189, 152, 210, 52, 190, 23, 149, 0, 189, 103, 240, 143, 61, 82, 45, 156, 60, 56, 146, 139, 61, 163, 154, 13, 190, 199, 244, 5, 190, 249, 43, 99, 189, 165, 138, 27, 62, 72, 250, 229, 61, 169, 29, 47, 190, 171, 192, 188, 189, 104, 113, 52, 61, 38, 36, 105, 187, 22, 7, 71, 61, 113, 137, 203, 61, 121, 232, 244, 189, 241, 143, 158, 61, 106, 45, 189, 188, 131, 58, 164, 61, 255, 184, 215, 189, 5, 157, 25, 191, 126, 254, 237, 190, 15, 128, 38, 62, 12, 22, 228, 190, 133, 146, 61, 61, 137, 196, 160, 189, 217, 90, 39, 190, 68, 175, 116, 62, 202, 196, 45, 190, 113, 2, 76, 189, 79, 23, 216, 60, 188, 69, 72, 190, 29, 223, 81, 189, 39, 38, 209, 190, 41, 76, 139, 59, 185, 19, 66, 62, 232, 130, 125, 190, 216, 182, 120, 190, 103, 202, 49, 190, 177, 114, 198, 62, 140, 42, 77, 62, 217, 187, 99, 62, 47, 108, 212, 190, 96, 216, 6, 190, 50, 207, 206, 190, 90, 61, 139, 61, 14, 38, 183, 189, 158, 25, 217, 61, 179, 78, 208, 190, 17, 143, 234, 189, 98, 130, 218, 190, 41, 85, 180, 62, 183, 6, 112, 62, 170, 225, 60, 62, 97, 114, 180, 190, 243, 187, 2, 63, 168, 62, 46, 190, 39, 63, 103, 62, 153, 76, 2, 190, 28, 182, 158, 190, 243, 150, 98, 190, 219, 243, 157, 189, 215, 232, 122, 61, 202, 175, 12, 62, 47, 118, 111, 61, 113, 253, 132, 189, 255, 172, 124, 189, 231, 1, 57, 61, 89, 133, 104, 62, 19, 151, 83, 61, 190, 5, 131, 62, 203, 134, 177, 189, 217, 80, 231, 190, 193, 184, 96, 190, 83, 83, 208, 60, 246, 104, 130, 61, 197, 113, 179, 62, 254, 92, 140, 62, 175, 40, 44, 62, 214, 139, 3, 190, 238, 100, 155, 62, 188, 244, 89, 190, 167, 219, 162, 62, 169, 150, 97, 190, 61, 121, 86, 189, 210, 214, 138, 60, 230, 100, 165, 189, 158, 158, 243, 61, 63, 136, 142, 189, 216, 105, 17, 190, 222, 61, 31, 62, 138, 141, 49, 190, 77, 58, 230, 189, 47, 53, 125, 60, 207, 162, 238, 189, 61, 81, 142, 189, 9, 180, 91, 190, 254, 186, 151, 61, 101, 154, 11, 190, 240, 152, 124, 61, 32, 246, 27, 190, 150, 251, 18, 190, 80, 169, 163, 61, 219, 235, 131, 61, 201, 201, 49, 190, 74, 125, 3, 190, 243, 235, 47, 190, 70, 199, 252, 188, 223, 134, 66, 59, 152, 58, 21, 61, 108, 152, 163, 189, 200, 230, 191, 189, 180, 200, 27, 190, 227, 172, 237, 61, 146, 137, 62, 61, 76, 197, 42, 189, 245, 196, 141, 190, 75, 198, 15, 62, 138, 186, 140, 189, 241, 247, 146, 189, 40, 146, 110, 190, 92, 104, 42, 62, 89, 47, 68, 62, 62, 148, 234, 189, 6, 40, 42, 62, 31, 121, 62, 190, 41, 223, 3, 62, 125, 57, 93, 62, 49, 202, 178, 190, 135, 70, 52, 190, 242, 31, 11, 190, 195, 230, 16, 62, 248, 218, 16, 62, 213, 217, 139, 61, 248, 163, 87, 62, 178, 215, 234, 189, 54, 118, 86, 189, 7, 242, 225, 190, 85, 247, 142, 61, 227, 8, 35, 190, 211, 195, 48, 62, 210, 17, 24, 190, 107, 117, 161, 189, 177, 176, 9, 62, 22, 116, 110, 62, 71, 113, 101, 62, 98, 6, 1, 62, 96, 64, 112, 190, 59, 108, 21, 190, 161, 167, 194, 61, 228, 203, 130, 190, 175, 132, 16, 190, 49, 244, 204, 187, 92, 157, 37, 62, 244, 151, 184, 60, 59, 179, 157, 62, 189, 228, 235, 189, 99, 4, 252, 189, 7, 133, 0, 61, 12, 82, 150, 62, 65, 146, 245, 188, 58, 94, 176, 189, 62, 137, 40, 190, 74, 159, 68, 62, 246, 254, 55, 188, 96, 238, 250, 189, 124, 223, 9, 62, 71, 89, 102, 61, 109, 76, 135, 190, 126, 118, 221, 189, 249, 201, 177, 189, 176, 149, 156, 189, 184, 117, 163, 62, 135, 25, 247, 189, 38, 112, 153, 60, 65, 171, 190, 189, 66, 12, 188, 61, 245, 232, 139, 187, 248, 79, 140, 62, 102, 31, 135, 62, 70, 62, 11, 61, 249, 88, 22, 62, 236, 149, 173, 61, 109, 251, 187, 190, 7, 193, 183, 189, 21, 100, 136, 62, 192, 120, 129, 190, 59, 82, 166, 61, 180, 37, 70, 61, 74, 32, 153, 61, 201, 78, 190, 62, 1, 64, 35, 62, 47, 126, 144, 190, 62, 142, 167, 189, 173, 182, 95, 62, 237, 84, 145, 62, 194, 47, 116, 191, 149, 48, 45, 62, 163, 236, 24, 191, 41, 76, 93, 190, 37, 99, 21, 61, 209, 147, 146, 189, 155, 66, 156, 190, 208, 222, 69, 189, 122, 188, 141, 62, 211, 23, 137, 61, 136, 228, 136, 190, 199, 242, 99, 190, 75, 108, 60, 191, 89, 143, 108, 62, 232, 234, 47, 61, 9, 47, 147, 190, 226, 163, 141, 191, 228, 55, 203, 188, 227, 222, 184, 61, 85, 57, 7, 191, 189, 71, 63, 62, 93, 113, 124, 189, 164, 225, 1, 189, 45, 11, 59, 61, 233, 15, 138, 61, 76, 37, 11, 61, 119, 158, 167, 61, 206, 96, 115, 190, 194, 179, 42, 191, 225, 137, 12, 61, 194, 28, 44, 190, 143, 158, 115, 187, 92, 178, 3, 190, 237, 38, 29, 62, 6, 139, 93, 62, 123, 41, 250, 61, 115, 254, 70, 62, 182, 87, 147, 62, 125, 157, 231, 189, 163, 128, 240, 189, 6, 69, 43, 190, 112, 143, 217, 188, 126, 59, 86, 62, 183, 147, 56, 61, 231, 231, 2, 61, 88, 46, 103, 62, 75, 3, 67, 190, 213, 196, 57, 60, 34, 167, 134, 61, 0, 190, 80, 62, 200, 79, 209, 61, 165, 32, 230, 190, 194, 101, 131, 187, 25, 232, 100, 61, 110, 237, 75, 190, 34, 80, 44, 62, 142, 239, 119, 189, 130, 119, 185, 61, 142, 115, 110, 62, 27, 18, 70, 189, 167, 192, 0, 189, 115, 202, 247, 188, 101, 161, 157, 189, 215, 171, 55, 62, 190, 117, 11, 191, 37, 44, 64, 62, 52, 192, 176, 188, 33, 151, 121, 62, 57, 183, 180, 61, 94, 20, 243, 61, 80, 161, 3, 190, 158, 144, 156, 60, 15, 182, 144, 189, 115, 240, 220, 189, 205, 52, 189, 61, 21, 4, 0, 62, 118, 2, 144, 190, 129, 74, 3, 189, 229, 226, 60, 62, 90, 222, 77, 62, 118, 132, 153, 189, 58, 208, 15, 61, 65, 98, 254, 188, 102, 198, 209, 189, 159, 114, 163, 189, 62, 104, 211, 189, 215, 71, 55, 190, 156, 149, 147, 189, 199, 146, 187, 189, 198, 33, 47, 61, 31, 91, 41, 190, 122, 16, 161, 189, 251, 255, 131, 189, 211, 126, 34, 190, 120, 132, 26, 60, 134, 1, 2, 190, 209, 141, 2, 189, 22, 28, 0, 188, 168, 121, 117, 61, 232, 232, 169, 60, 143, 152, 226, 189, 174, 170, 91, 190, 123, 6, 156, 189, 168, 213, 221, 61, 230, 35, 157, 60, 154, 220, 73, 188, 99, 28, 121, 61, 22, 20, 139, 61, 209, 210, 59, 61, 235, 161, 50, 190, 239, 119, 68, 186, 246, 101, 137, 61, 36, 207, 221, 189, 149, 248, 7, 62, 224, 212, 41, 190, 242, 97, 55, 189, 90, 1, 219, 189, 236, 230, 45, 190, 228, 136, 180, 189, 105, 138, 154, 189, 24, 146, 70, 189, 52, 186, 26, 62, 45, 21, 250, 188, 249, 145, 18, 190, 86, 212, 217, 189, 40, 41, 81, 60, 125, 82, 248, 188, 18, 144, 42, 58, 80, 221, 88, 61, 227, 222, 61, 190, 119, 243, 16, 190, 222, 28, 50, 61, 47, 35, 12, 62, 76, 205, 8, 190, 63, 166, 215, 189, 250, 98, 141, 189, 86, 225, 47, 61, 245, 179, 204, 61, 200, 188, 36, 62, 152, 235, 12, 190, 168, 227, 157, 188, 38, 22, 140, 189, 215, 70, 158, 61, 148, 60, 34, 189, 27, 167, 142, 190, 105, 75, 128, 62, 199, 139, 162, 61, 174, 141, 99, 191, 128, 48, 152, 187, 77, 135, 63, 61, 238, 9, 68, 62, 232, 141, 250, 61, 12, 132, 133, 60, 43, 238, 167, 62, 216, 184, 128, 62, 7, 24, 184, 60, 19, 6, 35, 191, 104, 37, 134, 189, 31, 235, 232, 189, 71, 237, 187, 61, 249, 162, 48, 191, 34, 28, 82, 62, 241, 149, 117, 190, 40, 201, 166, 189, 114, 60, 215, 62, 153, 169, 196, 189, 143, 118, 234, 189, 140, 212, 125, 59, 26, 37, 99, 62, 1, 84, 8, 190, 169, 158, 140, 190, 183, 231, 183, 60, 16, 243, 141, 190, 39, 11, 150, 62, 25, 11, 207, 189, 243, 48, 165, 60, 167, 236, 66, 61, 50, 152, 228, 61, 250, 4, 94, 190, 230, 23, 178, 62, 163, 105, 219, 61, 30, 250, 83, 189, 98, 87, 59, 187, 94, 213, 104, 189, 103, 235, 129, 62, 145, 131, 72, 189, 25, 200, 27, 62, 60, 170, 0, 188, 47, 65, 238, 189, 52, 41, 78, 62, 192, 155, 181, 189, 133, 235, 112, 62, 15, 8, 128, 61, 228, 59, 143, 62, 169, 72, 121, 190, 98, 136, 65, 191, 206, 51, 100, 62, 202, 73, 252, 190, 153, 66, 57, 189, 183, 174, 188, 189, 36, 35, 118, 62, 70, 60, 122, 62, 20, 77, 10, 191, 202, 141, 136, 189, 240, 145, 83, 61, 190, 248, 221, 61, 198, 235, 15, 63, 60, 217, 146, 190, 154, 188, 130, 191, 119, 137, 2, 191, 114, 55, 148, 62, 44, 0, 221, 190, 38, 210, 98, 189, 54, 197, 190, 189, 144, 175, 23, 62, 168, 231, 83, 62, 216, 36, 88, 190, 218, 146, 81, 62, 209, 225, 212, 60, 4, 86, 80, 190, 119, 205, 215, 190, 116, 165, 11, 190, 41, 82, 7, 60, 108, 118, 152, 61, 60, 48, 31, 190, 208, 89, 113, 62, 174, 12, 242, 187, 33, 214, 143, 62, 232, 55, 194, 62, 232, 192, 239, 62, 2, 206, 107, 190, 151, 197, 33, 188, 234, 69, 224, 190, 129, 97, 233, 189, 248, 86, 225, 189, 235, 77, 67, 61, 179, 178, 119, 189, 90, 82, 14, 62, 211, 6, 135, 190, 70, 61, 242, 60, 244, 46, 111, 61, 87, 228, 63, 189, 129, 60, 23, 190, 18, 176, 173, 189, 228, 41, 120, 189, 30, 91, 88, 190, 228, 181, 98, 189, 162, 179, 182, 61, 214, 144, 158, 189, 168, 101, 17, 189, 195, 8, 160, 61, 116, 60, 212, 189, 113, 56, 88, 189, 17, 163, 1, 189, 175, 90, 42, 190, 103, 253, 37, 190, 176, 164, 147, 188, 14, 69, 16, 62, 196, 213, 220, 188, 8, 70, 91, 61, 137, 66, 219, 189, 26, 31, 56, 190, 114, 218, 100, 189, 92, 39, 37, 62, 140, 25, 109, 189, 22, 85, 127, 61, 75, 143, 166, 61, 0, 68, 194, 61, 3, 93, 143, 189, 201, 3, 94, 189, 135, 72, 197, 61, 82, 204, 62, 190, 17, 128, 5, 191, 44, 34, 224, 186, 227, 189, 195, 190, 164, 105, 68, 62, 23, 131, 29, 190, 122, 99, 213, 191, 16, 135, 203, 60, 240, 24, 98, 62, 121, 196, 12, 191, 135, 123, 19, 191, 233, 59, 37, 191, 91, 71, 81, 190, 172, 84, 248, 60, 225, 219, 7, 191, 193, 66, 125, 62, 7, 150, 243, 190, 178, 73, 147, 191, 237, 39, 28, 191, 20, 84, 54, 62, 20, 190, 171, 188, 158, 34, 108, 190, 251, 205, 19, 62, 113, 221, 243, 189, 23, 95, 232, 189, 120, 138, 2, 190, 92, 176, 66, 62, 245, 200, 125, 62, 251, 71, 91, 191, 24, 33, 232, 61, 255, 62, 17, 191, 90, 134, 52, 60, 150, 15, 120, 61, 176, 207, 158, 61, 230, 15, 115, 62, 137, 242, 66, 190, 142, 17, 169, 62, 145, 114, 108, 190, 86, 139, 110, 61, 72, 12, 164, 190, 176, 253, 78, 62, 181, 35, 119, 190, 175, 163, 246, 61, 163, 198, 112, 60, 35, 213, 183, 62, 250, 5, 191, 61, 196, 205, 16, 189, 88, 172, 70, 62, 36, 108, 46, 62, 253, 236, 11, 189, 161, 81, 192, 189, 53, 240, 121, 189, 233, 111, 62, 190, 143, 51, 41, 191, 109, 18, 209, 190, 220, 152, 29, 61, 9, 218, 137, 189, 11, 162, 228, 62, 254, 156, 32, 62, 250, 50, 175, 190, 163, 182, 48, 190, 100, 28, 246, 61, 47, 111, 14, 190, 88, 137, 173, 62, 113, 196, 254, 189, 247, 183, 113, 189, 241, 103, 245, 189, 105, 96, 194, 189, 67, 101, 149, 61, 121, 37, 209, 189, 84, 27, 8, 62, 237, 30, 48, 190, 135, 26, 9, 189, 255, 77, 143, 189, 52, 158, 240, 189, 191, 230, 60, 189, 146, 32, 255, 189, 9, 62, 251, 60, 229, 15, 188, 188, 68, 168, 221, 189, 127, 172, 1, 188, 37, 126, 175, 189, 184, 234, 41, 190, 83, 0, 254, 188, 46, 27, 160, 60, 249, 73, 233, 60, 159, 238, 178, 189, 156, 189, 218, 189, 187, 147, 233, 189, 95, 114, 217, 61, 233, 179, 209, 61, 193, 214, 38, 190, 201, 65, 143, 189, 4, 163, 162, 189, 111, 17, 177, 188, 204, 224, 49, 62, 179, 172, 235, 189, 63, 155, 155, 61, 89, 74, 132, 62, 53, 28, 121, 189, 104, 71, 180, 61, 121, 157, 179, 190, 19, 47, 39, 192, 140, 60, 246, 190, 171, 56, 183, 61, 106, 217, 85, 191, 114, 183, 247, 190, 216, 55, 204, 191, 119, 164, 122, 62, 41, 157, 19, 62, 84, 42, 10, 62, 63, 73, 104, 62, 50, 78, 87, 191, 249, 52, 139, 191, 159, 228, 22, 190, 169, 225, 160, 62, 71, 13, 100, 62, 93, 243, 16, 191, 161, 45, 159, 62, 115, 154, 15, 191, 254, 86, 152, 189, 166, 225, 177, 62, 34, 214, 53, 190, 35, 141, 40, 61, 228, 75, 198, 191, 76, 208, 142, 62, 6, 178, 208, 190, 167, 254, 177, 61, 25, 146, 140, 62, 50, 230, 172, 190, 117, 67, 150, 189, 255, 11, 95, 190, 40, 42, 139, 61, 204, 231, 25, 61, 204, 65, 208, 61, 34, 46, 24, 190, 129, 35, 81, 60, 142, 188, 199, 189, 27, 109, 51, 62, 198, 161, 187, 61, 248, 118, 41, 60, 77, 209, 32, 191, 67, 103, 8, 189, 57, 11, 34, 62, 201, 37, 140, 62, 143, 24, 11, 61, 139, 184, 120, 62, 106, 179, 83, 191, 75, 159, 36, 191, 78, 152, 133, 60, 178, 41, 43, 191, 44, 69, 24, 62, 231, 232, 114, 61, 223, 72, 5, 190, 101, 240, 53, 188, 234, 63, 115, 191, 174, 211, 29, 62, 29, 33, 181, 61, 177, 119, 43, 62, 108, 55, 6, 62, 250, 68, 78, 191, 219, 136, 4, 192, 156, 208, 215, 190, 66, 6, 105, 62, 254, 220, 110, 191, 59, 226, 109, 60, 85, 114, 191, 61, 136, 230, 128, 60, 131, 156, 169, 61, 70, 177, 119, 62, 150, 234, 134, 62, 251, 110, 70, 61, 197, 225, 219, 188, 138, 1, 68, 191, 233, 104, 71, 191, 102, 122, 7, 190, 19, 199, 66, 62, 66, 239, 214, 189, 131, 231, 26, 60, 136, 67, 16, 62, 4, 232, 130, 60, 68, 251, 52, 190, 79, 19, 163, 62, 236, 98, 56, 62, 172, 222, 168, 61, 191, 59, 187, 190, 115, 215, 158, 190, 156, 15, 231, 188, 172, 79, 101, 189, 102, 85, 226, 61, 195, 71, 60, 61, 132, 143, 16, 191, 16, 76, 201, 62, 32, 196, 132, 190, 50, 76, 63, 62, 2, 184, 37, 191, 142, 176, 9, 62, 130, 100, 194, 187, 154, 222, 78, 62, 15, 86, 130, 190, 201, 48, 216, 61, 83, 158, 169, 190, 33, 98, 221, 61, 211, 208, 158, 188, 107, 165, 132, 62, 229, 226, 233, 190, 75, 117, 80, 190, 212, 192, 55, 61, 4, 36, 62, 189, 40, 50, 216, 61, 82, 181, 75, 189, 79, 52, 229, 190, 66, 160, 3, 191, 237, 129, 151, 190, 137, 226, 25, 191, 83, 133, 110, 62, 17, 190, 182, 189, 215, 16, 227, 62, 162, 164, 44, 62, 14, 176, 190, 190, 213, 240, 176, 61, 223, 82, 147, 62, 43, 197, 253, 61, 100, 236, 241, 62, 47, 233, 186, 190, 37, 233, 7, 190, 117, 122, 21, 190, 220, 164, 192, 189, 231, 227, 6, 62, 161, 76, 13, 62, 23, 99, 132, 188, 28, 16, 130, 61, 62, 147, 179, 61, 246, 207, 93, 189, 64, 66, 36, 60, 72, 208, 8, 190, 54, 180, 207, 189, 244, 88, 220, 189, 102, 193, 9, 62, 126, 50, 205, 59, 109, 101, 143, 60, 143, 13, 250, 189, 150, 29, 32, 190, 69, 89, 232, 188, 247, 215, 214, 189, 125, 78, 66, 61, 203, 140, 194, 60, 233, 4, 65, 190, 253, 230, 36, 62, 193, 246, 213, 61, 46, 142, 6, 62, 141, 90, 45, 61, 62, 238, 132, 189, 209, 235, 46, 190, 169, 49, 29, 190, 23, 37, 35, 190, 71, 58, 200, 61, 182, 175, 18, 192, 165, 11, 114, 191, 164, 102, 112, 191, 144, 154, 87, 62, 237, 143, 145, 189, 111, 52, 156, 189, 193, 238, 156, 62, 65, 222, 166, 190, 240, 100, 18, 61, 97, 61, 145, 189, 239, 162, 231, 59, 193, 161, 138, 62, 160, 217, 197, 190, 75, 170, 114, 191, 122, 54, 19, 191, 157, 117, 172, 189, 219, 15, 125, 62, 88, 238, 97, 191, 243, 50, 88, 62, 250, 40, 229, 188, 128, 32, 83, 62, 230, 59, 57, 62, 250, 224, 151, 62, 117, 157, 23, 190, 50, 70, 39, 191, 245, 2, 105, 188, 134, 138, 1, 63, 109, 161, 92, 62, 186, 224, 109, 62, 188, 70, 86, 189, 233, 146, 130, 191, 248, 14, 168, 61};
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
                alignas(float) const unsigned char memory[] = {66, 162, 106, 61, 143, 22, 166, 62, 243, 8, 227, 189, 126, 230, 16, 62, 174, 215, 88, 61, 178, 15, 209, 62, 74, 246, 220, 189, 18, 31, 44, 190, 211, 107, 105, 190, 156, 202, 158, 189, 57, 29, 237, 61, 209, 116, 23, 190, 134, 207, 232, 60, 90, 159, 90, 62, 228, 226, 244, 60, 125, 74, 160, 61, 27, 168, 125, 62, 96, 23, 243, 61, 53, 33, 162, 61, 142, 158, 25, 62, 36, 89, 98, 189, 171, 24, 71, 190, 215, 28, 85, 61, 162, 27, 226, 189, 209, 30, 159, 61, 109, 8, 161, 61, 53, 175, 52, 62, 44, 157, 201, 61, 134, 155, 163, 62, 244, 208, 168, 61, 42, 144, 9, 189, 83, 32, 245, 189};
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
                alignas(float) const unsigned char memory[] = {46, 149, 215, 190, 238, 123, 179, 62, 57, 103, 231, 61, 64, 20, 34, 191, 202, 230, 8, 60, 35, 153, 252, 62, 126, 251, 48, 62, 126, 35, 6, 62, 77, 96, 65, 61, 214, 167, 42, 191, 236, 217, 156, 62, 92, 207, 136, 61, 5, 88, 34, 62, 144, 85, 162, 188, 147, 62, 48, 191, 88, 193, 55, 191, 59, 52, 246, 189, 40, 119, 65, 188, 21, 102, 186, 189, 75, 91, 80, 191, 101, 18, 173, 62, 129, 138, 65, 191, 107, 161, 126, 189, 30, 7, 161, 63, 126, 67, 170, 62, 233, 216, 142, 59, 200, 85, 188, 63, 36, 72, 162, 62, 182, 38, 94, 191, 254, 202, 227, 62, 24, 223, 185, 188, 125, 123, 121, 191, 218, 86, 171, 60, 254, 205, 187, 61, 96, 213, 81, 190, 24, 141, 42, 190, 245, 78, 212, 190, 20, 156, 137, 190, 84, 140, 76, 61, 185, 197, 108, 188, 60, 128, 222, 59, 149, 147, 197, 61, 46, 5, 212, 61, 51, 193, 96, 61, 84, 54, 252, 189, 58, 33, 164, 190, 18, 83, 225, 189, 141, 159, 88, 62, 174, 82, 138, 190, 73, 20, 177, 61, 104, 165, 37, 62, 243, 23, 112, 61, 95, 239, 151, 61, 1, 50, 24, 62, 148, 57, 65, 61, 106, 159, 187, 61, 170, 125, 133, 60, 108, 195, 199, 61, 83, 225, 124, 61, 218, 58, 227, 189, 212, 107, 80, 62, 68, 133, 101, 59, 156, 90, 8, 190, 86, 217, 196, 189};
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
                alignas(float) const unsigned char memory[] = {132, 48, 36, 62, 140, 167, 179, 190};
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
    alignas(float) const unsigned char memory[] = {153, 188, 205, 61, 6, 164, 201, 63, 225, 21, 236, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {254, 142, 183, 63, 188, 157, 54, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0022/steps/000000000012000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}