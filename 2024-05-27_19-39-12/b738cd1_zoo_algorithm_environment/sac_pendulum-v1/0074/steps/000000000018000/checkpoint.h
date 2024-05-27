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
                alignas(float) const unsigned char memory[] = {74, 217, 207, 62, 203, 102, 16, 62, 20, 8, 236, 188, 34, 199, 198, 62, 66, 247, 93, 63, 205, 171, 203, 62, 239, 130, 128, 191, 223, 4, 154, 63, 109, 177, 170, 62, 185, 99, 97, 190, 226, 10, 75, 62, 129, 105, 10, 63, 97, 241, 88, 190, 26, 146, 68, 190, 232, 237, 234, 190, 97, 110, 29, 190, 40, 106, 128, 63, 121, 119, 14, 63, 46, 47, 94, 190, 101, 206, 135, 190, 146, 114, 50, 191, 211, 101, 60, 63, 245, 64, 32, 191, 40, 13, 104, 190, 136, 226, 210, 61, 66, 174, 23, 63, 2, 106, 157, 62, 102, 69, 42, 63, 29, 104, 40, 191, 225, 231, 254, 189, 227, 85, 77, 63, 9, 172, 13, 191, 112, 77, 108, 62, 67, 217, 189, 190, 39, 153, 59, 191, 151, 239, 241, 189, 115, 98, 0, 63, 153, 13, 70, 63, 99, 103, 239, 62, 254, 159, 235, 62, 151, 37, 7, 63, 63, 237, 69, 190, 28, 236, 168, 62, 153, 79, 109, 191, 175, 30, 156, 62, 20, 129, 166, 62, 237, 73, 214, 63, 132, 149, 219, 62, 95, 216, 42, 191, 191, 22, 145, 63, 206, 236, 66, 62, 68, 86, 1, 63, 221, 149, 161, 63, 248, 153, 215, 62, 39, 86, 147, 190, 182, 121, 201, 62, 0, 234, 167, 59, 144, 37, 217, 62, 215, 178, 118, 61, 154, 16, 2, 63, 46, 242, 100, 62, 44, 101, 0, 191, 164, 244, 204, 61, 85, 13, 1, 62, 57, 45, 146, 191, 83, 44, 136, 190, 124, 180, 5, 63, 10, 138, 104, 62, 164, 171, 29, 63, 137, 39, 42, 63, 124, 192, 31, 190, 71, 88, 30, 190, 211, 191, 52, 191, 223, 208, 102, 191, 243, 14, 71, 190, 240, 245, 26, 191, 31, 194, 163, 62, 164, 192, 139, 189, 52, 152, 255, 62, 123, 0, 143, 191, 217, 122, 25, 190, 102, 34, 167, 190, 192, 172, 194, 190, 212, 95, 4, 191, 137, 133, 88, 60, 79, 82, 120, 189, 103, 153, 232, 190, 69, 105, 195, 62, 154, 52, 96, 63, 125, 128, 197, 62, 25, 26, 63, 190, 117, 143, 224, 191, 222, 27, 137, 190, 218, 77, 169, 61, 218, 160, 120, 190, 105, 9, 36, 63};
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
                alignas(float) const unsigned char memory[] = {240, 182, 33, 191, 240, 102, 128, 62, 149, 35, 236, 62, 82, 216, 241, 190, 33, 125, 165, 189, 39, 78, 138, 189, 215, 251, 19, 61, 48, 106, 41, 191, 85, 51, 48, 59, 134, 134, 222, 189, 18, 30, 39, 189, 43, 213, 13, 63, 174, 219, 74, 60, 72, 47, 152, 62, 90, 136, 195, 189, 41, 237, 145, 62, 78, 63, 6, 63, 137, 82, 19, 191, 219, 211, 183, 62, 93, 32, 29, 62, 194, 129, 63, 191, 158, 50, 49, 190, 124, 6, 179, 61, 0, 85, 13, 191, 215, 121, 46, 63, 213, 146, 220, 190, 74, 128, 170, 61, 52, 168, 196, 190, 137, 116, 128, 62, 33, 45, 28, 62, 239, 70, 165, 62, 136, 22, 2, 191};
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
                alignas(float) const unsigned char memory[] = {212, 107, 228, 61, 125, 110, 79, 190, 188, 140, 28, 189, 180, 37, 163, 191, 226, 28, 143, 190, 92, 192, 149, 191, 61, 151, 124, 60, 127, 138, 92, 191, 240, 158, 99, 191, 184, 96, 54, 191, 213, 86, 140, 190, 92, 216, 9, 190, 239, 174, 39, 63, 160, 188, 141, 62, 91, 125, 206, 190, 121, 51, 88, 62, 167, 234, 110, 62, 27, 12, 183, 62, 178, 126, 211, 61, 60, 219, 5, 63, 185, 178, 156, 60, 48, 203, 27, 191, 19, 29, 103, 190, 23, 72, 36, 191, 113, 125, 62, 62, 77, 58, 77, 62, 249, 42, 65, 191, 42, 155, 20, 191, 101, 14, 105, 62, 183, 218, 196, 61, 44, 218, 128, 62, 242, 173, 219, 62, 17, 1, 242, 189, 218, 104, 219, 188, 144, 205, 74, 190, 138, 123, 81, 61, 215, 168, 135, 62, 194, 217, 96, 61, 221, 232, 98, 190, 62, 136, 142, 191, 157, 147, 7, 62, 126, 184, 20, 62, 2, 9, 184, 62, 150, 130, 34, 191, 24, 130, 5, 190, 41, 229, 129, 62, 103, 66, 77, 62, 185, 90, 149, 188, 188, 84, 137, 189, 137, 6, 234, 190, 195, 132, 174, 189, 165, 149, 57, 62, 227, 84, 122, 62, 88, 70, 197, 191, 205, 210, 66, 62, 213, 235, 186, 187, 215, 101, 201, 190, 99, 139, 10, 191, 110, 59, 237, 60, 21, 90, 110, 189, 104, 45, 19, 189, 166, 236, 153, 62, 83, 172, 33, 191, 220, 42, 140, 189, 106, 230, 122, 61, 130, 13, 46, 188, 225, 128, 159, 61, 182, 246, 134, 62, 187, 28, 138, 62, 121, 23, 234, 61, 46, 252, 140, 189, 55, 33, 133, 62, 86, 248, 143, 62, 195, 155, 224, 62, 220, 241, 7, 62, 133, 99, 118, 61, 98, 153, 26, 191, 76, 129, 79, 189, 221, 88, 198, 62, 86, 98, 17, 191, 184, 18, 179, 61, 88, 249, 84, 191, 154, 174, 47, 62, 100, 233, 53, 191, 74, 72, 101, 190, 3, 50, 152, 190, 171, 99, 163, 62, 249, 29, 241, 62, 91, 221, 5, 62, 101, 26, 24, 62, 9, 139, 100, 190, 8, 235, 176, 62, 121, 170, 191, 188, 169, 250, 207, 190, 198, 169, 107, 190, 236, 229, 236, 190, 181, 213, 36, 62, 30, 133, 78, 191, 200, 7, 49, 62, 93, 199, 25, 191, 135, 79, 30, 61, 42, 95, 170, 191, 91, 56, 91, 62, 39, 162, 222, 190, 106, 93, 150, 191, 199, 99, 170, 189, 212, 104, 65, 191, 52, 45, 126, 62, 132, 9, 69, 190, 210, 114, 240, 61, 205, 233, 60, 191, 207, 255, 145, 59, 154, 29, 25, 61, 57, 201, 123, 189, 27, 66, 161, 60, 54, 109, 223, 189, 9, 11, 100, 190, 72, 195, 88, 190, 116, 13, 94, 190, 60, 102, 141, 191, 163, 34, 149, 61, 127, 246, 103, 62, 190, 232, 208, 61, 254, 171, 40, 190, 42, 225, 247, 188, 98, 229, 56, 190, 115, 124, 191, 62, 199, 26, 104, 187, 95, 47, 251, 189, 11, 4, 20, 190, 148, 214, 5, 190, 73, 141, 144, 189, 104, 69, 204, 189, 100, 238, 38, 190, 29, 57, 47, 190, 50, 55, 24, 190, 162, 236, 244, 189, 130, 242, 254, 188, 25, 43, 29, 190, 113, 248, 188, 189, 212, 169, 223, 189, 92, 103, 21, 62, 170, 233, 142, 189, 61, 52, 170, 189, 37, 231, 209, 61, 22, 149, 133, 61, 42, 246, 244, 189, 242, 191, 137, 60, 131, 127, 252, 61, 227, 242, 35, 189, 252, 184, 175, 61, 155, 222, 141, 189, 203, 254, 237, 187, 118, 132, 192, 189, 122, 157, 2, 62, 140, 151, 25, 190, 2, 106, 169, 189, 18, 47, 7, 190, 28, 212, 238, 61, 173, 134, 18, 190, 238, 0, 231, 59, 203, 130, 96, 189, 160, 62, 99, 191, 120, 226, 185, 189, 71, 84, 58, 190, 159, 152, 114, 190, 175, 96, 8, 190, 29, 146, 17, 61, 114, 69, 106, 189, 234, 94, 226, 62, 218, 10, 149, 62, 69, 133, 112, 62, 43, 68, 118, 190, 216, 83, 89, 62, 44, 233, 5, 189, 62, 169, 143, 189, 167, 251, 168, 191, 43, 211, 159, 191, 57, 225, 220, 189, 247, 77, 141, 189, 159, 170, 80, 189, 6, 87, 154, 190, 161, 162, 68, 60, 84, 253, 117, 189, 44, 195, 59, 60, 106, 98, 48, 191, 91, 248, 6, 63, 254, 31, 108, 190, 205, 49, 73, 61, 98, 72, 216, 61, 0, 65, 97, 61, 185, 195, 73, 62, 205, 100, 11, 190, 109, 236, 9, 62, 218, 186, 222, 58, 238, 9, 130, 62, 67, 92, 185, 61, 71, 45, 83, 62, 231, 124, 204, 189, 214, 207, 226, 62, 32, 191, 57, 61, 123, 136, 243, 62, 69, 215, 167, 62, 52, 144, 156, 189, 211, 162, 59, 190, 138, 46, 101, 190, 39, 127, 26, 62, 4, 126, 94, 189, 183, 223, 102, 61, 86, 211, 134, 189, 158, 5, 64, 61, 244, 86, 191, 188, 205, 74, 194, 61, 248, 179, 54, 61, 161, 21, 213, 61, 46, 246, 29, 63, 5, 90, 89, 190, 138, 108, 165, 190, 108, 116, 142, 62, 119, 118, 113, 62, 28, 81, 53, 190, 190, 6, 31, 189, 194, 84, 111, 187, 103, 99, 181, 188, 132, 163, 211, 189, 249, 46, 147, 191, 12, 172, 133, 62, 19, 32, 58, 191, 52, 10, 84, 187, 66, 252, 129, 191, 67, 185, 141, 61, 210, 45, 54, 191, 109, 122, 123, 191, 129, 81, 14, 190, 78, 178, 75, 190, 165, 150, 213, 189, 115, 146, 180, 62, 46, 221, 11, 62, 52, 211, 150, 190, 111, 41, 99, 191, 69, 12, 253, 61, 197, 103, 84, 62, 187, 125, 247, 62, 58, 241, 28, 62, 52, 59, 72, 189, 148, 200, 9, 191, 10, 148, 157, 190, 138, 132, 141, 190, 71, 151, 5, 62, 138, 187, 139, 189, 76, 92, 52, 191, 201, 41, 20, 189, 196, 168, 51, 190, 86, 218, 198, 60, 28, 74, 181, 62, 2, 199, 202, 190, 230, 80, 52, 188, 67, 75, 41, 190, 148, 254, 158, 62, 71, 252, 214, 61, 250, 16, 57, 190, 195, 139, 117, 57, 92, 148, 232, 190, 54, 220, 208, 59, 3, 197, 173, 188, 91, 173, 21, 62, 127, 149, 148, 62, 227, 71, 77, 61, 179, 72, 50, 191, 30, 213, 43, 191, 59, 41, 14, 63, 29, 65, 85, 191, 180, 76, 103, 189, 32, 193, 114, 190, 89, 96, 187, 61, 126, 0, 136, 190, 146, 155, 167, 190, 61, 62, 6, 62, 99, 15, 250, 189, 126, 108, 66, 190, 114, 63, 176, 189, 98, 203, 110, 190, 16, 223, 63, 62, 107, 63, 110, 190, 47, 127, 76, 190, 136, 208, 96, 190, 34, 41, 148, 62, 51, 139, 15, 190, 134, 10, 158, 188, 115, 6, 176, 189, 163, 65, 249, 190, 253, 7, 46, 191, 65, 113, 247, 189, 132, 185, 0, 191, 15, 148, 28, 62, 229, 156, 74, 191, 134, 66, 20, 60, 211, 62, 148, 190, 36, 49, 200, 190, 192, 134, 60, 188, 4, 222, 163, 62, 229, 48, 193, 61, 168, 249, 19, 191, 202, 122, 60, 62, 220, 186, 119, 62, 150, 55, 46, 62, 159, 83, 137, 189, 199, 27, 132, 62, 211, 245, 28, 190, 145, 28, 212, 190, 11, 222, 71, 61, 78, 205, 162, 191, 7, 59, 86, 62, 240, 142, 232, 61, 184, 121, 218, 190, 44, 130, 59, 189, 39, 178, 151, 62, 215, 57, 194, 62, 198, 67, 197, 62, 255, 120, 5, 190, 77, 60, 231, 61, 198, 183, 9, 190, 209, 168, 175, 189, 156, 30, 22, 191, 6, 177, 46, 190, 72, 178, 182, 190, 190, 201, 139, 62, 186, 149, 83, 190, 183, 155, 35, 190, 186, 75, 230, 61, 182, 46, 196, 61, 106, 42, 18, 60, 191, 195, 68, 190, 194, 71, 180, 61, 179, 151, 136, 190, 31, 197, 38, 62, 209, 197, 162, 189, 94, 170, 191, 190, 136, 85, 3, 61, 69, 57, 79, 189, 207, 14, 17, 62, 191, 210, 221, 188, 250, 102, 196, 190, 195, 168, 8, 191, 84, 140, 130, 190, 104, 157, 69, 190, 6, 34, 34, 62, 66, 36, 121, 190, 246, 163, 90, 62, 185, 88, 144, 62, 159, 123, 33, 62, 127, 167, 77, 191, 169, 76, 27, 189, 64, 21, 107, 188, 4, 238, 150, 62, 50, 220, 50, 62, 112, 228, 151, 189, 146, 52, 32, 62, 136, 90, 141, 191, 222, 214, 195, 189, 168, 93, 77, 61, 79, 79, 0, 63, 142, 133, 78, 61, 239, 58, 76, 62, 90, 64, 27, 61, 194, 74, 123, 191, 220, 61, 86, 62, 239, 196, 77, 62, 85, 77, 160, 62, 144, 155, 137, 61, 113, 188, 33, 62, 15, 192, 84, 190, 136, 58, 4, 191, 109, 229, 138, 191, 18, 208, 124, 61, 5, 198, 29, 190, 96, 161, 122, 61, 86, 36, 25, 62, 46, 91, 6, 62, 37, 170, 145, 190, 171, 230, 150, 191, 18, 78, 228, 61, 57, 164, 94, 189, 32, 59, 213, 61, 144, 33, 153, 189, 169, 66, 117, 190, 26, 33, 44, 62, 215, 186, 252, 190, 235, 162, 67, 190, 209, 55, 67, 189, 222, 156, 139, 190, 17, 204, 255, 61, 152, 61, 253, 190, 217, 69, 138, 189, 58, 8, 160, 190, 208, 20, 15, 190, 171, 62, 134, 191, 131, 94, 164, 60, 77, 66, 156, 190, 10, 2, 146, 61, 208, 80, 110, 62, 43, 57, 39, 191, 36, 255, 5, 62, 196, 108, 69, 191, 246, 181, 59, 190, 211, 235, 196, 189, 247, 66, 252, 190, 203, 38, 22, 189, 35, 163, 245, 61, 43, 214, 132, 62, 75, 4, 251, 189, 103, 94, 240, 190, 115, 75, 6, 191, 55, 105, 219, 190, 208, 229, 144, 191, 143, 125, 161, 190, 194, 56, 3, 190, 182, 92, 156, 190, 94, 0, 222, 190, 229, 202, 17, 62, 227, 37, 251, 187, 109, 99, 236, 61, 168, 145, 58, 62, 247, 101, 253, 61, 216, 103, 118, 60, 167, 37, 75, 62, 234, 253, 150, 62, 122, 180, 17, 62, 255, 1, 185, 190, 235, 15, 27, 190, 103, 232, 47, 62, 4, 142, 3, 191, 97, 145, 144, 191, 35, 32, 66, 191, 121, 90, 18, 191, 204, 86, 65, 62, 57, 43, 77, 187, 1, 131, 173, 190, 218, 26, 155, 62, 123, 149, 89, 63, 201, 70, 52, 62, 244, 203, 137, 190, 98, 200, 57, 188, 53, 97, 35, 190, 13, 7, 251, 61, 255, 101, 16, 188, 159, 17, 141, 62, 31, 168, 114, 62, 63, 158, 30, 190, 217, 180, 165, 61, 68, 99, 40, 190, 12, 163, 238, 61, 175, 112, 188, 60, 6, 84, 115, 189, 146, 209, 95, 61, 152, 216, 248, 189, 82, 70, 219, 189, 210, 187, 15, 189, 209, 10, 51, 190, 247, 121, 80, 189, 223, 59, 96, 189, 18, 176, 148, 188, 0, 147, 202, 61, 108, 210, 111, 188, 233, 35, 86, 189, 186, 38, 182, 189, 42, 78, 212, 187, 24, 3, 136, 189, 206, 41, 13, 62, 99, 172, 18, 190, 27, 167, 223, 188, 108, 105, 67, 189, 112, 179, 172, 189, 144, 229, 69, 190, 221, 238, 189, 188, 19, 30, 139, 61, 187, 40, 254, 189, 23, 121, 82, 189, 225, 110, 197, 189, 226, 117, 238, 189, 24, 54, 157, 189, 34, 110, 185, 189, 165, 45, 16, 189, 195, 56, 155, 189, 124, 63, 55, 61, 92, 77, 35, 61, 54, 167, 220, 189, 53, 162, 186, 189, 38, 61, 17, 190, 198, 28, 172, 189, 171, 32, 34, 190, 192, 13, 60, 189, 160, 141, 93, 61, 124, 144, 73, 190, 141, 231, 223, 189, 208, 167, 56, 190, 193, 78, 139, 61, 76, 77, 13, 62, 13, 96, 44, 190, 69, 80, 193, 61, 61, 206, 174, 61, 164, 99, 37, 190, 77, 4, 51, 60, 49, 212, 29, 62, 158, 251, 209, 61, 200, 167, 159, 61, 88, 249, 12, 61, 42, 245, 208, 60, 87, 233, 82, 190, 34, 162, 105, 61, 215, 233, 249, 189, 226, 206, 21, 190, 30, 243, 85, 61, 9, 58, 153, 188, 159, 13, 192, 60, 230, 44, 60, 62, 181, 224, 114, 190, 223, 254, 38, 188, 222, 75, 133, 190, 246, 102, 107, 188, 12, 147, 77, 61, 17, 0, 102, 61, 100, 204, 15, 63, 39, 4, 142, 62, 181, 107, 25, 190, 15, 16, 132, 59, 222, 11, 134, 62, 202, 58, 172, 61, 247, 211, 63, 62, 46, 215, 143, 190, 116, 207, 25, 62, 161, 122, 185, 61, 162, 92, 102, 190, 129, 112, 189, 61, 23, 42, 14, 62, 34, 113, 64, 190, 215, 84, 198, 61, 115, 234, 52, 189, 146, 193, 135, 62, 6, 61, 14, 190, 16, 59, 106, 190, 136, 198, 124, 62, 238, 235, 7, 189, 68, 189, 33, 190, 235, 247, 224, 61, 50, 42, 127, 191, 219, 37, 60, 187, 71, 149, 89, 191, 102, 165, 209, 188, 89, 158, 154, 191, 174, 145, 139, 61, 199, 136, 158, 190, 175, 196, 127, 191, 58, 95, 212, 190, 254, 74, 199, 190, 236, 205, 45, 188, 237, 145, 121, 61, 253, 37, 117, 61, 174, 143, 51, 191, 243, 131, 146, 190, 216, 151, 86, 62, 136, 151, 207, 61, 21, 101, 23, 61, 137, 234, 89, 60, 232, 65, 199, 61, 41, 13, 139, 188, 6, 0, 2, 191, 33, 201, 33, 191, 106, 86, 56, 62, 110, 150, 45, 60, 39, 221, 192, 189, 234, 177, 250, 189, 241, 93, 40, 62, 101, 173, 133, 189, 86, 79, 231, 61, 51, 69, 104, 188, 190, 97, 201, 57, 14, 147, 1, 62, 185, 117, 34, 190, 241, 85, 132, 61, 72, 220, 2, 191, 104, 217, 87, 62, 186, 255, 217, 190, 48, 112, 32, 191, 12, 254, 97, 62, 122, 110, 60, 61, 177, 217, 179, 62, 90, 97, 59, 190, 245, 146, 230, 61, 117, 78, 218, 60, 29, 58, 180, 62, 167, 6, 45, 190, 212, 16, 221, 189, 5, 145, 12, 61, 161, 120, 155, 190, 168, 166, 76, 60, 64, 47, 146, 62, 240, 30, 185, 62, 176, 5, 61, 61, 59, 155, 90, 62, 189, 83, 230, 190, 210, 133, 162, 190, 50, 38, 204, 62, 198, 250, 41, 191, 245, 110, 97, 190, 168, 91, 28, 62, 124, 97, 98, 61, 6, 175, 47, 62, 111, 219, 48, 190, 170, 200, 241, 188, 157, 31, 147, 190, 120, 16, 16, 62, 184, 34, 210, 62, 39, 229, 21, 190, 248, 136, 160, 62, 134, 31, 17, 191, 214, 141, 130, 189, 212, 109, 163, 190, 220, 52, 117, 62, 245, 73, 177, 191, 107, 179, 25, 62, 90, 128, 224, 61, 0, 253, 180, 187, 139, 206, 138, 62, 3, 203, 117, 190, 4, 167, 57, 62, 120, 46, 184, 189, 142, 120, 238, 60, 213, 44, 255, 62, 204, 46, 88, 60, 237, 0, 186, 61, 36, 6, 129, 190, 13, 12, 141, 191, 19, 212, 15, 191, 126, 63, 10, 191, 199, 43, 203, 190, 240, 2, 221, 61, 208, 141, 16, 62, 227, 19, 200, 190, 150, 63, 128, 62, 161, 155, 240, 61, 87, 3, 5, 190, 48, 4, 141, 189, 143, 225, 138, 61, 39, 67, 28, 59, 160, 213, 67, 62, 57, 25, 121, 61, 185, 56, 1, 62, 100, 210, 69, 62, 78, 238, 156, 62, 182, 238, 228, 62, 38, 38, 203, 61, 181, 143, 232, 190, 121, 48, 4, 62, 14, 226, 221, 62, 224, 128, 157, 190, 245, 28, 240, 190, 24, 186, 134, 191, 31, 132, 31, 62, 142, 154, 168, 189, 212, 196, 187, 61, 68, 63, 143, 190, 134, 202, 144, 61, 178, 224, 58, 62, 82, 240, 50, 60, 234, 244, 155, 59, 56, 205, 96, 62, 233, 141, 234, 61, 92, 115, 49, 62, 21, 239, 154, 61, 117, 241, 214, 59, 251, 188, 95, 190, 47, 43, 36, 62, 218, 138, 43, 61, 213, 113, 65, 190, 100, 141, 240, 189, 115, 62, 193, 189, 2, 26, 165, 59, 239, 204, 221, 189, 140, 193, 45, 62, 89, 202, 157, 61, 34, 173, 71, 61, 245, 122, 189, 60, 244, 231, 241, 189, 231, 117, 210, 61, 173, 122, 215, 188, 50, 0, 21, 189, 253, 99, 190, 189, 151, 24, 0, 61, 43, 200, 9, 188, 64, 176, 32, 190, 88, 99, 113, 61, 110, 147, 178, 61, 0, 249, 224, 61, 93, 246, 45, 190, 34, 122, 254, 61, 26, 19, 166, 189, 146, 23, 238, 189, 52, 255, 19, 190, 187, 119, 20, 190, 114, 126, 252, 189, 107, 16, 15, 190, 94, 93, 96, 189, 183, 86, 228, 187, 101, 205, 53, 188, 187, 127, 63, 190, 55, 188, 136, 191, 90, 241, 190, 190, 46, 21, 165, 189, 37, 5, 39, 191, 183, 75, 106, 62, 254, 37, 157, 191, 171, 167, 248, 187, 132, 45, 26, 62, 237, 45, 233, 59, 171, 36, 137, 61, 24, 72, 218, 61, 203, 124, 163, 62, 185, 50, 62, 191, 136, 138, 227, 61, 100, 235, 4, 190, 184, 184, 164, 190, 76, 108, 149, 61, 195, 108, 36, 62, 87, 208, 84, 190, 239, 124, 173, 191, 210, 195, 9, 62, 36, 80, 80, 190, 214, 100, 233, 190, 132, 76, 22, 61, 190, 161, 62, 188, 3, 125, 137, 190, 177, 26, 23, 188, 218, 164, 222, 61, 230, 19, 76, 59, 110, 219, 60, 191, 49, 200, 128, 61, 183, 254, 120, 188, 97, 68, 201, 59, 53, 19, 111, 189, 177, 87, 219, 61, 138, 129, 28, 62, 56, 239, 37, 62, 210, 251, 68, 189, 200, 46, 35, 60, 203, 179, 108, 62, 226, 173, 184, 62, 76, 170, 158, 62, 103, 197, 198, 190, 158, 7, 212, 60, 80, 63, 34, 62, 232, 62, 34, 189, 180, 171, 16, 189, 186, 241, 86, 191, 55, 59, 133, 189, 206, 40, 229, 189, 61, 156, 129, 188, 6, 228, 181, 190, 117, 18, 197, 60, 178, 194, 128, 61, 44, 107, 88, 62, 53, 182, 67, 62, 30, 5, 194, 62, 53, 200, 215, 61, 216, 29, 234, 61, 149, 155, 140, 189, 194, 95, 187, 188, 116, 148, 138, 189, 87, 100, 94, 189, 218, 246, 17, 61, 212, 110, 79, 62, 139, 152, 32, 62, 134, 180, 8, 190, 195, 24, 111, 62, 42, 9, 90, 190, 224, 13, 169, 190, 72, 193, 18, 62, 187, 118, 32, 190, 43, 170, 52, 189, 204, 146, 152, 62, 122, 213, 91, 61, 212, 172, 176, 188, 31, 129, 186, 61, 93, 16, 148, 62, 150, 94, 55, 61, 94, 247, 150, 61, 234, 86, 119, 62, 9, 247, 97, 190, 227, 241, 141, 190, 90, 151, 249, 189, 208, 218, 61, 61, 176, 35, 80, 62, 241, 237, 213, 62, 120, 124, 78, 62, 229, 149, 153, 62, 133, 175, 29, 191, 56, 23, 145, 190, 120, 51, 40, 62, 247, 28, 109, 62, 250, 30, 150, 190, 203, 18, 43, 189, 61, 225, 240, 188, 167, 230, 107, 191, 169, 10, 87, 190, 64, 226, 251, 189, 52, 145, 114, 190, 17, 37, 54, 62, 49, 131, 135, 191, 15, 118, 181, 60, 209, 11, 206, 62, 54, 144, 34, 62, 119, 73, 186, 190, 153, 233, 168, 61, 188, 71, 233, 61, 199, 251, 69, 191, 223, 246, 184, 61, 13, 209, 222, 190, 35, 107, 216, 190, 149, 212, 83, 61, 4, 191, 153, 62, 26, 23, 121, 190, 128, 7, 250, 191, 252, 231, 5, 61, 31, 177, 164, 188, 177, 177, 130, 191, 170, 139, 112, 190, 165, 227, 191, 61, 179, 216, 104, 190, 35, 186, 95, 62, 171, 21, 156, 61, 175, 197, 180, 190, 22, 244, 140, 190, 27, 0, 180, 61, 11, 80, 209, 191, 238, 3, 187, 62, 131, 170, 167, 191, 58, 98, 137, 188, 196, 1, 177, 191, 137, 213, 69, 62, 171, 253, 196, 61, 228, 52, 175, 191, 153, 112, 57, 62, 204, 146, 48, 190, 169, 58, 149, 62, 156, 43, 142, 190, 69, 192, 225, 190, 4, 5, 136, 189, 79, 242, 243, 191, 161, 211, 144, 61, 131, 43, 50, 60, 113, 88, 229, 189, 120, 156, 205, 62, 74, 6, 176, 61, 178, 10, 172, 61, 213, 105, 190, 190, 143, 125, 191, 190, 69, 103, 98, 62, 65, 74, 107, 62, 103, 41, 3, 61, 8, 188, 114, 190, 134, 239, 251, 60, 168, 165, 97, 191, 15, 229, 198, 62, 152, 11, 254, 189, 39, 134, 25, 190, 218, 192, 131, 189, 83, 103, 158, 189, 71, 178, 13, 190, 114, 124, 226, 61, 141, 161, 183, 60, 95, 222, 193, 189, 237, 177, 139, 186, 104, 234, 200, 61, 55, 83, 37, 62, 44, 124, 229, 189, 250, 185, 199, 189, 65, 61, 212, 61, 110, 9, 183, 189, 202, 68, 208, 188, 75, 9, 192, 188, 137, 252, 9, 189, 53, 0, 196, 61, 197, 144, 116, 188, 254, 94, 36, 61, 38, 53, 232, 189, 36, 9, 254, 60, 163, 20, 89, 60, 43, 134, 190, 189, 42, 79, 6, 190, 142, 110, 193, 188, 247, 73, 47, 190, 117, 131, 128, 189, 51, 103, 247, 186, 252, 202, 81, 61, 100, 224, 54, 60, 106, 11, 30, 190, 73, 169, 140, 189, 180, 181, 105, 188, 7, 203, 46, 61, 139, 5, 154, 61, 226, 135, 51, 190, 132, 51, 40, 190, 45, 52, 51, 190, 40, 216, 157, 189, 200, 220, 27, 61, 116, 66, 251, 61, 27, 64, 175, 60, 106, 38, 14, 190, 55, 231, 222, 61, 48, 121, 184, 187, 10, 155, 224, 61, 88, 145, 102, 61, 120, 232, 15, 190, 46, 239, 178, 61, 16, 206, 78, 190, 184, 202, 151, 189, 242, 190, 173, 189, 122, 12, 199, 189, 25, 103, 221, 189, 14, 28, 50, 61, 223, 253, 24, 61, 167, 251, 19, 190, 206, 90, 187, 60, 237, 211, 138, 61, 85, 9, 23, 62, 169, 186, 43, 190, 103, 89, 58, 190, 196, 8, 3, 189, 29, 225, 41, 62, 179, 146, 158, 188, 21, 44, 138, 190, 62, 239, 77, 188, 6, 68, 51, 62, 187, 2, 39, 189, 78, 229, 76, 61, 84, 29, 72, 191, 45, 218, 167, 189, 158, 181, 148, 62, 183, 143, 12, 62, 126, 162, 12, 191, 74, 212, 38, 62, 161, 37, 165, 62, 95, 205, 140, 188, 62, 38, 165, 61, 64, 64, 26, 190, 70, 11, 90, 190, 205, 201, 13, 62, 156, 143, 31, 62, 230, 57, 153, 61, 216, 252, 20, 192, 122, 190, 41, 62, 225, 244, 137, 61, 205, 246, 131, 191, 148, 101, 240, 190, 6, 155, 126, 61, 253, 127, 161, 188, 38, 198, 207, 189, 204, 58, 55, 62, 188, 184, 225, 190, 2, 81, 108, 61, 2, 231, 28, 62, 127, 53, 244, 190, 69, 16, 108, 61, 26, 225, 151, 190, 200, 62, 169, 189, 190, 205, 101, 189, 247, 238, 215, 61, 183, 217, 164, 191, 44, 155, 150, 190, 9, 171, 204, 188, 118, 130, 189, 189, 206, 220, 149, 189, 148, 39, 139, 189, 244, 40, 139, 61, 108, 217, 196, 190, 157, 124, 123, 189, 205, 197, 6, 190, 221, 124, 54, 191, 232, 240, 201, 61, 179, 49, 3, 190, 13, 159, 147, 61, 92, 84, 60, 191, 116, 25, 134, 190, 241, 3, 191, 61, 226, 24, 81, 188, 111, 79, 44, 61, 242, 244, 217, 62, 137, 165, 104, 187, 99, 155, 39, 62, 244, 91, 129, 62, 86, 224, 253, 190, 244, 228, 187, 189, 98, 99, 242, 61, 142, 254, 25, 60, 9, 184, 195, 60, 228, 92, 2, 61, 76, 36, 240, 61, 99, 93, 26, 190, 64, 100, 69, 191, 64, 164, 150, 63, 140, 55, 7, 190, 186, 238, 210, 62, 156, 144, 200, 62, 63, 197, 177, 62, 127, 95, 187, 190, 180, 85, 93, 190, 93, 224, 176, 61, 48, 60, 167, 190, 62, 107, 232, 189, 194, 147, 172, 190, 48, 25, 227, 61, 60, 31, 139, 59, 100, 48, 216, 189, 125, 102, 27, 191, 141, 68, 24, 62, 5, 27, 227, 189, 0, 50, 138, 62, 199, 4, 16, 63, 255, 150, 230, 62, 40, 159, 93, 61, 34, 139, 87, 191, 221, 227, 129, 188, 107, 217, 143, 62, 226, 186, 37, 190};
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
                alignas(float) const unsigned char memory[] = {213, 37, 73, 62, 47, 62, 27, 62, 13, 41, 231, 61, 246, 145, 195, 188, 236, 162, 239, 189, 133, 228, 215, 61, 63, 36, 104, 190, 170, 174, 146, 188, 72, 119, 71, 61, 170, 205, 12, 61, 105, 240, 116, 62, 39, 103, 5, 190, 86, 84, 25, 190, 126, 65, 180, 189, 30, 210, 22, 61, 199, 223, 241, 188, 231, 86, 187, 62, 68, 157, 68, 62, 226, 9, 103, 61, 72, 20, 120, 190, 118, 164, 195, 62, 206, 24, 224, 61, 156, 180, 156, 60, 184, 204, 244, 61, 128, 28, 125, 62, 95, 222, 18, 62, 85, 69, 23, 62, 202, 172, 54, 190, 229, 246, 211, 189, 144, 93, 112, 62, 88, 167, 169, 62, 72, 238, 243, 61};
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
                alignas(float) const unsigned char memory[] = {236, 9, 149, 191, 95, 95, 20, 190, 120, 91, 218, 62, 129, 59, 22, 191, 241, 208, 17, 61, 237, 37, 33, 63, 10, 13, 189, 189, 7, 244, 16, 191, 138, 174, 133, 191, 205, 116, 250, 190, 64, 30, 10, 190, 228, 125, 188, 62, 54, 172, 140, 63, 61, 201, 195, 62, 84, 228, 166, 60, 180, 177, 150, 189, 219, 240, 192, 60, 214, 178, 207, 190, 178, 211, 128, 190, 197, 141, 6, 191, 185, 81, 194, 62, 157, 140, 218, 189, 131, 45, 2, 191, 250, 199, 134, 62, 94, 248, 112, 62, 180, 3, 245, 190, 74, 169, 72, 191, 145, 148, 13, 190, 106, 196, 250, 189, 147, 188, 178, 190, 0, 105, 154, 189, 162, 87, 227, 62, 51, 44, 36, 63, 9, 179, 159, 190, 63, 156, 187, 189, 130, 7, 147, 188, 128, 74, 10, 190, 113, 194, 168, 189, 91, 74, 143, 62, 49, 139, 16, 62, 38, 64, 132, 189, 38, 192, 144, 62, 114, 120, 196, 190, 128, 227, 0, 62, 171, 145, 251, 61, 62, 155, 146, 62, 54, 217, 187, 61, 213, 11, 200, 61, 108, 235, 157, 190, 76, 128, 140, 190, 32, 108, 254, 189, 17, 15, 12, 63, 254, 193, 21, 190, 121, 207, 253, 60, 239, 152, 133, 190, 192, 147, 13, 190, 109, 232, 91, 190, 51, 44, 4, 191, 240, 87, 159, 60, 152, 64, 119, 189, 188, 230, 9, 62, 142, 240, 151, 190, 159, 139, 84, 191, 60, 51, 142, 62};
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
                alignas(float) const unsigned char memory[] = {215, 203, 164, 59, 60, 94, 96, 190};
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
    alignas(float) const unsigned char memory[] = {220, 92, 171, 191, 242, 68, 224, 61, 150, 120, 65, 63};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {238, 173, 11, 64, 36, 34, 80, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0074/steps/000000000018000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}