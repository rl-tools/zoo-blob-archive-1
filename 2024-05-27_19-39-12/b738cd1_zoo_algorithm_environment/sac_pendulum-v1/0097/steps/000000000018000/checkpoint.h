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
                alignas(float) const unsigned char memory[] = {169, 242, 26, 61, 84, 67, 37, 191, 245, 133, 22, 63, 210, 57, 74, 189, 109, 163, 255, 61, 31, 188, 92, 60, 175, 178, 62, 63, 153, 242, 53, 63, 191, 208, 174, 62, 154, 102, 68, 62, 131, 142, 151, 62, 67, 185, 200, 62, 0, 125, 46, 63, 244, 206, 192, 62, 148, 253, 148, 61, 8, 232, 71, 61, 164, 73, 221, 61, 114, 181, 186, 190, 219, 209, 129, 62, 101, 140, 144, 191, 179, 209, 202, 190, 207, 150, 154, 62, 30, 193, 18, 63, 61, 179, 153, 62, 104, 142, 62, 63, 137, 130, 137, 191, 175, 246, 64, 190, 6, 185, 35, 191, 136, 193, 152, 190, 148, 128, 183, 62, 50, 193, 98, 63, 80, 174, 197, 62, 166, 130, 150, 62, 144, 206, 32, 191, 242, 123, 131, 62, 141, 247, 57, 61, 184, 64, 15, 61, 218, 65, 59, 191, 18, 139, 175, 62, 167, 49, 76, 63, 92, 187, 103, 191, 5, 218, 145, 190, 120, 137, 52, 61, 251, 171, 196, 62, 226, 230, 30, 63, 82, 23, 98, 190, 228, 192, 45, 189, 237, 189, 170, 190, 118, 84, 53, 190, 178, 83, 130, 63, 38, 161, 21, 63, 44, 252, 69, 191, 4, 24, 192, 190, 120, 128, 89, 62, 148, 106, 78, 185, 128, 165, 119, 63, 197, 225, 102, 189, 87, 80, 97, 63, 146, 131, 87, 190, 118, 21, 123, 186, 91, 122, 210, 190, 3, 249, 184, 191, 121, 74, 152, 190, 43, 150, 185, 62, 210, 26, 145, 191, 206, 82, 231, 190, 135, 200, 46, 191, 125, 126, 132, 191, 218, 161, 37, 191, 204, 232, 31, 63, 202, 114, 97, 63, 200, 211, 181, 62, 35, 196, 21, 63, 162, 203, 188, 62, 64, 205, 85, 62, 36, 14, 202, 62, 158, 95, 26, 191, 77, 170, 12, 61, 45, 55, 154, 191, 42, 190, 224, 190, 60, 184, 113, 190, 228, 36, 71, 62, 186, 249, 44, 190, 129, 157, 252, 190, 169, 42, 216, 190, 154, 165, 29, 190, 201, 249, 177, 62, 171, 108, 66, 62, 210, 127, 88, 191, 228, 62, 4, 63, 51, 218, 158, 62, 186, 39, 237, 188, 168, 2, 145, 62, 54, 42, 140, 62, 96, 150, 98, 63, 222, 202, 27, 190};
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
                alignas(float) const unsigned char memory[] = {23, 119, 56, 191, 172, 41, 172, 190, 98, 171, 36, 188, 82, 213, 226, 187, 180, 136, 6, 61, 194, 36, 17, 189, 215, 178, 232, 62, 247, 231, 147, 62, 140, 65, 19, 61, 203, 81, 241, 62, 142, 105, 88, 191, 79, 51, 25, 63, 9, 85, 172, 62, 36, 134, 239, 190, 198, 247, 104, 62, 14, 143, 130, 189, 116, 62, 182, 61, 57, 11, 40, 63, 79, 27, 163, 190, 219, 179, 6, 62, 51, 15, 133, 190, 224, 52, 56, 191, 31, 245, 133, 62, 103, 198, 17, 191, 119, 128, 220, 190, 101, 49, 24, 62, 157, 119, 46, 191, 233, 215, 157, 189, 37, 83, 81, 190, 55, 3, 190, 62, 240, 158, 42, 63, 37, 124, 192, 61};
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
                alignas(float) const unsigned char memory[] = {46, 101, 142, 190, 227, 229, 25, 62, 46, 153, 174, 61, 21, 26, 133, 190, 190, 28, 197, 62, 183, 181, 100, 62, 141, 111, 5, 62, 7, 162, 200, 61, 104, 159, 88, 61, 158, 174, 166, 190, 125, 14, 83, 190, 105, 214, 110, 190, 134, 81, 184, 190, 244, 92, 9, 191, 112, 196, 106, 190, 87, 220, 150, 189, 75, 171, 237, 190, 68, 74, 157, 190, 190, 128, 174, 190, 193, 215, 10, 63, 22, 167, 20, 190, 141, 64, 247, 190, 162, 234, 136, 190, 153, 88, 15, 191, 62, 237, 238, 189, 242, 1, 213, 190, 8, 232, 129, 190, 208, 102, 157, 61, 106, 62, 81, 190, 51, 165, 19, 190, 135, 221, 155, 188, 175, 152, 57, 188, 219, 239, 153, 190, 106, 134, 23, 62, 13, 216, 136, 189, 232, 82, 125, 189, 192, 245, 231, 189, 199, 125, 42, 62, 144, 151, 105, 62, 130, 47, 117, 189, 75, 39, 199, 62, 105, 132, 35, 62, 60, 90, 89, 191, 99, 137, 208, 59, 178, 11, 68, 62, 46, 15, 56, 63, 8, 159, 168, 61, 202, 169, 225, 189, 69, 63, 112, 62, 60, 225, 248, 60, 11, 63, 0, 191, 89, 101, 160, 189, 44, 106, 3, 191, 92, 247, 18, 62, 13, 240, 184, 187, 16, 250, 241, 190, 222, 51, 156, 190, 228, 180, 158, 61, 24, 170, 104, 190, 171, 119, 23, 62, 66, 90, 44, 62, 209, 176, 26, 190, 58, 13, 104, 62, 232, 191, 73, 190, 255, 45, 152, 189, 228, 152, 192, 189, 221, 139, 60, 190, 171, 80, 45, 190, 38, 87, 114, 61, 4, 21, 216, 188, 236, 145, 152, 61, 201, 66, 77, 61, 229, 59, 241, 188, 54, 100, 71, 189, 191, 89, 91, 189, 132, 19, 79, 61, 26, 147, 129, 189, 154, 71, 43, 190, 187, 39, 23, 188, 71, 125, 153, 188, 62, 54, 253, 61, 174, 170, 31, 190, 6, 240, 176, 59, 140, 29, 241, 189, 1, 227, 4, 190, 140, 237, 199, 188, 107, 253, 240, 189, 106, 246, 135, 61, 40, 67, 2, 62, 98, 110, 156, 61, 235, 99, 148, 188, 145, 244, 110, 189, 113, 52, 111, 189, 244, 186, 232, 61, 255, 199, 208, 61, 186, 146, 253, 188, 171, 6, 95, 62, 225, 253, 238, 61, 52, 98, 220, 62, 115, 11, 11, 60, 78, 19, 158, 62, 50, 63, 20, 62, 202, 25, 54, 190, 115, 139, 83, 62, 15, 183, 0, 190, 249, 159, 38, 190, 170, 100, 33, 63, 211, 81, 211, 190, 167, 131, 208, 189, 40, 213, 77, 191, 178, 118, 242, 61, 14, 76, 177, 189, 149, 142, 185, 189, 55, 102, 199, 190, 6, 64, 161, 62, 254, 54, 236, 62, 116, 212, 159, 60, 113, 77, 20, 191, 250, 187, 196, 189, 213, 184, 22, 62, 86, 3, 224, 62, 230, 59, 146, 190, 171, 8, 39, 190, 102, 16, 163, 61, 33, 223, 219, 190, 167, 154, 139, 62, 180, 86, 212, 189, 44, 63, 175, 62, 95, 231, 247, 190, 104, 151, 169, 189, 186, 28, 15, 191, 114, 51, 233, 190, 85, 72, 110, 190, 50, 117, 2, 62, 148, 232, 83, 189, 113, 8, 23, 62, 88, 34, 33, 190, 114, 148, 222, 188, 166, 186, 49, 189, 176, 126, 167, 189, 40, 196, 22, 190, 117, 207, 8, 62, 248, 177, 50, 190, 142, 72, 223, 190, 103, 79, 136, 62, 250, 130, 228, 60, 45, 237, 163, 190, 205, 142, 5, 191, 180, 235, 24, 191, 204, 104, 50, 62, 55, 170, 160, 190, 12, 202, 79, 189, 225, 106, 230, 190, 243, 33, 138, 189, 10, 40, 230, 190, 52, 135, 243, 187, 236, 198, 23, 189, 80, 116, 54, 191, 29, 116, 249, 189, 54, 125, 100, 189, 137, 41, 194, 62, 252, 168, 38, 62, 2, 50, 173, 61, 137, 26, 236, 188, 75, 182, 63, 62, 13, 5, 204, 62, 79, 249, 175, 190, 62, 87, 58, 189, 209, 249, 115, 190, 42, 220, 51, 190, 33, 238, 222, 62, 52, 233, 62, 190, 99, 86, 17, 190, 53, 136, 197, 191, 72, 94, 161, 189, 208, 11, 66, 62, 151, 159, 36, 189, 14, 116, 35, 190, 177, 82, 195, 189, 177, 186, 248, 62, 56, 73, 101, 62, 150, 176, 164, 190, 237, 95, 78, 188, 212, 249, 170, 62, 20, 94, 117, 62, 186, 225, 194, 189, 95, 116, 250, 62, 184, 180, 211, 189, 62, 255, 5, 190, 41, 249, 118, 62, 41, 65, 131, 190, 83, 144, 1, 63, 189, 199, 44, 61, 78, 235, 196, 61, 89, 0, 58, 190, 246, 56, 234, 189, 82, 96, 246, 188, 199, 213, 173, 188, 241, 72, 76, 62, 107, 198, 167, 61, 89, 15, 197, 190, 193, 27, 208, 61, 109, 69, 220, 62, 179, 240, 55, 61, 234, 61, 128, 62, 139, 146, 67, 190, 240, 127, 154, 57, 154, 189, 71, 60, 221, 196, 52, 61, 79, 126, 157, 62, 151, 23, 46, 63, 193, 93, 35, 191, 87, 122, 217, 62, 77, 152, 168, 61, 122, 126, 40, 62, 255, 43, 91, 62, 68, 161, 117, 62, 67, 39, 10, 62, 47, 194, 170, 62, 179, 27, 123, 190, 41, 89, 206, 62, 163, 12, 153, 61, 249, 44, 42, 62, 75, 245, 36, 191, 170, 92, 183, 189, 230, 214, 73, 188, 78, 12, 237, 61, 60, 20, 66, 190, 120, 249, 28, 188, 252, 187, 9, 62, 23, 122, 11, 190, 221, 221, 54, 190, 139, 208, 231, 189, 194, 233, 229, 60, 169, 130, 63, 190, 7, 67, 158, 60, 150, 204, 52, 190, 174, 36, 243, 189, 24, 202, 121, 61, 192, 152, 181, 189, 128, 16, 178, 189, 180, 103, 82, 61, 53, 249, 31, 190, 234, 177, 114, 61, 22, 198, 238, 189, 163, 50, 234, 189, 36, 120, 104, 189, 142, 170, 240, 61, 158, 246, 175, 61, 49, 123, 18, 189, 27, 136, 168, 60, 217, 73, 240, 61, 92, 194, 33, 62, 79, 215, 194, 187, 232, 78, 117, 61, 0, 217, 7, 190, 158, 239, 120, 61, 223, 30, 138, 189, 93, 19, 237, 61, 183, 242, 11, 61, 115, 123, 206, 188, 151, 58, 178, 61, 194, 208, 16, 61, 25, 163, 57, 62, 159, 137, 111, 62, 217, 133, 57, 60, 78, 254, 186, 190, 87, 74, 142, 189, 9, 42, 113, 188, 26, 148, 247, 62, 174, 191, 199, 188, 199, 172, 54, 61, 222, 253, 0, 61, 55, 129, 3, 62, 109, 15, 15, 62, 230, 168, 79, 190, 85, 98, 128, 190, 21, 156, 151, 62, 203, 144, 26, 61, 194, 18, 29, 190, 250, 0, 23, 189, 123, 248, 175, 62, 118, 169, 166, 190, 250, 22, 206, 62, 216, 21, 131, 62, 212, 193, 14, 61, 19, 151, 150, 62, 26, 61, 5, 62, 216, 83, 225, 190, 42, 110, 145, 61, 180, 30, 99, 191, 176, 7, 25, 191, 103, 200, 28, 190, 128, 61, 211, 61, 87, 146, 25, 190, 68, 221, 181, 190, 109, 251, 104, 190, 11, 206, 94, 190, 118, 67, 60, 188, 173, 40, 85, 62, 121, 85, 151, 62, 18, 118, 139, 62, 4, 175, 250, 190, 173, 231, 152, 189, 156, 250, 139, 190, 166, 248, 217, 62, 169, 13, 225, 189, 217, 50, 114, 61, 225, 20, 79, 190, 120, 194, 159, 189, 165, 26, 94, 61, 68, 237, 158, 190, 26, 79, 161, 190, 233, 243, 114, 189, 217, 17, 49, 190, 129, 132, 62, 62, 208, 124, 189, 60, 97, 253, 196, 190, 137, 110, 10, 191, 108, 233, 226, 189, 202, 4, 34, 62, 148, 118, 129, 61, 31, 228, 196, 62, 84, 75, 165, 62, 53, 97, 104, 62, 124, 39, 108, 190, 56, 33, 3, 191, 72, 135, 81, 62, 165, 170, 253, 190, 79, 220, 164, 190, 199, 80, 133, 62, 186, 236, 142, 61, 182, 192, 253, 189, 56, 72, 207, 189, 52, 167, 71, 189, 81, 217, 88, 62, 245, 29, 0, 189, 56, 253, 80, 191, 252, 113, 140, 63, 78, 80, 153, 61, 101, 21, 1, 62, 77, 192, 177, 190, 67, 244, 160, 60, 215, 201, 215, 62, 151, 185, 220, 62, 110, 6, 63, 190, 25, 56, 46, 61, 166, 157, 29, 191, 114, 37, 194, 190, 113, 66, 168, 189, 46, 56, 229, 188, 39, 53, 0, 63, 215, 68, 54, 62, 161, 138, 219, 61, 76, 111, 136, 189, 178, 104, 15, 189, 92, 210, 175, 62, 8, 131, 47, 62, 79, 97, 130, 190, 245, 252, 0, 62, 212, 182, 3, 190, 125, 18, 57, 188, 216, 143, 54, 61, 186, 69, 152, 61, 11, 144, 211, 61, 30, 82, 100, 191, 11, 186, 208, 61, 252, 86, 123, 59, 130, 175, 195, 189, 153, 71, 66, 62, 102, 179, 154, 62, 94, 129, 110, 62, 33, 176, 84, 189, 57, 168, 47, 190, 110, 91, 139, 189, 44, 180, 147, 188, 53, 49, 193, 188, 174, 0, 249, 189, 217, 45, 172, 189, 99, 234, 36, 190, 80, 235, 255, 190, 211, 192, 64, 62, 62, 11, 237, 59, 64, 253, 74, 62, 29, 246, 97, 62, 20, 54, 245, 61, 230, 134, 98, 62, 118, 196, 11, 62, 139, 148, 225, 62, 179, 16, 223, 188, 191, 201, 44, 62, 234, 68, 44, 189, 89, 50, 120, 190, 95, 246, 46, 190, 141, 215, 25, 63, 86, 26, 171, 189, 48, 191, 119, 190, 248, 222, 76, 191, 4, 80, 133, 189, 154, 246, 94, 62, 226, 214, 215, 190, 51, 83, 12, 190, 248, 1, 231, 189, 68, 61, 16, 63, 140, 201, 169, 189, 6, 11, 138, 190, 124, 95, 74, 62, 62, 35, 167, 62, 94, 133, 164, 62, 30, 97, 84, 189, 244, 34, 169, 62, 206, 78, 233, 190, 216, 178, 11, 191, 82, 94, 8, 62, 2, 182, 43, 190, 130, 233, 128, 62, 161, 192, 22, 190, 67, 243, 182, 60, 81, 125, 90, 191, 101, 5, 212, 189, 179, 87, 151, 189, 138, 248, 36, 62, 220, 240, 25, 191, 32, 103, 16, 191, 12, 201, 123, 190, 95, 147, 143, 62, 59, 154, 130, 189, 50, 230, 179, 62, 14, 213, 243, 60, 52, 32, 24, 191, 188, 112, 213, 61, 49, 35, 99, 62, 220, 107, 145, 62, 14, 42, 19, 62, 165, 2, 197, 62, 3, 194, 22, 61, 72, 91, 244, 190, 178, 28, 9, 190, 102, 214, 204, 190, 52, 192, 203, 190, 87, 128, 151, 190, 64, 120, 211, 190, 195, 4, 91, 190, 202, 35, 186, 62, 211, 163, 41, 62, 52, 208, 118, 189, 124, 166, 20, 190, 128, 253, 178, 62, 123, 232, 68, 190, 108, 103, 106, 61, 29, 194, 197, 61, 69, 244, 224, 61, 150, 201, 213, 60, 190, 6, 245, 189, 113, 48, 239, 189, 205, 73, 20, 189, 63, 194, 209, 61, 183, 77, 112, 189, 81, 160, 49, 190, 51, 59, 67, 190, 36, 137, 55, 190, 94, 52, 47, 190, 134, 83, 120, 61, 181, 222, 29, 190, 48, 215, 149, 187, 233, 159, 60, 190, 225, 253, 147, 61, 81, 8, 75, 188, 42, 46, 193, 189, 77, 118, 195, 187, 146, 164, 103, 61, 30, 87, 114, 61, 200, 157, 66, 190, 21, 31, 155, 59, 124, 255, 213, 61, 247, 86, 164, 61, 116, 138, 50, 190, 40, 237, 196, 189, 87, 224, 127, 60, 31, 140, 118, 186, 117, 136, 153, 61, 115, 159, 16, 190, 139, 74, 176, 62, 73, 166, 90, 62, 129, 76, 173, 62, 181, 3, 150, 61, 105, 225, 11, 62, 12, 4, 75, 188, 4, 152, 23, 190, 40, 223, 43, 190, 251, 112, 226, 62, 201, 114, 45, 190, 242, 172, 18, 190, 137, 191, 138, 191, 20, 87, 76, 189, 92, 50, 255, 61, 105, 241, 57, 190, 215, 94, 156, 189, 21, 234, 157, 62, 58, 229, 179, 62, 150, 35, 21, 61, 176, 7, 130, 190, 141, 2, 86, 59, 179, 112, 107, 61, 167, 189, 169, 62, 81, 239, 25, 190, 91, 120, 196, 59, 111, 207, 114, 190, 43, 29, 39, 191, 255, 138, 53, 62, 233, 156, 120, 61, 199, 51, 15, 62, 105, 83, 10, 190, 252, 197, 43, 190, 154, 56, 16, 62, 137, 87, 80, 61, 140, 19, 1, 190, 119, 252, 148, 60, 203, 91, 180, 186, 225, 24, 145, 188, 149, 18, 169, 62, 176, 0, 227, 60, 3, 68, 171, 190, 36, 43, 136, 190, 32, 142, 94, 61, 50, 217, 155, 62, 185, 59, 129, 61, 216, 225, 135, 189, 6, 40, 136, 61, 84, 219, 131, 190, 82, 247, 155, 62, 121, 135, 178, 60, 211, 71, 173, 190, 131, 229, 246, 62, 146, 163, 205, 189, 188, 32, 75, 190, 247, 41, 198, 189, 73, 31, 145, 60, 76, 12, 253, 190, 160, 215, 138, 62, 40, 93, 235, 61, 175, 174, 134, 190, 25, 2, 142, 62, 132, 5, 58, 62, 179, 78, 126, 189, 39, 18, 231, 61, 137, 88, 28, 62, 156, 177, 183, 189, 227, 87, 209, 62, 227, 190, 206, 187, 83, 148, 30, 62, 148, 99, 14, 61, 97, 49, 109, 62, 222, 212, 17, 62, 245, 197, 139, 62, 59, 25, 10, 190, 23, 73, 219, 60, 38, 79, 238, 190, 240, 66, 223, 61, 23, 225, 47, 189, 231, 146, 240, 60, 118, 8, 137, 61, 220, 247, 197, 62, 67, 126, 224, 61, 99, 171, 175, 62, 132, 209, 10, 190, 214, 194, 28, 62, 220, 116, 74, 190, 74, 30, 115, 189, 181, 200, 138, 61, 25, 182, 162, 188, 8, 36, 136, 189, 110, 11, 62, 190, 18, 240, 93, 62, 38, 59, 35, 62, 78, 117, 212, 61, 178, 152, 132, 62, 81, 225, 153, 61, 9, 78, 199, 60, 175, 220, 159, 62, 195, 123, 87, 62, 102, 33, 3, 190, 22, 143, 21, 62, 197, 32, 223, 190, 170, 140, 204, 190, 119, 227, 198, 60, 175, 161, 205, 62, 239, 131, 73, 62, 246, 42, 1, 62, 100, 20, 47, 191, 146, 70, 147, 190, 234, 82, 14, 61, 237, 235, 40, 190, 91, 159, 80, 62, 4, 3, 33, 63, 173, 35, 105, 191, 124, 186, 220, 189, 100, 127, 77, 190, 47, 40, 142, 61, 3, 192, 69, 62, 95, 189, 8, 189, 94, 216, 57, 190, 224, 103, 91, 61, 152, 75, 212, 190, 82, 54, 42, 190, 158, 99, 203, 62, 144, 16, 1, 191, 23, 9, 3, 62, 25, 106, 197, 60, 134, 64, 35, 190, 101, 81, 211, 62, 10, 86, 161, 62, 159, 211, 239, 62, 127, 60, 137, 62, 151, 77, 178, 190, 191, 17, 206, 61, 89, 13, 151, 190, 115, 60, 224, 61, 47, 163, 108, 187, 127, 27, 252, 61, 118, 162, 89, 190, 217, 78, 154, 191, 214, 131, 253, 188, 214, 49, 31, 62, 186, 149, 217, 190, 198, 249, 208, 60, 180, 204, 166, 61, 237, 83, 138, 62, 179, 212, 66, 190, 178, 71, 175, 190, 68, 32, 157, 61, 211, 111, 1, 63, 217, 179, 45, 62, 227, 89, 78, 190, 90, 7, 187, 62, 39, 36, 160, 190, 131, 136, 98, 190, 231, 60, 43, 189, 168, 153, 28, 190, 131, 83, 205, 62, 0, 174, 236, 61, 223, 145, 205, 189, 147, 105, 248, 61, 117, 128, 226, 61, 63, 247, 6, 62, 97, 230, 41, 190, 198, 58, 156, 189, 58, 27, 142, 188, 181, 124, 158, 61, 237, 131, 31, 190, 49, 71, 29, 190, 109, 195, 50, 61, 160, 244, 233, 189, 163, 221, 176, 188, 145, 156, 242, 189, 9, 8, 5, 190, 35, 145, 142, 59, 213, 1, 6, 190, 201, 132, 20, 60, 5, 181, 181, 59, 104, 34, 14, 190, 26, 124, 243, 189, 43, 11, 183, 61, 15, 160, 96, 189, 53, 159, 132, 189, 21, 31, 5, 190, 131, 209, 170, 60, 140, 4, 198, 61, 105, 236, 132, 188, 128, 188, 247, 189, 110, 85, 29, 190, 160, 36, 56, 187, 239, 88, 101, 190, 220, 71, 221, 61, 236, 12, 151, 190, 11, 64, 150, 61, 157, 5, 126, 62, 208, 120, 120, 60, 69, 28, 153, 189, 131, 134, 81, 191, 93, 160, 155, 190, 224, 24, 47, 62, 174, 212, 177, 185, 189, 98, 145, 62, 130, 25, 114, 191, 115, 19, 61, 191, 235, 226, 36, 191, 15, 22, 118, 62, 21, 110, 13, 191, 108, 55, 26, 62, 139, 121, 195, 62, 83, 32, 167, 62, 233, 63, 182, 190, 235, 100, 151, 190, 11, 181, 157, 61, 179, 140, 87, 190, 239, 54, 136, 189, 172, 243, 14, 191, 95, 140, 22, 61, 78, 112, 167, 190, 58, 236, 80, 191, 136, 33, 208, 190, 235, 8, 107, 191, 96, 10, 114, 62, 8, 70, 214, 189, 152, 110, 4, 62, 27, 11, 233, 188, 137, 125, 237, 189, 140, 220, 40, 62, 19, 166, 8, 61, 67, 150, 235, 188, 26, 19, 255, 188, 15, 72, 122, 189, 69, 13, 204, 61, 218, 132, 6, 62, 139, 225, 142, 189, 28, 132, 52, 190, 159, 162, 68, 189, 108, 187, 31, 189, 224, 169, 130, 61, 92, 91, 255, 188, 55, 253, 136, 61, 104, 157, 189, 189, 144, 214, 192, 189, 8, 170, 241, 188, 43, 16, 0, 190, 222, 114, 22, 189, 61, 254, 225, 188, 120, 168, 22, 190, 197, 212, 62, 188, 215, 162, 226, 61, 65, 10, 21, 190, 242, 21, 235, 60, 208, 206, 129, 61, 247, 171, 142, 60, 208, 151, 1, 189, 172, 69, 228, 189, 240, 235, 134, 189, 133, 204, 127, 61, 115, 49, 90, 61, 113, 104, 6, 62, 71, 29, 52, 190, 144, 154, 175, 60, 110, 54, 162, 189, 202, 151, 254, 189, 224, 184, 176, 189, 195, 247, 41, 62, 38, 163, 40, 190, 39, 38, 22, 190, 98, 214, 173, 61, 95, 64, 1, 62, 94, 60, 220, 189, 107, 176, 10, 60, 83, 61, 123, 189, 126, 170, 164, 61, 219, 150, 207, 61, 174, 106, 7, 190, 118, 158, 45, 190, 253, 0, 128, 60, 23, 126, 201, 189, 168, 204, 255, 188, 158, 160, 157, 60, 42, 212, 185, 61, 132, 5, 5, 62, 207, 78, 208, 59, 106, 11, 2, 61, 130, 33, 29, 190, 162, 249, 232, 189, 191, 129, 184, 61, 242, 245, 26, 62, 75, 219, 227, 189, 133, 113, 35, 190, 99, 153, 213, 190, 233, 78, 92, 62, 18, 173, 195, 190, 69, 215, 137, 62, 195, 109, 2, 62, 233, 246, 12, 62, 14, 228, 74, 191, 71, 200, 141, 62, 217, 91, 18, 61, 39, 156, 116, 62, 53, 109, 179, 61, 51, 105, 25, 190, 239, 163, 251, 61, 153, 119, 75, 62, 153, 51, 197, 62, 252, 185, 132, 189, 17, 123, 11, 192, 45, 13, 2, 191, 242, 111, 135, 191, 199, 159, 230, 190, 28, 50, 156, 190, 30, 96, 57, 62, 168, 84, 141, 191, 147, 48, 70, 61, 65, 115, 88, 62, 138, 82, 75, 190, 112, 83, 96, 60, 114, 139, 174, 62, 255, 97, 108, 62, 223, 213, 33, 62, 214, 10, 12, 191, 215, 9, 99, 190, 208, 74, 151, 190, 43, 158, 45, 61, 53, 23, 220, 62, 73, 49, 129, 191, 182, 20, 112, 189, 177, 170, 68, 62, 99, 239, 40, 61, 181, 214, 164, 62, 255, 70, 249, 61, 181, 61, 23, 191, 181, 175, 196, 190, 24, 216, 224, 189, 204, 172, 211, 190, 248, 47, 203, 62, 105, 44, 161, 62, 240, 169, 104, 190, 232, 191, 203, 62, 111, 14, 235, 190, 236, 211, 141, 62, 41, 20, 79, 61, 92, 37, 176, 190, 224, 248, 195, 189, 161, 20, 167, 62, 58, 215, 10, 191, 156, 65, 164, 190, 71, 100, 18, 63, 25, 193, 134, 190, 15, 162, 46, 190, 178, 17, 43, 188, 50, 56, 165, 189, 43, 64, 89, 62, 0, 63, 3, 62, 197, 138, 186, 62, 236, 205, 105, 61, 96, 133, 138, 61, 100, 215, 227, 188, 118, 2, 251, 189, 97, 43, 145, 190, 106, 205, 65, 62, 106, 215, 161, 61, 171, 212, 240, 61, 228, 184, 136, 191, 215, 205, 99, 59, 69, 75, 143, 61, 225, 54, 10, 191, 14, 37, 215, 61, 94, 200, 4, 61, 65, 185, 10, 63, 31, 2, 72, 62, 127, 114, 12, 191, 10, 74, 81, 188, 9, 143, 106, 61, 40, 169, 158, 62, 61, 175, 155, 190, 232, 134, 40, 189, 245, 34, 193, 189, 49, 195, 6, 191, 147, 251, 158, 61, 179, 85, 34, 190, 33, 209, 55, 62, 227, 181, 220, 190, 11, 115, 244, 189, 29, 166, 169, 190, 236, 39, 10, 61, 79, 118, 169, 190, 235, 179, 160, 62, 145, 201, 163, 189, 79, 139, 117, 62, 74, 132, 223, 62, 11, 87, 72, 62, 201, 134, 92, 191, 239, 137, 247, 188, 186, 235, 123, 62, 239, 25, 25, 63, 251, 228, 40, 190, 89, 79, 151, 190, 180, 216, 200, 61, 149, 242, 111, 62, 230, 81, 127, 190, 174, 204, 47, 62, 63, 212, 71, 192, 163, 154, 1, 63, 0, 126, 33, 191, 144, 125, 228, 190, 128, 12, 21, 191, 182, 200, 217, 62, 70, 85, 130, 191, 207, 8, 214, 62, 45, 126, 182, 62, 39, 189, 62, 190, 60, 166, 99, 62, 146, 175, 140, 190, 232, 85, 145, 189, 237, 61, 135, 61, 16, 102, 129, 61, 206, 126, 28, 62, 165, 58, 22, 190, 34, 102, 0, 62, 82, 76, 222, 189, 103, 51, 213, 188, 54, 154, 83, 61, 42, 41, 212, 61, 208, 135, 230, 189, 205, 49, 167, 189, 76, 10, 235, 187, 89, 254, 5, 61, 147, 115, 247, 60, 167, 78, 47, 185, 15, 16, 89, 60, 179, 246, 224, 189, 222, 127, 16, 62, 69, 135, 65, 189, 112, 28, 152, 188, 124, 116, 227, 61, 167, 180, 17, 190, 24, 92, 56, 189, 151, 252, 117, 59, 21, 72, 151, 61, 200, 100, 237, 189, 158, 153, 209, 189, 214, 231, 110, 189, 154, 40, 253, 188, 139, 26, 68, 189, 103, 93, 7, 189, 36, 16, 199, 188, 56, 140, 29, 62, 73, 102, 34, 61, 249, 228, 250, 60, 143, 245, 61, 62, 129, 28, 248, 61, 102, 44, 106, 62, 22, 118, 119, 62, 242, 103, 116, 62, 166, 184, 48, 62, 88, 184, 72, 190, 113, 175, 226, 189, 147, 46, 52, 62, 138, 143, 162, 62, 188, 101, 6, 62, 146, 251, 88, 61, 213, 205, 132, 60, 111, 140, 189, 61, 11, 253, 20, 63, 127, 172, 138, 189, 123, 0, 77, 190, 84, 225, 84, 61, 167, 110, 175, 61, 89, 192, 124, 190, 149, 37, 250, 61, 169, 16, 182, 61, 160, 18, 80, 190, 96, 98, 163, 62, 1, 119, 170, 62, 103, 228, 164, 188, 101, 235, 201, 61, 123, 221, 77, 189, 215, 106, 96, 190, 19, 179, 187, 189, 70, 90, 15, 61, 169, 85, 21, 190, 249, 129, 247, 61, 118, 29, 58, 61, 84, 194, 218, 189, 220, 192, 132, 189, 190, 103, 12, 62, 39, 255, 141, 61, 208, 134, 150, 189, 249, 49, 69, 189, 254, 227, 196, 61, 110, 9, 221, 61, 22, 128, 156, 189, 19, 94, 5, 190, 57, 41, 27, 189, 102, 213, 167, 189, 57, 241, 133, 61, 112, 245, 140, 189, 197, 168, 246, 189, 191, 22, 29, 61, 108, 162, 48, 190, 158, 10, 200, 61, 26, 220, 15, 189, 221, 72, 91, 190, 35, 204, 130, 188, 111, 138, 162, 61, 242, 201, 57, 188, 75, 84, 242, 61, 145, 101, 183, 188, 228, 107, 158, 188, 52, 250, 40, 190, 232, 13, 146, 61, 206, 158, 72, 61, 129, 177, 126, 189, 151, 31, 242, 188, 234, 9, 133, 188, 91, 251, 222, 61, 40, 127, 67, 190, 143, 76, 59, 190, 98, 181, 122, 61, 51, 222, 98, 189, 70, 61, 22, 190, 255, 148, 18, 62, 30, 59, 251, 60, 4, 103, 80, 188, 142, 154, 230, 189, 115, 28, 202, 60, 160, 45, 52, 190, 66, 122, 106, 189, 104, 251, 29, 62, 255, 224, 176, 188, 50, 151, 34, 190, 166, 44, 89, 61, 143, 53, 45, 62, 233, 240, 185, 61, 168, 99, 148, 61, 56, 102, 13, 61, 145, 113, 150, 189, 204, 246, 154, 60, 153, 136, 56, 190, 172, 175, 144, 59, 150, 84, 137, 189};
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
                alignas(float) const unsigned char memory[] = {196, 250, 149, 61, 105, 44, 55, 61, 136, 104, 63, 190, 35, 160, 209, 61, 191, 147, 183, 188, 116, 198, 132, 190, 130, 54, 147, 61, 233, 57, 7, 190, 128, 113, 22, 62, 11, 136, 247, 61, 98, 104, 9, 189, 43, 83, 9, 62, 251, 172, 150, 61, 252, 47, 192, 61, 226, 104, 34, 190, 62, 253, 117, 61, 161, 27, 146, 61, 85, 18, 212, 62, 199, 208, 4, 189, 237, 135, 8, 62, 166, 61, 138, 189, 44, 208, 29, 62, 32, 79, 42, 190, 255, 131, 75, 189, 75, 164, 173, 62, 23, 231, 165, 62, 53, 200, 147, 62, 66, 224, 104, 62, 166, 97, 56, 190, 18, 67, 183, 61, 150, 68, 144, 189, 87, 205, 40, 189};
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
                alignas(float) const unsigned char memory[] = {159, 26, 71, 60, 96, 204, 175, 62, 156, 67, 15, 62, 214, 249, 175, 190, 143, 226, 31, 63, 209, 232, 41, 191, 8, 114, 230, 190, 140, 69, 26, 62, 211, 249, 193, 61, 242, 47, 245, 62, 212, 143, 198, 63, 150, 249, 213, 187, 232, 79, 244, 190, 38, 49, 199, 190, 165, 77, 233, 61, 185, 46, 180, 190, 195, 241, 66, 62, 240, 208, 194, 188, 59, 15, 200, 190, 109, 114, 47, 191, 28, 91, 133, 61, 154, 31, 74, 191, 125, 254, 169, 189, 208, 15, 62, 61, 196, 61, 51, 63, 45, 97, 137, 191, 90, 200, 244, 190, 17, 61, 95, 63, 105, 250, 132, 187, 71, 4, 4, 62, 74, 222, 247, 60, 222, 204, 148, 61, 23, 231, 24, 191, 2, 142, 139, 61, 7, 36, 220, 61, 172, 97, 182, 190, 27, 65, 89, 62, 186, 15, 147, 62, 122, 188, 185, 60, 74, 90, 167, 188, 130, 13, 59, 190, 132, 212, 36, 190, 200, 229, 203, 62, 225, 217, 154, 190, 151, 87, 108, 62, 48, 104, 231, 61, 156, 221, 48, 188, 241, 110, 116, 190, 157, 69, 218, 189, 105, 44, 211, 190, 124, 72, 47, 62, 162, 124, 155, 62, 191, 36, 175, 61, 34, 39, 128, 60, 198, 37, 34, 62, 236, 182, 21, 62, 123, 248, 102, 62, 239, 239, 187, 62, 54, 163, 119, 189, 69, 18, 20, 62, 99, 75, 236, 188, 250, 162, 109, 190, 15, 155, 11, 60, 120, 129, 18, 62};
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
                alignas(float) const unsigned char memory[] = {56, 1, 244, 61, 165, 88, 222, 190};
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
    alignas(float) const unsigned char memory[] = {179, 234, 221, 191, 248, 159, 175, 191, 82, 101, 18, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {214, 242, 8, 193, 230, 197, 91, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0097/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}