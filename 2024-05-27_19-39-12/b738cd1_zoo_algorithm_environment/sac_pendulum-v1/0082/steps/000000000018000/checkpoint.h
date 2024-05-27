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
                alignas(float) const unsigned char memory[] = {137, 4, 36, 63, 132, 182, 47, 62, 183, 34, 49, 191, 4, 89, 60, 191, 41, 152, 140, 61, 7, 253, 204, 190, 222, 125, 132, 191, 77, 24, 120, 189, 200, 141, 130, 190, 208, 233, 124, 62, 181, 76, 205, 63, 76, 82, 145, 62, 159, 232, 249, 188, 126, 57, 86, 191, 219, 250, 134, 190, 182, 110, 139, 191, 204, 129, 19, 62, 124, 235, 194, 190, 147, 58, 2, 63, 234, 8, 209, 62, 0, 238, 193, 190, 34, 204, 39, 191, 13, 58, 208, 190, 210, 216, 90, 190, 232, 16, 73, 62, 213, 22, 178, 191, 3, 241, 155, 190, 196, 248, 183, 62, 107, 115, 130, 191, 163, 52, 101, 190, 113, 37, 112, 61, 246, 22, 13, 63, 248, 248, 235, 190, 68, 189, 141, 191, 31, 85, 167, 61, 243, 175, 133, 62, 163, 228, 190, 190, 43, 180, 135, 63, 90, 225, 48, 62, 118, 119, 8, 63, 28, 167, 142, 63, 36, 171, 139, 62, 45, 91, 170, 62, 213, 64, 28, 191, 18, 109, 3, 191, 223, 147, 121, 63, 144, 55, 97, 62, 150, 71, 30, 62, 70, 71, 65, 191, 172, 136, 100, 191, 234, 192, 26, 61, 43, 86, 91, 191, 211, 70, 242, 60, 94, 86, 194, 62, 233, 98, 238, 189, 139, 252, 14, 191, 72, 167, 188, 190, 27, 215, 181, 190, 96, 155, 81, 62, 95, 192, 8, 63, 23, 38, 243, 190, 154, 82, 153, 191, 217, 14, 104, 190, 26, 223, 7, 191, 43, 198, 219, 191, 173, 145, 201, 190, 245, 236, 35, 62, 209, 225, 123, 191, 162, 56, 56, 190, 132, 205, 200, 62, 35, 76, 204, 191, 150, 104, 175, 190, 208, 16, 204, 62, 221, 68, 143, 191, 176, 37, 164, 62, 86, 162, 219, 62, 64, 70, 147, 63, 180, 35, 166, 62, 252, 65, 219, 190, 80, 140, 146, 63, 95, 206, 50, 62, 132, 209, 197, 190, 199, 2, 204, 191, 4, 242, 185, 190, 147, 79, 83, 63, 233, 32, 138, 63, 151, 230, 231, 62, 15, 101, 255, 62, 45, 131, 47, 63, 9, 0, 167, 62, 128, 129, 231, 62, 118, 95, 128, 191, 164, 92, 86, 56, 114, 142, 211, 62, 127, 178, 171, 63, 163, 32, 158, 62};
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
                alignas(float) const unsigned char memory[] = {243, 19, 9, 191, 112, 63, 18, 189, 133, 139, 214, 62, 48, 33, 194, 62, 194, 159, 161, 62, 24, 9, 110, 62, 141, 24, 38, 190, 227, 55, 65, 190, 65, 4, 44, 63, 26, 89, 170, 61, 145, 133, 197, 61, 195, 146, 194, 189, 37, 76, 12, 63, 141, 216, 241, 61, 158, 127, 33, 191, 46, 144, 131, 190, 82, 85, 13, 63, 221, 196, 12, 63, 112, 189, 35, 63, 234, 203, 66, 191, 76, 29, 0, 63, 108, 191, 130, 189, 211, 28, 0, 63, 91, 193, 85, 60, 212, 94, 29, 190, 232, 96, 127, 61, 11, 230, 33, 63, 49, 242, 157, 61, 19, 179, 43, 191, 116, 71, 203, 190, 186, 113, 106, 62, 188, 38, 225, 188};
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
                alignas(float) const unsigned char memory[] = {181, 170, 77, 191, 175, 72, 233, 59, 175, 75, 105, 62, 7, 126, 68, 62, 209, 233, 99, 191, 151, 189, 156, 60, 98, 38, 3, 191, 133, 227, 31, 191, 74, 143, 59, 191, 106, 53, 63, 190, 38, 35, 21, 62, 172, 1, 19, 61, 254, 164, 77, 62, 193, 230, 234, 61, 149, 93, 114, 190, 92, 217, 133, 191, 12, 148, 109, 61, 148, 179, 78, 62, 4, 20, 123, 190, 21, 250, 19, 190, 207, 235, 124, 191, 55, 152, 59, 191, 236, 168, 13, 191, 110, 34, 191, 190, 223, 168, 60, 191, 15, 129, 254, 189, 183, 87, 92, 62, 234, 120, 21, 191, 93, 61, 103, 191, 129, 222, 36, 191, 152, 186, 63, 190, 245, 202, 21, 190, 106, 45, 235, 189, 77, 75, 31, 62, 180, 195, 86, 61, 150, 103, 112, 62, 216, 53, 146, 190, 83, 21, 2, 61, 146, 96, 42, 62, 6, 239, 16, 62, 139, 170, 18, 191, 146, 54, 144, 189, 107, 249, 43, 62, 123, 216, 129, 61, 250, 190, 155, 62, 141, 133, 164, 61, 34, 75, 207, 190, 45, 139, 58, 190, 151, 18, 204, 190, 161, 207, 174, 61, 188, 122, 43, 190, 97, 168, 36, 61, 78, 87, 207, 189, 203, 164, 191, 190, 102, 151, 141, 191, 167, 53, 32, 62, 240, 69, 12, 189, 28, 169, 186, 61, 50, 149, 124, 62, 133, 45, 186, 190, 198, 17, 2, 61, 247, 29, 73, 62, 130, 235, 100, 190, 194, 110, 114, 62, 100, 71, 206, 190, 112, 223, 13, 63, 73, 211, 152, 61, 149, 210, 224, 61, 215, 65, 233, 61, 240, 127, 75, 61, 216, 66, 151, 190, 6, 53, 93, 62, 238, 148, 89, 190, 255, 188, 194, 190, 24, 57, 106, 62, 187, 124, 179, 190, 192, 215, 58, 62, 39, 225, 63, 62, 198, 183, 205, 190, 68, 75, 14, 63, 177, 80, 137, 62, 43, 121, 177, 189, 243, 53, 150, 62, 121, 157, 6, 187, 69, 75, 84, 190, 37, 109, 212, 61, 150, 14, 34, 62, 197, 83, 15, 191, 246, 63, 139, 62, 37, 144, 62, 62, 75, 108, 80, 62, 224, 56, 55, 61, 154, 179, 132, 61, 229, 42, 255, 188, 248, 181, 125, 188, 61, 90, 223, 61, 140, 148, 243, 59, 25, 20, 30, 190, 0, 70, 235, 61, 241, 1, 214, 61, 45, 95, 32, 190, 89, 35, 187, 187, 248, 146, 111, 189, 187, 111, 22, 190, 150, 112, 241, 61, 247, 35, 64, 190, 112, 48, 8, 190, 211, 238, 156, 61, 45, 21, 14, 190, 97, 180, 234, 188, 194, 10, 192, 61, 47, 156, 13, 62, 93, 99, 177, 189, 35, 222, 33, 187, 173, 98, 242, 61, 159, 163, 128, 61, 151, 107, 153, 189, 213, 124, 0, 190, 181, 67, 69, 190, 22, 225, 31, 190, 56, 193, 225, 189, 14, 132, 154, 189, 192, 89, 215, 188, 228, 202, 72, 61, 218, 117, 115, 60, 14, 111, 25, 189, 13, 84, 61, 190, 125, 194, 124, 189, 241, 7, 69, 61, 125, 20, 192, 61, 14, 241, 232, 61, 57, 15, 51, 62, 204, 48, 254, 61, 212, 187, 19, 62, 13, 200, 131, 61, 230, 0, 124, 61, 60, 46, 158, 61, 29, 5, 110, 190, 58, 161, 68, 62, 11, 28, 176, 190, 24, 125, 223, 189, 254, 167, 156, 62, 59, 172, 197, 60, 160, 142, 185, 62, 36, 3, 104, 190, 193, 44, 63, 191, 234, 50, 154, 62, 199, 83, 203, 190, 192, 246, 13, 62, 216, 118, 145, 62, 246, 201, 151, 62, 73, 34, 247, 190, 9, 40, 173, 190, 85, 149, 22, 62, 83, 78, 121, 189, 105, 74, 111, 62, 201, 210, 2, 62, 163, 138, 29, 189, 158, 195, 62, 190, 138, 218, 83, 62, 56, 157, 87, 189, 181, 41, 156, 187, 230, 226, 254, 189, 167, 19, 112, 62, 245, 211, 135, 61, 73, 6, 58, 62, 14, 133, 62, 62, 190, 192, 2, 190, 4, 179, 225, 60, 122, 77, 170, 190, 162, 131, 68, 62, 93, 46, 228, 189, 54, 189, 159, 62, 144, 133, 24, 62, 56, 46, 160, 190, 166, 127, 221, 62, 250, 87, 46, 62, 4, 252, 73, 62, 188, 34, 169, 62, 168, 205, 92, 62, 242, 146, 250, 190, 111, 19, 180, 190, 216, 205, 161, 62, 56, 58, 123, 191, 51, 21, 65, 61, 99, 128, 152, 61, 47, 137, 132, 62, 231, 129, 15, 191, 246, 138, 146, 61, 177, 0, 178, 59, 214, 14, 104, 60, 207, 60, 54, 62, 154, 37, 200, 61, 52, 231, 202, 190, 192, 148, 224, 60, 163, 151, 0, 62, 189, 76, 0, 62, 104, 204, 243, 188, 26, 110, 239, 189, 246, 119, 172, 189, 52, 242, 35, 61, 235, 251, 46, 189, 203, 164, 47, 190, 217, 130, 35, 61, 4, 49, 81, 191, 243, 94, 145, 62, 69, 78, 231, 189, 197, 159, 160, 62, 240, 92, 192, 189, 28, 202, 93, 189, 45, 174, 142, 61, 100, 200, 223, 190, 135, 132, 110, 190, 170, 20, 129, 189, 180, 91, 8, 62, 241, 186, 25, 190, 51, 93, 238, 62, 21, 116, 60, 61, 151, 206, 3, 191, 50, 252, 97, 188, 104, 8, 39, 190, 99, 110, 247, 188, 145, 251, 146, 62, 165, 103, 128, 61, 27, 57, 217, 61, 196, 188, 194, 189, 134, 75, 164, 61, 244, 205, 199, 189, 152, 247, 165, 189, 13, 25, 250, 189, 81, 85, 9, 190, 66, 192, 55, 60, 240, 234, 233, 59, 39, 216, 37, 190, 184, 20, 160, 60, 243, 116, 209, 61, 104, 235, 76, 61, 0, 50, 116, 61, 38, 212, 134, 189, 75, 169, 102, 61, 247, 87, 190, 61, 188, 217, 2, 190, 138, 173, 159, 189, 56, 0, 170, 189, 55, 102, 81, 189, 50, 168, 189, 61, 222, 2, 188, 189, 118, 230, 180, 60, 3, 183, 151, 189, 204, 89, 208, 189, 168, 126, 63, 190, 91, 78, 112, 61, 223, 163, 19, 189, 176, 242, 4, 62, 228, 110, 63, 62, 21, 25, 235, 61, 122, 165, 180, 188, 152, 186, 146, 188, 177, 156, 73, 190, 206, 156, 20, 189, 44, 254, 41, 190, 128, 123, 204, 189, 211, 3, 236, 61, 13, 79, 55, 190, 88, 37, 73, 190, 73, 212, 53, 61, 3, 142, 184, 61, 85, 73, 146, 61, 74, 222, 13, 190, 252, 88, 254, 60, 213, 81, 206, 61, 54, 101, 17, 62, 79, 23, 114, 61, 43, 226, 152, 61, 8, 153, 78, 187, 16, 213, 227, 189, 246, 159, 148, 189, 46, 154, 132, 189, 140, 120, 195, 188, 230, 191, 234, 61, 188, 213, 142, 189, 145, 238, 57, 190, 56, 249, 165, 186, 76, 54, 217, 189, 45, 39, 66, 61, 191, 14, 15, 62, 98, 37, 243, 189, 38, 178, 43, 190, 67, 230, 96, 189, 196, 182, 128, 190, 104, 42, 105, 61, 249, 174, 188, 189, 217, 3, 54, 188, 25, 29, 9, 190, 46, 155, 38, 190, 214, 105, 10, 189, 195, 132, 228, 61, 225, 108, 149, 62, 109, 88, 168, 190, 179, 36, 83, 191, 34, 43, 14, 191, 62, 199, 110, 190, 203, 191, 42, 60, 149, 55, 5, 191, 77, 241, 22, 62, 128, 3, 137, 191, 167, 151, 21, 62, 213, 39, 124, 189, 1, 114, 167, 62, 77, 103, 188, 61, 164, 223, 204, 189, 241, 171, 33, 63, 158, 156, 141, 60, 42, 244, 135, 190, 247, 205, 217, 190, 2, 65, 248, 60, 126, 18, 132, 62, 74, 111, 63, 61, 246, 165, 123, 62, 33, 225, 132, 190, 135, 232, 31, 62, 188, 104, 19, 190, 231, 34, 230, 189, 141, 46, 230, 189, 120, 23, 192, 190, 228, 191, 86, 190, 251, 173, 84, 60, 149, 85, 5, 190, 172, 244, 151, 188, 134, 161, 150, 62, 88, 177, 57, 189, 87, 45, 165, 189, 241, 199, 5, 190, 100, 159, 194, 190, 131, 23, 7, 63, 72, 183, 19, 61, 144, 255, 84, 187, 166, 31, 108, 61, 127, 164, 89, 190, 231, 88, 31, 191, 218, 149, 226, 189, 181, 2, 115, 191, 174, 89, 133, 62, 219, 118, 94, 61, 221, 187, 163, 62, 254, 195, 8, 191, 81, 9, 236, 187, 193, 231, 42, 191, 84, 100, 146, 190, 34, 164, 23, 61, 0, 184, 219, 62, 91, 16, 232, 190, 49, 221, 158, 61, 144, 237, 176, 187, 130, 169, 157, 61, 98, 115, 78, 190, 139, 121, 48, 190, 50, 173, 95, 189, 32, 180, 163, 61, 104, 95, 243, 189, 122, 156, 247, 189, 122, 249, 204, 61, 121, 245, 160, 187, 35, 180, 45, 188, 68, 51, 7, 190, 225, 221, 133, 61, 87, 56, 141, 61, 141, 78, 159, 189, 205, 62, 30, 62, 116, 121, 10, 62, 15, 29, 250, 189, 168, 155, 113, 61, 110, 213, 233, 189, 15, 104, 10, 61, 149, 11, 220, 61, 118, 217, 134, 187, 120, 107, 15, 190, 173, 17, 214, 61, 47, 138, 254, 189, 80, 35, 183, 188, 127, 133, 72, 60, 100, 156, 63, 190, 181, 159, 158, 190, 156, 249, 153, 189, 108, 0, 43, 61, 83, 69, 133, 61, 163, 98, 168, 61, 242, 176, 161, 190, 116, 55, 146, 62, 155, 159, 247, 190, 209, 122, 57, 190, 237, 43, 217, 190, 46, 56, 0, 63, 216, 10, 188, 61, 32, 197, 165, 190, 187, 10, 3, 191, 167, 38, 176, 190, 5, 183, 1, 192, 184, 0, 193, 62, 19, 120, 128, 191, 171, 144, 245, 62, 194, 95, 186, 190, 222, 113, 172, 61, 72, 43, 14, 62, 188, 246, 46, 190, 215, 113, 143, 190, 119, 104, 148, 62, 212, 174, 241, 62, 166, 15, 46, 62, 81, 242, 80, 191, 7, 81, 212, 190, 116, 46, 139, 60, 106, 193, 72, 191, 54, 129, 87, 190, 15, 60, 8, 62, 55, 55, 51, 190, 110, 168, 139, 190, 83, 186, 77, 190, 47, 69, 134, 191, 11, 54, 138, 62, 207, 160, 3, 192, 81, 251, 103, 191, 64, 0, 168, 190, 191, 173, 156, 189, 83, 244, 145, 191, 199, 95, 216, 62, 132, 78, 125, 191, 94, 82, 130, 62, 22, 111, 133, 62, 20, 142, 162, 190, 184, 13, 201, 188, 243, 231, 202, 190, 12, 177, 4, 62, 212, 167, 61, 62, 5, 180, 174, 191, 151, 29, 214, 189, 38, 201, 204, 190, 242, 125, 183, 191, 92, 77, 3, 191, 123, 156, 28, 61, 212, 70, 198, 190, 212, 95, 33, 190, 215, 255, 247, 62, 228, 2, 165, 191, 207, 209, 95, 189, 229, 4, 160, 189, 151, 154, 83, 190, 236, 86, 119, 190, 233, 215, 141, 61, 61, 183, 24, 63, 137, 44, 209, 61, 238, 89, 69, 62, 167, 136, 217, 189, 11, 138, 207, 189, 165, 155, 61, 189, 84, 82, 37, 191, 23, 18, 122, 190, 114, 64, 74, 191, 199, 101, 225, 62, 151, 250, 55, 191, 246, 42, 27, 62, 195, 205, 199, 61, 195, 100, 194, 190, 158, 28, 40, 63, 46, 212, 141, 62, 57, 102, 65, 62, 152, 43, 75, 61, 235, 73, 50, 190, 151, 159, 108, 191, 148, 34, 229, 190, 156, 48, 41, 61, 51, 138, 195, 191, 178, 36, 192, 61, 126, 46, 97, 62, 106, 227, 147, 59, 66, 200, 60, 191, 18, 80, 14, 62, 158, 129, 102, 61, 249, 78, 215, 190, 58, 127, 153, 62, 21, 42, 63, 62, 246, 103, 141, 59, 238, 130, 202, 188, 247, 204, 159, 190, 208, 241, 30, 190, 112, 171, 25, 190, 245, 53, 211, 61, 140, 17, 97, 61, 9, 99, 159, 62, 59, 79, 40, 62, 192, 10, 186, 61, 150, 115, 33, 63, 47, 82, 153, 190, 60, 154, 18, 191, 211, 76, 84, 62, 222, 177, 180, 190, 73, 135, 60, 62, 54, 120, 13, 63, 231, 66, 253, 61, 147, 208, 247, 189, 55, 110, 50, 189, 110, 185, 170, 188, 201, 101, 102, 62, 39, 54, 58, 62, 143, 93, 2, 62, 184, 56, 2, 191, 158, 212, 40, 191, 37, 11, 159, 61, 215, 177, 152, 191, 113, 192, 183, 190, 34, 26, 76, 62, 240, 64, 50, 191, 244, 36, 12, 61, 21, 42, 12, 191, 5, 250, 38, 191, 62, 160, 55, 62, 191, 109, 155, 61, 145, 129, 46, 191, 98, 219, 6, 62, 187, 48, 178, 189, 255, 199, 115, 62, 96, 252, 66, 62, 196, 190, 33, 190, 253, 126, 172, 61, 65, 71, 68, 62, 118, 101, 118, 189, 108, 254, 14, 63, 89, 171, 52, 190, 53, 120, 142, 61, 127, 168, 40, 62, 79, 29, 152, 189, 129, 93, 226, 190, 35, 101, 122, 190, 230, 236, 121, 191, 165, 0, 30, 62, 222, 132, 77, 61, 207, 39, 128, 62, 198, 28, 92, 190, 144, 176, 69, 62, 165, 121, 25, 191, 107, 60, 67, 191, 132, 157, 232, 190, 83, 22, 186, 62, 97, 177, 182, 190, 86, 174, 98, 61, 53, 119, 153, 189, 101, 171, 96, 190, 126, 192, 251, 59, 194, 234, 39, 185, 229, 236, 66, 190, 63, 247, 8, 62, 195, 56, 114, 189, 44, 209, 63, 190, 168, 103, 108, 186, 92, 16, 255, 187, 254, 119, 178, 188, 131, 237, 41, 190, 130, 219, 156, 189, 94, 208, 195, 61, 58, 147, 246, 60, 97, 54, 136, 187, 97, 105, 61, 61, 198, 18, 198, 59, 142, 163, 165, 60, 5, 183, 222, 189, 179, 32, 138, 189, 155, 118, 195, 187, 69, 255, 8, 62, 9, 84, 141, 189, 8, 188, 183, 61, 130, 200, 131, 61, 162, 203, 178, 61, 74, 116, 216, 188, 164, 160, 20, 61, 239, 252, 11, 61, 140, 64, 82, 190, 60, 43, 150, 190, 42, 141, 221, 62, 144, 8, 174, 189, 202, 189, 136, 62, 183, 133, 94, 191, 207, 130, 3, 62, 222, 231, 11, 63, 201, 20, 132, 62, 146, 150, 172, 191, 22, 3, 147, 189, 93, 32, 146, 62, 224, 255, 164, 60, 218, 118, 49, 62, 197, 193, 205, 62, 56, 96, 115, 191, 217, 117, 36, 191, 88, 96, 233, 189, 115, 211, 82, 62, 121, 192, 162, 190, 88, 101, 86, 60, 21, 193, 188, 190, 146, 198, 179, 191, 236, 130, 138, 191, 213, 52, 28, 62, 165, 68, 113, 190, 29, 153, 149, 62, 138, 205, 34, 62, 23, 44, 196, 191, 232, 2, 92, 62, 240, 83, 238, 61, 129, 177, 152, 190, 219, 87, 31, 61, 103, 190, 250, 190, 34, 216, 210, 61, 238, 126, 176, 61, 92, 111, 60, 191, 42, 122, 245, 60, 55, 191, 153, 62, 117, 85, 210, 190, 148, 122, 52, 62, 252, 218, 189, 58, 125, 43, 55, 190, 211, 185, 40, 62, 250, 7, 174, 59, 194, 9, 151, 189, 166, 59, 85, 190, 193, 33, 178, 189, 195, 234, 140, 190, 236, 220, 138, 62, 8, 133, 51, 191, 42, 110, 144, 188, 101, 73, 175, 189, 201, 131, 132, 62, 125, 23, 171, 62, 103, 16, 14, 60, 160, 58, 28, 189, 136, 125, 158, 191, 28, 63, 26, 190, 208, 6, 93, 62, 213, 146, 26, 62, 185, 8, 60, 186, 135, 126, 243, 189, 12, 8, 103, 191, 123, 150, 57, 190, 160, 219, 3, 189, 222, 191, 62, 62, 135, 137, 175, 62, 93, 120, 26, 61, 55, 120, 89, 62, 29, 27, 180, 61, 123, 64, 147, 62, 246, 129, 69, 62, 69, 47, 183, 190, 177, 57, 14, 61, 208, 82, 188, 62, 81, 112, 28, 62, 153, 236, 89, 188, 47, 86, 241, 61, 180, 43, 191, 189, 251, 68, 151, 62, 221, 151, 185, 190, 89, 111, 32, 60, 139, 189, 47, 62, 242, 138, 20, 62, 48, 52, 22, 190, 94, 251, 101, 62, 17, 236, 180, 190, 227, 213, 97, 61, 89, 253, 134, 189, 189, 20, 157, 188, 214, 20, 196, 61, 63, 155, 243, 61, 59, 145, 93, 62, 244, 140, 81, 62, 86, 73, 112, 190, 31, 72, 151, 62, 65, 103, 133, 188, 75, 254, 152, 61, 90, 89, 240, 186, 109, 197, 41, 62, 18, 255, 143, 187, 215, 18, 121, 62, 137, 146, 106, 189, 91, 58, 153, 189, 230, 254, 58, 62, 13, 248, 162, 189, 183, 188, 123, 62, 55, 120, 179, 190, 23, 172, 96, 62, 143, 47, 199, 61, 29, 25, 216, 189, 22, 106, 118, 62, 9, 47, 182, 62, 18, 236, 118, 190, 58, 252, 199, 61, 199, 149, 49, 61, 163, 16, 241, 61, 33, 173, 90, 62, 88, 186, 154, 62, 57, 134, 134, 190, 153, 104, 27, 62, 108, 166, 148, 62, 183, 26, 254, 60, 33, 17, 9, 62, 22, 188, 235, 61, 242, 10, 138, 189, 18, 124, 192, 187, 68, 66, 83, 62, 243, 147, 181, 190, 48, 36, 39, 62, 191, 136, 211, 188, 138, 253, 134, 61, 163, 95, 176, 61, 170, 62, 201, 61, 39, 207, 135, 190, 143, 48, 172, 61, 170, 145, 13, 190, 131, 68, 236, 190, 187, 131, 75, 62, 92, 135, 145, 190, 210, 99, 82, 62, 127, 73, 50, 62, 15, 178, 255, 60, 38, 49, 85, 62, 160, 62, 155, 62, 67, 247, 154, 187, 52, 31, 211, 61, 238, 76, 55, 59, 2, 34, 67, 61, 106, 171, 46, 62, 103, 67, 128, 62, 139, 249, 145, 190, 202, 163, 42, 62, 224, 126, 12, 62, 67, 39, 119, 62, 43, 147, 42, 62, 0, 107, 172, 183, 46, 247, 204, 61, 63, 90, 171, 61, 187, 129, 40, 62, 16, 146, 242, 61, 217, 198, 19, 190, 117, 90, 222, 61, 77, 38, 97, 190, 106, 143, 135, 62, 123, 227, 125, 61, 184, 89, 97, 189, 148, 97, 254, 61, 108, 226, 91, 62, 177, 159, 114, 61, 182, 106, 208, 59, 32, 188, 61, 63, 105, 209, 20, 191, 33, 53, 193, 61, 88, 154, 244, 61, 68, 176, 113, 189, 35, 74, 29, 61, 42, 117, 192, 62, 116, 104, 118, 62, 102, 92, 73, 191, 181, 97, 69, 62, 174, 7, 241, 61, 15, 79, 244, 61, 16, 14, 110, 188, 152, 58, 169, 62, 173, 168, 36, 61, 137, 243, 198, 190, 118, 174, 142, 61, 84, 90, 96, 191, 40, 123, 84, 190, 39, 191, 108, 62, 68, 197, 90, 190, 194, 163, 245, 190, 14, 192, 218, 61, 95, 211, 114, 62, 218, 72, 100, 62, 108, 86, 187, 189, 125, 7, 154, 62, 85, 215, 225, 189, 40, 64, 68, 62, 245, 34, 149, 62, 141, 139, 166, 190, 166, 191, 87, 62, 93, 221, 23, 190, 91, 111, 227, 62, 113, 42, 14, 63, 64, 144, 163, 190, 159, 58, 225, 62, 96, 97, 247, 62, 100, 150, 135, 190, 59, 219, 30, 190, 250, 7, 49, 190, 13, 46, 193, 61, 27, 239, 148, 189, 120, 163, 48, 189, 93, 0, 154, 190, 61, 14, 131, 191, 156, 188, 43, 61, 94, 63, 213, 62, 62, 36, 167, 61, 7, 1, 73, 61, 254, 225, 215, 189, 140, 69, 23, 191, 93, 248, 206, 187, 86, 224, 85, 61, 114, 15, 232, 189, 254, 79, 14, 62, 123, 94, 92, 188, 186, 66, 13, 190, 54, 9, 143, 61, 133, 122, 4, 62, 93, 177, 107, 61, 139, 213, 210, 189, 68, 42, 246, 189, 152, 81, 184, 189, 154, 191, 96, 61, 249, 95, 73, 59, 143, 211, 202, 60, 84, 111, 153, 188, 73, 98, 247, 189, 39, 10, 134, 189, 80, 37, 246, 188, 150, 214, 2, 190, 222, 236, 175, 61, 193, 166, 61, 190, 116, 164, 120, 188, 224, 229, 167, 189, 17, 250, 186, 61, 4, 53, 56, 61, 38, 128, 58, 189, 159, 17, 49, 190, 178, 120, 62, 189, 145, 11, 8, 190, 209, 131, 249, 61, 76, 100, 1, 190, 28, 239, 156, 61, 32, 205, 163, 61, 158, 238, 249, 61, 144, 241, 136, 60, 84, 192, 37, 60, 244, 118, 87, 189, 169, 90, 183, 61, 40, 240, 49, 189, 102, 88, 79, 60, 24, 38, 130, 189, 141, 161, 158, 61, 0, 54, 32, 190, 45, 24, 93, 190, 203, 144, 0, 190, 207, 214, 2, 190, 216, 23, 85, 189, 51, 27, 203, 188, 155, 211, 235, 188, 93, 36, 44, 61, 200, 150, 248, 189, 135, 209, 19, 60, 177, 221, 189, 189, 156, 184, 246, 61, 215, 145, 226, 60, 98, 18, 173, 188, 145, 90, 178, 61, 14, 117, 167, 185, 122, 122, 125, 189, 99, 169, 195, 189, 234, 19, 10, 61, 131, 207, 51, 190, 223, 133, 66, 190, 26, 253, 226, 189, 192, 77, 140, 62, 6, 44, 55, 190, 53, 146, 172, 189, 37, 215, 141, 61, 13, 242, 193, 61, 27, 214, 180, 61, 169, 222, 162, 62, 70, 162, 127, 62, 243, 124, 126, 62, 139, 119, 131, 61, 70, 181, 23, 190, 33, 173, 38, 63, 203, 111, 140, 190, 96, 88, 45, 190, 216, 208, 202, 61, 53, 202, 131, 190, 225, 66, 46, 62, 101, 51, 80, 61, 56, 92, 124, 60, 25, 166, 0, 191, 35, 88, 54, 61, 178, 27, 226, 190, 117, 231, 51, 61, 235, 53, 34, 61, 148, 242, 210, 62, 161, 86, 58, 190, 123, 75, 131, 190, 155, 106, 131, 190, 85, 149, 112, 191, 25, 213, 154, 190, 159, 78, 142, 62, 85, 76, 113, 190, 97, 128, 35, 191, 122, 24, 246, 61, 10, 113, 50, 62, 81, 158, 216, 189, 227, 48, 36, 62, 240, 186, 67, 61, 237, 225, 155, 190, 52, 49, 4, 63, 206, 44, 81, 61, 178, 253, 159, 190, 83, 174, 49, 190, 40, 169, 188, 60, 62, 235, 192, 62, 128, 49, 81, 62, 34, 101, 32, 191, 82, 219, 50, 62, 188, 126, 136, 189, 58, 71, 145, 189, 97, 141, 114, 190, 205, 165, 1, 188, 236, 229, 45, 63, 29, 198, 115, 62, 0, 8, 217, 190, 254, 121, 73, 190, 149, 246, 109, 190, 150, 129, 18, 62, 52, 149, 98, 62, 246, 185, 243, 62, 239, 237, 187, 62, 201, 211, 28, 62, 137, 188, 51, 190, 179, 242, 56, 62, 97, 117, 151, 62, 220, 114, 122, 190, 96, 130, 41, 61, 254, 40, 240, 189, 163, 17, 145, 187, 137, 67, 99, 190, 93, 124, 194, 62, 229, 118, 244, 61, 6, 50, 115, 62, 251, 85, 170, 62, 189, 45, 97, 190, 215, 177, 170, 62, 74, 84, 64, 190, 215, 213, 157, 190, 28, 37, 190, 62, 59, 10, 145, 61, 41, 180, 63, 62, 203, 26, 150, 62, 197, 193, 130, 62, 6, 3, 87, 190, 172, 248, 88, 61, 17, 248, 19, 191, 117, 128, 188, 62, 121, 176, 204, 60, 169, 193, 77, 188, 79, 141, 26, 190, 188, 228, 77, 190, 197, 82, 179, 190, 208, 15, 75, 191, 206, 190, 241, 190, 235, 95, 176, 62, 222, 179, 227, 190, 90, 102, 17, 62, 235, 165, 176, 190, 218, 167, 68, 62, 40, 181, 103, 60, 86, 174, 93, 61, 31, 14, 249, 61, 121, 202, 184, 62, 175, 93, 22, 189, 172, 248, 9, 190, 134, 211, 141, 189, 19, 204, 134, 190, 153, 192, 209, 61, 36, 232, 255, 60, 37, 10, 149, 61, 122, 178, 37, 62, 223, 104, 49, 190, 94, 0, 132, 188, 251, 129, 6, 62, 185, 223, 205, 60, 238, 168, 197, 190, 26, 19, 121, 190, 154, 13, 220, 190, 88, 122, 17, 189, 18, 208, 245, 190, 87, 11, 228, 189, 93, 7, 192, 61, 137, 181, 150, 61, 198, 216, 225, 190, 240, 124, 58, 62, 88, 62, 43, 190, 42, 183, 101, 62, 192, 248, 221, 189, 105, 152, 99, 61, 51, 58, 108, 61, 11, 82, 104, 189, 167, 68, 1, 190, 195, 20, 89, 190, 232, 129, 32, 190, 255, 37, 142, 59, 184, 18, 234, 188, 130, 131, 204, 189, 255, 70, 80, 190, 114, 132, 220, 61, 130, 57, 244, 61, 156, 98, 139, 189, 139, 120, 13, 190, 202, 26, 33, 190, 138, 230, 15, 62, 51, 44, 57, 189, 108, 42, 154, 189, 87, 186, 187, 61, 113, 84, 217, 61, 202, 146, 84, 190, 236, 236, 209, 188, 27, 218, 136, 61, 15, 125, 147, 61, 239, 161, 20, 62, 89, 2, 19, 190, 24, 207, 130, 188, 218, 81, 90, 189, 54, 250, 47, 190, 125, 21, 30, 190, 97, 77, 104, 61, 47, 100, 100, 188};
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
                alignas(float) const unsigned char memory[] = {26, 135, 232, 189, 190, 110, 22, 188, 164, 14, 108, 62, 221, 115, 98, 60, 69, 183, 164, 62, 4, 104, 27, 62, 220, 36, 87, 62, 227, 77, 116, 189, 161, 245, 29, 190, 202, 94, 161, 189, 196, 144, 44, 62, 235, 179, 32, 190, 240, 78, 50, 62, 53, 133, 253, 60, 131, 89, 107, 61, 174, 141, 133, 60, 5, 165, 85, 61, 224, 135, 70, 190, 50, 27, 148, 61, 140, 10, 63, 190, 9, 116, 33, 190, 30, 28, 179, 62, 128, 36, 89, 62, 11, 167, 70, 61, 157, 240, 69, 62, 137, 232, 44, 189, 121, 151, 22, 190, 241, 134, 253, 61, 148, 129, 167, 189, 73, 203, 124, 62, 147, 77, 119, 62, 120, 207, 112, 190};
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
                alignas(float) const unsigned char memory[] = {91, 190, 146, 191, 197, 82, 248, 62, 131, 151, 202, 190, 137, 148, 9, 62, 76, 134, 29, 190, 185, 69, 120, 190, 90, 138, 119, 61, 125, 170, 141, 60, 63, 164, 253, 61, 22, 138, 249, 190, 119, 81, 36, 63, 121, 210, 7, 190, 248, 93, 145, 191, 93, 60, 134, 63, 68, 29, 61, 191, 223, 163, 207, 62, 221, 98, 181, 62, 70, 72, 49, 188, 208, 163, 24, 63, 141, 250, 49, 191, 225, 21, 60, 62, 30, 183, 12, 190, 110, 41, 214, 189, 92, 91, 78, 62, 122, 89, 1, 191, 117, 239, 122, 189, 0, 67, 43, 61, 160, 74, 149, 62, 183, 158, 45, 63, 51, 198, 36, 63, 3, 121, 16, 189, 95, 10, 124, 189, 79, 65, 234, 187, 186, 92, 50, 62, 78, 11, 114, 189, 87, 35, 3, 62, 89, 94, 168, 190, 222, 217, 158, 190, 21, 223, 25, 191, 224, 179, 191, 188, 10, 227, 241, 61, 193, 152, 129, 188, 124, 213, 144, 62, 133, 54, 151, 58, 107, 1, 77, 62, 44, 110, 144, 62, 52, 244, 142, 62, 161, 114, 175, 62, 50, 172, 129, 189, 9, 193, 193, 59, 104, 254, 35, 189, 238, 104, 64, 62, 160, 86, 106, 62, 92, 142, 74, 190, 153, 141, 164, 189, 94, 255, 235, 189, 46, 3, 211, 60, 45, 162, 46, 190, 217, 201, 140, 188, 46, 58, 64, 61, 79, 214, 122, 189, 246, 150, 178, 190, 53, 16, 83, 190, 29, 38, 205, 60};
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
                alignas(float) const unsigned char memory[] = {117, 212, 46, 189, 8, 189, 113, 190};
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
    alignas(float) const unsigned char memory[] = {150, 120, 184, 63, 218, 135, 9, 64, 156, 31, 78, 189};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {212, 93, 87, 192, 35, 120, 238, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0082/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}