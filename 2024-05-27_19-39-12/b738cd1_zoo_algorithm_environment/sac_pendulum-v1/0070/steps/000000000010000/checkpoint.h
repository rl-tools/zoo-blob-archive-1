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
                alignas(float) const unsigned char memory[] = {8, 134, 58, 190, 40, 157, 44, 62, 166, 101, 42, 61, 95, 0, 216, 62, 248, 59, 59, 191, 210, 131, 90, 190, 0, 6, 126, 190, 188, 85, 12, 63, 221, 220, 56, 63, 242, 240, 140, 189, 9, 65, 133, 63, 99, 32, 156, 61, 191, 244, 13, 62, 62, 95, 21, 63, 47, 216, 197, 62, 242, 185, 91, 62, 9, 43, 139, 62, 133, 185, 46, 191, 231, 241, 77, 189, 22, 203, 155, 60, 69, 68, 96, 189, 14, 252, 237, 61, 171, 200, 149, 60, 120, 73, 22, 191, 170, 253, 133, 190, 50, 24, 157, 191, 4, 38, 172, 190, 30, 30, 62, 63, 76, 64, 238, 62, 157, 75, 135, 62, 60, 210, 1, 63, 29, 77, 99, 191, 67, 135, 172, 190, 178, 251, 20, 63, 195, 150, 161, 63, 104, 8, 200, 62, 96, 67, 236, 62, 157, 127, 82, 190, 70, 112, 72, 63, 101, 186, 33, 190, 77, 99, 136, 63, 90, 147, 189, 61, 59, 100, 137, 62, 69, 169, 40, 190, 234, 16, 163, 190, 116, 188, 73, 61, 164, 35, 218, 190, 209, 166, 238, 62, 221, 239, 131, 191, 61, 126, 144, 62, 130, 103, 18, 190, 211, 100, 245, 190, 219, 173, 157, 191, 204, 118, 146, 190, 159, 59, 28, 63, 123, 162, 222, 62, 165, 100, 26, 63, 151, 35, 145, 60, 69, 214, 132, 191, 180, 61, 154, 62, 130, 136, 172, 62, 23, 161, 46, 191, 101, 234, 22, 63, 46, 150, 189, 190, 156, 213, 36, 191, 166, 90, 170, 189, 215, 48, 232, 190, 228, 177, 79, 63, 69, 131, 112, 62, 137, 18, 160, 62, 223, 249, 73, 63, 140, 120, 44, 191, 154, 108, 173, 62, 235, 23, 150, 191, 46, 31, 38, 190, 193, 215, 48, 191, 160, 60, 104, 61, 114, 168, 253, 62, 14, 169, 225, 62, 71, 121, 113, 63, 196, 18, 0, 191, 37, 231, 209, 62, 207, 141, 186, 188, 69, 119, 38, 191, 252, 207, 149, 190, 112, 15, 184, 62, 250, 105, 8, 63, 209, 138, 153, 190, 128, 99, 28, 191, 165, 132, 238, 190, 222, 32, 234, 190, 155, 76, 189, 191, 229, 237, 159, 190, 103, 250, 76, 190, 51, 201, 152, 191, 166, 133, 2, 191};
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
                alignas(float) const unsigned char memory[] = {225, 249, 20, 191, 68, 9, 19, 63, 251, 184, 150, 190, 216, 57, 45, 63, 175, 37, 1, 61, 206, 30, 76, 62, 129, 193, 11, 191, 225, 223, 85, 61, 177, 241, 180, 61, 101, 214, 36, 63, 250, 83, 68, 62, 123, 244, 252, 190, 18, 226, 42, 62, 180, 155, 37, 63, 28, 96, 151, 62, 19, 30, 230, 61, 78, 22, 122, 190, 233, 134, 237, 189, 99, 91, 185, 62, 149, 156, 209, 62, 186, 139, 215, 62, 213, 44, 3, 63, 105, 83, 61, 63, 189, 153, 183, 61, 217, 152, 56, 190, 225, 246, 218, 190, 158, 73, 124, 62, 51, 49, 114, 62, 124, 99, 171, 190, 26, 235, 155, 190, 37, 21, 114, 188, 75, 20, 168, 62};
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
                alignas(float) const unsigned char memory[] = {47, 57, 131, 60, 59, 239, 66, 189, 233, 71, 118, 60, 114, 62, 141, 62, 58, 123, 169, 60, 234, 79, 184, 190, 99, 21, 37, 60, 121, 215, 14, 191, 181, 34, 210, 189, 156, 222, 138, 190, 22, 144, 28, 191, 213, 81, 236, 60, 144, 154, 157, 190, 204, 28, 128, 62, 173, 201, 46, 191, 86, 55, 1, 190, 46, 53, 185, 61, 140, 149, 198, 190, 165, 15, 252, 190, 148, 253, 19, 61, 95, 111, 197, 189, 32, 158, 152, 62, 194, 210, 47, 62, 123, 190, 19, 62, 15, 169, 243, 190, 161, 204, 47, 62, 245, 1, 152, 62, 135, 28, 167, 190, 200, 229, 12, 188, 93, 57, 160, 190, 130, 80, 19, 62, 86, 213, 157, 190, 13, 162, 76, 61, 170, 208, 193, 188, 164, 92, 57, 190, 7, 74, 74, 190, 36, 81, 211, 189, 229, 14, 22, 190, 64, 104, 165, 189, 172, 207, 4, 190, 167, 3, 135, 189, 217, 157, 218, 61, 137, 103, 23, 60, 192, 205, 54, 188, 155, 192, 58, 190, 76, 34, 3, 62, 63, 187, 41, 62, 210, 175, 134, 60, 192, 140, 16, 61, 166, 203, 122, 189, 202, 172, 165, 61, 239, 208, 33, 190, 225, 249, 78, 189, 133, 40, 6, 190, 238, 61, 212, 189, 181, 58, 169, 189, 209, 64, 180, 189, 46, 211, 217, 59, 85, 29, 119, 61, 212, 122, 22, 190, 166, 43, 217, 188, 139, 182, 21, 62, 156, 76, 57, 61, 0, 75, 37, 190, 255, 67, 231, 61, 135, 190, 143, 62, 142, 60, 30, 190, 104, 63, 32, 191, 62, 124, 117, 190, 34, 253, 130, 62, 95, 189, 197, 61, 69, 215, 82, 61, 126, 194, 225, 61, 68, 112, 39, 61, 182, 52, 2, 63, 226, 111, 147, 191, 201, 23, 115, 189, 214, 107, 34, 191, 63, 66, 37, 62, 1, 230, 74, 62, 72, 35, 20, 191, 57, 29, 129, 190, 49, 4, 44, 61, 199, 22, 178, 62, 175, 57, 77, 62, 238, 48, 47, 63, 193, 43, 6, 191, 46, 85, 37, 60, 135, 104, 3, 63, 119, 124, 156, 61, 4, 177, 41, 190, 163, 224, 8, 62, 148, 139, 96, 190, 239, 143, 169, 189, 206, 91, 101, 62, 162, 98, 22, 188, 81, 35, 240, 189, 151, 58, 187, 188, 42, 208, 238, 61, 88, 87, 176, 190, 31, 158, 5, 62, 133, 26, 165, 62, 224, 189, 1, 62, 54, 74, 67, 61, 51, 207, 207, 189, 120, 244, 198, 61, 225, 48, 175, 62, 26, 214, 252, 190, 86, 196, 120, 190, 173, 85, 209, 190, 249, 68, 191, 61, 240, 37, 253, 190, 61, 74, 152, 190, 82, 15, 102, 190, 128, 135, 183, 61, 174, 40, 231, 62, 23, 17, 164, 62, 135, 253, 9, 63, 70, 170, 152, 190, 228, 181, 39, 190, 13, 118, 23, 62, 120, 146, 125, 62, 232, 130, 77, 60, 126, 16, 178, 61, 251, 27, 204, 61, 131, 47, 10, 190, 53, 159, 222, 60, 210, 130, 241, 188, 137, 60, 237, 61, 225, 239, 62, 191, 97, 41, 206, 62, 201, 109, 173, 61, 228, 22, 139, 62, 203, 1, 135, 62, 93, 75, 8, 190, 140, 194, 144, 62, 99, 8, 192, 191, 219, 97, 244, 189, 157, 105, 59, 191, 126, 106, 10, 190, 198, 38, 28, 191, 209, 101, 194, 59, 251, 208, 48, 62, 68, 78, 28, 191, 125, 8, 183, 60, 90, 248, 111, 191, 73, 145, 183, 190, 51, 114, 138, 62, 95, 185, 161, 62, 154, 49, 59, 189, 52, 36, 178, 62, 149, 252, 129, 60, 25, 97, 80, 191, 77, 223, 181, 62, 156, 59, 70, 189, 195, 128, 24, 190, 117, 160, 182, 62, 61, 63, 155, 190, 53, 175, 153, 191, 89, 236, 108, 191, 16, 194, 247, 60, 36, 214, 213, 189, 9, 93, 226, 60, 165, 129, 40, 190, 178, 201, 241, 188, 170, 225, 45, 189, 209, 91, 193, 188, 173, 204, 214, 188, 180, 85, 80, 60, 118, 201, 36, 62, 25, 3, 52, 190, 172, 84, 31, 188, 91, 118, 10, 190, 25, 148, 23, 61, 60, 212, 104, 61, 144, 145, 106, 189, 207, 107, 1, 190, 53, 87, 82, 189, 77, 130, 121, 189, 79, 0, 179, 61, 37, 172, 7, 189, 243, 63, 21, 62, 28, 72, 252, 189, 162, 73, 221, 188, 133, 200, 114, 188, 221, 126, 25, 190, 138, 33, 136, 61, 122, 98, 59, 187, 64, 247, 52, 188, 13, 140, 201, 188, 81, 64, 29, 61, 97, 36, 107, 59, 248, 177, 185, 61, 29, 86, 6, 191, 65, 198, 69, 62, 98, 150, 165, 62, 60, 251, 250, 61, 66, 142, 15, 63, 138, 244, 145, 61, 217, 174, 164, 62, 70, 72, 242, 191, 161, 250, 75, 62, 156, 99, 182, 190, 129, 61, 147, 188, 249, 135, 212, 190, 191, 233, 206, 62, 24, 106, 255, 61, 7, 107, 14, 191, 116, 36, 134, 189, 245, 229, 10, 192, 148, 31, 14, 190, 253, 221, 17, 62, 252, 200, 84, 62, 123, 65, 154, 62, 225, 52, 183, 62, 168, 186, 52, 190, 170, 39, 135, 62, 114, 251, 91, 62, 228, 54, 218, 190, 2, 34, 10, 191, 140, 170, 144, 62, 56, 105, 34, 191, 149, 149, 165, 191, 139, 31, 179, 191, 152, 27, 8, 62, 7, 178, 85, 190, 167, 179, 171, 189, 226, 167, 18, 61, 248, 215, 83, 61, 91, 119, 46, 190, 31, 131, 27, 62, 150, 138, 131, 61, 94, 63, 78, 59, 125, 63, 204, 61, 19, 62, 140, 189, 87, 183, 140, 189, 142, 76, 161, 190, 120, 138, 76, 188, 61, 72, 186, 189, 49, 14, 230, 189, 53, 204, 3, 188, 72, 94, 55, 190, 177, 198, 5, 190, 46, 8, 216, 189, 119, 64, 223, 189, 38, 94, 31, 190, 36, 229, 215, 61, 163, 12, 85, 61, 193, 190, 250, 189, 65, 114, 41, 190, 128, 61, 144, 189, 248, 120, 201, 61, 27, 173, 56, 188, 206, 5, 113, 189, 131, 158, 177, 189, 179, 150, 35, 190, 75, 178, 147, 188, 88, 28, 188, 60, 147, 78, 5, 62, 59, 183, 102, 61, 38, 63, 243, 61, 121, 152, 16, 63, 211, 98, 133, 189, 241, 163, 12, 63, 170, 70, 27, 191, 106, 51, 47, 60, 58, 136, 58, 63, 223, 21, 6, 191, 153, 206, 121, 190, 156, 140, 219, 61, 103, 60, 30, 63, 124, 66, 166, 190, 153, 97, 47, 191, 17, 158, 225, 191, 111, 215, 125, 190, 128, 250, 220, 62, 254, 10, 9, 188, 204, 61, 19, 63, 221, 4, 42, 62, 182, 254, 22, 191, 186, 1, 210, 62, 68, 208, 64, 62, 237, 195, 56, 191, 20, 186, 42, 190, 13, 4, 131, 62, 158, 28, 142, 191, 102, 242, 82, 191, 242, 35, 145, 190, 3, 179, 143, 189, 85, 79, 5, 62, 255, 68, 6, 190, 135, 226, 19, 191, 12, 235, 46, 190, 248, 151, 7, 62, 205, 44, 62, 190, 81, 186, 34, 189, 76, 181, 93, 61, 190, 77, 246, 189, 210, 209, 11, 63, 42, 70, 121, 191, 86, 132, 61, 62, 11, 200, 232, 190, 95, 215, 157, 62, 3, 33, 240, 61, 27, 13, 242, 190, 11, 32, 179, 189, 46, 171, 95, 61, 234, 212, 143, 62, 148, 42, 131, 61, 87, 79, 178, 62, 253, 135, 222, 189, 205, 221, 173, 61, 84, 76, 134, 60, 90, 244, 186, 60, 252, 107, 237, 188, 150, 62, 20, 62, 148, 20, 33, 190, 191, 73, 156, 61, 234, 121, 61, 189, 43, 96, 150, 60, 214, 187, 6, 190, 233, 182, 158, 61, 196, 83, 65, 62, 158, 147, 70, 190, 64, 228, 11, 191, 134, 179, 60, 61, 69, 163, 31, 190, 77, 244, 105, 62, 252, 80, 134, 60, 136, 206, 187, 190, 71, 205, 85, 62, 45, 66, 202, 190, 85, 105, 96, 188, 117, 27, 48, 190, 109, 5, 212, 61, 114, 199, 162, 62, 198, 29, 222, 62, 138, 24, 88, 61, 91, 250, 105, 190, 121, 81, 143, 62, 82, 19, 63, 62, 20, 209, 10, 62, 19, 224, 72, 190, 14, 107, 188, 189, 198, 156, 30, 63, 252, 204, 137, 190, 147, 196, 225, 61, 184, 70, 3, 189, 212, 125, 93, 61, 7, 55, 187, 60, 159, 40, 132, 59, 220, 6, 166, 61, 77, 195, 131, 61, 39, 95, 44, 62, 116, 255, 90, 190, 36, 70, 24, 62, 242, 244, 143, 190, 52, 69, 251, 61, 1, 54, 34, 62, 149, 231, 19, 190, 90, 2, 29, 62, 219, 4, 161, 61, 148, 146, 209, 62, 40, 129, 5, 190, 64, 189, 105, 190, 186, 138, 56, 62, 92, 133, 14, 62, 114, 179, 179, 190, 28, 28, 244, 187, 101, 97, 210, 189, 196, 14, 54, 62, 51, 199, 34, 188, 71, 247, 95, 190, 150, 100, 31, 62, 16, 206, 28, 62, 25, 4, 236, 60, 89, 136, 27, 191, 72, 187, 15, 61, 187, 178, 36, 62, 46, 128, 91, 62, 54, 215, 146, 187, 69, 133, 43, 62, 102, 122, 224, 62, 80, 123, 188, 61, 7, 165, 71, 189, 113, 22, 225, 60, 93, 42, 32, 191, 79, 204, 48, 62, 123, 118, 35, 190, 96, 118, 59, 190, 137, 90, 168, 189, 119, 64, 173, 190, 120, 56, 38, 62, 11, 46, 191, 61, 8, 197, 4, 190, 119, 102, 117, 62, 79, 186, 126, 62, 221, 208, 23, 61, 55, 209, 140, 190, 142, 50, 80, 60, 171, 138, 151, 61, 14, 39, 62, 62, 82, 207, 255, 60, 156, 67, 18, 191, 74, 194, 21, 191, 99, 217, 190, 60, 208, 197, 234, 61, 6, 39, 159, 62, 83, 17, 148, 61, 140, 248, 240, 190, 53, 252, 201, 62, 7, 108, 73, 62, 26, 15, 202, 190, 174, 137, 141, 62, 60, 67, 87, 62, 207, 232, 98, 59, 150, 230, 29, 58, 229, 45, 57, 62, 172, 68, 156, 61, 250, 227, 167, 62, 160, 39, 206, 54, 200, 104, 15, 189, 91, 52, 19, 60, 135, 226, 131, 190, 125, 122, 145, 62, 224, 146, 130, 62, 223, 123, 212, 188, 66, 126, 170, 61, 119, 54, 66, 62, 253, 175, 236, 61, 70, 24, 157, 188, 132, 133, 100, 188, 17, 55, 253, 62, 239, 42, 86, 62, 234, 137, 140, 62, 17, 147, 64, 61, 7, 69, 65, 62, 232, 155, 159, 190, 240, 118, 80, 62, 178, 10, 12, 62, 115, 179, 177, 190, 161, 19, 125, 190, 67, 140, 188, 62, 132, 164, 112, 62, 223, 167, 9, 189, 182, 220, 89, 61, 211, 44, 32, 62, 88, 220, 90, 188, 52, 243, 120, 61, 22, 138, 98, 62, 2, 234, 167, 188, 159, 28, 84, 191, 200, 115, 6, 190, 92, 144, 118, 61, 19, 163, 240, 188, 145, 8, 78, 62, 46, 112, 98, 60, 4, 208, 231, 190, 232, 127, 7, 63, 173, 2, 243, 61, 199, 246, 19, 62, 176, 75, 29, 191, 112, 236, 37, 62, 95, 99, 156, 62, 204, 50, 140, 190, 181, 80, 177, 190, 186, 188, 29, 190, 169, 96, 17, 62, 208, 115, 168, 190, 235, 96, 152, 190, 170, 108, 53, 191, 86, 228, 248, 188, 247, 140, 5, 63, 131, 48, 219, 61, 50, 103, 179, 61, 209, 2, 43, 62, 147, 138, 204, 61, 225, 60, 217, 190, 24, 53, 108, 190, 77, 62, 86, 189, 198, 15, 226, 189, 141, 81, 145, 189, 163, 35, 84, 190, 157, 5, 18, 190, 208, 137, 19, 190, 114, 74, 31, 190, 52, 19, 2, 188, 56, 54, 150, 190, 157, 22, 129, 61, 127, 241, 58, 189, 209, 25, 128, 190, 28, 182, 53, 61, 78, 254, 65, 189, 145, 156, 143, 61, 2, 230, 105, 190, 71, 28, 230, 59, 219, 106, 51, 62, 183, 111, 115, 60, 4, 95, 104, 190, 23, 127, 134, 189, 223, 60, 52, 190, 68, 192, 70, 62, 6, 39, 25, 61, 132, 151, 171, 189, 212, 82, 2, 190, 112, 243, 43, 190, 55, 114, 6, 190, 181, 38, 173, 190, 95, 63, 73, 189, 33, 80, 58, 190, 6, 186, 24, 62, 84, 150, 31, 62, 208, 94, 224, 60, 128, 96, 145, 62, 107, 128, 185, 58, 43, 114, 65, 62, 87, 252, 126, 61, 134, 218, 122, 190, 116, 250, 139, 61, 211, 238, 128, 190, 237, 173, 244, 61, 205, 212, 146, 62, 244, 58, 199, 189, 6, 127, 133, 62, 243, 178, 232, 62, 128, 53, 36, 61, 142, 197, 9, 190, 182, 21, 130, 62, 171, 114, 218, 62, 185, 125, 120, 62, 88, 21, 196, 62, 155, 107, 156, 190, 248, 161, 67, 190, 116, 62, 190, 190, 13, 33, 91, 188, 253, 209, 148, 62, 89, 204, 143, 190, 53, 212, 195, 190, 177, 195, 171, 62, 220, 235, 154, 62, 220, 236, 139, 190, 79, 167, 192, 60, 64, 143, 58, 62, 242, 17, 22, 61, 216, 90, 255, 61, 90, 29, 124, 190, 186, 56, 223, 189, 38, 77, 123, 189, 102, 59, 242, 189, 69, 217, 81, 62, 86, 77, 46, 60, 185, 149, 255, 61, 164, 58, 195, 61, 147, 96, 198, 190, 225, 99, 29, 190, 17, 43, 106, 60, 103, 121, 166, 190, 106, 223, 5, 190, 0, 87, 102, 62, 219, 120, 231, 189, 90, 109, 109, 62, 32, 165, 209, 61, 169, 49, 213, 188, 143, 103, 246, 190, 89, 69, 2, 189, 172, 201, 176, 190, 90, 86, 101, 61, 175, 240, 145, 61, 103, 18, 184, 190, 237, 15, 92, 190, 232, 208, 84, 189, 158, 254, 217, 189, 82, 42, 31, 190, 144, 153, 131, 61, 232, 204, 255, 189, 106, 114, 182, 61, 1, 207, 110, 60, 22, 37, 85, 61, 110, 168, 145, 190, 174, 223, 157, 62, 187, 154, 74, 190, 66, 43, 231, 190, 72, 62, 163, 188, 153, 158, 90, 190, 139, 249, 7, 62, 39, 22, 164, 62, 229, 59, 4, 189, 171, 96, 144, 61, 89, 241, 212, 61, 218, 78, 39, 62, 142, 211, 82, 190, 191, 180, 82, 190, 156, 246, 221, 62, 81, 30, 27, 62, 245, 16, 51, 61, 191, 138, 154, 189, 201, 222, 71, 190, 168, 37, 130, 189, 145, 226, 16, 185, 142, 207, 248, 188, 228, 239, 18, 191, 248, 5, 109, 190, 1, 135, 4, 62, 30, 191, 193, 60, 153, 148, 136, 190, 238, 180, 111, 61, 238, 245, 183, 62, 251, 223, 20, 62, 31, 78, 47, 62, 18, 124, 144, 61, 128, 131, 149, 60, 111, 249, 237, 61, 88, 96, 32, 62, 129, 77, 88, 61, 236, 29, 19, 189, 30, 69, 20, 190, 185, 125, 148, 189, 167, 233, 234, 188, 122, 198, 23, 190, 132, 84, 208, 61, 248, 164, 40, 190, 28, 112, 196, 188, 248, 22, 34, 62, 234, 232, 141, 61, 184, 116, 170, 188, 232, 93, 54, 189, 30, 129, 8, 190, 244, 125, 6, 190, 138, 7, 93, 189, 197, 255, 9, 62, 164, 124, 42, 190, 143, 74, 0, 190, 40, 211, 137, 59, 248, 104, 121, 189, 188, 107, 17, 190, 116, 191, 218, 60, 233, 42, 202, 189, 208, 50, 45, 190, 40, 120, 153, 61, 197, 196, 17, 190, 155, 198, 187, 189, 60, 10, 155, 62, 213, 36, 178, 189, 205, 184, 234, 189, 78, 49, 151, 61, 179, 205, 54, 61, 158, 35, 1, 62, 252, 113, 230, 61, 3, 133, 39, 190, 131, 78, 98, 62, 187, 136, 130, 62, 68, 135, 144, 191, 112, 41, 34, 60, 102, 53, 242, 190, 247, 147, 70, 62, 0, 201, 235, 61, 66, 210, 149, 190, 53, 212, 235, 61, 107, 98, 97, 62, 76, 20, 75, 62, 210, 153, 141, 62, 178, 240, 231, 62, 41, 161, 236, 190, 80, 63, 58, 60, 194, 24, 161, 189, 204, 227, 154, 190, 59, 25, 90, 62, 244, 11, 75, 62, 92, 17, 143, 190, 177, 238, 69, 61, 15, 55, 202, 189, 77, 97, 15, 60, 249, 166, 184, 59, 254, 179, 83, 190, 200, 215, 100, 61, 90, 107, 125, 188, 96, 43, 241, 61, 203, 46, 95, 62, 75, 166, 22, 62, 141, 21, 92, 62, 205, 179, 176, 189, 161, 164, 51, 62, 7, 13, 120, 190, 77, 92, 34, 63, 81, 63, 68, 61, 114, 150, 213, 188, 40, 198, 154, 189, 7, 4, 123, 61, 0, 136, 233, 61, 153, 175, 23, 62, 155, 212, 50, 62, 58, 169, 26, 191, 143, 201, 174, 189, 40, 209, 144, 189, 35, 194, 138, 190, 127, 130, 55, 62, 194, 232, 223, 61, 96, 236, 92, 191, 173, 130, 253, 61, 28, 106, 129, 189, 29, 116, 141, 190, 46, 22, 33, 62, 38, 181, 99, 190, 53, 200, 247, 188, 229, 211, 194, 189, 248, 4, 11, 190, 121, 126, 134, 189, 207, 234, 128, 190, 49, 138, 55, 189, 176, 138, 54, 59, 159, 34, 194, 189, 42, 202, 150, 189, 176, 27, 167, 189, 41, 238, 89, 61, 8, 102, 133, 61, 133, 131, 65, 190, 160, 87, 202, 61, 11, 44, 182, 61, 246, 230, 101, 189, 4, 98, 3, 188, 184, 153, 83, 190, 211, 168, 55, 190, 120, 134, 202, 61, 33, 229, 63, 190, 128, 110, 170, 61, 41, 156, 190, 189, 145, 158, 208, 188, 65, 68, 132, 60, 80, 190, 28, 190, 189, 154, 30, 190, 202, 230, 132, 189, 66, 90, 97, 189, 84, 238, 147, 187, 70, 83, 19, 188, 42, 150, 53, 61, 40, 254, 101, 189, 105, 183, 145, 189, 16, 242, 252, 189, 11, 173, 187, 189, 23, 125, 103, 188, 46, 134, 1, 61, 64, 191, 29, 190, 181, 192, 55, 189, 58, 60, 17, 62, 231, 230, 158, 61, 254, 27, 86, 61, 217, 242, 190, 61, 213, 217, 122, 189, 90, 146, 150, 60, 82, 106, 50, 61, 100, 103, 185, 189, 219, 134, 175, 189, 140, 204, 58, 61, 102, 209, 96, 189, 207, 175, 194, 60, 134, 249, 175, 189, 159, 162, 5, 190, 133, 85, 109, 61, 180, 72, 157, 189, 160, 242, 130, 189, 84, 2, 10, 190, 109, 196, 23, 61, 234, 185, 37, 189, 167, 53, 134, 61, 52, 193, 225, 60, 31, 110, 10, 190, 77, 193, 204, 61, 62, 131, 49, 190, 72, 66, 246, 59, 255, 2, 82, 60, 172, 203, 8, 62, 177, 141, 102, 189, 105, 164, 231, 61, 228, 49, 118, 62, 250, 15, 59, 189, 2, 245, 169, 62, 251, 79, 76, 61, 197, 185, 140, 61, 16, 32, 162, 62, 12, 140, 96, 63, 165, 18, 199, 189, 193, 165, 140, 189, 163, 197, 27, 62, 65, 68, 132, 189, 240, 148, 141, 62, 54, 111, 128, 60, 156, 221, 238, 188, 236, 74, 163, 189, 117, 73, 204, 61, 91, 34, 7, 190, 77, 134, 178, 190, 147, 5, 243, 61, 26, 51, 8, 63, 61, 27, 157, 190, 208, 110, 30, 61, 54, 13, 217, 188, 181, 210, 167, 60, 53, 155, 241, 188, 58, 215, 14, 62, 89, 63, 212, 61, 59, 16, 225, 61, 120, 149, 150, 188, 75, 135, 239, 187, 237, 84, 248, 189, 206, 218, 39, 190, 26, 32, 211, 189, 230, 231, 142, 189, 47, 119, 152, 189, 36, 67, 0, 190, 198, 131, 31, 190, 198, 236, 178, 189, 4, 12, 96, 61, 14, 170, 39, 61, 210, 190, 204, 189, 28, 86, 146, 189, 129, 2, 170, 61, 70, 121, 41, 61, 89, 107, 39, 190, 172, 63, 139, 61, 224, 208, 55, 190, 228, 93, 230, 61, 179, 178, 62, 189, 96, 54, 20, 190, 122, 6, 147, 61, 96, 71, 217, 61, 171, 236, 170, 60, 10, 191, 134, 61, 65, 225, 245, 61, 245, 237, 32, 190, 161, 220, 249, 61, 232, 103, 88, 61, 29, 67, 158, 189, 66, 169, 79, 61, 66, 185, 215, 60, 169, 10, 127, 189, 197, 138, 22, 188, 103, 103, 43, 189, 119, 253, 147, 189, 40, 183, 71, 61, 207, 67, 116, 189, 26, 222, 33, 190, 45, 250, 23, 190, 176, 251, 44, 190, 13, 87, 29, 190, 150, 25, 167, 189, 202, 250, 200, 61, 144, 108, 90, 189, 84, 85, 34, 62, 142, 248, 34, 58, 55, 163, 37, 62, 183, 46, 27, 62, 253, 205, 202, 60, 113, 214, 80, 189, 122, 207, 185, 61, 221, 209, 220, 189, 221, 59, 92, 187, 88, 107, 135, 61, 57, 137, 217, 61, 190, 24, 222, 61, 52, 225, 88, 189, 148, 97, 211, 189, 249, 115, 52, 190, 68, 202, 52, 190, 189, 224, 76, 61, 79, 225, 210, 61, 10, 89, 146, 189, 226, 158, 73, 62, 134, 250, 90, 61, 161, 113, 173, 187, 155, 130, 141, 62, 251, 107, 26, 62, 52, 226, 109, 188, 122, 248, 137, 62, 244, 227, 70, 62, 159, 137, 173, 190, 162, 72, 128, 62, 130, 184, 86, 61, 197, 32, 149, 61, 221, 0, 119, 60, 144, 165, 44, 62, 153, 176, 18, 191, 191, 81, 190, 190, 76, 249, 91, 61, 49, 44, 203, 189, 105, 104, 209, 60, 181, 105, 104, 189, 196, 3, 213, 60, 235, 170, 21, 62, 43, 31, 36, 191, 181, 155, 112, 189, 0, 175, 216, 62, 34, 66, 22, 190, 195, 18, 106, 61, 222, 39, 69, 189, 95, 178, 169, 62, 4, 32, 150, 190, 135, 20, 185, 188, 97, 186, 162, 62, 239, 99, 16, 191, 151, 31, 94, 190, 120, 214, 158, 191, 83, 153, 13, 190, 162, 155, 218, 61, 187, 42, 154, 189, 33, 77, 159, 61, 101, 3, 34, 191, 169, 175, 3, 62, 81, 28, 9, 191, 3, 67, 225, 61, 107, 24, 149, 190, 224, 37, 19, 190, 123, 22, 31, 63, 40, 49, 245, 189, 10, 179, 45, 62, 155, 215, 69, 191, 160, 124, 32, 63, 218, 116, 133, 190, 228, 68, 183, 62, 121, 176, 194, 59, 26, 212, 137, 60, 167, 125, 32, 60, 83, 237, 194, 61, 167, 5, 49, 190, 149, 113, 138, 61, 250, 50, 81, 190, 14, 147, 54, 189, 154, 160, 202, 62, 188, 42, 153, 61, 145, 178, 140, 189, 43, 100, 34, 191, 61, 42, 36, 62, 178, 245, 78, 59, 227, 63, 45, 190, 119, 89, 188, 60, 61, 159, 4, 62, 130, 52, 33, 62, 162, 5, 89, 191, 9, 194, 22, 191, 234, 97, 161, 190, 116, 67, 38, 191, 27, 3, 94, 191, 238, 219, 1, 62, 109, 130, 71, 61, 219, 9, 100, 191, 70, 34, 239, 61, 169, 14, 56, 191, 136, 151, 99, 191, 225, 235, 136, 190, 153, 231, 4, 62, 177, 91, 52, 190, 53, 164, 134, 62, 44, 97, 191, 60, 111, 78, 178, 190, 115, 91, 118, 61, 60, 54, 35, 61, 187, 101, 163, 61, 140, 27, 225, 189, 250, 158, 158, 189, 40, 187, 18, 191, 172, 14, 114, 190, 101, 30, 19, 62, 201, 186, 241, 189, 82, 46, 24, 62, 17, 144, 21, 191, 183, 203, 4, 190, 123, 41, 133, 189, 92, 42, 77, 190, 165, 100, 34, 62, 198, 219, 94, 62, 63, 90, 66, 190, 48, 85, 124, 61, 241, 204, 69, 62, 241, 72, 87, 190, 133, 29, 49, 191, 16, 255, 241, 189, 77, 110, 141, 188, 248, 136, 13, 191, 164, 108, 213, 61, 115, 74, 32, 190, 69, 60, 238, 60, 4, 55, 187, 61, 76, 47, 238, 61, 151, 12, 135, 190, 224, 126, 230, 61, 83, 91, 164, 190, 204, 46, 69, 190, 254, 168, 128, 61, 174, 91, 2, 189, 134, 88, 154, 62, 46, 129, 89, 62, 255, 119, 183, 62, 13, 65, 23, 62, 84, 128, 127, 189, 165, 135, 7, 190, 230, 178, 153, 189, 152, 14, 115, 61, 115, 44, 238, 60, 227, 64, 199, 61, 107, 4, 164, 61, 125, 119, 210, 188, 102, 69, 38, 190, 39, 35, 222, 61, 9, 237, 64, 190, 138, 13, 92, 190, 64, 162, 176, 61, 191, 165, 135, 61, 158, 249, 121, 190, 54, 83, 215, 61, 38, 77, 154, 61, 83, 178, 230, 189, 41, 174, 61, 189, 175, 227, 163, 61, 19, 15, 28, 190, 228, 72, 37, 190, 218, 49, 141, 61, 124, 101, 165, 189, 49, 148, 32, 61, 70, 105, 212, 189, 187, 88, 59, 190, 189, 30, 200, 61, 159, 72, 26, 189, 24, 215, 117, 189, 213, 192, 7, 61, 177, 31, 246, 61};
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
                alignas(float) const unsigned char memory[] = {22, 68, 91, 62, 164, 26, 183, 61, 48, 253, 178, 61, 172, 103, 210, 61, 53, 182, 144, 61, 152, 130, 192, 189, 65, 38, 16, 61, 187, 61, 24, 190, 236, 215, 156, 62, 100, 187, 39, 62, 142, 143, 27, 61, 186, 11, 248, 60, 141, 255, 47, 61, 70, 192, 21, 62, 103, 114, 150, 190, 17, 174, 142, 60, 76, 141, 70, 62, 143, 45, 179, 189, 129, 215, 55, 62, 222, 23, 162, 60, 248, 27, 154, 61, 234, 205, 118, 190, 97, 63, 219, 189, 163, 51, 12, 188, 121, 243, 52, 190, 2, 86, 98, 190, 28, 222, 5, 190, 226, 250, 123, 190, 12, 100, 74, 62, 62, 40, 11, 189, 9, 93, 93, 189, 217, 159, 106, 190};
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
                alignas(float) const unsigned char memory[] = {237, 32, 61, 191, 167, 59, 30, 190, 114, 168, 9, 63, 106, 35, 152, 62, 54, 238, 126, 63, 226, 104, 44, 190, 73, 95, 100, 63, 254, 106, 248, 61, 181, 228, 63, 63, 90, 222, 187, 62, 166, 203, 228, 61, 71, 239, 39, 190, 222, 239, 227, 190, 132, 42, 148, 190, 174, 196, 139, 191, 6, 41, 136, 62, 192, 157, 246, 190, 142, 12, 73, 62, 244, 5, 210, 190, 45, 162, 95, 189, 65, 80, 54, 62, 142, 150, 49, 62, 89, 70, 174, 61, 193, 199, 23, 190, 91, 206, 69, 62, 197, 199, 156, 187, 41, 233, 172, 189, 145, 133, 5, 190, 225, 192, 12, 191, 195, 168, 71, 63, 54, 188, 232, 61, 57, 163, 83, 189, 33, 5, 25, 62, 186, 198, 252, 61, 175, 6, 249, 62, 126, 50, 0, 191, 142, 194, 4, 62, 168, 116, 213, 61, 199, 242, 59, 190, 98, 245, 179, 189, 25, 87, 23, 62, 4, 247, 11, 190, 178, 108, 157, 62, 163, 197, 135, 190, 49, 48, 195, 60, 5, 75, 45, 190, 241, 38, 110, 62, 213, 47, 124, 189, 149, 196, 254, 189, 33, 135, 199, 60, 43, 193, 36, 60, 92, 147, 242, 61, 195, 147, 30, 191, 187, 162, 135, 62, 102, 95, 110, 61, 166, 139, 179, 61, 67, 111, 148, 62, 94, 240, 166, 187, 236, 248, 11, 62, 12, 50, 108, 62, 157, 202, 61, 190, 163, 226, 110, 61, 86, 130, 108, 190, 144, 120, 10, 62};
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
                alignas(float) const unsigned char memory[] = {231, 250, 21, 190, 174, 152, 39, 189};
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
    alignas(float) const unsigned char memory[] = {85, 0, 190, 63, 11, 226, 220, 191, 21, 228, 234, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {206, 107, 29, 64, 218, 129, 40, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0070/steps/000000000010000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}