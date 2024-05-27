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
                alignas(float) const unsigned char memory[] = {115, 230, 124, 191, 139, 36, 9, 63, 116, 111, 136, 190, 215, 201, 133, 188, 85, 215, 107, 63, 137, 238, 114, 190, 42, 77, 142, 62, 168, 154, 158, 62, 207, 81, 227, 190, 231, 89, 55, 190, 36, 37, 96, 63, 101, 171, 83, 190, 118, 5, 134, 62, 111, 115, 65, 190, 202, 243, 154, 190, 240, 29, 138, 190, 130, 200, 25, 190, 141, 220, 120, 62, 249, 61, 155, 189, 181, 144, 73, 191, 39, 182, 130, 62, 178, 203, 110, 191, 84, 74, 56, 191, 132, 108, 74, 188, 217, 158, 121, 61, 27, 174, 6, 191, 40, 108, 249, 62, 233, 154, 41, 63, 239, 156, 141, 190, 130, 245, 216, 190, 100, 192, 159, 62, 140, 253, 75, 63, 213, 119, 186, 62, 188, 13, 138, 190, 95, 97, 120, 61, 144, 19, 65, 191, 139, 14, 94, 189, 137, 205, 32, 189, 140, 40, 172, 62, 189, 248, 22, 191, 123, 24, 81, 63, 243, 111, 17, 62, 174, 149, 147, 62, 42, 111, 130, 191, 152, 76, 0, 63, 101, 30, 6, 63, 145, 23, 134, 191, 89, 114, 99, 190, 217, 203, 131, 188, 19, 4, 222, 63, 125, 245, 14, 63, 64, 167, 245, 62, 219, 181, 46, 62, 104, 48, 59, 62, 142, 128, 0, 191, 247, 231, 128, 191, 108, 137, 159, 190, 147, 38, 27, 63, 88, 113, 107, 191, 250, 48, 73, 190, 185, 68, 122, 190, 192, 72, 184, 63, 25, 123, 158, 62, 169, 75, 227, 62, 216, 129, 160, 190, 198, 162, 18, 63, 211, 247, 229, 190, 131, 189, 14, 191, 223, 138, 24, 191, 249, 243, 85, 63, 187, 86, 207, 62, 88, 99, 25, 63, 51, 247, 71, 63, 108, 242, 68, 63, 75, 105, 172, 62, 171, 235, 136, 62, 53, 131, 117, 63, 79, 67, 219, 62, 247, 107, 70, 63, 10, 34, 95, 191, 245, 30, 231, 190, 222, 106, 90, 63, 95, 203, 58, 63, 72, 88, 92, 62, 134, 191, 101, 62, 207, 140, 4, 63, 134, 6, 207, 62, 105, 241, 83, 191, 196, 240, 228, 190, 173, 184, 150, 190, 105, 222, 11, 191, 223, 109, 148, 62, 48, 206, 226, 62, 110, 61, 213, 62, 198, 26, 182, 63, 254, 92, 50, 62};
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
                alignas(float) const unsigned char memory[] = {188, 155, 18, 191, 58, 225, 39, 190, 76, 75, 86, 62, 166, 121, 55, 58, 163, 189, 48, 191, 9, 243, 13, 63, 26, 239, 14, 63, 163, 79, 78, 63, 106, 5, 251, 60, 151, 94, 89, 63, 4, 73, 62, 191, 178, 20, 14, 189, 58, 66, 193, 62, 49, 62, 231, 62, 253, 107, 211, 189, 182, 154, 159, 62, 55, 150, 156, 190, 80, 144, 55, 191, 59, 64, 141, 190, 69, 249, 242, 190, 212, 165, 192, 190, 23, 114, 16, 60, 155, 164, 124, 62, 227, 118, 163, 189, 135, 22, 121, 190, 49, 247, 177, 189, 152, 252, 56, 191, 169, 70, 31, 62, 114, 28, 160, 190, 110, 45, 20, 191, 62, 69, 76, 191, 101, 249, 175, 62};
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
                alignas(float) const unsigned char memory[] = {103, 64, 5, 63, 234, 57, 56, 191, 54, 124, 165, 62, 143, 139, 67, 62, 200, 57, 143, 189, 9, 165, 112, 62, 39, 232, 140, 62, 135, 222, 7, 62, 96, 226, 110, 62, 96, 56, 209, 61, 192, 214, 137, 190, 185, 176, 97, 191, 132, 141, 58, 62, 201, 54, 126, 188, 121, 101, 167, 189, 252, 74, 77, 62, 53, 227, 84, 59, 126, 71, 106, 191, 196, 125, 74, 63, 237, 235, 22, 191, 180, 40, 189, 61, 23, 149, 98, 190, 71, 145, 173, 190, 184, 90, 167, 190, 153, 148, 168, 190, 56, 99, 28, 62, 30, 222, 210, 60, 231, 166, 203, 188, 54, 182, 208, 190, 204, 30, 173, 191, 186, 0, 38, 62, 238, 111, 173, 61, 253, 21, 190, 189, 113, 152, 200, 62, 119, 44, 129, 60, 47, 213, 234, 62, 120, 6, 6, 191, 22, 135, 157, 59, 30, 54, 36, 190, 198, 148, 182, 190, 195, 207, 103, 190, 73, 103, 84, 189, 238, 66, 74, 189, 107, 28, 10, 189, 248, 96, 200, 189, 195, 182, 168, 61, 225, 236, 72, 188, 223, 132, 96, 190, 109, 88, 230, 61, 58, 65, 168, 62, 219, 222, 192, 190, 216, 191, 121, 189, 250, 127, 142, 190, 238, 156, 142, 62, 175, 255, 171, 189, 253, 196, 19, 62, 73, 31, 197, 62, 17, 15, 230, 61, 177, 17, 88, 191, 219, 51, 168, 62, 187, 215, 83, 62, 239, 205, 108, 188, 232, 215, 45, 190, 125, 51, 135, 62, 203, 89, 91, 190, 11, 99, 195, 62, 247, 121, 184, 60, 35, 99, 211, 62, 113, 66, 192, 190, 164, 6, 240, 61, 164, 169, 195, 189, 117, 70, 72, 190, 174, 176, 132, 189, 101, 212, 248, 189, 22, 105, 174, 61, 183, 199, 18, 62, 142, 112, 95, 62, 206, 138, 182, 62, 16, 239, 245, 61, 2, 84, 207, 190, 203, 244, 229, 61, 249, 213, 189, 62, 65, 176, 5, 191, 184, 158, 89, 190, 152, 0, 68, 190, 123, 50, 146, 61, 248, 114, 212, 189, 77, 186, 10, 62, 248, 176, 175, 62, 138, 191, 240, 189, 227, 213, 82, 191, 94, 87, 43, 62, 10, 85, 158, 187, 74, 249, 55, 61, 140, 201, 141, 190, 168, 139, 88, 189, 255, 178, 97, 62, 102, 137, 171, 190, 58, 220, 44, 62, 77, 89, 161, 190, 61, 224, 161, 62, 74, 238, 119, 62, 241, 117, 224, 62, 211, 65, 79, 62, 197, 240, 250, 61, 223, 28, 48, 62, 249, 150, 202, 190, 181, 207, 194, 61, 165, 206, 9, 62, 95, 28, 151, 190, 97, 96, 149, 189, 129, 80, 209, 62, 9, 76, 37, 190, 139, 66, 54, 191, 86, 170, 73, 62, 125, 163, 39, 191, 76, 158, 223, 62, 46, 3, 173, 189, 50, 133, 88, 190, 74, 231, 187, 190, 187, 164, 245, 190, 116, 189, 25, 60, 195, 133, 183, 62, 166, 74, 227, 61, 19, 49, 171, 190, 101, 28, 85, 190, 235, 248, 225, 62, 95, 123, 30, 61, 202, 181, 21, 188, 194, 29, 133, 189, 159, 203, 138, 62, 9, 84, 125, 190, 54, 80, 21, 62, 140, 86, 208, 190, 239, 70, 138, 190, 160, 218, 43, 190, 203, 5, 231, 59, 139, 53, 29, 62, 199, 30, 2, 191, 52, 88, 72, 62, 29, 111, 8, 61, 17, 216, 101, 190, 249, 106, 74, 190, 160, 30, 76, 62, 114, 248, 139, 191, 51, 193, 82, 190, 95, 222, 130, 190, 81, 163, 149, 191, 23, 147, 186, 190, 56, 169, 252, 189, 241, 201, 28, 189, 199, 54, 171, 189, 20, 87, 240, 189, 225, 61, 193, 188, 74, 142, 83, 190, 8, 99, 192, 62, 176, 155, 230, 190, 134, 1, 101, 190, 55, 199, 153, 190, 130, 125, 224, 189, 68, 238, 221, 61, 151, 138, 27, 190, 188, 77, 16, 62, 199, 85, 6, 190, 236, 151, 76, 62, 101, 149, 201, 189, 217, 216, 164, 62, 136, 29, 68, 62, 5, 218, 136, 59, 72, 132, 145, 62, 120, 161, 177, 190, 152, 251, 85, 61, 81, 193, 175, 61, 251, 117, 79, 191, 115, 160, 12, 62, 203, 165, 38, 63, 233, 13, 76, 191, 19, 222, 218, 190, 44, 229, 209, 190, 136, 108, 144, 61, 172, 23, 193, 190, 188, 236, 46, 62, 110, 101, 164, 59, 126, 143, 58, 62, 2, 170, 205, 190, 53, 116, 27, 189, 199, 85, 252, 62, 126, 226, 40, 62, 205, 207, 78, 190, 87, 110, 164, 190, 58, 111, 109, 190, 166, 21, 226, 190, 233, 143, 147, 189, 4, 70, 143, 190, 13, 113, 155, 62, 142, 104, 157, 190, 162, 221, 35, 62, 153, 91, 157, 62, 35, 35, 219, 62, 3, 22, 193, 62, 218, 90, 150, 62, 188, 113, 21, 62, 249, 123, 248, 190, 246, 146, 244, 190, 241, 197, 15, 62, 213, 23, 22, 191, 74, 7, 219, 189, 210, 54, 31, 63, 1, 48, 8, 191, 199, 242, 14, 191, 158, 194, 8, 63, 214, 58, 30, 191, 180, 2, 180, 188, 0, 228, 191, 188, 13, 234, 147, 190, 81, 185, 150, 190, 203, 109, 145, 190, 184, 201, 183, 188, 109, 99, 232, 62, 87, 120, 48, 189, 240, 19, 132, 190, 223, 33, 183, 191, 33, 208, 186, 61, 4, 201, 84, 61, 231, 74, 41, 189, 236, 12, 182, 61, 64, 58, 213, 189, 12, 15, 86, 62, 226, 222, 44, 190, 198, 59, 200, 189, 25, 14, 173, 188, 94, 159, 15, 191, 232, 41, 242, 189, 29, 62, 78, 190, 87, 78, 118, 62, 98, 21, 24, 190, 13, 215, 32, 62, 155, 1, 222, 187, 152, 246, 75, 188, 3, 72, 189, 190, 42, 57, 98, 61, 147, 41, 49, 62, 252, 208, 202, 189, 124, 52, 83, 191, 137, 57, 215, 188, 84, 55, 118, 62, 252, 51, 24, 190, 251, 54, 140, 62, 241, 231, 142, 62, 38, 190, 134, 189, 135, 55, 67, 189, 221, 126, 66, 62, 212, 113, 244, 61, 169, 165, 222, 61, 167, 134, 94, 61, 135, 223, 231, 61, 126, 43, 47, 191, 84, 140, 88, 61, 202, 187, 111, 188, 144, 225, 121, 190, 175, 179, 209, 62, 158, 56, 18, 190, 41, 136, 177, 189, 151, 17, 143, 190, 1, 52, 172, 62, 41, 214, 10, 62, 9, 181, 130, 190, 233, 100, 241, 61, 141, 238, 35, 190, 95, 222, 128, 191, 249, 215, 70, 60, 129, 46, 136, 62, 134, 120, 241, 190, 209, 135, 58, 190, 144, 46, 173, 190, 8, 144, 8, 63, 78, 0, 17, 190, 171, 251, 54, 62, 40, 127, 41, 61, 12, 65, 171, 190, 146, 252, 145, 191, 55, 196, 93, 62, 198, 32, 230, 62, 14, 110, 110, 191, 42, 136, 179, 61, 252, 174, 22, 191, 100, 83, 8, 62, 216, 64, 73, 191, 137, 57, 116, 189, 239, 58, 133, 190, 160, 238, 115, 62, 225, 145, 30, 191, 83, 108, 12, 190, 202, 116, 125, 62, 86, 158, 124, 62, 216, 7, 143, 62, 178, 194, 118, 62, 184, 200, 232, 190, 47, 62, 218, 190, 108, 189, 163, 59, 32, 118, 66, 61, 34, 69, 20, 189, 209, 223, 38, 188, 84, 4, 254, 61, 224, 178, 28, 191, 10, 205, 82, 190, 36, 142, 230, 191, 175, 100, 32, 63, 19, 173, 64, 190, 42, 178, 75, 190, 18, 39, 96, 189, 130, 229, 176, 190, 54, 73, 91, 191, 59, 94, 130, 190, 72, 129, 43, 62, 153, 239, 9, 191, 143, 179, 88, 190, 66, 172, 162, 60, 216, 199, 102, 61, 13, 109, 156, 190, 13, 135, 149, 189, 169, 39, 238, 60, 25, 192, 139, 62, 141, 220, 184, 190, 80, 124, 92, 61, 89, 163, 57, 62, 253, 0, 145, 62, 184, 213, 226, 61, 131, 100, 143, 62, 130, 109, 143, 62, 161, 170, 158, 189, 164, 93, 145, 61, 171, 158, 159, 189, 253, 158, 253, 190, 90, 190, 60, 61, 152, 78, 139, 62, 42, 184, 69, 190, 248, 227, 20, 191, 41, 69, 231, 188, 35, 247, 26, 191, 99, 169, 163, 62, 52, 190, 101, 190, 92, 39, 34, 190, 50, 65, 40, 61, 77, 254, 135, 190, 79, 16, 73, 60, 47, 225, 162, 62, 37, 115, 205, 59, 221, 144, 156, 190, 151, 84, 9, 190, 192, 230, 188, 61, 186, 83, 203, 189, 71, 149, 63, 63, 80, 13, 65, 191, 200, 21, 85, 189, 55, 62, 150, 189, 109, 107, 23, 189, 86, 181, 26, 62, 211, 130, 110, 62, 29, 194, 45, 62, 126, 176, 17, 62, 252, 237, 30, 191, 8, 200, 67, 190, 167, 132, 119, 191, 171, 159, 83, 62, 168, 205, 165, 62, 180, 154, 176, 189, 207, 51, 109, 60, 25, 144, 87, 62, 39, 198, 208, 190, 108, 126, 54, 63, 48, 112, 45, 62, 122, 13, 234, 62, 31, 236, 65, 188, 110, 141, 202, 190, 154, 52, 238, 58, 216, 196, 237, 189, 149, 71, 151, 62, 26, 86, 146, 190, 3, 138, 129, 61, 39, 248, 118, 189, 95, 167, 232, 191, 133, 57, 148, 61, 154, 92, 130, 61, 225, 87, 132, 190, 18, 131, 203, 62, 254, 94, 194, 61, 114, 1, 246, 62, 206, 171, 192, 190, 172, 162, 128, 61, 4, 89, 208, 188, 242, 76, 36, 191, 119, 69, 145, 190, 165, 239, 113, 62, 53, 244, 171, 61, 87, 62, 207, 60, 52, 191, 34, 190, 118, 113, 47, 62, 41, 175, 7, 189, 32, 127, 135, 190, 166, 252, 157, 188, 231, 137, 12, 63, 27, 8, 132, 191, 185, 252, 12, 191, 235, 206, 84, 190, 130, 32, 83, 62, 64, 15, 129, 190, 195, 234, 197, 62, 168, 51, 130, 62, 236, 122, 119, 60, 207, 44, 131, 191, 216, 207, 242, 62, 245, 99, 164, 62, 234, 195, 4, 190, 4, 75, 202, 189, 101, 179, 104, 62, 63, 121, 169, 190, 152, 119, 213, 62, 34, 157, 2, 189, 183, 78, 187, 62, 221, 75, 148, 188, 77, 177, 158, 61, 182, 244, 161, 61, 184, 92, 136, 61, 243, 92, 231, 190, 211, 133, 53, 188, 225, 83, 143, 189, 116, 9, 15, 62, 62, 44, 114, 189, 230, 103, 4, 63, 5, 107, 29, 190, 188, 52, 234, 190, 141, 225, 242, 188, 146, 19, 122, 190, 121, 139, 9, 62, 45, 250, 56, 62, 99, 119, 82, 191, 59, 254, 13, 62, 146, 238, 154, 62, 201, 6, 22, 63, 242, 164, 205, 62, 182, 247, 131, 190, 74, 11, 37, 190, 240, 51, 161, 62, 63, 103, 112, 62, 56, 160, 208, 61, 186, 16, 134, 191, 185, 194, 132, 62, 197, 172, 9, 62, 24, 213, 189, 188, 205, 66, 28, 62, 7, 120, 120, 60, 158, 33, 181, 60, 124, 191, 142, 62, 22, 69, 231, 59, 44, 138, 67, 59, 188, 4, 10, 61, 89, 150, 185, 61, 58, 147, 61, 189, 65, 135, 242, 189, 103, 161, 38, 190, 228, 83, 154, 190, 241, 112, 146, 191, 52, 192, 155, 62, 81, 202, 83, 62, 163, 25, 53, 190, 216, 17, 168, 61, 66, 67, 97, 191, 113, 24, 138, 62, 122, 36, 8, 191, 46, 8, 14, 62, 64, 232, 101, 190, 97, 136, 175, 189, 239, 170, 15, 62, 72, 125, 141, 62, 31, 179, 219, 61, 20, 104, 229, 190, 99, 160, 146, 189, 201, 111, 142, 62, 4, 248, 14, 63, 3, 132, 172, 190, 70, 151, 113, 189, 64, 144, 209, 188, 119, 99, 92, 188, 102, 75, 171, 60, 91, 159, 249, 62, 74, 247, 204, 62, 170, 37, 196, 62, 170, 47, 134, 190, 121, 13, 151, 190, 126, 58, 171, 188, 161, 255, 85, 62, 254, 37, 180, 187, 128, 135, 254, 61, 80, 53, 152, 62, 145, 167, 64, 62, 56, 71, 246, 191, 41, 3, 56, 190, 30, 62, 161, 190, 180, 6, 96, 63, 19, 108, 60, 191, 189, 151, 108, 62, 158, 251, 192, 62, 178, 183, 2, 191, 245, 199, 198, 191, 92, 113, 150, 191, 113, 126, 65, 189, 254, 121, 146, 191, 192, 228, 69, 62, 131, 29, 58, 62, 181, 76, 207, 190, 226, 127, 128, 191, 196, 49, 201, 60, 86, 255, 69, 62, 159, 225, 180, 62, 234, 48, 243, 60, 198, 179, 128, 190, 87, 67, 37, 190, 31, 33, 160, 190, 115, 53, 170, 191, 40, 115, 226, 60, 198, 146, 221, 190, 234, 17, 143, 62, 13, 236, 20, 61, 87, 10, 252, 60, 53, 155, 10, 191, 11, 202, 153, 59, 74, 131, 27, 191, 244, 5, 59, 61, 253, 227, 42, 63, 59, 103, 163, 61, 159, 232, 212, 61, 141, 82, 159, 189, 43, 165, 68, 62, 62, 111, 25, 190, 187, 221, 98, 62, 208, 235, 180, 62, 135, 228, 13, 62, 20, 101, 68, 190, 106, 93, 137, 62, 11, 4, 109, 62, 15, 150, 205, 189, 199, 25, 178, 58, 58, 38, 46, 62, 61, 148, 219, 189, 7, 185, 161, 189, 76, 171, 208, 189, 103, 249, 5, 62, 202, 194, 46, 190, 137, 219, 30, 188, 88, 72, 40, 190, 1, 171, 52, 190, 243, 126, 210, 189, 196, 99, 14, 190, 67, 7, 254, 189, 211, 74, 48, 190, 211, 45, 158, 189, 81, 48, 165, 61, 18, 43, 193, 188, 243, 43, 183, 60, 117, 182, 3, 62, 25, 106, 217, 60, 88, 36, 4, 190, 54, 217, 36, 190, 252, 122, 90, 61, 182, 71, 199, 189, 188, 129, 18, 60, 41, 244, 249, 189, 82, 52, 25, 190, 147, 135, 90, 188, 240, 201, 71, 61, 126, 53, 233, 189, 106, 65, 148, 61, 2, 43, 245, 189, 76, 135, 3, 62, 7, 8, 145, 189, 173, 116, 131, 190, 202, 92, 194, 61, 190, 136, 35, 190, 37, 253, 174, 58, 202, 9, 56, 190, 121, 251, 207, 61, 216, 238, 53, 62, 94, 66, 243, 61, 169, 88, 121, 190, 100, 118, 159, 62, 43, 118, 180, 61, 141, 99, 6, 61, 108, 173, 213, 61, 167, 1, 184, 62, 48, 136, 2, 62, 210, 160, 8, 62, 15, 173, 254, 190, 102, 238, 0, 63, 38, 68, 189, 189, 94, 116, 142, 188, 13, 1, 196, 191, 199, 143, 120, 62, 122, 162, 64, 62, 122, 130, 231, 62, 153, 169, 8, 63, 189, 40, 164, 190, 181, 81, 126, 190, 229, 133, 23, 62, 140, 214, 168, 62, 129, 53, 19, 190, 21, 69, 180, 190, 147, 109, 168, 190, 176, 245, 162, 61, 239, 48, 41, 190, 211, 93, 119, 61, 134, 117, 252, 189, 10, 184, 10, 189, 13, 14, 230, 188, 133, 150, 246, 189, 109, 8, 154, 189, 213, 144, 97, 188, 52, 169, 107, 189, 236, 71, 178, 61, 48, 165, 75, 190, 168, 222, 35, 190, 118, 188, 0, 62, 68, 8, 165, 61, 118, 106, 209, 61, 236, 212, 83, 190, 141, 250, 75, 61, 91, 12, 201, 61, 85, 232, 250, 189, 188, 20, 248, 187, 50, 136, 14, 190, 71, 115, 27, 190, 21, 43, 234, 188, 243, 81, 224, 189, 224, 224, 254, 189, 214, 141, 18, 62, 24, 82, 175, 61, 8, 138, 70, 189, 29, 254, 173, 60, 120, 13, 255, 189, 209, 238, 243, 61, 131, 42, 201, 61, 165, 126, 15, 190, 19, 0, 113, 62, 143, 215, 35, 62, 130, 15, 210, 60, 235, 131, 88, 189, 182, 254, 27, 61, 69, 88, 117, 62, 134, 57, 157, 188, 119, 115, 39, 62, 73, 162, 12, 190, 66, 106, 231, 61, 26, 35, 84, 190, 57, 110, 141, 190, 204, 141, 183, 61, 40, 195, 238, 62, 43, 65, 49, 190, 171, 10, 158, 62, 239, 193, 152, 188, 131, 35, 23, 191, 79, 24, 221, 189, 131, 224, 159, 62, 166, 219, 210, 60, 184, 194, 103, 62, 235, 95, 60, 190, 149, 66, 124, 190, 5, 142, 41, 62, 239, 155, 245, 61, 18, 67, 111, 61, 60, 75, 139, 190, 14, 53, 124, 191, 80, 179, 191, 61, 116, 98, 170, 61, 194, 151, 30, 189, 41, 199, 101, 62, 53, 103, 238, 189, 218, 255, 124, 189, 15, 148, 51, 190, 109, 34, 34, 190, 150, 100, 190, 61, 17, 33, 31, 59, 205, 174, 45, 62, 233, 114, 48, 62, 234, 238, 77, 190, 155, 231, 156, 61, 172, 78, 229, 190, 106, 110, 110, 60, 137, 65, 9, 189, 100, 76, 1, 60, 54, 162, 224, 60, 143, 56, 4, 191, 14, 138, 164, 62, 174, 109, 155, 61, 237, 133, 241, 60, 69, 212, 161, 190, 165, 188, 202, 61, 111, 120, 17, 62, 13, 234, 125, 190, 173, 13, 174, 62, 175, 244, 11, 61, 93, 207, 200, 61, 130, 174, 67, 189, 111, 161, 150, 189, 218, 99, 46, 190, 93, 156, 100, 62, 165, 252, 155, 190, 106, 144, 168, 62, 55, 87, 124, 189, 176, 245, 216, 61, 169, 253, 147, 187, 80, 235, 169, 61, 88, 9, 92, 62, 110, 237, 124, 61, 93, 168, 142, 62, 22, 214, 37, 189, 172, 78, 77, 190, 229, 103, 40, 188, 55, 116, 166, 61, 168, 85, 62, 190, 86, 51, 75, 62, 217, 165, 84, 62, 233, 223, 45, 191, 114, 7, 251, 189, 181, 161, 144, 191, 238, 243, 234, 62, 189, 204, 18, 190, 161, 229, 106, 189, 133, 156, 67, 190, 135, 119, 174, 190, 87, 1, 23, 62, 37, 166, 169, 62, 164, 97, 38, 189, 3, 117, 8, 190, 231, 206, 245, 190, 21, 221, 166, 62, 13, 118, 121, 189, 206, 60, 206, 190, 130, 40, 37, 191, 169, 61, 69, 190, 158, 49, 188, 190, 219, 6, 218, 188, 198, 151, 172, 62, 79, 206, 141, 61, 164, 160, 234, 62, 17, 134, 62, 189, 240, 144, 189, 190, 196, 149, 210, 190, 156, 34, 52, 190, 227, 248, 142, 62, 213, 8, 189, 61, 81, 135, 166, 61, 238, 68, 191, 62, 232, 185, 215, 60, 66, 153, 116, 191, 85, 26, 238, 191, 85, 41, 35, 63, 132, 136, 178, 62, 152, 127, 33, 190, 242, 250, 147, 190, 173, 162, 18, 191, 54, 37, 103, 191, 99, 137, 93, 190, 52, 103, 96, 62, 231, 105, 88, 191, 189, 6, 151, 190, 137, 154, 164, 62, 137, 197, 115, 61, 81, 38, 66, 62, 30, 200, 143, 190, 49, 226, 11, 189, 195, 12, 95, 189, 254, 46, 141, 189, 67, 86, 48, 62, 51, 113, 28, 189, 57, 144, 235, 61, 31, 62, 3, 62, 21, 221, 234, 61, 204, 1, 13, 62, 248, 17, 24, 191, 217, 137, 85, 62, 27, 53, 84, 60, 24, 248, 173, 190, 215, 36, 190, 62, 22, 112, 170, 62, 95, 4, 137, 191, 35, 34, 55, 190, 213, 29, 6, 190, 199, 2, 4, 191, 164, 52, 2, 191, 98, 119, 89, 61, 104, 112, 64, 62, 98, 176, 36, 62, 166, 120, 142, 61, 234, 87, 111, 57, 111, 157, 116, 62, 94, 145, 112, 62, 73, 218, 108, 190, 11, 25, 198, 190, 162, 29, 52, 191, 45, 85, 9, 190, 210, 166, 80, 189, 168, 40, 165, 184, 30, 48, 14, 190, 60, 28, 69, 191, 113, 201, 43, 61, 255, 112, 3, 189, 229, 160, 240, 189, 137, 192, 237, 190, 241, 251, 64, 62, 66, 23, 7, 61, 173, 222, 245, 189, 78, 123, 55, 191, 235, 248, 24, 189, 114, 34, 2, 191, 31, 109, 89, 189, 32, 216, 40, 60, 96, 21, 52, 62, 186, 34, 229, 62, 244, 25, 5, 190, 249, 74, 49, 63, 134, 85, 2, 191, 17, 208, 248, 61, 207, 191, 243, 190, 45, 140, 124, 62, 41, 17, 247, 61, 230, 68, 250, 189, 209, 15, 253, 62, 33, 131, 140, 62, 104, 214, 90, 62, 60, 129, 49, 61, 16, 128, 174, 61, 117, 154, 219, 188, 19, 124, 118, 190, 177, 124, 78, 190, 22, 139, 190, 189, 218, 211, 176, 190, 8, 103, 161, 190, 153, 132, 153, 60, 58, 93, 30, 62, 131, 222, 56, 190, 109, 230, 173, 61, 232, 77, 247, 61, 51, 211, 11, 62, 136, 155, 27, 190, 44, 141, 90, 190, 61, 80, 32, 191, 212, 62, 175, 61, 153, 31, 94, 189, 138, 205, 63, 190, 224, 177, 160, 62, 36, 16, 124, 190, 231, 178, 243, 62, 2, 14, 4, 189, 101, 220, 75, 61, 7, 242, 147, 189, 214, 184, 144, 189, 121, 191, 68, 190, 187, 183, 214, 61, 15, 114, 66, 61, 78, 53, 159, 190, 219, 181, 145, 61, 217, 75, 213, 190, 175, 202, 13, 62, 92, 234, 85, 189, 7, 219, 19, 62, 201, 255, 167, 190, 228, 215, 63, 60, 62, 146, 59, 190, 212, 27, 225, 189, 102, 24, 115, 60, 131, 116, 141, 190, 39, 85, 39, 191, 12, 7, 161, 60, 40, 226, 185, 188, 63, 75, 36, 62, 25, 15, 198, 61, 200, 220, 102, 190, 19, 120, 38, 191, 73, 63, 26, 62, 51, 200, 186, 189, 1, 37, 72, 190, 19, 135, 216, 62, 103, 53, 42, 190, 248, 185, 191, 61, 183, 171, 15, 190, 177, 32, 75, 61, 207, 255, 99, 61, 69, 116, 101, 62, 76, 165, 178, 62, 164, 169, 7, 62, 5, 147, 213, 189, 233, 149, 201, 59, 216, 36, 172, 61, 146, 143, 138, 61, 139, 160, 163, 190, 239, 132, 177, 60, 236, 247, 158, 190, 124, 252, 31, 61, 42, 75, 161, 62, 176, 48, 49, 62, 93, 132, 159, 60, 73, 34, 199, 189, 248, 200, 229, 61, 205, 45, 15, 191, 142, 129, 247, 187, 214, 101, 126, 62, 206, 13, 205, 60, 74, 157, 5, 62, 132, 103, 203, 61, 30, 105, 86, 60, 156, 147, 234, 61, 187, 118, 110, 62, 238, 193, 62, 189, 106, 171, 18, 62, 35, 218, 34, 190, 2, 63, 231, 62, 243, 251, 30, 190, 156, 194, 198, 189, 197, 157, 164, 190, 33, 92, 97, 189, 179, 218, 72, 62, 199, 131, 16, 62, 71, 65, 165, 190, 131, 215, 153, 62, 55, 74, 2, 61, 23, 68, 6, 191, 86, 202, 5, 62, 128, 220, 127, 62, 118, 103, 49, 62, 179, 129, 237, 189, 112, 113, 0, 61, 72, 75, 227, 189, 26, 73, 73, 61, 200, 123, 233, 60, 124, 228, 42, 189, 181, 24, 250, 189, 97, 186, 78, 189, 136, 131, 177, 189, 243, 243, 9, 190, 103, 150, 158, 189, 132, 212, 205, 188, 150, 32, 21, 190, 238, 129, 53, 60, 226, 253, 3, 190, 11, 14, 46, 190, 87, 57, 135, 189, 7, 81, 169, 61, 49, 110, 29, 61, 222, 79, 26, 61, 58, 1, 246, 188, 243, 233, 37, 62, 79, 26, 185, 61, 249, 247, 40, 190, 148, 145, 197, 188, 171, 176, 42, 190, 151, 170, 181, 59, 146, 188, 35, 190, 76, 153, 130, 189, 255, 223, 19, 190, 41, 185, 114, 61, 201, 166, 175, 61, 4, 180, 184, 61, 1, 50, 19, 190, 88, 151, 98, 189, 107, 178, 57, 190, 178, 43, 222, 189, 74, 253, 123, 189, 198, 235, 110, 61, 51, 81, 191, 60, 49, 147, 17, 190, 76, 44, 94, 189, 241, 111, 82, 190, 203, 127, 128, 60, 30, 26, 152, 61, 114, 132, 149, 60, 71, 110, 224, 60, 6, 31, 19, 190, 142, 196, 38, 190, 172, 235, 222, 186, 143, 131, 9, 61, 74, 188, 171, 61, 117, 181, 7, 60, 134, 232, 181, 188, 17, 184, 214, 188, 155, 61, 45, 61, 176, 0, 41, 190, 26, 40, 9, 62, 25, 32, 125, 60, 255, 240, 235, 189, 219, 148, 217, 61, 113, 43, 36, 62, 16, 80, 56, 190, 82, 110, 71, 62, 63, 45, 205, 190, 160, 62, 108, 190, 66, 207, 92, 190, 113, 240, 79, 188, 157, 110, 119, 62, 65, 159, 58, 62, 42, 95, 154, 62, 164, 210, 44, 62, 168, 239, 79, 60, 83, 245, 135, 190, 1, 108, 209, 188, 154, 10, 150, 60, 181, 152, 93, 62, 132, 79, 106, 189, 170, 251, 143, 61, 239, 112, 148, 188, 139, 146, 4, 191, 8, 217, 138, 61, 201, 233, 160, 191, 122, 154, 137, 60, 210, 116, 123, 61, 54, 98, 122, 188, 91, 170, 121, 189, 12, 69, 148, 189, 51, 12, 190, 61, 157, 64, 147, 191, 68, 161, 135, 61, 183, 177, 143, 190, 203, 157, 87, 190, 189, 218, 167, 60, 7, 12, 253, 61};
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
                alignas(float) const unsigned char memory[] = {50, 182, 227, 62, 34, 114, 89, 62, 178, 69, 180, 62, 160, 105, 37, 61, 120, 208, 132, 59, 191, 104, 107, 189, 129, 184, 33, 62, 179, 198, 99, 190, 34, 49, 147, 190, 104, 78, 139, 62, 225, 17, 228, 189, 249, 13, 166, 62, 155, 201, 16, 62, 48, 83, 40, 62, 227, 71, 143, 188, 191, 37, 149, 61, 248, 164, 210, 190, 237, 65, 47, 190, 88, 97, 169, 62, 143, 3, 156, 189, 212, 239, 9, 62, 2, 62, 126, 190, 31, 225, 141, 61, 254, 24, 153, 62, 46, 15, 7, 61, 77, 235, 125, 190, 213, 200, 180, 190, 0, 34, 232, 190, 66, 223, 40, 60, 44, 63, 169, 61, 50, 228, 179, 189, 97, 224, 136, 62};
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
                alignas(float) const unsigned char memory[] = {126, 37, 88, 63, 150, 87, 176, 190, 34, 172, 209, 190, 115, 227, 6, 63, 246, 17, 209, 62, 77, 72, 34, 63, 96, 221, 87, 63, 193, 215, 164, 188, 233, 178, 142, 191, 96, 106, 140, 191, 44, 204, 187, 62, 141, 5, 14, 63, 98, 173, 19, 191, 216, 202, 29, 191, 22, 237, 195, 62, 98, 150, 187, 191, 145, 137, 116, 63, 177, 104, 165, 188, 250, 123, 206, 190, 140, 184, 197, 189, 8, 0, 222, 62, 39, 61, 204, 187, 174, 92, 10, 63, 108, 180, 123, 191, 54, 65, 129, 62, 123, 170, 189, 190, 144, 177, 103, 190, 209, 214, 63, 63, 22, 129, 95, 190, 28, 112, 38, 61, 149, 149, 240, 189, 255, 55, 75, 61, 151, 226, 127, 62, 64, 226, 20, 189, 121, 4, 149, 190, 158, 14, 145, 61, 228, 192, 200, 190, 142, 58, 129, 62, 24, 44, 223, 58, 203, 137, 189, 62, 139, 102, 120, 61, 200, 34, 11, 62, 118, 216, 5, 190, 64, 62, 197, 189, 235, 134, 83, 190, 231, 239, 12, 189, 12, 246, 92, 190, 225, 140, 182, 188, 205, 89, 43, 189, 114, 43, 165, 189, 16, 122, 129, 190, 124, 247, 204, 61, 119, 44, 2, 190, 3, 24, 99, 62, 161, 73, 37, 62, 71, 139, 28, 190, 241, 117, 208, 190, 149, 195, 152, 62, 26, 11, 227, 61, 235, 117, 179, 60, 44, 79, 74, 190, 76, 235, 18, 62, 20, 36, 254, 61, 141, 101, 150, 190};
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
                alignas(float) const unsigned char memory[] = {47, 117, 42, 189, 236, 107, 143, 190};
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
    alignas(float) const unsigned char memory[] = {60, 249, 172, 190, 175, 176, 245, 62, 109, 132, 202, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {130, 163, 190, 62, 24, 48, 118, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0032/steps/000000000016000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}