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
                alignas(float) const unsigned char memory[] = {79, 214, 51, 191, 226, 99, 90, 62, 186, 182, 13, 191, 185, 168, 66, 190, 82, 220, 47, 191, 87, 67, 120, 189, 144, 213, 6, 63, 200, 233, 174, 188, 89, 216, 178, 62, 121, 151, 40, 190, 219, 29, 97, 63, 10, 199, 147, 189, 201, 234, 53, 63, 145, 217, 232, 190, 29, 115, 214, 190, 12, 246, 203, 190, 213, 42, 105, 190, 145, 101, 234, 62, 76, 247, 164, 189, 150, 77, 222, 190, 163, 203, 171, 190, 20, 93, 179, 190, 13, 56, 24, 63, 232, 80, 46, 191, 48, 130, 250, 190, 120, 234, 193, 62, 215, 1, 21, 191, 160, 5, 76, 190, 119, 215, 201, 190, 226, 48, 136, 62, 59, 234, 92, 190, 124, 97, 13, 62, 65, 229, 50, 190, 154, 17, 137, 62, 234, 59, 8, 191, 199, 100, 5, 61, 39, 15, 188, 189, 45, 209, 8, 63, 96, 189, 187, 62, 227, 39, 39, 190, 156, 110, 36, 191, 159, 253, 37, 189, 226, 109, 216, 61, 178, 160, 254, 62, 50, 172, 170, 59, 111, 255, 247, 189, 79, 180, 36, 190, 179, 133, 107, 190, 252, 111, 49, 190, 231, 82, 175, 190, 29, 9, 245, 188, 220, 27, 8, 63, 251, 106, 80, 191, 235, 119, 152, 190, 125, 111, 11, 191, 255, 26, 4, 63, 182, 224, 218, 188, 20, 218, 176, 189, 7, 90, 32, 191, 247, 18, 19, 63, 235, 70, 53, 62, 9, 72, 6, 190, 155, 150, 197, 190, 190, 233, 34, 63, 228, 24, 54, 63, 250, 161, 52, 62, 134, 126, 50, 63, 31, 46, 112, 190, 226, 189, 177, 190, 89, 181, 185, 189, 152, 112, 23, 60, 64, 87, 178, 62, 116, 237, 228, 189, 91, 103, 161, 62, 208, 33, 150, 190, 213, 194, 46, 191, 9, 53, 90, 190, 33, 125, 16, 187, 229, 156, 213, 190, 121, 188, 180, 62, 118, 173, 53, 191, 126, 42, 84, 63, 169, 56, 80, 63, 94, 98, 157, 62, 59, 11, 49, 63, 84, 62, 116, 62, 51, 65, 24, 190, 241, 173, 1, 63, 34, 244, 3, 63, 37, 142, 1, 63, 237, 208, 177, 190, 117, 207, 163, 190, 56, 64, 12, 191, 113, 107, 201, 62, 80, 122, 220, 190, 38, 105, 241, 190};
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
                alignas(float) const unsigned char memory[] = {241, 249, 241, 190, 109, 91, 40, 191, 184, 242, 149, 188, 152, 24, 116, 62, 109, 75, 21, 62, 227, 164, 25, 190, 78, 173, 197, 62, 181, 54, 74, 189, 208, 249, 118, 190, 204, 112, 174, 190, 8, 234, 169, 62, 118, 55, 39, 63, 68, 178, 51, 191, 191, 88, 14, 63, 84, 171, 215, 62, 30, 212, 148, 190, 58, 175, 166, 62, 120, 167, 140, 190, 39, 196, 205, 61, 153, 254, 119, 62, 157, 59, 135, 190, 237, 8, 156, 62, 123, 65, 151, 62, 102, 130, 212, 190, 49, 26, 40, 63, 240, 74, 7, 189, 202, 87, 12, 190, 44, 61, 6, 191, 122, 6, 213, 190, 46, 197, 80, 189, 145, 43, 172, 189, 104, 77, 128, 190};
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
                alignas(float) const unsigned char memory[] = {175, 211, 145, 189, 76, 232, 147, 190, 36, 243, 130, 62, 67, 95, 185, 61, 209, 102, 169, 189, 41, 28, 82, 190, 24, 161, 251, 61, 6, 68, 28, 62, 41, 55, 72, 60, 132, 133, 24, 188, 249, 84, 34, 62, 82, 20, 172, 189, 145, 119, 104, 62, 158, 58, 194, 189, 171, 176, 181, 61, 55, 207, 34, 190, 216, 77, 135, 61, 153, 24, 201, 190, 77, 40, 53, 62, 1, 152, 117, 190, 19, 42, 114, 189, 198, 153, 31, 62, 11, 173, 9, 190, 209, 49, 118, 61, 124, 37, 184, 60, 112, 243, 55, 61, 213, 251, 210, 61, 54, 196, 154, 62, 59, 29, 202, 62, 68, 31, 193, 188, 47, 79, 61, 62, 108, 12, 34, 187, 212, 150, 63, 62, 44, 160, 23, 190, 159, 219, 242, 60, 240, 242, 32, 62, 86, 95, 255, 189, 221, 127, 63, 190, 54, 195, 10, 189, 81, 144, 57, 62, 223, 32, 124, 189, 210, 167, 130, 61, 249, 135, 114, 61, 121, 123, 164, 62, 242, 207, 144, 60, 67, 193, 246, 61, 65, 189, 123, 59, 49, 231, 33, 190, 215, 198, 80, 189, 38, 197, 18, 190, 84, 213, 253, 189, 72, 237, 239, 59, 82, 8, 116, 190, 21, 97, 41, 62, 1, 252, 95, 62, 254, 251, 197, 61, 132, 102, 73, 62, 159, 65, 36, 61, 190, 50, 245, 189, 206, 206, 201, 189, 69, 252, 45, 61, 8, 124, 103, 61, 80, 89, 71, 189, 85, 72, 46, 190, 80, 240, 128, 61, 205, 5, 197, 190, 231, 71, 72, 189, 98, 251, 27, 189, 210, 94, 26, 189, 212, 248, 161, 189, 108, 64, 204, 61, 148, 211, 249, 61, 241, 145, 236, 61, 161, 117, 251, 61, 60, 8, 163, 61, 207, 146, 131, 61, 167, 107, 177, 188, 149, 83, 170, 61, 252, 243, 84, 189, 31, 179, 185, 190, 152, 228, 28, 62, 58, 196, 217, 190, 107, 235, 16, 190, 195, 132, 49, 62, 161, 59, 81, 190, 210, 237, 35, 62, 130, 220, 134, 190, 164, 147, 109, 189, 129, 135, 49, 62, 87, 245, 244, 61, 48, 156, 194, 189, 146, 104, 62, 62, 38, 170, 144, 62, 210, 119, 0, 62, 123, 198, 92, 62, 254, 229, 39, 190, 248, 34, 76, 189, 168, 185, 117, 189, 218, 102, 16, 61, 153, 91, 230, 61, 254, 92, 37, 190, 79, 129, 188, 61, 254, 243, 30, 189, 50, 74, 45, 190, 1, 46, 238, 61, 96, 167, 40, 190, 199, 248, 48, 190, 184, 127, 168, 189, 183, 163, 32, 190, 86, 219, 217, 188, 96, 166, 76, 190, 66, 175, 208, 189, 86, 90, 12, 60, 241, 47, 105, 188, 214, 142, 2, 62, 95, 147, 23, 190, 225, 60, 51, 190, 104, 16, 61, 61, 82, 192, 57, 190, 104, 82, 39, 190, 244, 150, 33, 190, 3, 44, 14, 62, 156, 117, 68, 189, 28, 190, 65, 189, 36, 153, 209, 61, 152, 177, 131, 60, 54, 205, 8, 62, 73, 4, 33, 62, 161, 241, 133, 190, 124, 137, 149, 62, 206, 222, 176, 188, 47, 17, 193, 189, 64, 185, 123, 62, 17, 160, 50, 62, 186, 164, 10, 187, 127, 38, 51, 190, 184, 16, 192, 189, 138, 182, 37, 190, 99, 47, 38, 190, 162, 226, 94, 62, 44, 92, 154, 61, 99, 171, 163, 61, 201, 88, 128, 189, 76, 38, 79, 61, 105, 198, 12, 190, 147, 213, 108, 62, 138, 161, 95, 62, 247, 65, 39, 62, 155, 151, 178, 189, 72, 187, 16, 62, 191, 64, 84, 61, 253, 94, 50, 189, 44, 16, 175, 189, 198, 159, 21, 188, 197, 161, 84, 189, 106, 130, 208, 190, 141, 48, 231, 189, 31, 214, 237, 189, 205, 228, 155, 189, 29, 133, 66, 62, 102, 235, 209, 61, 85, 1, 198, 190, 142, 118, 217, 189, 234, 160, 165, 60, 17, 137, 145, 190, 135, 78, 83, 191, 36, 24, 224, 59, 161, 96, 252, 187, 164, 179, 162, 61, 115, 243, 214, 190, 59, 176, 189, 61, 229, 187, 158, 60, 128, 70, 150, 61, 47, 209, 92, 61, 217, 83, 62, 62, 43, 21, 226, 189, 9, 165, 228, 60, 218, 130, 1, 191, 177, 63, 40, 62, 1, 60, 58, 191, 77, 31, 193, 190, 134, 61, 159, 62, 76, 246, 229, 189, 12, 159, 167, 60, 231, 122, 178, 62, 75, 128, 96, 61, 208, 79, 4, 62, 194, 231, 104, 188, 51, 166, 162, 62, 179, 95, 207, 188, 195, 180, 196, 61, 255, 246, 110, 189, 167, 248, 35, 190, 91, 173, 153, 62, 194, 75, 20, 189, 72, 171, 248, 61, 117, 80, 228, 189, 203, 183, 103, 60, 129, 54, 23, 190, 37, 253, 172, 61, 177, 149, 79, 61, 173, 65, 238, 189, 78, 52, 169, 189, 27, 224, 56, 190, 108, 92, 192, 189, 7, 101, 241, 61, 51, 40, 252, 189, 99, 178, 15, 187, 49, 160, 58, 190, 193, 87, 124, 61, 48, 12, 27, 62, 83, 58, 79, 188, 228, 183, 229, 61, 11, 196, 212, 188, 174, 41, 30, 189, 82, 222, 162, 188, 178, 40, 215, 61, 25, 183, 30, 62, 247, 172, 182, 61, 131, 116, 34, 61, 163, 182, 200, 189, 19, 143, 14, 59, 53, 35, 47, 61, 184, 239, 22, 62, 158, 21, 152, 189, 65, 93, 52, 189, 143, 117, 197, 189, 55, 125, 250, 189, 252, 243, 184, 189, 183, 3, 168, 188, 126, 168, 36, 60, 126, 124, 182, 189, 177, 106, 144, 61, 153, 11, 83, 61, 46, 142, 253, 61, 41, 94, 27, 62, 45, 138, 236, 189, 229, 138, 41, 190, 146, 47, 209, 61, 179, 193, 38, 190, 76, 145, 9, 190, 96, 105, 238, 189, 11, 166, 239, 60, 225, 30, 248, 189, 69, 253, 201, 189, 234, 30, 52, 190, 27, 188, 155, 61, 88, 113, 81, 189, 193, 231, 179, 61, 125, 83, 29, 189, 150, 255, 21, 61, 172, 208, 85, 189, 138, 196, 51, 190, 3, 121, 15, 190, 140, 64, 40, 190, 215, 209, 140, 61, 180, 23, 76, 190, 52, 18, 28, 62, 244, 150, 129, 60, 243, 56, 18, 190, 3, 248, 210, 189, 78, 47, 133, 62, 111, 49, 237, 188, 0, 144, 6, 190, 214, 135, 12, 189, 119, 75, 240, 61, 185, 96, 115, 190, 58, 165, 88, 61, 21, 121, 251, 61, 81, 31, 161, 188, 69, 138, 114, 190, 130, 125, 21, 190, 200, 78, 229, 61, 81, 150, 120, 62, 95, 175, 93, 189, 46, 178, 116, 62, 36, 201, 131, 189, 241, 49, 75, 190, 217, 103, 18, 190, 245, 255, 221, 60, 136, 32, 170, 189, 113, 43, 43, 62, 155, 197, 145, 190, 152, 202, 229, 61, 13, 208, 37, 62, 143, 58, 53, 190, 189, 211, 151, 190, 87, 9, 222, 189, 58, 219, 244, 188, 153, 55, 80, 190, 178, 63, 127, 62, 135, 8, 239, 189, 196, 69, 47, 189, 21, 206, 19, 190, 203, 243, 148, 188, 160, 92, 234, 61, 219, 213, 22, 62, 102, 82, 2, 60, 235, 241, 239, 61, 60, 132, 68, 61, 177, 228, 27, 62, 132, 243, 70, 190, 112, 149, 130, 189, 47, 25, 240, 60, 82, 211, 171, 188, 31, 249, 170, 190, 183, 6, 181, 189, 179, 196, 47, 190, 63, 158, 78, 190, 138, 241, 165, 61, 45, 175, 225, 189, 219, 80, 253, 60, 139, 100, 92, 62, 81, 157, 101, 186, 30, 49, 254, 61, 13, 26, 79, 62, 241, 0, 152, 62, 135, 35, 25, 189, 214, 46, 217, 61, 173, 67, 219, 60, 36, 72, 90, 190, 123, 82, 206, 189, 229, 254, 166, 189, 22, 46, 97, 190, 102, 211, 108, 62, 10, 140, 158, 62, 77, 10, 128, 189, 214, 13, 92, 189, 187, 12, 125, 189, 65, 175, 173, 61, 113, 132, 57, 190, 113, 31, 21, 60, 16, 13, 113, 190, 231, 157, 76, 60, 115, 155, 183, 190, 30, 14, 143, 189, 191, 166, 151, 61, 136, 35, 24, 62, 37, 189, 152, 190, 18, 123, 38, 62, 17, 49, 152, 62, 86, 175, 209, 190, 122, 156, 150, 61, 198, 10, 107, 59, 157, 64, 223, 189, 75, 47, 45, 189, 179, 34, 132, 61, 206, 215, 94, 60, 239, 22, 202, 61, 208, 171, 164, 190, 152, 60, 52, 189, 74, 255, 92, 62, 137, 194, 43, 62, 79, 83, 126, 190, 147, 59, 27, 61, 62, 191, 76, 189, 224, 255, 12, 190, 99, 178, 135, 189, 152, 67, 52, 62, 253, 254, 248, 189, 198, 37, 247, 61, 236, 239, 31, 189, 249, 170, 9, 62, 243, 88, 22, 62, 123, 248, 14, 190, 63, 202, 99, 60, 58, 218, 145, 61, 77, 18, 176, 189, 174, 247, 188, 61, 147, 102, 76, 190, 204, 174, 61, 59, 213, 212, 183, 189, 31, 220, 87, 190, 161, 169, 44, 189, 113, 181, 206, 189, 125, 61, 82, 61, 243, 91, 45, 62, 87, 66, 26, 61, 76, 66, 162, 61, 11, 242, 61, 62, 60, 87, 80, 62, 253, 31, 13, 62, 109, 225, 231, 189, 173, 96, 113, 190, 194, 185, 237, 61, 48, 14, 211, 59, 170, 109, 11, 190, 25, 132, 74, 190, 152, 211, 48, 61, 235, 72, 31, 62, 52, 13, 218, 61, 72, 188, 187, 189, 198, 254, 0, 189, 236, 140, 42, 189, 20, 98, 184, 188, 77, 225, 129, 61, 19, 55, 105, 189, 242, 135, 237, 59, 0, 189, 190, 61, 42, 15, 119, 61, 208, 123, 183, 61, 29, 61, 142, 60, 141, 153, 28, 62, 2, 84, 21, 62, 249, 86, 0, 190, 174, 217, 193, 61, 28, 239, 152, 189, 89, 110, 14, 190, 225, 176, 189, 61, 226, 9, 23, 62, 143, 175, 217, 188, 107, 53, 67, 189, 40, 135, 103, 190, 23, 165, 80, 61, 210, 219, 124, 189, 120, 235, 148, 61, 247, 20, 50, 62, 107, 74, 145, 190, 102, 48, 15, 62, 90, 44, 30, 62, 91, 245, 128, 189, 159, 55, 215, 61, 184, 51, 142, 61, 239, 234, 16, 62, 184, 216, 199, 61, 111, 151, 34, 62, 239, 9, 24, 188, 19, 214, 50, 61, 130, 132, 167, 60, 39, 89, 169, 185, 85, 224, 16, 61, 250, 0, 87, 190, 48, 252, 74, 187, 175, 61, 130, 190, 89, 90, 144, 60, 173, 63, 168, 189, 193, 57, 142, 190, 229, 130, 152, 61, 222, 241, 168, 188, 134, 250, 131, 189, 187, 121, 238, 189, 89, 177, 11, 190, 77, 140, 41, 61, 151, 238, 165, 189, 10, 233, 86, 188, 14, 8, 111, 189, 68, 65, 222, 61, 243, 215, 169, 60, 250, 121, 67, 188, 238, 207, 6, 63, 183, 139, 16, 62, 22, 228, 104, 61, 209, 18, 128, 62, 120, 33, 185, 62, 19, 204, 42, 190, 190, 84, 243, 189, 146, 240, 179, 190, 213, 77, 167, 190, 190, 209, 71, 61, 48, 0, 75, 189, 239, 157, 47, 188, 184, 134, 145, 61, 148, 209, 162, 61, 161, 154, 49, 62, 100, 108, 208, 189, 175, 92, 230, 62, 184, 194, 89, 189, 102, 107, 137, 61, 146, 52, 199, 62, 9, 124, 77, 60, 180, 63, 150, 189, 79, 51, 113, 187, 59, 196, 1, 60, 4, 128, 216, 59, 203, 176, 39, 190, 56, 188, 26, 191, 22, 32, 22, 190, 68, 132, 55, 190, 123, 18, 109, 61, 47, 36, 132, 62, 154, 113, 215, 190, 194, 106, 138, 62, 20, 52, 175, 189, 3, 61, 193, 61, 47, 254, 220, 61, 42, 47, 61, 188, 223, 177, 1, 190, 12, 130, 44, 190, 220, 89, 93, 190, 239, 136, 95, 190, 50, 252, 1, 62, 87, 11, 17, 62, 72, 221, 219, 189, 136, 94, 33, 61, 61, 63, 130, 62, 147, 229, 109, 61, 134, 6, 99, 61, 5, 171, 8, 62, 49, 75, 217, 188, 69, 229, 236, 61, 182, 210, 79, 61, 254, 103, 151, 189, 176, 230, 27, 62, 78, 134, 54, 61, 115, 119, 169, 61, 140, 25, 223, 61, 81, 116, 0, 190, 35, 6, 177, 190, 247, 226, 146, 62, 10, 21, 109, 61, 88, 173, 137, 190, 255, 113, 78, 62, 252, 168, 77, 191, 37, 45, 0, 60, 229, 102, 132, 189, 130, 252, 128, 62, 2, 43, 131, 190, 93, 237, 177, 61, 49, 145, 180, 189, 88, 133, 63, 191, 65, 176, 56, 191, 79, 45, 102, 190, 218, 200, 144, 62, 77, 247, 155, 190, 17, 233, 177, 61, 110, 213, 66, 61, 231, 121, 34, 62, 32, 149, 38, 62, 35, 213, 129, 62, 82, 32, 62, 190, 216, 15, 88, 62, 223, 217, 128, 189, 17, 101, 5, 190, 22, 116, 7, 61, 135, 118, 55, 190, 115, 184, 59, 190, 153, 9, 175, 61, 75, 138, 138, 62, 1, 253, 40, 191, 65, 232, 55, 190, 100, 119, 99, 188, 49, 144, 41, 189, 56, 187, 103, 190, 110, 110, 169, 58, 141, 45, 166, 190, 130, 36, 173, 62, 176, 157, 216, 61, 190, 153, 145, 188, 45, 49, 4, 62, 155, 93, 151, 62, 198, 189, 200, 189, 130, 128, 46, 190, 21, 152, 186, 188, 139, 58, 62, 190, 14, 238, 21, 190, 63, 193, 241, 61, 38, 198, 11, 61, 31, 105, 168, 61, 155, 27, 246, 189, 156, 159, 27, 62, 173, 246, 42, 62, 66, 135, 239, 61, 4, 4, 16, 190, 175, 243, 91, 62, 34, 94, 134, 62, 42, 204, 170, 189, 241, 35, 86, 62, 3, 227, 191, 189, 192, 234, 40, 189, 2, 155, 184, 60, 206, 113, 39, 190, 207, 51, 124, 190, 210, 164, 157, 62, 214, 162, 217, 189, 3, 23, 127, 190, 149, 217, 252, 188, 230, 94, 177, 188, 127, 87, 255, 62, 73, 87, 153, 189, 40, 159, 50, 190, 159, 170, 150, 62, 220, 87, 37, 62, 120, 125, 229, 189, 84, 57, 141, 190, 137, 149, 43, 190, 44, 45, 4, 190, 163, 51, 130, 61, 131, 178, 62, 62, 103, 74, 35, 61, 90, 174, 18, 189, 122, 207, 3, 61, 118, 103, 207, 61, 142, 5, 32, 62, 244, 231, 104, 62, 76, 246, 179, 61, 158, 25, 110, 62, 5, 92, 165, 62, 188, 174, 75, 60, 54, 18, 218, 186, 252, 254, 139, 189, 83, 213, 126, 60, 182, 163, 216, 189, 37, 29, 164, 61, 25, 118, 236, 190, 117, 18, 87, 190, 165, 64, 20, 190, 176, 44, 89, 190, 121, 19, 105, 62, 188, 197, 86, 191, 13, 10, 220, 61, 204, 186, 175, 189, 237, 42, 198, 61, 135, 191, 3, 190, 125, 66, 209, 62, 227, 181, 21, 190, 244, 125, 142, 191, 109, 175, 144, 191, 225, 253, 7, 190, 245, 110, 132, 188, 165, 108, 105, 62, 141, 25, 118, 190, 68, 243, 12, 62, 87, 121, 128, 188, 213, 247, 38, 62, 127, 94, 43, 62, 251, 147, 8, 62, 60, 89, 147, 62, 35, 64, 53, 62, 199, 70, 120, 189, 170, 139, 47, 190, 193, 229, 69, 61, 175, 159, 242, 189, 14, 0, 211, 61, 123, 144, 171, 62, 239, 88, 106, 191, 22, 127, 232, 190, 251, 116, 192, 184, 129, 180, 86, 190, 65, 254, 238, 190, 75, 106, 94, 190, 155, 95, 62, 62, 210, 176, 193, 190, 3, 231, 135, 61, 209, 188, 235, 61, 218, 58, 253, 189, 206, 151, 92, 190, 242, 90, 91, 62, 54, 8, 228, 61, 83, 79, 120, 61, 6, 213, 66, 62, 7, 47, 42, 62, 106, 100, 188, 61, 161, 63, 238, 189, 112, 107, 223, 189, 235, 100, 173, 60, 16, 147, 180, 188, 199, 118, 29, 62, 246, 89, 111, 190, 133, 145, 48, 187, 127, 117, 83, 190, 86, 14, 150, 190, 143, 30, 17, 62, 90, 23, 20, 190, 218, 189, 28, 62, 8, 189, 205, 189, 8, 127, 255, 189, 13, 4, 66, 189, 85, 128, 31, 62, 113, 243, 7, 62, 30, 209, 67, 62, 162, 96, 9, 62, 79, 34, 61, 190, 210, 100, 143, 189, 119, 6, 166, 190, 13, 13, 28, 62, 180, 93, 128, 189, 66, 26, 19, 61, 7, 63, 152, 190, 210, 9, 40, 62, 28, 62, 30, 62, 153, 218, 21, 62, 108, 145, 110, 62, 44, 127, 6, 59, 2, 250, 22, 189, 128, 73, 59, 62, 2, 80, 180, 60, 35, 198, 13, 61, 248, 11, 62, 189, 50, 97, 28, 190, 254, 75, 230, 190, 96, 86, 8, 190, 22, 48, 147, 190, 79, 103, 174, 190, 50, 66, 141, 62, 40, 49, 4, 190, 145, 221, 55, 62, 63, 186, 133, 62, 224, 27, 230, 60, 109, 218, 32, 62, 159, 64, 25, 62, 91, 60, 16, 62, 218, 204, 25, 61, 3, 52, 121, 189, 22, 137, 102, 190, 24, 244, 223, 60, 138, 60, 208, 62, 182, 43, 177, 60, 98, 10, 137, 61, 21, 51, 128, 62, 122, 178, 32, 60, 191, 173, 167, 61, 201, 55, 247, 59, 99, 24, 107, 189, 100, 203, 136, 190, 37, 18, 12, 189, 108, 94, 117, 61, 56, 92, 127, 188, 73, 42, 37, 62, 106, 75, 4, 62, 250, 213, 226, 61, 177, 106, 234, 189, 160, 158, 130, 62, 4, 196, 192, 189, 129, 190, 106, 189, 92, 232, 116, 62, 186, 109, 241, 61, 139, 122, 71, 62, 24, 160, 180, 61, 17, 255, 242, 61, 88, 19, 49, 190, 46, 230, 218, 189, 186, 214, 66, 190, 211, 174, 10, 190, 9, 90, 38, 61, 155, 185, 44, 188, 114, 103, 121, 189, 217, 31, 187, 190, 51, 227, 129, 62, 147, 202, 169, 61, 133, 172, 16, 61, 186, 130, 136, 62, 142, 203, 146, 189, 221, 57, 205, 60, 155, 127, 80, 190, 9, 244, 154, 190, 99, 164, 112, 190, 15, 204, 157, 61, 53, 188, 52, 62, 199, 0, 98, 61, 69, 159, 12, 62, 235, 176, 242, 61, 63, 166, 218, 61, 96, 248, 25, 62, 110, 53, 107, 62, 75, 132, 2, 62, 59, 250, 21, 62, 214, 125, 23, 62, 127, 162, 169, 189, 144, 23, 134, 61, 129, 68, 120, 60, 48, 112, 44, 190, 19, 121, 178, 61, 247, 132, 153, 189, 132, 246, 157, 190, 31, 58, 42, 62, 67, 134, 20, 187, 148, 171, 4, 190, 166, 62, 181, 61, 211, 206, 40, 189, 11, 215, 194, 62, 84, 10, 52, 188, 81, 171, 137, 61, 110, 56, 34, 188, 28, 169, 91, 190, 86, 77, 210, 189, 6, 197, 236, 61, 190, 157, 248, 61, 187, 26, 183, 189, 100, 192, 207, 60, 65, 222, 89, 189, 26, 188, 223, 189, 70, 255, 17, 187, 137, 209, 183, 189, 170, 147, 67, 62, 200, 106, 158, 189, 171, 160, 131, 62, 108, 223, 20, 62, 128, 228, 130, 188, 74, 50, 38, 188, 76, 71, 27, 189, 226, 204, 36, 62, 3, 47, 192, 189, 96, 223, 22, 62, 98, 102, 237, 188, 244, 47, 111, 62, 190, 134, 206, 61, 179, 117, 138, 190, 198, 236, 6, 62, 83, 71, 224, 61, 173, 97, 24, 62, 251, 166, 251, 189, 59, 65, 82, 187, 50, 196, 33, 62, 73, 20, 83, 62, 151, 169, 33, 62, 6, 97, 209, 188, 167, 248, 79, 190, 166, 231, 245, 60, 182, 138, 8, 190, 69, 194, 1, 62, 158, 19, 65, 189, 76, 0, 152, 189, 114, 60, 118, 188, 97, 163, 144, 190, 116, 106, 131, 62, 68, 204, 2, 62, 229, 220, 250, 190, 181, 76, 170, 190, 2, 158, 135, 61, 55, 139, 14, 190, 144, 22, 210, 60, 151, 92, 53, 189, 19, 54, 48, 62, 233, 179, 160, 61, 87, 149, 170, 188, 178, 128, 4, 191, 56, 201, 23, 190, 174, 196, 255, 188, 38, 155, 250, 60, 1, 180, 31, 62, 33, 20, 27, 62, 61, 45, 187, 60, 125, 170, 230, 189, 152, 123, 206, 62, 152, 63, 1, 62, 47, 101, 171, 190, 105, 155, 154, 62, 226, 139, 144, 62, 83, 190, 56, 188, 64, 234, 47, 190, 1, 33, 77, 190, 240, 244, 146, 190, 95, 163, 16, 189, 193, 235, 138, 62, 98, 115, 219, 189, 52, 10, 151, 61, 82, 103, 221, 61, 248, 64, 135, 62, 245, 172, 163, 61, 73, 16, 148, 62, 193, 226, 0, 190, 17, 29, 164, 62, 38, 182, 192, 62, 160, 222, 163, 60, 42, 128, 110, 60, 161, 221, 197, 189, 127, 21, 11, 60, 133, 126, 37, 190, 24, 14, 49, 190, 164, 32, 1, 191, 30, 217, 16, 190, 195, 187, 44, 190, 198, 114, 13, 190, 196, 19, 131, 62, 148, 15, 246, 61, 168, 183, 41, 62, 212, 118, 217, 189, 178, 76, 206, 60, 199, 19, 16, 190, 61, 191, 98, 61, 141, 235, 122, 190, 187, 72, 86, 59, 168, 127, 78, 187, 70, 60, 101, 59, 250, 204, 30, 190, 53, 128, 133, 190, 9, 235, 33, 189, 231, 183, 100, 189, 117, 221, 27, 190, 37, 136, 107, 61, 84, 180, 111, 190, 127, 86, 194, 60, 112, 80, 173, 61, 159, 88, 199, 189, 125, 60, 7, 189, 56, 150, 211, 61, 147, 251, 215, 189, 146, 146, 26, 61, 74, 79, 131, 190, 251, 65, 52, 190, 61, 108, 3, 190, 51, 188, 211, 188, 151, 230, 144, 61, 193, 147, 166, 61, 248, 16, 139, 61, 120, 169, 138, 188, 80, 26, 58, 190, 163, 151, 81, 61, 135, 66, 35, 62, 180, 61, 111, 59, 25, 169, 162, 189, 137, 7, 52, 190, 100, 33, 75, 61, 122, 25, 173, 60, 237, 22, 241, 61, 49, 98, 4, 62, 26, 36, 36, 190, 169, 248, 178, 189, 124, 29, 77, 188, 140, 166, 75, 189, 15, 66, 195, 61, 37, 122, 25, 190, 17, 61, 233, 188, 100, 146, 91, 60, 50, 147, 121, 188, 49, 3, 48, 190, 241, 124, 98, 188, 203, 124, 173, 189, 190, 169, 172, 189, 128, 127, 51, 190, 130, 177, 178, 187, 150, 93, 238, 187, 97, 247, 35, 190, 173, 218, 42, 190, 206, 81, 153, 61, 181, 175, 210, 189, 151, 41, 230, 189, 41, 191, 141, 61, 20, 116, 131, 190, 122, 241, 70, 189, 247, 218, 200, 189, 198, 179, 58, 190, 247, 26, 110, 62, 30, 165, 240, 189, 249, 139, 98, 61, 101, 17, 23, 62, 229, 86, 235, 189, 33, 165, 149, 60, 210, 53, 75, 189, 46, 133, 254, 188, 211, 69, 225, 189, 86, 77, 178, 189, 140, 112, 193, 61, 159, 193, 142, 189, 39, 135, 100, 190, 158, 12, 129, 62, 160, 1, 7, 190, 143, 36, 245, 189, 179, 50, 137, 190, 120, 208, 145, 61, 114, 252, 89, 62, 11, 86, 54, 190, 38, 148, 151, 189, 32, 9, 111, 190, 86, 73, 11, 190, 171, 94, 251, 190, 217, 234, 129, 62, 177, 84, 216, 189, 143, 43, 150, 190, 100, 155, 167, 61, 250, 240, 57, 191, 245, 14, 163, 62, 146, 69, 8, 61, 93, 147, 195, 61, 140, 206, 135, 62, 161, 17, 82, 62, 128, 88, 66, 190, 183, 254, 104, 191, 148, 225, 126, 191, 231, 183, 185, 190, 145, 250, 28, 62, 248, 0, 91, 62, 27, 156, 248, 187, 19, 143, 43, 62, 202, 63, 162, 189, 88, 254, 113, 62, 4, 158, 137, 62, 174, 197, 87, 62, 173, 88, 39, 62, 154, 88, 165, 61, 166, 104, 72, 62, 94, 181, 15, 190, 149, 153, 75, 61, 8, 203, 139, 60, 130, 239, 159, 189, 97, 212, 172, 62, 174, 226, 10, 191, 14, 96, 156, 190, 3, 237, 9, 188, 219, 86, 69, 190, 224, 192, 176, 190, 205, 252, 42, 61, 185, 250, 253, 61, 93, 214, 5, 189, 182, 71, 16, 190, 11, 12, 165, 62, 123, 10, 106, 190, 23, 117, 214, 61, 26, 104, 183, 189, 28, 0, 244, 61, 7, 169, 122, 61, 244, 126, 67, 190, 24, 145, 135, 61, 161, 92, 168, 190, 13, 147, 161, 190, 228, 57, 156, 190, 21, 97, 65, 62, 30, 38, 108, 190, 193, 197, 46, 61, 148, 147, 151, 190, 106, 197, 159, 62, 51, 15, 247, 61, 181, 244, 203, 189, 143, 63, 35, 188, 140, 231, 95, 190, 45, 151, 134, 190, 28, 229, 14, 62, 145, 189, 98, 61, 84, 96, 88, 62, 80, 173, 4, 190, 127, 43, 28, 190, 21, 203, 12, 190, 252, 112, 92, 190, 126, 221, 247, 189};
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
                alignas(float) const unsigned char memory[] = {59, 76, 195, 61, 165, 164, 157, 62, 25, 13, 30, 62, 51, 81, 105, 61, 94, 134, 17, 187, 27, 26, 180, 62, 20, 169, 229, 188, 109, 109, 17, 190, 58, 144, 11, 190, 165, 249, 71, 62, 99, 185, 38, 190, 80, 242, 168, 62, 126, 106, 38, 62, 32, 63, 90, 62, 196, 11, 25, 62, 38, 92, 52, 188, 238, 23, 61, 62, 99, 158, 33, 62, 120, 36, 100, 189, 198, 247, 112, 62, 218, 218, 18, 62, 147, 22, 100, 62, 153, 64, 12, 61, 108, 160, 18, 190, 5, 173, 240, 189, 100, 188, 74, 62, 10, 182, 49, 61, 193, 152, 185, 188, 89, 18, 161, 61, 27, 110, 41, 190, 178, 205, 28, 62, 82, 155, 168, 61};
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
                alignas(float) const unsigned char memory[] = {185, 137, 137, 190, 7, 80, 232, 189, 112, 184, 89, 190, 196, 86, 19, 61, 106, 87, 80, 62, 129, 69, 62, 191, 13, 177, 175, 61, 19, 28, 208, 187, 170, 96, 145, 190, 85, 40, 116, 190, 190, 136, 202, 190, 212, 159, 112, 190, 142, 125, 22, 188, 46, 120, 183, 189, 36, 238, 92, 62, 102, 63, 31, 62, 131, 75, 34, 63, 135, 246, 115, 62, 116, 174, 180, 62, 11, 160, 51, 63, 92, 208, 123, 190, 226, 5, 170, 190, 148, 255, 26, 62, 192, 86, 71, 62, 104, 134, 28, 62, 175, 127, 145, 190, 100, 44, 196, 62, 171, 68, 8, 62, 222, 221, 23, 61, 213, 97, 199, 62, 198, 204, 197, 62, 194, 143, 224, 62, 67, 9, 44, 62, 31, 17, 30, 190, 197, 34, 26, 61, 160, 13, 17, 62, 39, 108, 47, 190, 48, 30, 3, 190, 139, 178, 30, 60, 10, 167, 243, 61, 74, 128, 145, 60, 128, 153, 61, 189, 4, 189, 35, 62, 54, 33, 9, 190, 46, 133, 64, 190, 246, 233, 251, 189, 160, 63, 5, 61, 151, 253, 86, 189, 161, 166, 193, 189, 127, 252, 44, 190, 42, 4, 201, 61, 226, 151, 81, 60, 65, 86, 192, 61, 222, 9, 17, 190, 194, 24, 75, 190, 73, 187, 106, 186, 55, 87, 39, 60, 93, 166, 96, 190, 228, 74, 179, 189, 187, 202, 33, 61, 116, 231, 231, 61, 51, 35, 228, 61, 110, 9, 162, 60, 240, 14, 35, 61};
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
                alignas(float) const unsigned char memory[] = {1, 142, 90, 189, 154, 38, 199, 188};
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
    alignas(float) const unsigned char memory[] = {127, 151, 74, 63, 253, 95, 8, 63, 252, 188, 169, 58};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {154, 221, 243, 191, 226, 250, 64, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0091/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}