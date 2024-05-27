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
                alignas(float) const unsigned char memory[] = {156, 16, 172, 62, 70, 214, 157, 189, 65, 209, 248, 62, 132, 249, 225, 190, 7, 21, 159, 191, 208, 120, 138, 189, 228, 52, 32, 191, 60, 113, 179, 189, 253, 185, 98, 191, 145, 92, 141, 62, 142, 136, 129, 62, 186, 232, 146, 59, 102, 4, 63, 191, 247, 1, 65, 62, 56, 201, 142, 60, 138, 100, 46, 63, 178, 27, 158, 60, 0, 224, 13, 190, 30, 231, 24, 63, 85, 34, 45, 62, 143, 201, 42, 191, 54, 194, 173, 62, 67, 162, 214, 190, 238, 173, 73, 62, 202, 155, 219, 189, 0, 150, 151, 191, 98, 210, 110, 190, 181, 159, 52, 62, 107, 38, 156, 63, 85, 157, 4, 63, 130, 116, 35, 191, 142, 77, 162, 190, 8, 225, 21, 191, 101, 12, 238, 61, 24, 225, 113, 62, 63, 105, 43, 191, 133, 10, 2, 63, 146, 54, 112, 63, 45, 124, 171, 62, 73, 221, 161, 190, 46, 142, 188, 62, 200, 124, 250, 61, 186, 35, 57, 63, 6, 254, 123, 191, 170, 151, 214, 190, 123, 79, 182, 61, 165, 248, 176, 63, 225, 147, 159, 62, 87, 23, 23, 63, 61, 39, 154, 63, 118, 118, 105, 62, 131, 135, 163, 61, 13, 201, 44, 191, 0, 123, 233, 62, 226, 208, 39, 62, 214, 136, 69, 189, 185, 65, 4, 191, 84, 69, 28, 190, 152, 169, 54, 191, 148, 29, 116, 190, 211, 254, 186, 62, 101, 106, 178, 63, 25, 5, 24, 62, 168, 99, 155, 62, 75, 90, 208, 190, 4, 27, 169, 62, 199, 171, 194, 190, 80, 194, 194, 62, 218, 119, 69, 63, 5, 215, 19, 63, 112, 31, 33, 63, 220, 117, 5, 63, 52, 135, 16, 63, 232, 179, 80, 191, 110, 103, 222, 189, 100, 207, 254, 190, 234, 243, 46, 63, 171, 245, 209, 190, 61, 253, 37, 63, 34, 21, 134, 63, 143, 255, 34, 62, 10, 177, 89, 63, 127, 177, 134, 63, 70, 221, 229, 62, 200, 121, 168, 190, 67, 183, 169, 63, 179, 107, 133, 62, 165, 237, 76, 191, 207, 207, 211, 61, 174, 21, 27, 63, 250, 194, 200, 189, 207, 185, 122, 191, 40, 20, 149, 62, 0, 51, 87, 189, 176, 255, 172, 63, 227, 235, 144, 190};
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
                alignas(float) const unsigned char memory[] = {68, 55, 86, 191, 80, 18, 143, 61, 143, 50, 16, 190, 232, 47, 208, 190, 143, 81, 51, 63, 16, 121, 142, 62, 56, 69, 16, 191, 197, 147, 116, 190, 92, 118, 180, 62, 116, 68, 82, 62, 250, 179, 111, 62, 150, 73, 232, 62, 129, 101, 75, 190, 160, 108, 163, 190, 99, 8, 8, 191, 57, 19, 217, 190, 40, 130, 1, 189, 238, 82, 4, 191, 89, 217, 28, 190, 63, 58, 109, 62, 205, 28, 237, 190, 71, 186, 54, 191, 56, 46, 122, 62, 92, 88, 105, 190, 83, 139, 51, 62, 173, 81, 41, 62, 154, 71, 236, 61, 134, 99, 229, 60, 252, 41, 21, 63, 50, 219, 20, 191, 0, 157, 35, 61, 243, 188, 103, 62};
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
                alignas(float) const unsigned char memory[] = {176, 174, 61, 61, 161, 80, 12, 61, 144, 61, 213, 61, 13, 254, 122, 61, 38, 234, 99, 60, 129, 247, 92, 189, 117, 111, 142, 190, 196, 204, 227, 61, 206, 110, 165, 61, 155, 234, 139, 190, 222, 46, 12, 62, 10, 166, 105, 61, 31, 6, 209, 59, 182, 180, 91, 62, 186, 133, 211, 190, 128, 64, 46, 191, 103, 20, 99, 61, 68, 241, 219, 188, 199, 131, 19, 190, 209, 213, 196, 189, 153, 118, 251, 62, 44, 186, 6, 62, 156, 119, 137, 188, 19, 86, 45, 189, 98, 249, 51, 190, 141, 15, 120, 61, 91, 84, 60, 62, 64, 163, 213, 61, 152, 69, 72, 61, 226, 176, 3, 191, 214, 127, 133, 58, 240, 160, 86, 190, 194, 116, 82, 190, 7, 97, 170, 62, 251, 99, 2, 190, 101, 94, 8, 62, 170, 144, 187, 62, 78, 137, 169, 189, 19, 102, 219, 190, 4, 234, 13, 190, 215, 59, 157, 62, 78, 216, 183, 189, 112, 135, 99, 62, 25, 102, 192, 189, 28, 220, 205, 190, 29, 166, 211, 60, 179, 49, 170, 190, 246, 178, 102, 190, 178, 82, 102, 191, 112, 177, 137, 188, 197, 70, 152, 190, 22, 106, 9, 62, 84, 175, 100, 191, 2, 78, 67, 190, 143, 123, 108, 62, 74, 207, 128, 190, 18, 100, 94, 189, 241, 228, 34, 190, 97, 107, 171, 190, 36, 93, 104, 189, 209, 6, 167, 189, 91, 151, 5, 62, 47, 22, 54, 62, 139, 38, 171, 62, 159, 207, 91, 190, 115, 215, 43, 191, 80, 22, 185, 60, 71, 213, 9, 62, 164, 47, 110, 62, 46, 195, 0, 189, 232, 152, 223, 188, 9, 63, 130, 189, 99, 31, 116, 190, 35, 58, 46, 61, 251, 85, 79, 190, 59, 120, 82, 61, 9, 110, 66, 190, 91, 252, 198, 189, 149, 180, 189, 62, 124, 77, 194, 60, 81, 241, 130, 191, 251, 159, 204, 60, 213, 48, 3, 62, 49, 103, 140, 190, 58, 122, 146, 191, 80, 155, 212, 60, 116, 205, 66, 62, 97, 199, 71, 190, 124, 115, 78, 62, 69, 17, 7, 190, 170, 118, 46, 191, 9, 100, 189, 190, 95, 109, 232, 189, 218, 121, 114, 188, 95, 203, 156, 61, 3, 191, 196, 62, 149, 161, 79, 61, 188, 216, 131, 190, 241, 10, 46, 190, 96, 177, 174, 189, 121, 188, 223, 189, 223, 6, 225, 61, 28, 59, 166, 188, 43, 255, 241, 61, 225, 162, 163, 190, 70, 77, 143, 189, 173, 52, 238, 189, 82, 68, 21, 62, 68, 170, 81, 62, 23, 233, 177, 189, 246, 47, 75, 191, 110, 254, 186, 190, 81, 103, 214, 62, 220, 45, 94, 62, 65, 150, 58, 62, 153, 139, 176, 61, 98, 207, 156, 62, 251, 17, 237, 61, 231, 123, 155, 190, 43, 184, 254, 188, 81, 203, 10, 190, 53, 142, 130, 62, 19, 216, 143, 62, 90, 86, 133, 62, 28, 187, 55, 190, 13, 68, 141, 190, 219, 143, 33, 62, 237, 21, 108, 62, 177, 203, 138, 61, 186, 130, 244, 188, 167, 24, 216, 61, 11, 8, 24, 61, 197, 67, 20, 60, 251, 14, 234, 60, 149, 183, 86, 190, 21, 208, 63, 60, 4, 111, 107, 190, 88, 58, 96, 190, 64, 8, 148, 61, 226, 230, 179, 61, 235, 223, 122, 62, 78, 57, 105, 62, 134, 197, 36, 191, 62, 112, 177, 191, 66, 246, 213, 62, 103, 200, 157, 62, 106, 216, 135, 189, 71, 185, 197, 189, 63, 61, 162, 62, 55, 139, 14, 63, 97, 45, 29, 190, 173, 101, 12, 62, 182, 212, 41, 190, 5, 131, 15, 62, 176, 167, 126, 62, 122, 206, 102, 61, 12, 154, 79, 190, 121, 208, 168, 190, 116, 168, 22, 190, 142, 103, 152, 190, 24, 210, 8, 188, 171, 255, 151, 62, 34, 122, 231, 61, 174, 158, 76, 190, 171, 204, 145, 60, 156, 202, 215, 61, 245, 107, 143, 190, 117, 75, 91, 190, 31, 77, 70, 62, 224, 79, 81, 190, 58, 32, 168, 62, 155, 188, 184, 188, 211, 248, 217, 61, 17, 88, 31, 62, 104, 189, 29, 191, 158, 155, 169, 191, 228, 152, 204, 62, 79, 46, 124, 190, 99, 55, 114, 59, 59, 29, 29, 62, 95, 20, 158, 62, 201, 164, 27, 63, 102, 154, 237, 190, 233, 247, 51, 59, 189, 111, 136, 190, 44, 194, 169, 62, 190, 33, 229, 61, 165, 29, 156, 62, 189, 159, 127, 189, 95, 123, 93, 191, 53, 74, 187, 190, 10, 72, 152, 190, 121, 242, 240, 189, 88, 113, 12, 62, 189, 205, 249, 190, 220, 37, 35, 186, 82, 28, 223, 59, 104, 35, 171, 62, 162, 193, 205, 188, 245, 37, 65, 189, 124, 84, 208, 189, 134, 107, 187, 189, 74, 30, 50, 190, 107, 168, 198, 189, 187, 130, 57, 191, 12, 223, 136, 190, 187, 183, 143, 62, 29, 30, 154, 190, 12, 91, 43, 191, 254, 216, 160, 189, 144, 179, 229, 61, 4, 121, 103, 62, 233, 27, 144, 191, 84, 251, 84, 189, 172, 207, 63, 62, 252, 30, 40, 190, 220, 49, 52, 62, 98, 11, 71, 62, 120, 236, 2, 190, 6, 140, 130, 190, 142, 193, 135, 189, 220, 221, 205, 61, 191, 80, 98, 62, 72, 61, 20, 63, 198, 97, 6, 191, 238, 168, 168, 62, 103, 100, 83, 189, 242, 125, 34, 189, 136, 133, 211, 190, 46, 38, 215, 62, 150, 250, 149, 62, 151, 127, 158, 62, 210, 108, 241, 62, 59, 119, 104, 190, 149, 146, 217, 190, 38, 239, 184, 61, 93, 82, 119, 190, 231, 202, 160, 190, 173, 226, 209, 62, 85, 229, 27, 62, 23, 147, 39, 191, 239, 103, 160, 187, 127, 223, 32, 62, 66, 42, 1, 62, 151, 124, 188, 190, 206, 136, 131, 190, 47, 245, 235, 189, 163, 39, 70, 191, 121, 197, 29, 63, 118, 65, 184, 190, 130, 92, 182, 191, 51, 48, 162, 191, 166, 128, 72, 189, 26, 228, 68, 61, 231, 199, 60, 62, 110, 79, 118, 189, 0, 173, 165, 190, 79, 203, 105, 190, 250, 117, 52, 190, 42, 52, 246, 187, 191, 64, 14, 61, 132, 130, 116, 61, 190, 3, 196, 191, 61, 222, 157, 190, 184, 169, 46, 62, 24, 61, 203, 190, 2, 39, 139, 60, 13, 179, 98, 190, 193, 218, 59, 61, 205, 90, 152, 188, 107, 210, 175, 190, 57, 119, 53, 190, 204, 247, 168, 61, 80, 192, 2, 191, 251, 155, 147, 190, 177, 104, 90, 189, 184, 129, 121, 189, 185, 139, 179, 60, 60, 150, 153, 190, 168, 85, 13, 62, 37, 209, 39, 189, 240, 250, 165, 61, 167, 104, 78, 61, 167, 40, 143, 62, 190, 67, 220, 61, 182, 56, 114, 191, 1, 248, 150, 190, 190, 31, 213, 191, 210, 55, 150, 61, 245, 145, 90, 190, 94, 136, 157, 190, 40, 94, 232, 189, 168, 239, 76, 190, 133, 194, 48, 62, 51, 219, 193, 62, 123, 93, 4, 190, 77, 104, 238, 189, 178, 52, 156, 190, 81, 240, 5, 190, 54, 212, 157, 188, 4, 148, 16, 191, 127, 255, 129, 61, 65, 222, 45, 63, 22, 152, 37, 190, 215, 58, 66, 191, 52, 195, 75, 62, 231, 139, 178, 62, 254, 79, 245, 188, 117, 185, 166, 190, 63, 86, 188, 61, 246, 175, 149, 61, 155, 233, 34, 189, 0, 210, 0, 62, 37, 46, 235, 189, 176, 120, 69, 189, 3, 9, 55, 189, 226, 248, 141, 191, 210, 164, 79, 61, 215, 21, 231, 62, 7, 14, 58, 62, 73, 135, 92, 62, 146, 43, 109, 62, 37, 230, 144, 61, 121, 113, 161, 61, 233, 202, 145, 188, 125, 98, 12, 188, 69, 193, 182, 60, 242, 193, 22, 63, 20, 239, 134, 62, 252, 21, 8, 192, 134, 2, 58, 62, 205, 41, 56, 62, 16, 185, 84, 62, 126, 243, 1, 190, 16, 167, 216, 189, 236, 121, 39, 191, 213, 157, 29, 63, 180, 167, 212, 189, 233, 159, 27, 62, 132, 120, 23, 62, 217, 14, 55, 63, 115, 28, 56, 63, 122, 51, 251, 186, 96, 193, 75, 191, 23, 159, 31, 190, 107, 216, 156, 61, 162, 78, 195, 190, 113, 146, 52, 190, 202, 239, 252, 62, 164, 53, 94, 191, 180, 95, 84, 62, 80, 234, 167, 190, 91, 24, 164, 61, 216, 125, 196, 62, 252, 158, 77, 62, 48, 241, 211, 61, 121, 79, 236, 61, 32, 110, 11, 61, 196, 246, 131, 190, 104, 195, 71, 61, 170, 135, 54, 189, 27, 22, 158, 190, 251, 218, 142, 62, 169, 214, 6, 61, 92, 11, 53, 62, 156, 86, 178, 61, 234, 99, 5, 191, 56, 121, 131, 191, 40, 78, 134, 62, 150, 37, 30, 191, 39, 91, 108, 189, 200, 70, 225, 61, 229, 141, 7, 63, 246, 166, 211, 188, 61, 64, 32, 191, 119, 23, 50, 62, 38, 212, 80, 189, 15, 122, 94, 62, 119, 100, 93, 62, 175, 202, 62, 62, 198, 240, 55, 61, 96, 107, 226, 190, 199, 181, 203, 190, 5, 37, 203, 190, 115, 152, 140, 190, 183, 42, 115, 61, 3, 28, 86, 191, 15, 168, 225, 189, 72, 138, 8, 62, 179, 81, 219, 62, 27, 218, 43, 190, 197, 84, 232, 61, 193, 188, 171, 62, 70, 0, 36, 61, 191, 175, 111, 191, 2, 69, 227, 188, 71, 135, 117, 189, 87, 243, 221, 62, 44, 198, 129, 62, 63, 122, 217, 62, 205, 18, 67, 61, 139, 18, 69, 188, 142, 200, 42, 190, 93, 214, 122, 186, 95, 84, 189, 61, 8, 111, 3, 191, 58, 177, 163, 62, 206, 127, 10, 191, 212, 222, 151, 62, 35, 123, 69, 60, 30, 223, 64, 191, 78, 75, 106, 191, 128, 196, 48, 63, 129, 137, 80, 62, 93, 64, 153, 62, 0, 166, 3, 63, 31, 133, 245, 61, 32, 116, 68, 60, 240, 212, 179, 190, 2, 174, 16, 62, 184, 76, 168, 62, 104, 149, 99, 191, 83, 132, 191, 190, 199, 150, 185, 190, 65, 37, 66, 189, 13, 57, 80, 190, 160, 233, 18, 62, 169, 119, 16, 191, 13, 61, 2, 62, 172, 173, 120, 61, 8, 163, 149, 190, 63, 96, 238, 61, 191, 145, 126, 62, 12, 28, 60, 60, 152, 31, 58, 191, 107, 99, 152, 190, 115, 183, 135, 62, 166, 103, 215, 189, 10, 142, 133, 62, 64, 182, 245, 60, 225, 53, 29, 191, 116, 96, 165, 61, 150, 3, 202, 61, 30, 25, 111, 62, 80, 170, 236, 62, 154, 143, 187, 190, 164, 108, 119, 60, 160, 37, 130, 191, 29, 207, 139, 190, 99, 26, 10, 190, 78, 193, 163, 190, 163, 19, 23, 62, 8, 127, 213, 190, 19, 171, 173, 62, 47, 157, 16, 191, 168, 4, 97, 62, 255, 246, 245, 61, 108, 170, 193, 189, 108, 162, 202, 190, 9, 160, 98, 61, 76, 206, 16, 189, 163, 177, 6, 190, 173, 168, 31, 191, 117, 217, 143, 190, 173, 103, 55, 190, 22, 254, 65, 60, 50, 206, 200, 190, 39, 123, 154, 59, 120, 51, 31, 60, 165, 8, 1, 61, 221, 214, 253, 60, 220, 89, 128, 190, 142, 187, 26, 62, 167, 70, 128, 190, 152, 185, 126, 189, 104, 22, 231, 61, 200, 101, 122, 190, 194, 99, 238, 61, 127, 111, 150, 62, 78, 13, 54, 190, 58, 235, 200, 189, 167, 118, 94, 190, 128, 75, 92, 190, 125, 211, 188, 60, 50, 188, 123, 62, 204, 213, 64, 190, 166, 247, 148, 190, 197, 66, 89, 62, 42, 41, 11, 191, 126, 155, 37, 62, 206, 25, 35, 191, 151, 92, 1, 190, 4, 160, 47, 190, 98, 227, 27, 191, 66, 81, 181, 190, 107, 91, 35, 191, 3, 221, 82, 61, 92, 233, 120, 189, 105, 117, 154, 189, 138, 249, 72, 191, 219, 101, 169, 190, 253, 95, 8, 61, 249, 91, 230, 189, 131, 173, 72, 61, 137, 48, 3, 190, 125, 127, 164, 62, 172, 35, 77, 61, 167, 25, 63, 190, 71, 189, 86, 190, 191, 174, 48, 62, 177, 111, 89, 62, 49, 45, 186, 62, 180, 128, 0, 191, 5, 192, 140, 190, 225, 120, 99, 188, 91, 206, 186, 61, 59, 247, 131, 189, 123, 58, 158, 188, 5, 162, 228, 189, 234, 210, 150, 189, 221, 119, 189, 61, 65, 252, 28, 189, 237, 60, 45, 62, 207, 58, 5, 189, 170, 254, 11, 190, 52, 179, 133, 62, 169, 244, 33, 190, 17, 217, 37, 191, 2, 228, 62, 190, 6, 225, 34, 189, 217, 222, 62, 190, 237, 193, 26, 62, 214, 214, 77, 191, 155, 149, 172, 190, 253, 119, 5, 190, 253, 29, 84, 62, 233, 14, 209, 189, 64, 116, 221, 189, 88, 7, 27, 62, 106, 237, 23, 62, 71, 133, 153, 190, 38, 168, 217, 190, 80, 94, 8, 189, 59, 94, 27, 62, 245, 90, 143, 188, 200, 249, 12, 191, 239, 205, 220, 188, 155, 22, 47, 62, 21, 28, 169, 190, 254, 223, 14, 63, 142, 244, 199, 61, 81, 110, 149, 190, 41, 138, 154, 190, 79, 162, 20, 191, 120, 251, 85, 189, 199, 169, 24, 62, 207, 20, 17, 191, 43, 205, 208, 61, 124, 246, 254, 62, 123, 46, 37, 62, 132, 250, 116, 190, 125, 163, 56, 190, 91, 76, 103, 188, 165, 57, 116, 60, 73, 63, 120, 188, 87, 78, 126, 190, 40, 69, 63, 62, 66, 250, 75, 190, 16, 125, 54, 62, 173, 112, 140, 188, 144, 214, 162, 62, 48, 8, 17, 62, 31, 188, 192, 191, 247, 72, 3, 190, 8, 170, 38, 62, 197, 242, 169, 61, 112, 151, 72, 190, 21, 26, 191, 190, 133, 232, 254, 190, 59, 253, 137, 189, 29, 34, 91, 60, 9, 111, 200, 62, 187, 77, 20, 62, 32, 34, 53, 60, 201, 190, 146, 190, 178, 105, 155, 189, 126, 67, 112, 190, 124, 169, 234, 188, 12, 220, 225, 190, 223, 227, 127, 190, 198, 113, 167, 60, 235, 157, 38, 191, 2, 9, 110, 191, 59, 149, 4, 189, 192, 142, 69, 62, 146, 248, 56, 190, 179, 64, 142, 191, 230, 244, 226, 189, 24, 228, 87, 62, 12, 217, 77, 190, 97, 122, 91, 62, 222, 84, 227, 189, 74, 54, 48, 62, 63, 92, 200, 189, 79, 222, 155, 189, 188, 24, 82, 189, 148, 186, 203, 61, 171, 41, 27, 63, 211, 128, 74, 190, 56, 35, 157, 190, 196, 145, 56, 190, 152, 47, 150, 60, 206, 160, 38, 190, 172, 16, 185, 62, 90, 156, 153, 62, 63, 46, 29, 190, 170, 196, 168, 61, 173, 240, 57, 61, 201, 99, 101, 190, 183, 239, 232, 188, 221, 207, 70, 190, 200, 165, 238, 189, 62, 68, 231, 62, 6, 14, 31, 190, 30, 184, 12, 191, 129, 120, 132, 185, 141, 42, 183, 62, 161, 14, 136, 61, 195, 253, 32, 191, 159, 95, 122, 189, 177, 209, 217, 187, 163, 6, 244, 187, 56, 151, 11, 62, 74, 192, 107, 190, 131, 109, 19, 190, 223, 29, 251, 60, 24, 42, 106, 191, 114, 107, 38, 62, 36, 208, 217, 62, 92, 187, 87, 62, 160, 66, 160, 62, 254, 73, 229, 190, 89, 87, 225, 189, 110, 17, 208, 189, 104, 3, 188, 61, 27, 14, 39, 62, 104, 84, 165, 189, 17, 58, 170, 189, 101, 162, 226, 60, 148, 206, 2, 190, 79, 59, 227, 61, 172, 42, 217, 61, 193, 83, 248, 189, 240, 131, 13, 188, 37, 82, 86, 191, 105, 163, 156, 191, 197, 250, 93, 62, 78, 49, 38, 189, 177, 12, 159, 190, 82, 200, 187, 189, 43, 230, 134, 62, 41, 17, 209, 62, 123, 101, 174, 190, 2, 253, 89, 62, 236, 93, 192, 189, 209, 47, 87, 62, 110, 217, 127, 62, 136, 34, 61, 62, 105, 178, 44, 190, 238, 142, 182, 190, 45, 142, 51, 62, 214, 49, 98, 189, 140, 88, 10, 62, 60, 141, 138, 189, 155, 122, 26, 191, 5, 255, 243, 60, 211, 26, 134, 191, 74, 12, 154, 188, 4, 241, 238, 190, 229, 229, 149, 60, 216, 86, 110, 61, 39, 20, 168, 188, 184, 201, 108, 191, 210, 229, 163, 61, 82, 199, 7, 62, 1, 209, 2, 190, 120, 56, 245, 62, 201, 112, 163, 189, 223, 91, 44, 62, 174, 53, 214, 61, 133, 30, 238, 61, 138, 225, 192, 61, 237, 165, 168, 61, 92, 172, 129, 62, 67, 133, 44, 62, 230, 8, 16, 189, 215, 214, 14, 62, 239, 184, 67, 190, 250, 169, 231, 187, 243, 60, 80, 189, 6, 228, 7, 190, 182, 8, 138, 62, 215, 121, 89, 62, 68, 4, 143, 191, 4, 135, 0, 190, 69, 21, 154, 62, 221, 115, 81, 191, 69, 26, 202, 60, 125, 202, 91, 63, 103, 148, 50, 191, 246, 38, 157, 189, 102, 53, 168, 190, 111, 81, 82, 62, 31, 141, 144, 62, 170, 32, 108, 61, 110, 62, 175, 190, 227, 226, 45, 190, 207, 123, 243, 61, 229, 147, 101, 190, 48, 168, 200, 61, 105, 3, 45, 190, 4, 139, 56, 190, 67, 50, 111, 190, 130, 84, 22, 61, 123, 39, 244, 61, 62, 114, 45, 190, 65, 76, 252, 61, 115, 133, 134, 190, 167, 156, 205, 190, 209, 87, 150, 62, 139, 106, 165, 189, 90, 224, 114, 190, 212, 222, 28, 63, 37, 185, 161, 62, 190, 113, 110, 62, 81, 155, 34, 63, 56, 83, 87, 190, 252, 224, 133, 60, 245, 237, 24, 189, 187, 35, 114, 189, 196, 220, 136, 60, 240, 62, 5, 63, 145, 56, 7, 189, 0, 182, 175, 62, 128, 153, 200, 61, 107, 181, 196, 189, 155, 130, 194, 61, 138, 52, 36, 62, 78, 61, 24, 190, 93, 146, 150, 190, 21, 250, 164, 190, 255, 228, 168, 191, 161, 246, 137, 190, 27, 116, 123, 61, 34, 22, 140, 60, 34, 74, 162, 61, 199, 83, 134, 61, 53, 36, 159, 188, 15, 30, 211, 189, 128, 211, 45, 62, 172, 102, 155, 62, 227, 131, 76, 62, 76, 205, 155, 62, 48, 66, 99, 62, 24, 176, 131, 190, 251, 138, 105, 190, 233, 89, 96, 62, 216, 222, 27, 190, 75, 215, 165, 62, 156, 113, 17, 62, 52, 89, 2, 61, 250, 176, 218, 189, 239, 46, 89, 189, 31, 28, 166, 61, 119, 115, 131, 190, 38, 239, 157, 189, 16, 95, 28, 190, 162, 153, 150, 190, 186, 138, 148, 62, 94, 166, 110, 62, 179, 227, 118, 61, 217, 38, 230, 61, 16, 215, 91, 191, 2, 175, 165, 191, 219, 147, 204, 62, 198, 74, 43, 62, 197, 68, 176, 59, 0, 84, 224, 61, 124, 10, 191, 62, 176, 188, 154, 62, 167, 104, 212, 60, 103, 95, 250, 61, 207, 148, 182, 190, 58, 99, 54, 62, 204, 119, 36, 62, 119, 27, 46, 62, 48, 107, 236, 189, 189, 182, 215, 190, 172, 105, 90, 190, 203, 133, 153, 190, 240, 248, 33, 189, 169, 113, 23, 62, 215, 70, 13, 191, 112, 198, 48, 62, 204, 15, 72, 189, 188, 43, 192, 62, 205, 246, 142, 190, 26, 142, 12, 62, 110, 189, 17, 62, 246, 36, 116, 190, 57, 243, 227, 190, 65, 252, 212, 61, 149, 33, 148, 190, 226, 108, 75, 62, 253, 71, 126, 62, 188, 59, 184, 190, 244, 237, 206, 190, 241, 161, 128, 62, 113, 188, 62, 62, 172, 165, 48, 62, 8, 56, 171, 191, 178, 103, 30, 62, 120, 59, 7, 61, 95, 34, 195, 189, 218, 17, 237, 62, 132, 89, 242, 190, 73, 1, 134, 189, 118, 2, 76, 62, 231, 177, 246, 190, 65, 105, 154, 189, 129, 31, 36, 60, 207, 94, 145, 62, 171, 65, 112, 189, 9, 134, 228, 61, 160, 157, 138, 190, 176, 218, 99, 61, 176, 236, 170, 60, 45, 115, 49, 62, 22, 230, 202, 61, 146, 166, 85, 60, 247, 80, 129, 62, 122, 16, 63, 187, 176, 13, 131, 189, 79, 211, 242, 61, 159, 201, 65, 190, 237, 212, 52, 189, 223, 12, 5, 62, 4, 193, 224, 188, 51, 59, 5, 191, 39, 202, 211, 59, 8, 240, 40, 62, 55, 38, 49, 62, 142, 197, 160, 191, 109, 60, 29, 188, 137, 138, 107, 62, 104, 15, 163, 189, 71, 108, 192, 62, 143, 188, 28, 189, 70, 12, 218, 189, 72, 238, 38, 187, 164, 144, 159, 191, 53, 148, 165, 188, 222, 85, 146, 62, 73, 4, 13, 63, 48, 1, 81, 189, 134, 244, 166, 190, 179, 175, 86, 190, 208, 227, 8, 188, 82, 27, 95, 61, 182, 40, 91, 189, 46, 106, 93, 62, 59, 195, 100, 190, 157, 82, 219, 189, 178, 208, 24, 189, 63, 66, 106, 190, 29, 0, 31, 190, 157, 180, 151, 190, 1, 183, 11, 189, 144, 213, 180, 62, 179, 226, 229, 189, 1, 138, 140, 191, 121, 152, 15, 57, 155, 191, 104, 59, 61, 69, 130, 189, 149, 3, 116, 191, 28, 52, 251, 189, 102, 131, 215, 61, 209, 77, 144, 190, 112, 219, 189, 190, 33, 250, 64, 189, 236, 63, 62, 191, 179, 20, 52, 190, 49, 181, 136, 190, 112, 124, 6, 61, 67, 51, 160, 61, 232, 176, 20, 63, 190, 216, 185, 190, 23, 95, 171, 62, 46, 145, 89, 191, 62, 144, 78, 61, 206, 78, 184, 62, 122, 244, 175, 62, 71, 188, 189, 62, 190, 180, 212, 190, 164, 188, 167, 62, 77, 121, 59, 62, 247, 189, 45, 190, 253, 190, 176, 190, 175, 230, 165, 190, 236, 58, 163, 62, 123, 24, 173, 62, 12, 43, 171, 62, 68, 120, 105, 190, 26, 115, 138, 190, 25, 155, 128, 62, 214, 22, 31, 62, 185, 154, 212, 190, 177, 0, 185, 190, 223, 198, 51, 62, 188, 122, 111, 189, 143, 95, 157, 60, 156, 41, 62, 191, 51, 224, 15, 190, 83, 131, 107, 190, 22, 221, 254, 61, 205, 72, 203, 62, 40, 197, 185, 62, 233, 151, 151, 62, 133, 144, 215, 190, 8, 128, 217, 187, 38, 118, 105, 191, 21, 123, 237, 189, 202, 177, 184, 190, 82, 213, 12, 63, 146, 127, 120, 190, 217, 179, 191, 62, 12, 56, 240, 60, 158, 158, 25, 190, 90, 189, 139, 191, 148, 208, 4, 189, 70, 92, 204, 189, 235, 53, 199, 61, 161, 164, 102, 62, 132, 28, 13, 190, 143, 235, 147, 190, 187, 185, 148, 189, 41, 155, 220, 59, 46, 147, 135, 62, 118, 7, 252, 188, 250, 14, 140, 190, 68, 100, 93, 62, 140, 25, 75, 191, 147, 196, 147, 62, 109, 202, 255, 190, 75, 205, 136, 191, 2, 15, 132, 191, 25, 29, 220, 62, 99, 241, 53, 62, 204, 43, 146, 62, 215, 26, 212, 190, 3, 177, 186, 188, 15, 2, 238, 189, 180, 27, 76, 190, 56, 207, 86, 188, 202, 82, 46, 62, 26, 43, 10, 188, 125, 231, 112, 188, 194, 39, 55, 61, 246, 187, 171, 189, 15, 21, 42, 62, 116, 56, 13, 190, 179, 64, 158, 61, 170, 156, 117, 189, 120, 176, 169, 61, 115, 213, 214, 189, 218, 233, 17, 63, 23, 12, 226, 190, 235, 21, 32, 190, 11, 4, 46, 60, 94, 55, 8, 62, 17, 122, 80, 61, 201, 119, 75, 190, 43, 215, 115, 189, 93, 245, 7, 62, 247, 91, 0, 62, 248, 193, 5, 190, 208, 153, 57, 189, 247, 152, 205, 61, 162, 222, 32, 62, 117, 229, 9, 62, 157, 191, 184, 61, 45, 79, 212, 62, 150, 4, 140, 60, 57, 221, 111, 61, 229, 121, 241, 61, 180, 90, 10, 62, 236, 185, 80, 62, 69, 16, 75, 61, 207, 20, 43, 190, 65, 74, 146, 62, 231, 89, 30, 189, 37, 3, 70, 190, 174, 130, 52, 61, 13, 162, 254, 59, 171, 2, 99, 190, 104, 175, 115, 61, 65, 106, 202, 190, 51, 87, 177, 191, 178, 207, 143, 189, 168, 153, 239, 61, 244, 129, 166, 189, 92, 230, 243, 61, 26, 117, 160, 188, 79, 120, 102, 61, 55, 236, 39, 190, 203, 174, 146, 61, 154, 124, 5, 190, 163, 5, 204, 187, 227, 32, 198, 59, 42, 152, 110, 60, 82, 111, 113, 189, 214, 166, 227, 189, 158, 243, 129, 61, 242, 72, 48, 190};
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
                alignas(float) const unsigned char memory[] = {102, 194, 19, 189, 113, 140, 228, 62, 4, 151, 244, 189, 145, 204, 140, 188, 2, 198, 91, 62, 164, 54, 26, 62, 116, 38, 124, 61, 90, 86, 27, 189, 123, 100, 149, 62, 87, 212, 15, 188, 85, 153, 225, 60, 230, 34, 16, 62, 3, 55, 176, 61, 180, 240, 58, 62, 53, 106, 152, 61, 171, 126, 242, 60, 49, 202, 139, 62, 29, 98, 185, 190, 58, 98, 137, 62, 249, 162, 76, 61, 228, 185, 2, 61, 186, 113, 191, 186, 235, 15, 195, 62, 199, 127, 235, 62, 120, 112, 133, 59, 229, 90, 129, 60, 225, 54, 131, 62, 142, 43, 113, 61, 136, 68, 137, 62, 225, 197, 53, 62, 138, 62, 90, 62, 29, 173, 194, 59};
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
                alignas(float) const unsigned char memory[] = {235, 212, 119, 61, 74, 249, 40, 63, 116, 33, 221, 62, 116, 9, 207, 190, 38, 219, 230, 190, 163, 42, 34, 191, 114, 44, 160, 62, 191, 45, 137, 191, 14, 125, 251, 190, 51, 74, 135, 63, 42, 178, 165, 190, 91, 84, 152, 190, 141, 19, 158, 191, 164, 176, 109, 191, 228, 47, 198, 188, 28, 235, 148, 190, 214, 245, 9, 61, 170, 81, 81, 63, 141, 12, 64, 63, 46, 63, 180, 62, 74, 121, 192, 190, 239, 0, 157, 190, 32, 130, 163, 63, 120, 73, 189, 189, 203, 126, 172, 190, 80, 197, 228, 62, 42, 13, 233, 62, 210, 241, 183, 62, 178, 242, 51, 63, 93, 13, 193, 191, 118, 47, 18, 60, 39, 10, 128, 61, 233, 134, 171, 189, 64, 245, 175, 189, 197, 108, 237, 189, 73, 59, 124, 190, 248, 66, 45, 190, 27, 60, 57, 60, 116, 209, 144, 62, 110, 131, 4, 61, 170, 166, 15, 191, 186, 123, 142, 62, 113, 106, 80, 59, 0, 251, 55, 62, 238, 48, 4, 60, 250, 207, 55, 189, 52, 185, 190, 190, 150, 229, 18, 62, 228, 223, 114, 190, 54, 185, 200, 62, 127, 43, 187, 62, 112, 9, 106, 188, 40, 115, 166, 190, 101, 8, 101, 189, 35, 181, 207, 61, 109, 235, 7, 191, 211, 176, 13, 62, 69, 236, 162, 189, 141, 88, 49, 190, 104, 240, 122, 190, 151, 129, 6, 189, 207, 46, 112, 61, 125, 194, 89, 190, 110, 96, 214, 189};
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
                alignas(float) const unsigned char memory[] = {249, 90, 216, 61, 216, 113, 255, 190};
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
    alignas(float) const unsigned char memory[] = {181, 32, 92, 190, 213, 195, 48, 190, 126, 132, 199, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {177, 222, 247, 63, 200, 169, 71, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0051/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}