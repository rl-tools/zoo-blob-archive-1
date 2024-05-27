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
                alignas(float) const unsigned char memory[] = {126, 138, 221, 62, 147, 250, 200, 190, 65, 116, 2, 63, 174, 158, 7, 191, 255, 90, 70, 189, 173, 69, 33, 190, 186, 45, 192, 190, 172, 136, 186, 63, 137, 216, 203, 62, 214, 87, 70, 62, 44, 40, 80, 63, 182, 107, 254, 62, 148, 228, 75, 191, 149, 148, 75, 191, 212, 254, 59, 191, 202, 164, 38, 62, 153, 144, 86, 63, 209, 46, 185, 62, 236, 180, 55, 63, 213, 149, 176, 62, 125, 123, 105, 62, 55, 46, 15, 190, 81, 164, 121, 62, 177, 213, 186, 190, 115, 64, 24, 63, 234, 46, 35, 191, 250, 135, 156, 62, 158, 24, 155, 190, 80, 206, 35, 189, 114, 242, 254, 190, 183, 177, 42, 62, 127, 218, 55, 62, 61, 236, 3, 191, 146, 172, 10, 190, 155, 255, 151, 191, 122, 199, 137, 189, 231, 213, 82, 63, 182, 112, 207, 190, 183, 24, 153, 190, 80, 226, 77, 190, 163, 82, 41, 190, 168, 8, 128, 62, 239, 16, 45, 190, 218, 243, 20, 63, 109, 60, 163, 62, 38, 56, 19, 63, 66, 75, 82, 63, 137, 209, 11, 62, 205, 185, 32, 190, 91, 40, 88, 63, 247, 248, 67, 190, 162, 83, 246, 190, 179, 94, 30, 63, 108, 104, 9, 63, 112, 69, 89, 63, 102, 17, 36, 63, 159, 221, 191, 62, 221, 93, 137, 62, 123, 131, 160, 189, 95, 169, 2, 61, 61, 61, 91, 63, 135, 208, 72, 191, 245, 239, 47, 190, 83, 133, 57, 190, 129, 126, 76, 191, 206, 250, 252, 62, 151, 191, 238, 190, 38, 218, 142, 186, 76, 89, 179, 61, 220, 197, 222, 62, 131, 171, 115, 63, 43, 202, 128, 62, 102, 234, 10, 63, 173, 128, 135, 191, 102, 254, 189, 190, 199, 126, 223, 190, 78, 193, 188, 60, 166, 214, 27, 63, 22, 138, 108, 60, 38, 241, 126, 191, 17, 227, 13, 62, 19, 151, 63, 62, 198, 195, 29, 191, 242, 6, 244, 190, 10, 247, 229, 189, 147, 144, 159, 190, 96, 196, 110, 62, 10, 197, 166, 190, 33, 138, 160, 63, 107, 107, 208, 62, 210, 234, 30, 191, 80, 121, 191, 191, 48, 163, 60, 190, 62, 125, 141, 62, 246, 104, 36, 191, 232, 220, 134, 62};
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
                alignas(float) const unsigned char memory[] = {244, 45, 190, 190, 30, 194, 115, 63, 25, 157, 80, 190, 88, 104, 243, 60, 69, 133, 15, 191, 196, 91, 207, 190, 169, 23, 243, 62, 120, 232, 153, 189, 82, 36, 163, 62, 147, 81, 14, 189, 187, 156, 146, 62, 133, 229, 171, 61, 142, 81, 46, 191, 57, 218, 181, 190, 4, 171, 115, 190, 117, 178, 112, 62, 18, 13, 220, 62, 209, 198, 191, 190, 114, 132, 96, 191, 79, 34, 244, 190, 75, 101, 27, 62, 84, 55, 208, 190, 179, 80, 31, 63, 30, 133, 172, 189, 240, 170, 88, 190, 10, 69, 21, 191, 170, 193, 146, 190, 79, 75, 162, 190, 92, 168, 183, 190, 59, 200, 68, 190, 36, 0, 111, 190, 100, 139, 91, 61};
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
                alignas(float) const unsigned char memory[] = {250, 209, 243, 61, 18, 23, 20, 190, 54, 118, 83, 61, 51, 8, 106, 190, 249, 18, 170, 190, 67, 242, 14, 62, 141, 250, 236, 61, 183, 152, 6, 190, 126, 250, 192, 188, 64, 106, 215, 189, 100, 130, 19, 189, 147, 152, 20, 62, 42, 217, 240, 60, 108, 61, 34, 190, 51, 70, 243, 189, 126, 186, 201, 189, 185, 176, 246, 190, 142, 153, 63, 190, 202, 212, 248, 61, 101, 196, 175, 61, 137, 128, 19, 62, 242, 236, 22, 62, 186, 130, 134, 189, 233, 65, 219, 189, 85, 135, 202, 62, 48, 255, 2, 61, 93, 163, 189, 61, 58, 165, 13, 62, 193, 238, 32, 61, 134, 234, 196, 189, 70, 158, 144, 190, 74, 15, 21, 62, 18, 216, 21, 190, 101, 129, 249, 189, 35, 54, 71, 190, 245, 98, 123, 190, 6, 76, 81, 191, 83, 45, 145, 190, 103, 241, 196, 190, 53, 154, 55, 190, 239, 197, 215, 60, 53, 88, 47, 190, 36, 49, 156, 190, 130, 197, 174, 61, 55, 17, 224, 189, 246, 149, 5, 62, 51, 104, 150, 189, 20, 94, 158, 190, 250, 94, 221, 190, 76, 18, 227, 61, 121, 46, 123, 190, 251, 111, 160, 61, 146, 50, 234, 189, 20, 184, 202, 61, 85, 35, 96, 61, 232, 83, 172, 190, 167, 1, 73, 60, 253, 196, 223, 61, 156, 224, 18, 62, 55, 176, 214, 61, 16, 242, 100, 190, 21, 49, 162, 189, 50, 136, 238, 60, 172, 130, 140, 189, 24, 84, 36, 62, 31, 104, 39, 190, 97, 47, 41, 59, 79, 113, 138, 60, 17, 78, 90, 189, 172, 103, 120, 189, 73, 164, 187, 187, 136, 12, 212, 61, 200, 67, 180, 189, 153, 26, 181, 61, 200, 140, 85, 189, 109, 19, 89, 190, 167, 13, 147, 61, 219, 191, 127, 56, 127, 124, 206, 189, 102, 23, 221, 60, 211, 240, 105, 190, 11, 47, 47, 61, 210, 130, 36, 62, 13, 80, 26, 190, 16, 227, 179, 61, 167, 200, 18, 190, 234, 246, 243, 188, 194, 54, 14, 190, 9, 82, 166, 189, 177, 59, 69, 189, 107, 171, 240, 61, 201, 170, 27, 62, 183, 59, 88, 62, 38, 108, 118, 61, 239, 195, 162, 189, 175, 120, 54, 190, 248, 109, 154, 62, 211, 36, 137, 62, 52, 170, 244, 189, 151, 0, 44, 190, 253, 229, 185, 189, 192, 1, 241, 190, 18, 96, 224, 62, 15, 190, 83, 62, 45, 1, 85, 62, 84, 67, 134, 62, 92, 209, 178, 62, 136, 30, 118, 189, 42, 118, 85, 60, 117, 159, 188, 190, 163, 103, 194, 190, 140, 236, 120, 190, 65, 162, 164, 62, 236, 107, 190, 190, 196, 11, 183, 190, 86, 69, 137, 189, 255, 204, 34, 62, 200, 160, 184, 61, 146, 104, 93, 60, 162, 234, 14, 191, 172, 208, 31, 189, 83, 151, 93, 60, 54, 192, 123, 62, 208, 151, 18, 190, 52, 25, 157, 61, 76, 214, 57, 190, 53, 144, 5, 191, 121, 41, 93, 62, 144, 25, 27, 190, 127, 138, 112, 189, 109, 106, 81, 189, 71, 5, 45, 188, 100, 46, 142, 190, 148, 191, 61, 190, 243, 42, 223, 188, 210, 252, 93, 190, 95, 38, 121, 62, 112, 9, 179, 190, 136, 54, 225, 188, 25, 107, 60, 190, 95, 45, 153, 190, 115, 72, 4, 188, 250, 26, 251, 189, 27, 221, 184, 61, 89, 111, 201, 61, 225, 237, 189, 61, 141, 29, 141, 190, 58, 200, 21, 62, 169, 169, 191, 62, 105, 221, 6, 62, 150, 180, 67, 62, 110, 100, 82, 189, 73, 135, 129, 190, 158, 81, 99, 189, 214, 168, 61, 62, 87, 23, 226, 190, 75, 115, 233, 61, 63, 188, 20, 61, 178, 43, 195, 190, 196, 137, 0, 62, 18, 159, 214, 189, 65, 192, 62, 61, 99, 150, 131, 61, 40, 33, 142, 189, 204, 130, 163, 190, 237, 67, 198, 61, 254, 225, 231, 189, 204, 53, 108, 61, 136, 179, 33, 190, 35, 179, 11, 191, 135, 189, 151, 189, 64, 255, 162, 62, 144, 126, 71, 62, 123, 7, 240, 61, 8, 158, 140, 189, 70, 67, 129, 189, 245, 109, 121, 190, 50, 233, 96, 62, 138, 213, 162, 190, 161, 54, 250, 61, 88, 5, 19, 63, 190, 200, 65, 190, 200, 55, 215, 189, 113, 108, 33, 190, 173, 186, 95, 62, 54, 150, 92, 62, 102, 210, 145, 61, 136, 201, 248, 61, 37, 141, 169, 190, 204, 198, 32, 62, 207, 54, 184, 189, 79, 152, 144, 62, 231, 7, 11, 62, 254, 66, 147, 61, 235, 233, 39, 190, 241, 202, 50, 62, 26, 163, 44, 61, 91, 19, 221, 61, 72, 67, 71, 62, 185, 247, 147, 190, 59, 192, 30, 62, 184, 50, 3, 61, 234, 36, 18, 61, 23, 234, 155, 190, 117, 0, 169, 190, 161, 252, 147, 189, 122, 219, 211, 189, 199, 48, 60, 62, 251, 15, 170, 62, 46, 21, 168, 61, 103, 237, 13, 190, 95, 183, 15, 62, 142, 161, 122, 60, 89, 60, 128, 62, 45, 206, 69, 62, 113, 87, 166, 61, 5, 226, 166, 190, 185, 99, 104, 190, 141, 103, 66, 190, 19, 64, 253, 189, 63, 252, 75, 61, 138, 31, 126, 190, 63, 253, 193, 190, 243, 225, 65, 190, 225, 139, 188, 61, 239, 61, 208, 190, 96, 63, 182, 190, 81, 132, 239, 61, 186, 197, 236, 189, 153, 254, 232, 61, 139, 62, 147, 62, 8, 83, 27, 190, 167, 236, 6, 62, 19, 82, 83, 190, 22, 147, 92, 189, 208, 186, 198, 189, 43, 60, 32, 189, 200, 201, 128, 190, 24, 131, 139, 189, 95, 112, 220, 60, 191, 132, 6, 191, 71, 84, 5, 190, 218, 2, 162, 62, 134, 40, 179, 189, 214, 161, 83, 62, 185, 112, 218, 188, 127, 150, 64, 190, 26, 194, 162, 60, 70, 73, 195, 62, 166, 163, 159, 190, 90, 136, 15, 61, 156, 35, 168, 188, 83, 128, 183, 189, 181, 200, 169, 189, 193, 82, 0, 62, 133, 131, 131, 59, 199, 196, 56, 190, 227, 61, 74, 62, 249, 180, 192, 61, 234, 164, 144, 190, 166, 24, 90, 190, 21, 169, 44, 189, 199, 164, 124, 189, 58, 231, 16, 62, 38, 50, 19, 62, 84, 55, 210, 189, 112, 48, 191, 61, 4, 7, 12, 190, 52, 9, 105, 189, 108, 16, 48, 189, 85, 248, 8, 190, 70, 107, 41, 190, 105, 159, 146, 61, 110, 232, 156, 189, 157, 12, 97, 190, 233, 124, 231, 61, 83, 162, 155, 62, 55, 54, 67, 190, 116, 130, 66, 62, 219, 143, 144, 190, 88, 51, 165, 60, 76, 243, 129, 62, 91, 225, 114, 62, 106, 71, 217, 61, 70, 152, 59, 190, 247, 174, 216, 61, 123, 206, 159, 61, 147, 89, 186, 62, 50, 17, 178, 189, 32, 117, 242, 58, 225, 141, 16, 189, 76, 31, 63, 61, 101, 147, 204, 189, 123, 198, 28, 62, 203, 243, 236, 61, 157, 146, 219, 61, 50, 108, 16, 190, 209, 204, 51, 190, 68, 71, 248, 61, 255, 208, 172, 188, 134, 107, 108, 61, 17, 188, 136, 189, 218, 65, 28, 61, 253, 3, 35, 190, 239, 121, 224, 189, 48, 153, 49, 190, 253, 51, 165, 185, 84, 205, 239, 61, 210, 76, 17, 61, 105, 117, 209, 61, 42, 177, 191, 189, 248, 172, 233, 189, 69, 175, 11, 190, 35, 85, 0, 62, 178, 41, 173, 189, 228, 67, 137, 189, 174, 238, 130, 189, 205, 246, 85, 60, 64, 199, 36, 61, 226, 158, 253, 61, 181, 66, 233, 189, 131, 58, 57, 190, 68, 228, 6, 189, 6, 209, 85, 188, 11, 104, 3, 189, 160, 252, 134, 189, 116, 246, 127, 59, 188, 121, 36, 62, 181, 220, 155, 61, 145, 56, 202, 60, 113, 28, 254, 189, 22, 141, 128, 188, 73, 224, 213, 189, 80, 69, 140, 190, 135, 37, 105, 60, 30, 198, 190, 61, 65, 134, 202, 189, 10, 228, 244, 189, 149, 21, 237, 189, 72, 213, 104, 61, 9, 250, 212, 189, 223, 46, 173, 61, 145, 63, 150, 189, 66, 142, 147, 189, 220, 53, 24, 190, 222, 162, 144, 189, 20, 121, 207, 189, 145, 9, 49, 190, 159, 192, 132, 61, 57, 48, 156, 189, 173, 191, 85, 61, 61, 50, 217, 189, 53, 57, 73, 190, 251, 198, 102, 190, 52, 34, 49, 189, 255, 27, 27, 189, 174, 22, 112, 190, 167, 203, 203, 189, 66, 142, 39, 189, 64, 163, 23, 62, 79, 188, 168, 60, 75, 91, 153, 189, 65, 119, 244, 189, 236, 150, 59, 189, 149, 161, 129, 62, 161, 0, 33, 62, 254, 152, 19, 190, 50, 114, 23, 190, 187, 221, 4, 190, 150, 164, 121, 62, 252, 233, 12, 62, 82, 146, 195, 189, 32, 139, 228, 61, 93, 150, 165, 61, 67, 129, 160, 61, 3, 6, 32, 190, 92, 27, 174, 62, 137, 136, 159, 62, 34, 192, 117, 62, 136, 154, 77, 62, 70, 10, 16, 62, 73, 145, 12, 62, 208, 68, 1, 190, 52, 128, 211, 62, 28, 159, 95, 61, 120, 48, 131, 190, 160, 202, 29, 62, 196, 44, 119, 61, 144, 1, 51, 190, 248, 232, 27, 190, 154, 21, 44, 61, 89, 69, 209, 188, 204, 132, 21, 190, 94, 118, 164, 189, 222, 114, 26, 61, 214, 55, 44, 190, 50, 67, 171, 61, 158, 7, 15, 62, 73, 45, 36, 189, 169, 255, 183, 61, 112, 110, 106, 189, 1, 13, 51, 61, 129, 56, 187, 186, 235, 30, 77, 189, 111, 213, 173, 61, 151, 33, 147, 61, 35, 242, 228, 60, 71, 196, 30, 190, 104, 209, 154, 189, 49, 211, 141, 60, 120, 168, 98, 186, 205, 78, 140, 61, 5, 168, 42, 190, 207, 36, 25, 190, 153, 167, 232, 188, 57, 90, 19, 190, 235, 164, 149, 190, 237, 192, 244, 189, 92, 231, 196, 61, 142, 91, 82, 189, 247, 253, 57, 191, 46, 35, 121, 187, 192, 51, 149, 188, 192, 193, 76, 190, 62, 33, 188, 189, 18, 100, 5, 191, 81, 35, 0, 191, 100, 179, 33, 190, 18, 48, 122, 189, 95, 144, 132, 60, 50, 219, 31, 62, 234, 93, 5, 62, 86, 7, 131, 190, 111, 106, 155, 62, 86, 228, 21, 189, 176, 139, 29, 62, 186, 47, 165, 189, 148, 205, 171, 190, 39, 34, 93, 62, 106, 191, 1, 62, 8, 45, 89, 190, 95, 6, 122, 62, 67, 40, 187, 61, 104, 44, 122, 190, 8, 223, 146, 61, 111, 190, 52, 60, 7, 190, 97, 190, 119, 80, 54, 61, 171, 80, 194, 189, 69, 162, 39, 61, 211, 226, 92, 61, 134, 21, 135, 190, 156, 216, 245, 190, 79, 109, 239, 189, 1, 2, 211, 61, 134, 127, 106, 62, 125, 246, 16, 61, 160, 160, 126, 190, 128, 252, 169, 188, 101, 212, 39, 189, 105, 149, 228, 62, 221, 19, 127, 62, 20, 180, 1, 190, 218, 234, 13, 190, 155, 208, 189, 189, 14, 129, 202, 189, 205, 228, 250, 190, 25, 180, 25, 59, 157, 246, 228, 62, 23, 174, 55, 189, 155, 214, 32, 62, 93, 27, 203, 190, 66, 91, 231, 62, 145, 139, 134, 189, 22, 72, 179, 62, 65, 99, 150, 62, 148, 57, 57, 190, 247, 176, 6, 62, 170, 5, 89, 189, 176, 245, 139, 62, 2, 188, 179, 62, 112, 237, 8, 62, 248, 53, 22, 191, 124, 171, 179, 62, 108, 15, 3, 61, 116, 18, 36, 62, 154, 141, 112, 62, 174, 250, 224, 190, 126, 24, 232, 189, 94, 2, 82, 62, 16, 48, 140, 62, 63, 178, 181, 189, 83, 199, 60, 191, 30, 236, 171, 61, 190, 204, 100, 62, 41, 38, 24, 62, 251, 187, 7, 63, 135, 123, 145, 190, 229, 229, 25, 190, 104, 212, 40, 62, 19, 171, 180, 190, 137, 21, 170, 62, 180, 58, 47, 61, 24, 151, 142, 62, 58, 230, 69, 191, 249, 38, 74, 191, 29, 253, 66, 191, 38, 60, 224, 190, 117, 92, 192, 62, 189, 129, 8, 191, 139, 183, 225, 187, 35, 122, 232, 190, 38, 253, 228, 60, 76, 84, 169, 191, 125, 130, 168, 188, 230, 247, 185, 61, 117, 179, 248, 189, 26, 131, 48, 190, 14, 197, 161, 61, 122, 209, 100, 189, 120, 178, 57, 62, 78, 109, 19, 190, 61, 201, 32, 190, 250, 174, 241, 188, 20, 207, 20, 190, 157, 20, 111, 61, 129, 0, 217, 189, 76, 59, 139, 61, 189, 142, 38, 62, 230, 224, 156, 189, 199, 208, 151, 61, 180, 131, 127, 189, 35, 101, 55, 190, 227, 89, 234, 61, 47, 241, 144, 190, 120, 189, 250, 61, 114, 181, 156, 188, 54, 136, 255, 61, 75, 228, 18, 62, 25, 69, 160, 60, 98, 19, 81, 188, 247, 15, 199, 60, 49, 151, 151, 191, 6, 235, 78, 62, 150, 232, 73, 58, 229, 183, 130, 191, 117, 48, 254, 189, 78, 204, 180, 185, 44, 3, 7, 190, 193, 35, 178, 61, 235, 117, 136, 59, 203, 130, 49, 190, 36, 123, 11, 61, 5, 249, 79, 189, 176, 4, 106, 190, 0, 210, 161, 190, 45, 209, 4, 189, 131, 199, 122, 61, 159, 190, 25, 61, 81, 138, 18, 190, 147, 4, 235, 189, 19, 196, 105, 189, 18, 146, 20, 62, 232, 234, 229, 188, 165, 39, 56, 189, 194, 176, 50, 62, 192, 161, 181, 59, 42, 173, 5, 190, 180, 102, 109, 60, 40, 112, 104, 60, 126, 237, 156, 62, 87, 86, 242, 189, 131, 121, 62, 62, 107, 226, 100, 190, 95, 231, 137, 191, 27, 40, 220, 61, 201, 82, 190, 189, 232, 129, 49, 61, 221, 255, 187, 62, 165, 190, 79, 190, 234, 141, 99, 191, 96, 17, 144, 190, 180, 84, 14, 189, 31, 206, 55, 63, 220, 20, 164, 61, 181, 29, 18, 190, 223, 107, 189, 190, 12, 8, 149, 190, 121, 113, 71, 62, 208, 154, 112, 189, 135, 60, 47, 190, 53, 114, 3, 191, 247, 150, 109, 62, 53, 1, 238, 62, 58, 150, 199, 190, 40, 7, 201, 189, 114, 181, 9, 63, 199, 231, 1, 190, 26, 20, 74, 62, 250, 249, 25, 191, 58, 73, 100, 190, 200, 150, 239, 62, 159, 26, 221, 61, 11, 20, 49, 191, 137, 40, 168, 190, 176, 21, 55, 62, 217, 182, 224, 190, 20, 69, 99, 188, 46, 143, 56, 189, 18, 233, 168, 62, 49, 23, 53, 189, 72, 66, 38, 190, 114, 123, 13, 191, 187, 91, 38, 190, 27, 114, 224, 189, 191, 198, 142, 62, 76, 135, 138, 61, 139, 22, 61, 191, 30, 9, 146, 188, 48, 88, 214, 59, 121, 14, 20, 190, 203, 22, 137, 62, 41, 190, 42, 189, 35, 141, 118, 190, 245, 197, 155, 189, 12, 35, 214, 189, 240, 108, 158, 190, 45, 107, 121, 61, 214, 144, 10, 63, 195, 50, 160, 189, 21, 78, 239, 61, 142, 213, 222, 190, 109, 159, 69, 62, 8, 221, 150, 61, 179, 168, 200, 62, 29, 137, 116, 189, 173, 80, 54, 190, 165, 60, 130, 61, 103, 115, 63, 189, 78, 19, 13, 62, 181, 229, 150, 61, 61, 213, 21, 62, 27, 73, 165, 62, 100, 180, 138, 190, 250, 171, 193, 61, 136, 215, 11, 189, 33, 204, 194, 189, 101, 193, 37, 190, 10, 33, 136, 61, 179, 122, 238, 61, 75, 28, 191, 189, 208, 179, 73, 62, 17, 138, 43, 190, 134, 20, 181, 190, 111, 255, 23, 191, 247, 121, 207, 189, 143, 220, 141, 61, 227, 161, 61, 190, 166, 7, 160, 189, 131, 103, 11, 62, 233, 239, 106, 191, 68, 130, 94, 190, 49, 132, 95, 62, 54, 85, 5, 190, 224, 13, 238, 190, 147, 144, 184, 190, 184, 32, 128, 62, 165, 53, 146, 190, 76, 192, 149, 189, 40, 158, 65, 187, 63, 81, 202, 61, 194, 228, 59, 61, 197, 75, 30, 189, 91, 167, 133, 189, 148, 235, 244, 188, 238, 240, 180, 189, 153, 34, 176, 188, 187, 110, 9, 190, 210, 43, 176, 188, 187, 85, 220, 189, 121, 222, 236, 189, 169, 214, 74, 60, 162, 144, 198, 59, 136, 169, 224, 188, 220, 117, 234, 189, 182, 48, 157, 189, 58, 246, 141, 61, 181, 74, 102, 61, 176, 81, 162, 61, 40, 182, 135, 189, 235, 29, 236, 61, 26, 190, 251, 189, 13, 24, 0, 190, 217, 216, 242, 189, 120, 2, 28, 61, 82, 240, 201, 60, 166, 160, 3, 62, 185, 139, 63, 61, 11, 239, 223, 188, 42, 110, 204, 189, 128, 199, 60, 61, 135, 91, 185, 188, 209, 161, 2, 62, 39, 203, 18, 62, 168, 24, 158, 190, 69, 199, 192, 188, 206, 71, 15, 62, 131, 228, 30, 61, 144, 117, 140, 190, 11, 80, 57, 190, 132, 112, 50, 61, 70, 91, 182, 61, 4, 246, 159, 189, 6, 26, 10, 191, 118, 111, 236, 190, 146, 8, 252, 61, 192, 42, 186, 61, 107, 55, 188, 61, 243, 85, 191, 189, 255, 177, 216, 189, 161, 21, 161, 189, 79, 239, 171, 62, 243, 171, 196, 189, 100, 173, 5, 190, 192, 148, 163, 62, 29, 130, 106, 190, 156, 182, 181, 61, 78, 125, 199, 189, 132, 6, 216, 61, 30, 21, 146, 62, 160, 83, 84, 60, 75, 225, 176, 61, 221, 192, 157, 190, 118, 11, 244, 188, 247, 26, 103, 62, 51, 158, 33, 62, 217, 206, 162, 61, 250, 238, 62, 190, 253, 24, 15, 62, 201, 71, 5, 61, 165, 160, 45, 190, 153, 85, 230, 189, 56, 47, 143, 60, 232, 66, 130, 187, 104, 218, 74, 61, 185, 182, 203, 61, 151, 54, 178, 188, 100, 32, 223, 189, 76, 6, 60, 62, 215, 146, 86, 190, 57, 1, 28, 189, 184, 58, 150, 190, 216, 38, 24, 190, 65, 224, 52, 190, 170, 9, 215, 61, 156, 165, 159, 61, 58, 13, 42, 190, 248, 6, 42, 190, 91, 42, 244, 190, 98, 190, 219, 61, 33, 253, 177, 61, 239, 138, 179, 61, 232, 230, 47, 190, 209, 201, 8, 62, 19, 95, 68, 189, 203, 46, 66, 187, 38, 14, 148, 61, 210, 220, 21, 189, 158, 25, 5, 63, 120, 158, 133, 61, 178, 134, 7, 191, 104, 206, 69, 62, 132, 61, 138, 62, 5, 87, 149, 61, 224, 31, 217, 62, 87, 41, 142, 190, 45, 222, 107, 190, 71, 216, 230, 61, 218, 148, 196, 61, 20, 153, 187, 62, 17, 223, 116, 190, 122, 161, 153, 62, 161, 21, 167, 62, 98, 171, 195, 62, 246, 240, 228, 61, 27, 233, 100, 190, 42, 161, 86, 60, 246, 33, 49, 190, 105, 102, 178, 190, 102, 241, 244, 61, 98, 73, 179, 61, 11, 174, 147, 62, 9, 53, 216, 190, 94, 48, 54, 191, 96, 63, 96, 191, 114, 216, 178, 190, 61, 5, 178, 61, 151, 245, 181, 190, 50, 238, 6, 63, 89, 242, 244, 190, 251, 41, 157, 189, 39, 122, 98, 191, 181, 38, 29, 190, 130, 135, 219, 61, 91, 206, 227, 189, 57, 6, 172, 61, 219, 83, 123, 62, 128, 124, 116, 59, 75, 73, 93, 62, 64, 11, 49, 189, 56, 58, 224, 189, 150, 200, 247, 188, 183, 244, 21, 61, 160, 112, 19, 190, 144, 39, 14, 60, 207, 219, 5, 62, 117, 144, 162, 190, 8, 240, 48, 188, 0, 186, 219, 188, 49, 118, 187, 61, 7, 241, 178, 61, 94, 28, 234, 60, 42, 172, 76, 190, 30, 56, 192, 61, 2, 107, 60, 62, 130, 215, 164, 188, 127, 54, 183, 61, 210, 40, 54, 190, 177, 117, 5, 62, 241, 47, 179, 188, 87, 64, 98, 191, 165, 160, 8, 62, 245, 203, 12, 190, 42, 252, 73, 189, 122, 104, 12, 62, 175, 222, 200, 189, 151, 185, 233, 189, 217, 112, 201, 61, 193, 169, 47, 62, 87, 107, 199, 61, 248, 119, 145, 190, 16, 38, 35, 190, 168, 6, 196, 61, 198, 87, 182, 61, 128, 57, 200, 190, 205, 146, 27, 190, 180, 3, 47, 62, 163, 237, 152, 62, 68, 198, 72, 62, 205, 185, 64, 190, 15, 1, 121, 62, 142, 30, 161, 188, 237, 54, 162, 190, 112, 204, 58, 190, 155, 174, 216, 188, 77, 1, 208, 61, 102, 204, 25, 191, 237, 167, 235, 61, 67, 33, 124, 190, 25, 235, 231, 190, 182, 163, 92, 61, 38, 193, 63, 190, 133, 236, 243, 189, 68, 51, 221, 189, 6, 245, 36, 190, 233, 78, 146, 61, 220, 219, 130, 190, 216, 165, 175, 61, 59, 31, 13, 190, 231, 45, 177, 189, 62, 65, 151, 62, 177, 52, 206, 188, 185, 134, 245, 61, 193, 88, 216, 190, 216, 91, 181, 61, 87, 143, 73, 189, 60, 201, 91, 190, 190, 168, 90, 188, 63, 107, 152, 189, 236, 20, 4, 63, 6, 94, 107, 189, 56, 242, 46, 60, 168, 184, 130, 190, 169, 139, 167, 60, 127, 250, 194, 62, 5, 172, 230, 189, 242, 117, 126, 59, 93, 252, 211, 189, 83, 167, 203, 189, 209, 168, 143, 189, 12, 131, 207, 189, 25, 90, 78, 189, 192, 201, 8, 190, 103, 120, 146, 190, 168, 252, 4, 62, 201, 231, 6, 61, 156, 220, 188, 189, 2, 49, 37, 61, 26, 219, 118, 190, 76, 82, 2, 190, 98, 162, 206, 189, 193, 167, 226, 60, 167, 90, 25, 61, 3, 238, 187, 190, 234, 192, 252, 61, 66, 188, 149, 190, 120, 138, 170, 190, 145, 192, 146, 62, 233, 172, 73, 190, 155, 254, 183, 189, 84, 36, 145, 189, 29, 31, 107, 189, 131, 196, 5, 191, 230, 172, 131, 190, 15, 120, 167, 61, 81, 134, 8, 62, 179, 187, 142, 61, 74, 10, 135, 189, 183, 84, 62, 62, 11, 199, 155, 58, 100, 143, 239, 61, 9, 129, 206, 190, 85, 57, 4, 189, 218, 50, 109, 190, 43, 77, 21, 190, 247, 201, 13, 190, 35, 38, 201, 62, 155, 67, 54, 61, 226, 129, 240, 61, 197, 151, 45, 62, 34, 127, 193, 191, 10, 244, 4, 62, 30, 141, 4, 62, 54, 178, 119, 190, 109, 82, 129, 61, 128, 60, 245, 190, 56, 31, 159, 190, 189, 69, 103, 62, 46, 168, 21, 62, 52, 250, 124, 62, 147, 155, 230, 190, 21, 192, 177, 62, 171, 31, 11, 190, 134, 224, 161, 62, 116, 190, 7, 62, 181, 30, 6, 191, 231, 219, 221, 62, 41, 120, 48, 60, 95, 90, 9, 191, 88, 147, 51, 62, 246, 189, 130, 62, 127, 235, 6, 62, 226, 151, 133, 190, 28, 76, 24, 191, 239, 155, 79, 191, 42, 47, 95, 190, 200, 70, 93, 62, 200, 151, 161, 191, 87, 153, 241, 62, 44, 255, 165, 190, 23, 115, 5, 62, 128, 73, 192, 189, 163, 187, 16, 189, 55, 228, 5, 62, 121, 98, 249, 61, 147, 254, 35, 190, 108, 64, 7, 62, 248, 146, 183, 190, 93, 173, 63, 62, 32, 111, 161, 62, 249, 103, 31, 61, 240, 9, 73, 62, 75, 255, 212, 190, 156, 250, 239, 61, 96, 157, 19, 62, 232, 198, 10, 62, 73, 34, 61, 62, 149, 137, 63, 189, 251, 186, 244, 189, 216, 2, 226, 189, 210, 155, 94, 60, 134, 57, 83, 61, 168, 212, 65, 62, 251, 226, 28, 190, 200, 102, 85, 189, 10, 224, 24, 190, 223, 243, 69, 61, 143, 246, 117, 190, 206, 42, 15, 62, 238, 30, 223, 59, 92, 98, 185, 62, 195, 216, 180, 61, 223, 162, 122, 190, 174, 31, 143, 62, 7, 59, 113, 60, 80, 136, 49, 190, 74, 214, 87, 190, 149, 217, 17, 190, 240, 118, 136, 189, 213, 236, 238, 189, 38, 124, 83, 62, 208, 67, 166, 190, 141, 104, 174, 189, 235, 188, 144, 59, 71, 124, 58, 190, 34, 187, 6, 61, 176, 195, 47, 190, 90, 154, 166, 189, 192, 85, 140, 190, 183, 180, 108, 62, 236, 40, 146, 190, 93, 23, 237, 189, 127, 206, 8, 62, 136, 80, 16, 190, 53, 165, 170, 62, 202, 140, 41, 190, 253, 5, 131, 61, 69, 241, 101, 62, 248, 32, 170, 61, 55, 97, 78, 59, 72, 134, 162, 189, 175, 230, 135, 62, 140, 78, 150, 62, 66, 229, 185, 62};
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
                alignas(float) const unsigned char memory[] = {115, 179, 164, 61, 174, 82, 89, 190, 122, 91, 31, 190, 18, 98, 122, 62, 163, 18, 87, 62, 243, 195, 17, 62, 194, 149, 60, 62, 182, 183, 88, 61, 147, 242, 71, 62, 54, 149, 202, 189, 183, 81, 88, 189, 117, 110, 3, 190, 136, 55, 34, 188, 249, 216, 3, 62, 163, 31, 101, 62, 56, 232, 107, 62, 240, 34, 195, 189, 56, 207, 68, 189, 197, 98, 58, 62, 93, 99, 214, 61, 117, 230, 138, 189, 168, 243, 248, 189, 138, 205, 119, 189, 160, 49, 176, 190, 43, 131, 219, 61, 207, 40, 160, 190, 177, 235, 217, 61, 147, 28, 185, 62, 157, 48, 28, 62, 197, 101, 17, 62, 237, 90, 207, 61, 63, 32, 96, 62};
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
                alignas(float) const unsigned char memory[] = {17, 104, 95, 190, 247, 117, 0, 191, 25, 142, 224, 61, 206, 226, 241, 62, 152, 106, 20, 189, 180, 165, 202, 62, 165, 55, 164, 189, 20, 7, 238, 190, 253, 122, 50, 62, 152, 32, 130, 189, 195, 227, 181, 61, 7, 170, 215, 190, 11, 236, 153, 189, 90, 235, 65, 62, 122, 240, 248, 62, 208, 207, 113, 191, 179, 234, 207, 190, 14, 22, 185, 190, 175, 169, 101, 63, 38, 97, 5, 63, 141, 79, 75, 63, 1, 127, 237, 61, 226, 183, 2, 62, 188, 89, 230, 189, 31, 195, 70, 191, 62, 113, 115, 190, 245, 210, 232, 61, 218, 115, 23, 188, 180, 224, 80, 190, 157, 79, 157, 191, 25, 195, 165, 189, 230, 51, 49, 62, 34, 138, 242, 62, 93, 134, 105, 62, 204, 49, 212, 187, 157, 222, 9, 190, 199, 178, 234, 190, 140, 185, 207, 61, 19, 119, 107, 190, 127, 85, 155, 189, 251, 173, 13, 190, 233, 100, 120, 61, 22, 95, 178, 60, 219, 97, 52, 188, 210, 200, 218, 61, 194, 218, 125, 190, 254, 209, 10, 61, 153, 102, 9, 61, 253, 253, 32, 60, 7, 188, 65, 189, 233, 168, 68, 62, 164, 212, 147, 61, 210, 54, 136, 62, 245, 210, 10, 190, 123, 15, 72, 62, 76, 201, 58, 61, 51, 214, 182, 61, 209, 202, 15, 62, 224, 5, 221, 62, 180, 116, 15, 191, 182, 33, 168, 62, 48, 29, 64, 187, 145, 18, 40, 190, 167, 19, 74, 190};
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
                alignas(float) const unsigned char memory[] = {154, 93, 140, 189, 210, 92, 48, 190};
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
    alignas(float) const unsigned char memory[] = {51, 149, 188, 63, 111, 175, 31, 190, 250, 105, 108, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {243, 63, 111, 191, 251, 49, 187, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0014/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}