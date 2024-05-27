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
                alignas(float) const unsigned char memory[] = {42, 214, 97, 63, 125, 111, 192, 62, 32, 20, 194, 62, 100, 124, 61, 63, 227, 71, 178, 61, 115, 58, 17, 63, 208, 119, 240, 61, 185, 46, 121, 63, 214, 211, 255, 62, 84, 182, 222, 62, 248, 35, 157, 62, 117, 172, 106, 189, 187, 151, 162, 190, 81, 141, 143, 191, 229, 137, 228, 189, 57, 97, 143, 190, 249, 118, 100, 59, 207, 94, 163, 58, 72, 176, 217, 62, 18, 201, 72, 63, 120, 152, 91, 61, 220, 219, 48, 191, 158, 10, 187, 191, 116, 129, 195, 190, 140, 106, 69, 190, 44, 205, 164, 62, 68, 79, 142, 190, 126, 90, 255, 62, 254, 236, 12, 191, 54, 159, 21, 190, 178, 147, 42, 191, 7, 134, 203, 62, 54, 213, 7, 63, 41, 137, 161, 189, 144, 74, 211, 188, 54, 241, 150, 189, 188, 203, 255, 62, 6, 53, 189, 61, 143, 180, 239, 62, 118, 244, 2, 63, 189, 55, 19, 63, 42, 171, 0, 191, 248, 76, 54, 63, 224, 174, 23, 191, 5, 170, 25, 191, 116, 185, 43, 63, 206, 186, 25, 63, 214, 33, 194, 62, 189, 81, 9, 59, 80, 123, 56, 191, 105, 222, 28, 62, 156, 84, 103, 63, 8, 216, 145, 191, 190, 245, 143, 190, 28, 45, 5, 63, 153, 27, 29, 191, 127, 3, 134, 190, 65, 42, 178, 189, 29, 107, 142, 191, 102, 151, 8, 62, 62, 223, 129, 190, 167, 170, 58, 190, 247, 126, 128, 190, 129, 210, 142, 190, 60, 167, 77, 190, 176, 161, 217, 190, 131, 152, 142, 190, 127, 36, 172, 189, 116, 37, 109, 190, 76, 250, 68, 190, 180, 99, 135, 191, 77, 206, 199, 190, 202, 134, 162, 191, 77, 69, 119, 62, 152, 153, 42, 61, 124, 253, 62, 190, 212, 196, 146, 190, 181, 219, 23, 63, 167, 219, 229, 61, 219, 3, 98, 191, 232, 146, 47, 62, 191, 205, 21, 63, 153, 108, 55, 62, 13, 10, 46, 190, 181, 240, 222, 62, 229, 150, 156, 191, 131, 34, 169, 190, 56, 167, 74, 62, 85, 218, 204, 62, 74, 188, 255, 60, 53, 159, 55, 190, 250, 227, 101, 190, 221, 208, 9, 63, 208, 200, 0, 63, 228, 40, 101, 63, 22, 67, 11, 63};
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
                alignas(float) const unsigned char memory[] = {59, 250, 151, 191, 119, 93, 130, 60, 72, 109, 167, 62, 206, 87, 138, 188, 69, 30, 173, 62, 71, 133, 35, 63, 109, 237, 235, 190, 158, 244, 148, 188, 148, 214, 26, 191, 233, 11, 132, 62, 122, 37, 107, 190, 231, 193, 144, 62, 145, 211, 8, 62, 111, 1, 73, 62, 214, 135, 30, 191, 117, 131, 110, 191, 147, 174, 215, 61, 6, 245, 39, 191, 77, 241, 4, 62, 237, 29, 87, 190, 13, 115, 161, 190, 56, 95, 229, 190, 166, 163, 1, 63, 61, 150, 112, 190, 74, 67, 56, 188, 37, 127, 7, 63, 162, 108, 147, 62, 159, 121, 134, 62, 246, 5, 250, 60, 196, 13, 238, 62, 13, 31, 248, 61, 118, 157, 187, 190};
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
                alignas(float) const unsigned char memory[] = {176, 4, 52, 62, 206, 156, 11, 189, 216, 81, 236, 60, 219, 195, 169, 61, 155, 110, 99, 190, 197, 234, 253, 189, 66, 6, 144, 188, 34, 179, 39, 62, 94, 78, 51, 189, 199, 12, 163, 189, 194, 88, 8, 190, 245, 194, 195, 188, 62, 254, 224, 61, 189, 32, 60, 62, 88, 215, 5, 189, 236, 123, 193, 189, 160, 147, 112, 189, 245, 19, 20, 190, 113, 9, 252, 189, 228, 115, 8, 189, 148, 118, 248, 188, 104, 195, 215, 189, 31, 40, 70, 190, 110, 115, 155, 189, 127, 86, 21, 62, 224, 239, 15, 62, 36, 76, 164, 189, 159, 158, 63, 61, 173, 143, 181, 60, 120, 60, 13, 190, 221, 111, 44, 190, 175, 2, 119, 188, 193, 105, 71, 190, 230, 198, 197, 188, 65, 24, 114, 191, 96, 165, 183, 190, 227, 131, 255, 62, 35, 49, 109, 189, 76, 252, 20, 188, 252, 125, 225, 62, 166, 145, 47, 191, 132, 111, 67, 191, 95, 134, 119, 191, 5, 50, 99, 191, 45, 33, 105, 62, 132, 234, 44, 190, 52, 94, 184, 189, 240, 192, 164, 189, 158, 185, 55, 63, 70, 175, 22, 191, 5, 119, 234, 190, 152, 224, 78, 63, 130, 44, 196, 190, 16, 125, 138, 190, 131, 13, 129, 61, 157, 238, 142, 188, 158, 24, 189, 188, 133, 19, 9, 60, 96, 132, 47, 62, 170, 85, 38, 191, 222, 93, 94, 190, 161, 10, 15, 191, 83, 239, 12, 191, 104, 22, 169, 189, 75, 185, 0, 190, 19, 54, 248, 188, 47, 91, 28, 62, 14, 250, 21, 190, 66, 72, 239, 189, 73, 159, 147, 62, 11, 233, 130, 190, 92, 246, 18, 63, 27, 29, 148, 62, 123, 89, 206, 190, 5, 70, 12, 62, 187, 29, 193, 61, 243, 232, 218, 59, 217, 180, 89, 191, 125, 216, 132, 61, 36, 89, 109, 62, 75, 179, 156, 190, 35, 134, 50, 190, 117, 185, 217, 189, 183, 133, 45, 191, 32, 47, 118, 190, 213, 255, 183, 191, 249, 185, 177, 62, 71, 146, 205, 191, 88, 147, 12, 63, 126, 191, 168, 61, 17, 249, 35, 190, 49, 42, 162, 191, 144, 206, 143, 190, 170, 137, 172, 62, 47, 26, 203, 60, 243, 11, 181, 61, 161, 96, 34, 63, 89, 108, 151, 62, 8, 121, 158, 189, 187, 45, 40, 62, 61, 225, 191, 190, 92, 52, 230, 61, 190, 51, 141, 62, 204, 176, 116, 190, 232, 216, 63, 190, 77, 148, 236, 189, 203, 100, 159, 189, 205, 164, 144, 61, 44, 13, 154, 186, 241, 193, 183, 62, 221, 48, 204, 190, 201, 168, 136, 62, 103, 65, 160, 189, 27, 131, 143, 191, 190, 133, 19, 62, 140, 236, 0, 62, 40, 112, 187, 61, 97, 204, 220, 61, 69, 235, 63, 189, 19, 65, 147, 190, 227, 166, 181, 189, 21, 228, 190, 189, 72, 89, 41, 62, 6, 6, 137, 62, 125, 104, 220, 190, 141, 242, 73, 60, 102, 252, 51, 190, 60, 171, 139, 62, 210, 65, 4, 191, 206, 228, 0, 62, 214, 18, 37, 190, 67, 210, 153, 189, 55, 140, 152, 62, 18, 119, 122, 62, 70, 138, 233, 61, 90, 209, 33, 191, 114, 158, 249, 190, 221, 164, 53, 62, 141, 139, 85, 190, 248, 91, 67, 61, 64, 59, 33, 61, 72, 203, 7, 60, 105, 59, 140, 61, 16, 83, 161, 190, 224, 36, 36, 190, 53, 22, 158, 190, 120, 88, 175, 61, 48, 190, 89, 60, 113, 186, 70, 191, 221, 56, 157, 190, 52, 36, 209, 188, 89, 4, 43, 191, 102, 63, 189, 60, 54, 202, 3, 62, 205, 58, 171, 62, 166, 24, 211, 189, 218, 197, 18, 62, 190, 24, 15, 62, 102, 75, 91, 62, 122, 85, 144, 190, 213, 60, 82, 189, 169, 57, 164, 190, 159, 100, 103, 61, 171, 16, 115, 62, 169, 66, 146, 190, 238, 233, 115, 58, 63, 240, 40, 191, 238, 194, 237, 189, 99, 213, 145, 61, 98, 197, 68, 62, 97, 152, 79, 189, 200, 174, 73, 62, 182, 200, 101, 190, 18, 28, 57, 62, 108, 141, 218, 62, 208, 79, 123, 61, 132, 183, 194, 191, 165, 39, 242, 62, 29, 228, 78, 62, 33, 221, 185, 191, 131, 212, 87, 189, 242, 28, 46, 190, 13, 160, 166, 189, 179, 12, 53, 190, 245, 162, 157, 191, 251, 246, 59, 191, 228, 17, 87, 190, 248, 12, 123, 62, 189, 224, 151, 62, 179, 128, 50, 62, 71, 43, 46, 191, 234, 93, 53, 191, 182, 121, 200, 62, 234, 208, 184, 62, 48, 159, 53, 62, 95, 111, 236, 62, 184, 220, 201, 190, 215, 175, 146, 185, 195, 154, 118, 62, 252, 53, 103, 190, 94, 215, 47, 62, 14, 253, 25, 62, 173, 187, 228, 60, 235, 64, 176, 61, 101, 35, 122, 62, 206, 124, 79, 62, 71, 207, 253, 189, 20, 45, 174, 62, 77, 87, 225, 189, 12, 213, 149, 191, 146, 255, 31, 190, 176, 100, 225, 189, 34, 253, 25, 190, 225, 64, 2, 190, 204, 107, 59, 190, 159, 204, 7, 61, 91, 125, 164, 190, 134, 130, 131, 189, 48, 105, 70, 190, 193, 36, 203, 61, 236, 18, 169, 190, 66, 170, 94, 62, 150, 157, 132, 190, 99, 152, 179, 61, 65, 96, 74, 62, 1, 41, 149, 62, 99, 163, 8, 189, 72, 158, 117, 189, 221, 122, 7, 190, 217, 239, 91, 62, 16, 240, 52, 62, 14, 106, 129, 62, 44, 11, 85, 190, 4, 157, 169, 189, 160, 155, 13, 191, 192, 162, 39, 62, 136, 218, 151, 62, 183, 136, 247, 61, 160, 145, 237, 190, 188, 237, 84, 188, 25, 148, 166, 61, 18, 141, 107, 191, 207, 23, 94, 189, 46, 216, 83, 60, 206, 255, 123, 62, 169, 74, 130, 62, 118, 22, 197, 62, 90, 138, 18, 62, 43, 99, 118, 61, 92, 59, 135, 190, 189, 94, 63, 189, 88, 211, 165, 62, 230, 102, 139, 190, 4, 165, 194, 61, 115, 130, 211, 190, 162, 181, 13, 62, 24, 157, 186, 190, 177, 42, 133, 189, 24, 131, 105, 62, 171, 71, 106, 189, 97, 222, 106, 61, 181, 19, 74, 62, 49, 121, 50, 61, 150, 203, 255, 189, 119, 197, 149, 189, 19, 205, 135, 62, 215, 132, 104, 189, 188, 245, 68, 62, 20, 176, 2, 190, 175, 168, 145, 61, 80, 178, 50, 62, 68, 72, 72, 190, 149, 57, 58, 189, 168, 178, 87, 62, 85, 85, 142, 60, 196, 23, 157, 190, 129, 68, 11, 62, 192, 121, 61, 190, 99, 75, 67, 62, 30, 174, 105, 60, 243, 102, 168, 190, 68, 189, 41, 189, 191, 121, 175, 62, 7, 20, 95, 61, 145, 119, 114, 62, 169, 128, 112, 62, 78, 127, 178, 62, 121, 74, 6, 190, 208, 181, 239, 62, 227, 142, 5, 62, 150, 139, 76, 61, 250, 17, 74, 62, 185, 218, 23, 191, 87, 121, 246, 190, 159, 40, 186, 61, 205, 41, 73, 190, 101, 158, 155, 189, 149, 35, 206, 189, 81, 251, 129, 62, 239, 21, 135, 60, 123, 227, 65, 62, 232, 213, 82, 60, 150, 130, 255, 62, 160, 51, 20, 63, 63, 46, 160, 189, 49, 37, 100, 63, 141, 87, 9, 62, 236, 173, 96, 191, 47, 13, 92, 61, 159, 113, 106, 61, 130, 113, 93, 189, 12, 35, 36, 62, 9, 240, 76, 191, 230, 136, 72, 190, 105, 162, 200, 190, 139, 146, 198, 61, 166, 155, 146, 62, 68, 52, 199, 60, 16, 198, 20, 61, 37, 188, 159, 62, 88, 65, 253, 61, 220, 29, 80, 62, 154, 162, 166, 61, 76, 113, 245, 60, 243, 151, 184, 190, 95, 26, 218, 60, 56, 126, 151, 62, 240, 202, 66, 190, 205, 76, 135, 190, 225, 47, 194, 61, 94, 153, 129, 190, 39, 23, 96, 61, 21, 18, 129, 61, 30, 162, 211, 61, 40, 192, 81, 190, 170, 201, 143, 62, 39, 93, 175, 188, 58, 186, 144, 191, 19, 244, 81, 189, 174, 92, 16, 61, 218, 233, 70, 62, 236, 47, 69, 189, 11, 20, 7, 62, 75, 59, 134, 189, 187, 28, 19, 191, 90, 182, 68, 187, 10, 128, 226, 188, 58, 164, 52, 62, 91, 195, 59, 190, 96, 118, 163, 62, 64, 220, 40, 190, 190, 99, 141, 62, 255, 48, 236, 188, 173, 231, 135, 190, 55, 99, 42, 190, 153, 77, 18, 62, 25, 250, 7, 191, 227, 182, 204, 190, 74, 78, 110, 190, 4, 84, 114, 60, 38, 131, 126, 62, 48, 12, 174, 188, 75, 183, 33, 190, 24, 227, 87, 61, 47, 190, 117, 189, 118, 96, 51, 189, 18, 120, 17, 190, 196, 5, 210, 61, 206, 158, 73, 189, 233, 87, 47, 189, 80, 95, 3, 190, 107, 172, 125, 188, 115, 7, 191, 60, 153, 216, 158, 189, 240, 30, 141, 60, 132, 68, 86, 62, 227, 91, 1, 190, 75, 251, 180, 190, 40, 242, 109, 60, 183, 192, 148, 61, 131, 67, 104, 190, 186, 234, 209, 60, 47, 248, 105, 59, 62, 189, 65, 190, 234, 36, 28, 63, 75, 180, 152, 61, 119, 60, 5, 190, 40, 135, 32, 191, 177, 45, 72, 62, 253, 112, 53, 190, 5, 91, 121, 190, 195, 165, 204, 62, 12, 245, 236, 61, 183, 52, 15, 190, 70, 205, 139, 189, 77, 113, 211, 185, 134, 210, 155, 188, 227, 191, 252, 188, 29, 177, 111, 190, 112, 40, 233, 62, 112, 20, 61, 61, 171, 171, 159, 190, 24, 87, 128, 189, 113, 51, 104, 62, 100, 113, 12, 62, 237, 117, 68, 62, 254, 85, 98, 62, 12, 227, 22, 62, 150, 75, 40, 60, 52, 82, 36, 61, 34, 127, 145, 62, 207, 207, 23, 190, 22, 195, 65, 62, 153, 196, 185, 190, 84, 202, 146, 190, 134, 158, 139, 62, 39, 36, 232, 189, 55, 245, 120, 190, 75, 82, 129, 191, 231, 14, 89, 190, 178, 73, 178, 62, 151, 142, 59, 62, 21, 214, 103, 61, 227, 199, 184, 62, 51, 181, 49, 60, 174, 226, 226, 190, 6, 163, 61, 191, 80, 72, 220, 190, 76, 233, 187, 60, 104, 34, 177, 62, 171, 48, 165, 190, 153, 209, 8, 189, 105, 163, 108, 63, 8, 28, 215, 190, 146, 251, 160, 190, 130, 202, 91, 63, 217, 154, 111, 62, 167, 215, 214, 188, 72, 3, 231, 188, 6, 77, 80, 190, 1, 5, 88, 62, 86, 37, 36, 62, 57, 132, 47, 190, 60, 97, 205, 188, 76, 31, 58, 190, 90, 26, 128, 190, 107, 155, 202, 190, 102, 183, 101, 190, 99, 159, 53, 189, 198, 179, 50, 61, 179, 249, 197, 187, 244, 187, 150, 189, 163, 17, 157, 61, 227, 197, 128, 189, 0, 217, 35, 188, 217, 73, 15, 190, 106, 89, 255, 60, 32, 175, 168, 189, 128, 78, 27, 190, 36, 10, 112, 61, 247, 131, 84, 189, 146, 173, 21, 190, 252, 103, 40, 62, 71, 63, 118, 188, 236, 175, 43, 190, 228, 215, 196, 189, 195, 224, 145, 188, 247, 108, 47, 62, 150, 29, 128, 189, 51, 168, 167, 61, 31, 211, 20, 190, 94, 139, 227, 60, 190, 113, 23, 62, 35, 90, 41, 190, 167, 207, 60, 61, 26, 181, 220, 61, 114, 64, 17, 188, 66, 134, 31, 190, 22, 7, 3, 62, 17, 109, 198, 189, 89, 108, 37, 190, 216, 82, 229, 61, 72, 239, 49, 61, 114, 211, 52, 61, 106, 24, 173, 190, 122, 141, 127, 61, 251, 163, 178, 62, 89, 42, 11, 189, 173, 191, 20, 190, 12, 44, 33, 190, 183, 35, 134, 190, 63, 49, 225, 189, 227, 225, 197, 61, 223, 216, 61, 61, 168, 32, 251, 189, 143, 127, 80, 189, 167, 253, 141, 62, 80, 6, 20, 191, 78, 6, 190, 187, 184, 8, 135, 190, 168, 3, 26, 62, 53, 100, 6, 62, 215, 74, 247, 189, 58, 206, 180, 188, 252, 54, 191, 61, 49, 9, 68, 189, 198, 18, 5, 190, 53, 235, 11, 62, 4, 35, 157, 190, 238, 6, 232, 60, 28, 48, 84, 59, 170, 32, 13, 62, 147, 96, 76, 189, 151, 85, 214, 190, 60, 73, 38, 190, 73, 226, 78, 61, 217, 19, 219, 62, 41, 53, 146, 62, 146, 74, 108, 63, 197, 183, 151, 61, 71, 43, 140, 190, 69, 57, 211, 60, 86, 208, 116, 191, 109, 221, 236, 188, 242, 82, 5, 191, 228, 223, 135, 188, 16, 194, 204, 190, 160, 110, 166, 190, 112, 244, 236, 62, 154, 240, 61, 191, 12, 114, 4, 188, 108, 97, 96, 63, 103, 234, 73, 188, 194, 36, 232, 61, 16, 225, 130, 62, 101, 152, 241, 58, 34, 215, 82, 190, 16, 215, 53, 191, 189, 51, 177, 61, 55, 194, 14, 188, 47, 81, 142, 187, 158, 162, 155, 62, 75, 188, 181, 191, 180, 194, 140, 190, 228, 45, 134, 62, 218, 145, 179, 189, 173, 98, 249, 61, 249, 119, 252, 61, 66, 194, 143, 189, 246, 150, 220, 61, 135, 215, 218, 62, 65, 152, 78, 189, 106, 203, 203, 60, 192, 107, 230, 189, 22, 240, 228, 189, 200, 165, 127, 189, 71, 213, 19, 62, 67, 165, 40, 62, 0, 245, 244, 189, 242, 78, 150, 185, 87, 174, 13, 62, 176, 156, 123, 191, 179, 229, 85, 189, 141, 233, 89, 62, 128, 216, 45, 62, 18, 171, 119, 189, 229, 62, 189, 189, 117, 91, 159, 61, 132, 81, 25, 190, 11, 48, 53, 189, 48, 143, 42, 190, 209, 110, 173, 61, 177, 0, 91, 189, 217, 178, 9, 62, 25, 121, 78, 61, 183, 17, 182, 61, 214, 118, 219, 62, 252, 227, 72, 61, 106, 26, 198, 60, 217, 115, 30, 62, 90, 98, 207, 189, 66, 163, 30, 60, 167, 15, 189, 62, 177, 148, 189, 62, 108, 198, 87, 188, 223, 179, 39, 190, 210, 164, 158, 190, 152, 181, 133, 189, 239, 157, 220, 60, 185, 4, 185, 62, 59, 87, 43, 190, 176, 130, 189, 62, 20, 130, 53, 62, 177, 120, 145, 191, 181, 176, 100, 190, 207, 109, 24, 188, 219, 86, 110, 190, 24, 47, 125, 60, 112, 98, 157, 61, 79, 76, 22, 190, 124, 105, 54, 61, 162, 200, 177, 189, 7, 98, 39, 188, 235, 11, 174, 61, 75, 180, 197, 189, 97, 139, 8, 62, 49, 41, 54, 61, 26, 1, 129, 62, 219, 134, 53, 191, 91, 124, 76, 190, 235, 238, 113, 62, 3, 255, 38, 191, 107, 92, 177, 62, 202, 159, 147, 62, 223, 94, 144, 189, 197, 10, 111, 190, 64, 218, 89, 62, 2, 181, 70, 62, 3, 11, 33, 62, 43, 219, 51, 62, 61, 32, 189, 61, 94, 152, 79, 191, 28, 155, 4, 191, 22, 218, 185, 190, 191, 202, 114, 190, 148, 68, 76, 188, 47, 39, 159, 62, 215, 220, 104, 190, 113, 67, 122, 191, 251, 160, 79, 191, 233, 11, 64, 190, 220, 253, 86, 191, 38, 150, 221, 188, 210, 33, 142, 62, 115, 156, 167, 62, 10, 253, 232, 190, 249, 69, 72, 62, 185, 83, 48, 62, 101, 238, 242, 59, 8, 180, 85, 190, 29, 35, 96, 191, 222, 89, 78, 190, 96, 220, 230, 189, 78, 190, 56, 189, 124, 161, 112, 62, 138, 72, 154, 62, 74, 85, 143, 191, 227, 151, 83, 191, 74, 151, 108, 190, 67, 36, 134, 62, 172, 188, 242, 61, 152, 51, 173, 186, 29, 159, 138, 190, 245, 29, 128, 190, 120, 246, 210, 62, 196, 39, 51, 191, 155, 10, 191, 189, 153, 105, 144, 62, 225, 105, 114, 62, 193, 198, 18, 190, 135, 231, 99, 191, 52, 155, 49, 191, 170, 168, 232, 61, 72, 40, 14, 191, 100, 119, 134, 190, 38, 203, 94, 62, 66, 42, 164, 62, 170, 155, 25, 190, 77, 207, 163, 62, 162, 233, 99, 62, 167, 225, 155, 62, 254, 124, 214, 190, 35, 216, 205, 190, 180, 103, 157, 189, 64, 7, 124, 189, 17, 42, 86, 190, 181, 0, 220, 61, 124, 134, 158, 62, 130, 189, 57, 190, 13, 100, 139, 190, 161, 177, 7, 63, 243, 47, 111, 62, 249, 66, 249, 57, 18, 52, 144, 62, 21, 131, 169, 61, 129, 231, 100, 191, 16, 76, 76, 191, 71, 154, 103, 190, 93, 73, 221, 190, 150, 1, 136, 62, 149, 91, 72, 62, 233, 241, 234, 190, 206, 78, 5, 191, 245, 232, 23, 191, 192, 110, 32, 188, 67, 204, 74, 191, 44, 36, 131, 62, 98, 73, 255, 61, 43, 41, 157, 189, 35, 89, 17, 191, 120, 91, 212, 62, 47, 128, 137, 62, 244, 250, 20, 62, 199, 119, 135, 60, 67, 122, 152, 60, 190, 156, 5, 62, 199, 128, 21, 190, 65, 7, 142, 187, 199, 53, 12, 62, 76, 124, 68, 190, 176, 7, 70, 188, 137, 177, 97, 190, 56, 163, 251, 189, 237, 84, 140, 60, 153, 65, 121, 190, 163, 64, 186, 60, 145, 68, 108, 189, 47, 218, 35, 62, 255, 2, 0, 190, 63, 225, 94, 60, 82, 72, 0, 62, 165, 181, 124, 188, 60, 60, 11, 62, 167, 248, 176, 61, 108, 97, 146, 61, 45, 246, 76, 190, 216, 64, 139, 189, 192, 30, 16, 188, 206, 196, 133, 189, 183, 77, 61, 190, 114, 56, 57, 190, 38, 185, 121, 59, 175, 151, 68, 187, 204, 137, 49, 60, 232, 133, 38, 61, 27, 202, 194, 61, 110, 60, 137, 62, 230, 15, 133, 62, 201, 57, 170, 61, 20, 49, 117, 62, 10, 21, 240, 190, 13, 58, 36, 61, 20, 234, 204, 62, 184, 94, 49, 191, 8, 128, 135, 189, 11, 80, 99, 62, 75, 172, 169, 60, 214, 65, 52, 62, 138, 207, 138, 61, 127, 183, 79, 62, 172, 108, 147, 61, 68, 242, 218, 61, 41, 34, 101, 60, 120, 72, 152, 191, 56, 46, 11, 62, 246, 198, 147, 61, 1, 116, 122, 61, 232, 12, 201, 189, 59, 88, 47, 190, 56, 115, 125, 190, 189, 247, 254, 190, 198, 188, 11, 62, 73, 45, 92, 58, 188, 250, 209, 60, 5, 148, 102, 190, 8, 168, 70, 62, 3, 5, 159, 189, 141, 177, 227, 61, 98, 155, 58, 62, 136, 94, 238, 61, 50, 250, 140, 61, 207, 219, 5, 61, 246, 31, 15, 190, 174, 191, 159, 189, 71, 227, 193, 61, 135, 236, 49, 190, 37, 152, 201, 188, 172, 3, 200, 188, 162, 223, 90, 190, 38, 34, 49, 189, 191, 101, 29, 62, 193, 3, 126, 190, 133, 242, 172, 59, 201, 111, 143, 189, 118, 106, 1, 60, 195, 96, 23, 189, 210, 200, 122, 189, 216, 75, 77, 190, 199, 170, 15, 190, 96, 161, 143, 60, 15, 142, 158, 190, 45, 116, 17, 62, 41, 93, 225, 187, 231, 245, 68, 190, 159, 246, 145, 61, 3, 116, 201, 188, 147, 184, 128, 189, 73, 134, 190, 189, 199, 83, 33, 190, 250, 196, 249, 188, 53, 224, 203, 189, 226, 167, 85, 62, 201, 11, 1, 191, 200, 234, 159, 62, 122, 4, 241, 190, 129, 43, 0, 61, 237, 248, 89, 62, 17, 52, 149, 190, 65, 61, 104, 190, 249, 249, 255, 61, 255, 207, 151, 191, 241, 200, 1, 62, 108, 171, 39, 61, 218, 238, 147, 62, 18, 0, 155, 189, 213, 82, 238, 189, 192, 242, 101, 190, 191, 8, 5, 191, 189, 121, 111, 62, 253, 190, 177, 189, 179, 79, 217, 189, 231, 165, 254, 186, 131, 55, 11, 62, 82, 126, 46, 188, 6, 135, 24, 62, 185, 247, 25, 191, 104, 16, 37, 191, 136, 33, 97, 62, 62, 121, 235, 189, 155, 138, 240, 61, 226, 34, 160, 191, 213, 67, 36, 191, 30, 247, 75, 191, 136, 56, 65, 190, 248, 205, 35, 62, 218, 193, 104, 190, 196, 5, 190, 62, 224, 149, 93, 62, 83, 184, 149, 190, 100, 125, 37, 191, 239, 179, 63, 62, 161, 99, 195, 62, 122, 67, 36, 62, 225, 172, 192, 61, 21, 83, 154, 190, 129, 84, 217, 190, 60, 195, 14, 63, 189, 75, 47, 191, 232, 122, 55, 190, 15, 34, 150, 62, 165, 122, 171, 62, 117, 47, 169, 190, 193, 22, 141, 191, 178, 78, 132, 191, 208, 31, 173, 61, 64, 112, 66, 191, 154, 166, 155, 62, 9, 228, 202, 61, 45, 10, 136, 62, 138, 114, 140, 190, 240, 5, 153, 62, 54, 58, 105, 60, 212, 29, 130, 62, 114, 115, 159, 190, 250, 31, 200, 190, 100, 76, 19, 189, 18, 174, 180, 190, 0, 75, 100, 61, 189, 98, 252, 61, 1, 46, 172, 190, 25, 235, 143, 190, 31, 167, 24, 191, 3, 197, 102, 61, 202, 91, 127, 62, 218, 101, 210, 189, 43, 77, 164, 61, 65, 230, 7, 61, 120, 236, 70, 61, 203, 15, 135, 62, 186, 231, 177, 190, 58, 61, 78, 63, 25, 62, 150, 62, 205, 219, 129, 61, 19, 166, 235, 61, 137, 61, 213, 190, 226, 219, 223, 189, 22, 93, 123, 190, 188, 181, 3, 191, 20, 233, 212, 190, 225, 198, 163, 61, 111, 99, 229, 62, 53, 166, 24, 190, 210, 10, 237, 61, 17, 229, 162, 61, 111, 84, 4, 62, 50, 94, 72, 191, 219, 33, 6, 62, 238, 165, 88, 189, 122, 57, 8, 190, 163, 209, 227, 59, 221, 89, 60, 190, 103, 234, 35, 190, 82, 51, 118, 61, 147, 34, 239, 61, 216, 119, 227, 188, 199, 142, 211, 189, 133, 118, 19, 190, 241, 170, 195, 61, 54, 226, 178, 189, 230, 64, 146, 189, 233, 80, 15, 62, 156, 98, 251, 189, 251, 165, 158, 188, 50, 17, 1, 62, 196, 29, 136, 189, 212, 71, 216, 60, 141, 182, 251, 59, 195, 55, 9, 190, 32, 175, 254, 189, 131, 98, 29, 189, 92, 93, 11, 189, 192, 254, 30, 190, 220, 161, 186, 188, 229, 208, 14, 190, 206, 170, 177, 189, 203, 134, 46, 189, 197, 129, 35, 190, 19, 214, 46, 62, 39, 167, 12, 62, 110, 46, 80, 189, 108, 55, 25, 61, 66, 175, 78, 58, 69, 253, 242, 62, 182, 117, 77, 62, 9, 243, 4, 62, 78, 92, 79, 62, 111, 188, 225, 190, 2, 160, 211, 188, 156, 173, 65, 189, 227, 25, 80, 190, 154, 182, 108, 62, 180, 90, 18, 62, 91, 26, 9, 62, 53, 13, 43, 62, 16, 111, 57, 62, 97, 68, 147, 190, 167, 59, 233, 187, 15, 138, 171, 62, 156, 161, 150, 61, 61, 196, 209, 59, 90, 94, 113, 62, 140, 96, 65, 61, 198, 163, 195, 190, 54, 33, 164, 189, 108, 236, 185, 61, 253, 7, 252, 60, 188, 74, 17, 62, 104, 19, 242, 61, 181, 88, 105, 61, 148, 20, 121, 59, 45, 151, 224, 190, 124, 220, 58, 190, 207, 224, 59, 61, 186, 202, 8, 62, 247, 41, 131, 62, 88, 179, 187, 61, 247, 64, 98, 190, 11, 159, 4, 191, 46, 206, 25, 191, 92, 39, 122, 60, 84, 108, 46, 61, 104, 156, 191, 61, 189, 63, 171, 61, 166, 117, 5, 190, 87, 222, 114, 62, 3, 11, 37, 190, 249, 75, 99, 189, 108, 81, 73, 62, 211, 23, 164, 62, 80, 204, 63, 190, 118, 139, 40, 191, 169, 139, 220, 190, 87, 230, 8, 62, 108, 251, 212, 190, 3, 47, 171, 189, 194, 253, 231, 61, 252, 28, 24, 62, 32, 5, 9, 62, 43, 91, 10, 62, 121, 80, 206, 61, 247, 168, 248, 61, 74, 210, 28, 190, 91, 64, 78, 190, 221, 201, 236, 189, 67, 245, 46, 62, 28, 149, 222, 189, 215, 8, 54, 191, 152, 152, 129, 189, 19, 108, 128, 191, 27, 121, 179, 190, 188, 160, 142, 61, 87, 7, 10, 189, 74, 36, 217, 62, 38, 109, 148, 61, 62, 25, 69, 190, 19, 76, 83, 188, 146, 225, 123, 62, 12, 201, 246, 186, 100, 27, 178, 190, 149, 86, 91, 63, 180, 159, 211, 60, 207, 170, 44, 191, 25, 97, 246, 188, 248, 139, 7, 189, 55, 1, 3, 190, 120, 111, 233, 189, 35, 91, 153, 62, 22, 43, 130, 62, 230, 97, 216, 61, 1, 99, 140, 189, 198, 238, 241, 61, 197, 185, 138, 61, 132, 121, 107, 62, 49, 109, 149, 188};
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
                alignas(float) const unsigned char memory[] = {147, 20, 94, 190, 99, 46, 67, 62, 31, 35, 186, 62, 246, 106, 127, 189, 116, 105, 71, 62, 155, 197, 138, 61, 75, 201, 56, 61, 207, 162, 135, 61, 139, 92, 150, 62, 87, 3, 211, 190, 68, 189, 191, 61, 211, 243, 131, 190, 83, 58, 92, 190, 23, 19, 76, 62, 51, 85, 224, 189, 108, 33, 114, 62, 201, 113, 206, 62, 11, 221, 156, 62, 76, 80, 145, 188, 158, 51, 192, 62, 28, 180, 42, 62, 42, 184, 207, 62, 160, 216, 142, 187, 163, 174, 17, 190, 171, 15, 18, 190, 175, 151, 3, 62, 187, 175, 231, 62, 64, 91, 157, 188, 89, 228, 243, 61, 88, 246, 205, 62, 207, 104, 39, 62, 213, 111, 217, 189};
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
                alignas(float) const unsigned char memory[] = {1, 212, 7, 189, 175, 150, 212, 191, 229, 252, 180, 63, 52, 3, 12, 191, 42, 58, 22, 62, 194, 248, 254, 62, 242, 42, 0, 191, 177, 66, 14, 191, 7, 77, 139, 61, 51, 81, 134, 63, 219, 27, 236, 190, 109, 5, 80, 62, 179, 25, 223, 190, 90, 71, 137, 191, 21, 69, 48, 190, 245, 119, 75, 59, 192, 216, 141, 191, 19, 56, 183, 188, 195, 112, 145, 190, 173, 159, 65, 63, 89, 239, 60, 63, 4, 86, 20, 63, 91, 2, 47, 60, 153, 109, 40, 190, 75, 119, 234, 61, 67, 44, 143, 61, 210, 150, 42, 63, 49, 107, 36, 63, 48, 182, 146, 61, 119, 103, 21, 188, 234, 134, 8, 62, 19, 73, 208, 62, 65, 36, 24, 62, 2, 117, 175, 62, 148, 243, 249, 187, 35, 43, 90, 190, 58, 242, 225, 190, 28, 246, 25, 191, 20, 101, 145, 189, 159, 58, 88, 62, 202, 109, 176, 190, 129, 53, 80, 62, 135, 173, 23, 61, 16, 107, 49, 62, 163, 182, 140, 61, 107, 190, 22, 189, 52, 153, 2, 61, 54, 134, 13, 190, 40, 242, 87, 62, 203, 78, 173, 190, 169, 79, 177, 61, 49, 150, 63, 190, 27, 194, 104, 62, 147, 111, 186, 188, 186, 231, 3, 59, 119, 62, 223, 190, 59, 81, 92, 62, 241, 27, 49, 191, 109, 226, 131, 62, 106, 218, 194, 62, 67, 64, 139, 189, 16, 196, 182, 190, 74, 108, 108, 190, 90, 1, 102, 63};
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
                alignas(float) const unsigned char memory[] = {63, 252, 38, 190, 209, 97, 141, 190};
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
    alignas(float) const unsigned char memory[] = {56, 18, 193, 63, 96, 95, 235, 62, 115, 89, 44, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {213, 3, 185, 190, 119, 65, 72, 192};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0049/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}