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
                alignas(float) const unsigned char memory[] = {206, 174, 54, 63, 75, 204, 75, 63, 61, 246, 196, 62, 170, 3, 121, 62, 139, 246, 48, 63, 9, 253, 254, 61, 174, 137, 89, 191, 115, 199, 114, 190, 77, 182, 197, 60, 211, 29, 81, 63, 115, 42, 170, 191, 195, 212, 175, 190, 92, 211, 8, 63, 237, 114, 136, 191, 162, 181, 46, 191, 203, 228, 162, 190, 212, 205, 140, 63, 71, 65, 3, 62, 159, 192, 24, 191, 197, 222, 129, 63, 14, 176, 145, 189, 230, 141, 58, 191, 183, 18, 196, 63, 228, 140, 5, 63, 143, 118, 9, 190, 162, 196, 156, 63, 7, 2, 187, 62, 134, 181, 209, 190, 202, 36, 45, 63, 93, 224, 230, 62, 254, 111, 66, 62, 2, 102, 114, 187, 121, 119, 83, 191, 27, 56, 156, 62, 178, 51, 246, 191, 58, 183, 39, 61, 32, 46, 23, 191, 56, 179, 36, 191, 239, 133, 220, 189, 230, 210, 137, 62, 64, 216, 140, 62, 226, 40, 182, 62, 125, 185, 80, 190, 143, 241, 236, 190, 211, 162, 208, 62, 11, 32, 6, 191, 31, 211, 194, 191, 244, 199, 165, 190, 57, 154, 171, 190, 241, 96, 34, 62, 9, 168, 102, 62, 247, 155, 61, 63, 132, 104, 173, 191, 58, 185, 180, 190, 207, 151, 62, 191, 79, 25, 215, 189, 149, 214, 202, 190, 119, 210, 15, 62, 22, 32, 77, 63, 241, 62, 184, 190, 128, 210, 47, 190, 172, 40, 129, 190, 181, 7, 254, 188, 116, 73, 10, 63, 87, 170, 194, 190, 161, 128, 52, 191, 242, 156, 170, 190, 13, 66, 137, 61, 123, 78, 96, 189, 14, 173, 93, 191, 136, 16, 183, 190, 206, 137, 18, 191, 243, 75, 118, 63, 206, 243, 204, 62, 97, 24, 179, 61, 156, 159, 133, 62, 25, 23, 30, 63, 122, 229, 222, 189, 63, 177, 183, 61, 148, 47, 24, 63, 22, 38, 228, 190, 13, 27, 29, 63, 136, 96, 168, 62, 1, 140, 245, 62, 1, 111, 251, 190, 79, 1, 96, 62, 198, 151, 31, 63, 116, 192, 107, 191, 255, 66, 148, 63, 175, 53, 22, 63, 131, 253, 253, 62, 2, 5, 54, 191, 244, 141, 24, 61, 174, 115, 32, 63, 81, 7, 22, 191, 18, 91, 9, 191};
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
                alignas(float) const unsigned char memory[] = {55, 189, 17, 191, 251, 174, 27, 62, 207, 1, 87, 62, 198, 202, 176, 190, 17, 63, 234, 190, 44, 223, 113, 62, 93, 122, 71, 189, 29, 92, 218, 62, 23, 137, 18, 63, 232, 253, 144, 190, 12, 185, 179, 187, 185, 125, 55, 190, 91, 63, 101, 62, 209, 109, 37, 190, 103, 5, 218, 62, 147, 152, 213, 61, 101, 244, 98, 63, 252, 63, 206, 190, 198, 217, 168, 61, 214, 89, 198, 189, 164, 61, 8, 63, 92, 255, 183, 62, 136, 218, 164, 62, 103, 83, 195, 190, 184, 65, 45, 190, 173, 89, 162, 61, 172, 116, 182, 188, 83, 133, 187, 61, 179, 213, 181, 190, 51, 140, 21, 61, 84, 184, 186, 61, 136, 223, 204, 190};
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
                alignas(float) const unsigned char memory[] = {215, 27, 41, 190, 212, 234, 177, 191, 11, 9, 58, 190, 225, 160, 100, 62, 62, 217, 124, 62, 211, 68, 214, 189, 242, 221, 58, 190, 36, 141, 44, 189, 34, 209, 66, 190, 188, 119, 74, 60, 152, 163, 23, 189, 244, 175, 227, 62, 117, 78, 69, 60, 142, 190, 144, 61, 73, 35, 46, 190, 230, 99, 97, 62, 190, 39, 225, 190, 47, 120, 170, 62, 82, 40, 160, 190, 216, 108, 7, 191, 109, 58, 156, 188, 156, 79, 238, 59, 212, 25, 54, 190, 237, 255, 195, 190, 47, 254, 61, 191, 132, 222, 69, 190, 75, 141, 14, 190, 152, 100, 58, 191, 83, 188, 47, 189, 214, 56, 145, 190, 118, 34, 26, 62, 182, 214, 105, 62, 59, 69, 242, 61, 211, 179, 115, 61, 37, 194, 34, 190, 220, 102, 152, 191, 247, 209, 160, 190, 233, 83, 70, 62, 143, 140, 238, 62, 104, 135, 232, 189, 224, 33, 198, 62, 161, 233, 235, 187, 6, 63, 130, 190, 116, 133, 195, 190, 178, 196, 169, 190, 158, 111, 131, 61, 208, 112, 149, 188, 81, 186, 106, 191, 148, 1, 224, 61, 132, 130, 159, 191, 95, 156, 218, 62, 83, 17, 17, 62, 3, 223, 215, 189, 48, 97, 119, 62, 150, 189, 252, 61, 91, 57, 68, 189, 116, 109, 200, 62, 82, 232, 141, 62, 203, 242, 241, 189, 152, 101, 226, 61, 224, 152, 72, 62, 66, 139, 74, 61, 26, 49, 7, 62, 139, 105, 143, 189, 200, 97, 182, 190, 227, 96, 160, 190, 100, 248, 170, 190, 152, 110, 134, 62, 151, 242, 152, 62, 161, 180, 66, 190, 221, 39, 252, 190, 80, 60, 253, 61, 255, 97, 42, 190, 232, 214, 139, 61, 34, 217, 162, 61, 96, 20, 8, 189, 3, 226, 32, 191, 208, 66, 126, 189, 173, 244, 143, 60, 241, 189, 174, 190, 78, 52, 170, 61, 230, 94, 68, 62, 210, 199, 16, 190, 195, 214, 29, 190, 13, 126, 206, 189, 25, 112, 18, 62, 42, 216, 19, 189, 158, 250, 141, 190, 41, 174, 199, 61, 214, 185, 213, 188, 219, 187, 143, 61, 174, 223, 168, 190, 221, 103, 232, 61, 222, 113, 171, 60, 82, 154, 250, 60, 52, 135, 226, 62, 233, 137, 139, 189, 94, 43, 5, 62, 9, 53, 179, 189, 168, 254, 130, 191, 198, 55, 212, 190, 144, 70, 213, 190, 101, 219, 245, 189, 153, 202, 214, 190, 40, 13, 92, 190, 203, 216, 77, 62, 56, 83, 105, 62, 17, 67, 140, 190, 59, 204, 162, 188, 234, 180, 151, 188, 181, 199, 8, 62, 146, 133, 231, 190, 163, 6, 39, 61, 113, 216, 112, 191, 55, 254, 167, 61, 67, 145, 227, 61, 239, 225, 2, 62, 186, 19, 72, 62, 21, 6, 103, 190, 101, 83, 14, 60, 52, 81, 161, 62, 58, 193, 68, 189, 121, 251, 75, 60, 244, 37, 133, 62, 25, 0, 69, 62, 166, 189, 57, 189, 63, 149, 184, 61, 243, 214, 227, 189, 134, 73, 85, 61, 37, 9, 241, 189, 125, 61, 22, 62, 156, 243, 56, 61, 141, 75, 152, 62, 231, 71, 139, 62, 187, 247, 8, 190, 239, 129, 155, 61, 221, 26, 67, 62, 96, 92, 53, 190, 108, 45, 50, 190, 208, 34, 59, 62, 153, 164, 23, 62, 235, 48, 194, 58, 209, 174, 64, 61, 47, 111, 42, 190, 193, 84, 69, 62, 196, 48, 183, 188, 200, 108, 205, 189, 217, 183, 157, 61, 93, 219, 161, 62, 155, 179, 205, 61, 186, 62, 106, 62, 245, 197, 236, 189, 112, 218, 52, 62, 58, 235, 23, 62, 175, 42, 53, 190, 11, 72, 119, 188, 139, 111, 36, 190, 184, 191, 129, 62, 122, 232, 202, 62, 107, 169, 241, 187, 6, 59, 169, 62, 206, 60, 54, 63, 189, 248, 60, 62, 52, 32, 155, 191, 106, 235, 8, 190, 133, 241, 226, 60, 8, 157, 25, 62, 227, 157, 250, 191, 28, 159, 126, 190, 141, 152, 139, 62, 54, 151, 221, 60, 198, 244, 36, 191, 187, 32, 20, 62, 92, 99, 144, 62, 129, 238, 164, 61, 237, 181, 24, 63, 228, 158, 118, 190, 208, 79, 34, 191, 147, 8, 141, 190, 174, 82, 22, 62, 97, 107, 209, 60, 244, 218, 33, 61, 179, 137, 133, 62, 145, 204, 33, 62, 250, 250, 53, 63, 154, 71, 37, 61, 224, 76, 132, 62, 111, 40, 64, 62, 107, 135, 160, 62, 147, 101, 229, 191, 81, 86, 159, 190, 240, 204, 187, 190, 53, 94, 18, 61, 125, 197, 149, 189, 216, 15, 156, 61, 135, 39, 121, 61, 70, 89, 3, 190, 90, 216, 200, 61, 117, 129, 14, 62, 126, 4, 7, 190, 118, 54, 13, 189, 214, 149, 235, 189, 117, 21, 15, 62, 38, 129, 18, 190, 14, 238, 71, 190, 110, 42, 55, 190, 45, 79, 142, 189, 62, 163, 70, 190, 94, 131, 137, 189, 210, 140, 201, 61, 49, 163, 213, 61, 36, 124, 97, 190, 229, 3, 158, 189, 19, 118, 35, 189, 186, 68, 21, 62, 109, 23, 50, 190, 46, 70, 10, 190, 112, 216, 53, 189, 185, 185, 98, 190, 133, 125, 7, 62, 166, 159, 81, 189, 1, 91, 15, 62, 95, 226, 40, 190, 132, 78, 247, 189, 122, 195, 0, 190, 95, 89, 90, 189, 183, 234, 34, 61, 231, 70, 65, 191, 108, 46, 164, 190, 127, 179, 43, 60, 246, 75, 110, 62, 13, 31, 198, 61, 47, 216, 88, 62, 121, 69, 139, 189, 209, 219, 252, 60, 172, 252, 239, 61, 218, 199, 168, 190, 187, 186, 164, 60, 241, 205, 41, 188, 14, 52, 14, 191, 170, 165, 75, 62, 233, 87, 151, 191, 120, 130, 164, 62, 199, 244, 60, 188, 157, 158, 19, 188, 154, 51, 55, 62, 172, 198, 15, 190, 88, 145, 186, 190, 88, 1, 239, 61, 98, 43, 19, 62, 210, 243, 103, 60, 205, 143, 19, 189, 169, 100, 51, 61, 107, 233, 44, 62, 88, 195, 45, 62, 8, 195, 252, 61, 158, 148, 189, 190, 235, 146, 138, 190, 178, 126, 107, 189, 107, 145, 126, 62, 24, 76, 79, 61, 9, 21, 239, 62, 107, 239, 49, 62, 167, 214, 51, 62, 46, 24, 134, 62, 34, 78, 61, 191, 142, 219, 14, 189, 80, 136, 0, 63, 6, 187, 73, 190, 194, 8, 184, 190, 105, 34, 60, 62, 229, 252, 219, 190, 246, 132, 163, 62, 218, 104, 181, 62, 134, 70, 18, 189, 232, 114, 141, 61, 194, 107, 131, 62, 255, 78, 69, 60, 113, 80, 145, 189, 242, 253, 126, 190, 0, 189, 106, 189, 180, 0, 250, 61, 66, 40, 5, 190, 140, 119, 207, 189, 224, 104, 138, 190, 249, 178, 1, 60, 129, 205, 78, 62, 81, 205, 154, 62, 39, 180, 3, 190, 24, 189, 198, 60, 196, 136, 164, 62, 82, 153, 202, 62, 30, 101, 212, 190, 173, 110, 212, 62, 180, 36, 130, 61, 70, 147, 42, 61, 167, 3, 239, 61, 154, 29, 181, 190, 210, 53, 5, 191, 83, 94, 126, 190, 86, 168, 5, 62, 15, 106, 36, 190, 32, 85, 111, 62, 245, 212, 197, 62, 104, 164, 184, 62, 239, 110, 200, 189, 200, 239, 43, 63, 120, 65, 241, 191, 73, 132, 150, 62, 92, 245, 75, 191, 189, 54, 29, 62, 62, 72, 2, 63, 95, 195, 196, 190, 21, 164, 197, 190, 181, 69, 125, 191, 196, 217, 50, 187, 145, 212, 156, 190, 25, 177, 200, 61, 31, 145, 221, 189, 192, 217, 87, 191, 45, 62, 47, 60, 196, 88, 64, 62, 245, 250, 201, 190, 103, 181, 181, 189, 63, 194, 175, 191, 131, 9, 131, 190, 5, 24, 83, 189, 188, 115, 116, 190, 69, 7, 41, 62, 174, 21, 172, 61, 84, 84, 154, 190, 19, 61, 47, 62, 65, 251, 78, 190, 52, 40, 160, 60, 20, 23, 234, 188, 200, 2, 166, 191, 24, 25, 114, 62, 77, 19, 145, 190, 41, 161, 108, 190, 152, 9, 202, 190, 71, 95, 41, 61, 51, 149, 146, 188, 150, 75, 169, 188, 46, 173, 249, 190, 43, 74, 145, 62, 236, 38, 72, 62, 186, 84, 79, 191, 13, 118, 186, 62, 142, 130, 223, 189, 143, 239, 207, 189, 37, 139, 16, 62, 171, 80, 118, 62, 58, 127, 166, 190, 234, 20, 34, 62, 206, 244, 26, 191, 119, 61, 127, 191, 238, 189, 213, 190, 48, 36, 116, 62, 8, 96, 210, 62, 154, 242, 85, 189, 119, 42, 119, 62, 33, 24, 3, 190, 42, 147, 15, 190, 35, 64, 205, 189, 68, 101, 22, 191, 108, 88, 200, 189, 20, 166, 162, 61, 224, 78, 147, 191, 197, 162, 6, 62, 67, 250, 148, 191, 203, 14, 242, 61, 40, 109, 20, 189, 247, 52, 34, 62, 185, 164, 24, 61, 23, 57, 153, 187, 201, 226, 150, 189, 35, 30, 55, 62, 235, 248, 152, 62, 134, 93, 102, 61, 140, 53, 128, 189, 94, 226, 154, 189, 106, 236, 12, 59, 161, 165, 152, 62, 49, 155, 165, 62, 13, 134, 198, 189, 162, 203, 177, 59, 71, 88, 57, 190, 210, 133, 238, 61, 215, 71, 71, 188, 74, 63, 49, 61, 177, 7, 44, 190, 79, 22, 194, 189, 102, 237, 47, 189, 63, 151, 128, 189, 67, 39, 93, 189, 24, 127, 177, 189, 128, 241, 71, 189, 6, 230, 73, 190, 158, 218, 33, 190, 240, 31, 166, 189, 158, 1, 10, 62, 94, 168, 21, 62, 225, 98, 49, 190, 203, 27, 202, 189, 232, 120, 187, 61, 76, 184, 249, 189, 139, 150, 199, 61, 107, 182, 170, 189, 164, 26, 136, 60, 172, 175, 120, 60, 195, 157, 220, 189, 7, 199, 13, 187, 76, 91, 39, 190, 58, 52, 45, 190, 92, 95, 31, 189, 137, 220, 68, 190, 108, 179, 37, 60, 79, 5, 164, 189, 225, 135, 135, 189, 221, 149, 39, 190, 231, 45, 13, 62, 100, 161, 47, 190, 104, 138, 41, 62, 122, 74, 158, 188, 195, 37, 32, 62, 154, 28, 22, 190, 246, 88, 224, 61, 48, 104, 59, 61, 29, 18, 190, 59, 137, 116, 24, 190, 150, 31, 39, 190, 237, 100, 21, 190, 168, 51, 249, 189, 91, 139, 29, 62, 87, 54, 137, 61, 16, 23, 185, 188, 172, 239, 113, 189, 42, 77, 200, 189, 239, 223, 210, 189, 130, 18, 151, 186, 154, 76, 134, 189, 96, 40, 223, 189, 42, 99, 207, 189, 139, 167, 226, 189, 90, 110, 173, 187, 0, 152, 16, 62, 181, 56, 50, 190, 49, 72, 34, 190, 36, 103, 74, 190, 200, 98, 226, 189, 36, 253, 158, 62, 139, 97, 20, 62, 77, 165, 68, 189, 78, 123, 182, 62, 90, 51, 202, 61, 62, 108, 197, 62, 135, 32, 160, 61, 228, 86, 86, 190, 239, 149, 124, 190, 166, 181, 23, 190, 148, 41, 137, 60, 117, 224, 36, 188, 233, 158, 17, 61, 251, 36, 180, 189, 18, 82, 154, 62, 185, 68, 90, 189, 123, 205, 142, 60, 58, 127, 24, 61, 230, 117, 25, 62, 180, 247, 195, 188, 7, 182, 134, 62, 70, 211, 105, 190, 44, 126, 216, 62, 28, 80, 50, 62, 231, 157, 132, 61, 87, 219, 93, 190, 253, 128, 225, 189, 164, 135, 131, 61, 248, 252, 25, 62, 99, 9, 151, 61, 141, 32, 210, 61, 42, 40, 168, 188, 33, 59, 135, 190, 71, 37, 92, 191, 232, 174, 201, 190, 38, 219, 109, 190, 233, 108, 200, 62, 143, 220, 179, 60, 177, 201, 43, 62, 171, 225, 173, 61, 51, 207, 95, 190, 51, 138, 26, 190, 37, 125, 116, 190, 128, 49, 9, 62, 81, 169, 29, 62, 249, 113, 149, 191, 74, 142, 29, 62, 211, 246, 134, 191, 74, 116, 42, 62, 64, 32, 120, 62, 99, 185, 28, 189, 28, 207, 111, 62, 92, 253, 249, 189, 222, 49, 173, 60, 225, 216, 60, 62, 144, 195, 165, 62, 146, 95, 110, 186, 179, 60, 98, 62, 254, 149, 164, 189, 232, 8, 3, 190, 60, 29, 144, 61, 67, 241, 131, 189, 134, 248, 85, 61, 189, 102, 172, 61, 173, 153, 187, 188, 247, 222, 6, 63, 113, 69, 160, 61, 52, 146, 134, 62, 96, 134, 133, 190, 168, 50, 95, 62, 178, 232, 147, 62, 255, 82, 203, 188, 9, 166, 145, 191, 58, 123, 140, 189, 125, 143, 162, 61, 141, 240, 132, 190, 152, 247, 112, 62, 207, 171, 38, 63, 133, 213, 84, 62, 31, 109, 44, 63, 53, 114, 194, 189, 255, 244, 19, 191, 57, 184, 30, 62, 246, 201, 105, 191, 180, 116, 141, 60, 220, 22, 196, 62, 239, 20, 190, 189, 63, 243, 0, 190, 96, 185, 67, 191, 73, 34, 95, 189, 64, 21, 141, 190, 41, 191, 65, 62, 222, 225, 128, 62, 105, 30, 100, 190, 122, 154, 31, 191, 122, 24, 240, 190, 199, 89, 97, 189, 42, 46, 236, 62, 164, 190, 160, 62, 48, 12, 142, 62, 170, 77, 206, 61, 222, 227, 144, 62, 51, 114, 163, 186, 47, 90, 146, 190, 174, 35, 97, 190, 190, 49, 156, 62, 255, 232, 199, 189, 71, 63, 132, 190, 85, 42, 189, 62, 165, 225, 197, 190, 195, 112, 76, 62, 227, 147, 41, 62, 31, 4, 121, 189, 200, 83, 28, 188, 169, 227, 30, 62, 202, 95, 128, 186, 159, 252, 93, 189, 93, 206, 19, 190, 93, 47, 136, 62, 193, 150, 118, 61, 173, 219, 97, 190, 109, 20, 84, 190, 62, 174, 55, 190, 196, 204, 181, 187, 111, 97, 237, 188, 68, 205, 233, 62, 14, 212, 69, 62, 29, 111, 96, 61, 5, 177, 186, 61, 75, 51, 56, 191, 78, 104, 3, 191, 31, 109, 212, 190, 245, 124, 249, 61, 249, 68, 75, 190, 57, 188, 144, 190, 210, 70, 108, 189, 84, 173, 11, 62, 222, 199, 164, 190, 177, 109, 70, 190, 179, 130, 194, 189, 30, 133, 73, 62, 203, 142, 159, 190, 49, 184, 255, 189, 61, 75, 48, 191, 78, 184, 145, 60, 123, 140, 87, 62, 159, 231, 79, 58, 179, 159, 68, 61, 57, 209, 221, 60, 89, 36, 171, 62, 115, 18, 178, 62, 200, 53, 56, 189, 141, 111, 28, 62, 126, 188, 186, 61, 115, 67, 93, 188, 206, 204, 156, 61, 203, 17, 199, 60, 110, 134, 221, 190, 253, 249, 88, 191, 173, 154, 7, 191, 164, 99, 248, 61, 177, 75, 187, 62, 138, 192, 65, 62, 163, 163, 135, 62, 86, 0, 47, 189, 178, 188, 5, 62, 207, 91, 118, 189, 73, 128, 52, 190, 233, 194, 255, 189, 98, 92, 220, 62, 228, 234, 84, 62, 49, 204, 243, 190, 157, 40, 132, 188, 204, 180, 143, 62, 14, 38, 162, 61, 180, 102, 192, 62, 69, 38, 202, 190, 2, 102, 157, 187, 15, 53, 164, 62, 126, 148, 251, 189, 138, 53, 136, 62, 233, 62, 144, 191, 88, 8, 172, 191, 18, 118, 141, 189, 203, 228, 58, 190, 44, 228, 94, 191, 139, 87, 175, 189, 200, 7, 118, 62, 35, 60, 112, 60, 228, 142, 124, 62, 225, 217, 190, 60, 189, 26, 163, 61, 46, 50, 187, 190, 65, 9, 132, 189, 156, 194, 26, 190, 250, 39, 158, 62, 45, 167, 107, 61, 82, 85, 67, 189, 155, 47, 42, 60, 198, 82, 215, 190, 196, 198, 79, 61, 130, 102, 46, 189, 42, 31, 197, 190, 19, 208, 184, 188, 43, 36, 43, 190, 205, 66, 81, 191, 134, 168, 66, 60, 118, 207, 192, 189, 235, 139, 176, 189, 108, 55, 151, 62, 1, 83, 137, 61, 86, 38, 149, 62, 2, 227, 169, 189, 192, 35, 15, 62, 208, 175, 3, 63, 232, 150, 174, 62, 61, 112, 200, 61, 93, 151, 253, 61, 0, 187, 214, 189, 182, 6, 4, 190, 125, 74, 126, 62, 208, 124, 208, 61, 26, 225, 171, 189, 240, 231, 194, 188, 41, 181, 202, 190, 58, 202, 249, 62, 144, 241, 24, 190, 182, 152, 203, 62, 148, 192, 191, 62, 17, 117, 0, 63, 246, 70, 172, 62, 178, 118, 1, 192, 191, 244, 151, 61, 200, 119, 19, 191, 47, 1, 188, 189, 166, 185, 243, 190, 95, 60, 98, 191, 225, 18, 14, 191, 91, 52, 40, 189, 246, 16, 39, 62, 137, 93, 85, 190, 197, 204, 196, 62, 215, 251, 152, 189, 112, 101, 221, 188, 236, 101, 65, 62, 206, 247, 35, 190, 72, 115, 202, 189, 63, 101, 4, 62, 212, 30, 135, 62, 72, 218, 242, 189, 221, 218, 138, 191, 95, 87, 67, 191, 110, 227, 220, 190, 24, 2, 136, 190, 131, 126, 251, 60, 3, 212, 12, 62, 199, 117, 81, 61, 52, 199, 171, 189, 244, 195, 32, 62, 96, 233, 172, 189, 216, 162, 138, 61, 67, 236, 223, 61, 122, 225, 12, 190, 163, 181, 72, 189, 217, 212, 50, 190, 165, 115, 2, 62, 83, 33, 75, 190, 87, 222, 9, 190, 219, 251, 82, 190, 112, 91, 168, 189, 131, 177, 64, 190, 231, 47, 231, 61, 155, 100, 29, 62, 100, 247, 251, 59, 19, 201, 92, 61, 108, 14, 58, 189, 142, 221, 201, 188, 49, 138, 226, 61, 12, 163, 18, 62, 243, 238, 129, 190, 248, 52, 153, 189, 94, 238, 72, 61, 194, 34, 139, 189, 177, 119, 29, 62, 122, 126, 172, 187, 165, 212, 41, 190, 5, 157, 166, 190, 215, 187, 65, 190, 25, 123, 94, 61, 147, 201, 17, 62, 24, 160, 197, 60, 208, 100, 168, 62, 14, 184, 207, 61, 99, 243, 81, 62, 24, 111, 70, 61, 178, 214, 134, 190, 33, 207, 78, 189, 34, 130, 84, 62, 172, 146, 76, 61, 153, 86, 67, 190, 27, 118, 150, 62, 210, 7, 245, 190, 135, 2, 113, 62, 4, 188, 180, 61, 3, 75, 88, 188, 102, 245, 130, 62, 175, 6, 132, 62, 154, 58, 88, 61, 134, 137, 121, 188, 203, 91, 227, 188, 68, 61, 61, 190, 118, 143, 123, 62, 40, 212, 29, 190, 240, 183, 126, 190, 238, 138, 144, 190, 8, 183, 67, 189, 116, 132, 59, 62, 215, 109, 13, 190, 46, 149, 197, 62, 248, 237, 97, 62, 68, 108, 66, 189, 197, 31, 233, 190, 8, 228, 26, 191, 23, 204, 141, 62, 85, 211, 236, 61, 36, 232, 164, 189, 60, 64, 39, 62, 151, 91, 209, 190, 121, 83, 114, 190, 125, 97, 116, 191, 211, 180, 223, 61, 123, 191, 60, 62, 24, 52, 226, 190, 188, 32, 92, 62, 117, 208, 20, 190, 237, 140, 93, 190, 116, 113, 231, 62, 31, 153, 2, 63, 85, 30, 207, 190, 225, 16, 113, 190, 75, 95, 51, 189, 188, 175, 104, 189, 225, 148, 126, 62, 116, 203, 170, 62, 239, 37, 189, 62, 195, 23, 110, 62, 18, 145, 12, 190, 93, 186, 20, 191, 72, 91, 14, 62, 229, 86, 5, 191, 37, 66, 122, 189, 84, 44, 20, 62, 55, 49, 86, 62, 139, 146, 103, 190, 185, 167, 172, 61, 149, 50, 146, 62, 41, 92, 185, 61, 52, 3, 65, 62, 228, 61, 4, 60, 21, 229, 203, 188, 103, 11, 124, 189, 162, 60, 6, 189, 13, 153, 240, 61, 70, 211, 209, 189, 48, 17, 73, 190, 87, 29, 200, 61, 147, 106, 93, 59, 0, 64, 105, 60, 110, 188, 112, 190, 250, 20, 160, 61, 2, 231, 62, 62, 4, 114, 170, 61, 194, 155, 62, 188, 73, 78, 5, 190, 239, 179, 22, 62, 217, 173, 126, 62, 51, 0, 128, 61, 8, 95, 118, 61, 164, 179, 246, 188, 176, 122, 206, 187, 181, 60, 3, 190, 221, 160, 232, 189, 144, 44, 0, 191, 131, 123, 78, 190, 248, 7, 59, 62, 142, 176, 129, 190, 169, 192, 134, 60, 75, 48, 138, 190, 176, 106, 25, 190, 195, 244, 46, 60, 147, 108, 81, 190, 234, 143, 94, 189, 144, 205, 166, 61, 168, 91, 135, 62, 33, 57, 96, 188, 20, 243, 37, 189, 22, 83, 104, 61, 143, 245, 187, 189, 158, 166, 151, 61, 64, 162, 120, 190, 41, 49, 183, 60, 71, 48, 31, 190, 15, 143, 92, 61, 32, 114, 22, 62, 6, 26, 155, 189, 252, 173, 249, 188, 206, 188, 121, 187, 0, 52, 248, 58, 99, 11, 31, 190, 14, 247, 183, 61, 50, 209, 65, 62, 169, 211, 231, 189, 234, 113, 75, 62, 98, 124, 195, 61, 31, 102, 138, 62, 5, 5, 197, 62, 93, 45, 253, 187, 91, 15, 44, 191, 18, 90, 2, 191, 36, 152, 186, 190, 60, 95, 203, 188, 74, 48, 159, 191, 90, 91, 25, 190, 13, 9, 33, 62, 78, 54, 167, 62, 102, 65, 66, 191, 245, 219, 244, 61, 128, 42, 94, 61, 25, 102, 152, 60, 153, 3, 247, 60, 42, 185, 2, 190, 187, 169, 85, 191, 149, 107, 199, 190, 40, 1, 13, 188, 24, 135, 144, 189, 219, 117, 171, 61, 130, 191, 218, 59, 143, 136, 146, 62, 171, 49, 195, 62, 164, 223, 20, 62, 250, 3, 161, 62, 20, 129, 215, 62, 26, 181, 19, 62, 225, 50, 96, 191, 218, 91, 100, 61, 235, 124, 0, 191, 246, 234, 95, 61, 49, 174, 79, 59, 29, 152, 92, 59, 115, 123, 8, 63, 61, 201, 21, 63, 58, 97, 236, 189, 9, 204, 5, 63, 172, 249, 170, 61, 36, 140, 125, 62, 162, 250, 253, 61, 56, 222, 137, 190, 158, 28, 41, 63, 171, 115, 61, 60, 85, 251, 55, 190, 14, 32, 124, 62, 233, 52, 20, 62, 133, 123, 103, 62, 13, 193, 225, 62, 214, 28, 17, 63, 78, 16, 121, 190, 85, 33, 127, 189, 117, 150, 140, 60, 219, 180, 16, 190, 227, 163, 131, 190, 254, 214, 4, 190, 42, 81, 127, 190, 58, 209, 177, 190, 34, 194, 20, 62, 239, 39, 212, 189, 195, 185, 94, 61, 106, 102, 2, 62, 118, 15, 42, 62, 137, 25, 176, 190, 97, 4, 164, 190, 201, 27, 85, 62, 175, 162, 238, 62, 69, 187, 159, 62, 66, 42, 214, 62, 80, 169, 107, 190, 54, 169, 18, 190, 115, 52, 184, 61, 26, 250, 19, 191, 130, 203, 8, 191, 38, 180, 183, 62, 187, 44, 252, 189, 230, 61, 165, 190, 58, 93, 99, 62, 210, 179, 126, 190, 2, 52, 5, 62, 233, 185, 236, 61, 74, 194, 71, 191, 30, 203, 120, 61, 201, 16, 204, 61, 221, 111, 17, 190, 88, 69, 155, 61, 68, 200, 48, 191, 74, 11, 197, 62, 156, 60, 91, 189, 196, 190, 11, 188, 179, 65, 252, 189, 192, 34, 179, 190, 76, 1, 65, 61, 148, 2, 74, 62, 217, 160, 231, 62, 44, 176, 9, 190, 27, 128, 157, 60, 47, 159, 211, 189, 63, 33, 208, 60, 175, 48, 168, 189, 115, 106, 195, 188, 151, 10, 21, 62, 96, 48, 180, 61, 214, 238, 54, 188, 141, 22, 72, 190, 58, 247, 222, 61, 76, 189, 191, 61, 115, 43, 43, 190, 119, 226, 10, 62, 206, 156, 89, 190, 17, 82, 90, 61, 71, 204, 37, 190, 33, 43, 31, 190, 152, 29, 96, 189, 71, 156, 251, 61, 209, 59, 113, 61, 51, 211, 60, 190, 230, 83, 177, 61, 111, 165, 199, 189, 164, 61, 74, 190, 138, 150, 145, 189, 212, 71, 6, 190, 71, 223, 172, 189, 171, 153, 38, 189, 64, 36, 32, 61, 114, 48, 1, 62, 175, 174, 4, 187, 52, 161, 144, 62, 187, 232, 143, 62, 217, 230, 130, 189, 245, 152, 131, 190, 75, 55, 51, 61, 174, 213, 215, 189, 80, 10, 189, 190, 234, 240, 150, 191, 154, 145, 63, 190, 150, 46, 49, 190, 215, 233, 84, 62, 200, 253, 167, 190, 233, 38, 137, 62, 230, 169, 21, 190, 218, 142, 17, 62, 210, 244, 13, 63, 148, 172, 57, 189, 242, 204, 229, 186, 107, 85, 47, 62, 167, 192, 36, 62, 129, 16, 150, 62, 188, 177, 159, 188, 229, 221, 66, 189, 31, 212, 130, 60, 144, 194, 181, 62, 142, 120, 192, 61, 90, 126, 60, 61, 12, 113, 60, 62, 49, 194, 81, 190, 27, 133, 81, 191, 235, 16, 168, 62, 125, 30, 136, 62};
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
                alignas(float) const unsigned char memory[] = {168, 224, 38, 62, 116, 67, 128, 61, 56, 72, 60, 189, 160, 128, 150, 61, 129, 246, 217, 62, 165, 224, 76, 62, 4, 27, 72, 188, 46, 99, 8, 62, 124, 104, 14, 62, 209, 141, 151, 62, 123, 60, 4, 190, 96, 111, 178, 62, 33, 86, 99, 60, 255, 66, 211, 60, 111, 183, 209, 62, 112, 183, 2, 62, 191, 36, 2, 62, 118, 188, 20, 62, 85, 139, 85, 62, 129, 87, 73, 61, 153, 215, 22, 62, 229, 79, 36, 62, 75, 14, 48, 189, 209, 46, 171, 62, 124, 56, 6, 190, 20, 207, 111, 62, 100, 33, 34, 62, 96, 216, 73, 61, 93, 36, 3, 190, 122, 251, 98, 62, 49, 48, 48, 190, 186, 86, 118, 189};
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
                alignas(float) const unsigned char memory[] = {153, 238, 70, 191, 145, 21, 30, 191, 154, 175, 214, 62, 133, 122, 57, 191, 202, 156, 130, 62, 205, 8, 227, 191, 198, 152, 52, 62, 227, 145, 192, 190, 48, 161, 231, 62, 51, 238, 81, 63, 191, 136, 231, 190, 239, 156, 37, 191, 143, 129, 158, 61, 113, 126, 107, 188, 102, 184, 150, 62, 72, 240, 246, 190, 54, 225, 43, 63, 53, 152, 193, 62, 230, 215, 135, 190, 48, 35, 184, 191, 150, 170, 45, 62, 86, 106, 74, 63, 199, 31, 30, 190, 20, 194, 96, 62, 208, 70, 148, 63, 132, 223, 25, 61, 250, 87, 233, 60, 39, 240, 83, 191, 135, 76, 196, 190, 208, 40, 29, 63, 77, 189, 11, 190, 225, 231, 193, 190, 249, 213, 180, 189, 6, 203, 80, 62, 60, 132, 75, 61, 219, 218, 152, 60, 167, 69, 189, 190, 216, 157, 203, 62, 82, 234, 176, 189, 199, 131, 52, 189, 105, 251, 178, 188, 237, 176, 108, 61, 6, 62, 11, 189, 24, 184, 97, 190, 229, 12, 42, 189, 228, 70, 130, 189, 91, 55, 76, 190, 2, 153, 88, 189, 15, 214, 251, 61, 253, 85, 121, 62, 170, 228, 132, 62, 133, 133, 122, 62, 36, 186, 220, 190, 110, 68, 17, 62, 214, 219, 152, 61, 127, 201, 141, 188, 250, 143, 178, 62, 18, 79, 1, 190, 159, 178, 94, 190, 77, 131, 147, 62, 69, 156, 215, 189, 135, 67, 201, 189, 211, 154, 207, 61, 130, 230, 66, 189};
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
                alignas(float) const unsigned char memory[] = {211, 110, 12, 62, 142, 28, 208, 190};
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
    alignas(float) const unsigned char memory[] = {22, 128, 223, 191, 134, 226, 207, 190, 251, 36, 18, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {67, 250, 203, 64, 126, 14, 107, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0075/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}