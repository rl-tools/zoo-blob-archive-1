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
                alignas(float) const unsigned char memory[] = {234, 91, 131, 62, 169, 235, 175, 60, 189, 180, 28, 189, 176, 88, 212, 190, 206, 134, 205, 190, 197, 170, 86, 62, 169, 101, 159, 62, 0, 6, 80, 62, 235, 254, 251, 189, 81, 71, 10, 61, 227, 132, 39, 63, 27, 113, 27, 191, 19, 246, 41, 63, 235, 49, 63, 189, 60, 116, 98, 190, 163, 103, 72, 191, 83, 205, 78, 191, 71, 103, 164, 62, 236, 157, 5, 191, 53, 213, 134, 63, 46, 45, 170, 190, 194, 94, 106, 189, 67, 157, 182, 62, 119, 243, 242, 62, 254, 124, 59, 190, 121, 60, 174, 63, 213, 106, 122, 62, 106, 199, 154, 62, 180, 11, 134, 63, 156, 35, 51, 62, 190, 46, 69, 190, 182, 71, 100, 63, 157, 116, 233, 190, 172, 235, 190, 61, 129, 188, 180, 191, 70, 132, 241, 190, 83, 196, 194, 190, 82, 157, 81, 191, 174, 202, 148, 60, 128, 30, 6, 190, 34, 63, 189, 63, 24, 196, 183, 62, 19, 129, 6, 63, 60, 90, 172, 191, 60, 22, 132, 190, 22, 7, 49, 190, 23, 189, 168, 191, 231, 25, 130, 190, 201, 130, 195, 62, 69, 12, 69, 63, 247, 114, 0, 62, 76, 182, 40, 63, 237, 229, 159, 190, 173, 227, 21, 189, 130, 212, 197, 62, 84, 96, 128, 191, 189, 3, 216, 61, 243, 108, 5, 190, 58, 71, 158, 62, 199, 98, 155, 190, 189, 30, 183, 60, 99, 112, 228, 189, 170, 112, 86, 191, 211, 201, 229, 190, 91, 245, 118, 63, 197, 215, 24, 63, 73, 233, 36, 191, 165, 129, 242, 62, 163, 12, 9, 190, 60, 94, 41, 191, 75, 74, 206, 190, 104, 64, 48, 190, 255, 130, 40, 190, 66, 16, 188, 62, 149, 116, 13, 191, 13, 254, 25, 62, 230, 102, 133, 62, 109, 189, 21, 191, 192, 160, 38, 191, 89, 41, 113, 63, 18, 73, 233, 189, 14, 15, 163, 190, 96, 127, 121, 191, 30, 221, 13, 191, 242, 252, 154, 62, 16, 63, 137, 63, 162, 232, 156, 62, 81, 242, 59, 63, 102, 108, 194, 189, 190, 197, 100, 62, 76, 242, 51, 191, 120, 191, 146, 191, 189, 46, 121, 190, 164, 218, 9, 191, 148, 196, 71, 190, 120, 249, 8, 191};
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
                alignas(float) const unsigned char memory[] = {80, 13, 35, 191, 124, 245, 216, 190, 159, 54, 231, 62, 177, 89, 11, 62, 248, 130, 67, 191, 17, 64, 147, 190, 47, 85, 151, 189, 139, 30, 122, 190, 240, 77, 158, 190, 115, 223, 49, 190, 3, 109, 46, 190, 203, 44, 25, 190, 194, 56, 5, 63, 148, 225, 223, 190, 167, 158, 198, 60, 200, 51, 132, 189, 86, 9, 141, 190, 212, 163, 254, 189, 169, 16, 18, 191, 176, 221, 22, 63, 92, 68, 192, 190, 63, 242, 138, 190, 157, 78, 49, 63, 58, 2, 44, 63, 255, 237, 79, 190, 136, 66, 218, 188, 38, 23, 80, 62, 4, 86, 20, 190, 172, 153, 181, 190, 181, 49, 34, 191, 197, 41, 223, 62, 224, 238, 29, 191};
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
                alignas(float) const unsigned char memory[] = {165, 66, 233, 189, 4, 179, 190, 189, 253, 162, 98, 190, 56, 104, 148, 61, 188, 121, 102, 62, 82, 206, 178, 189, 170, 179, 8, 62, 159, 2, 153, 187, 252, 236, 13, 60, 29, 168, 33, 62, 109, 1, 101, 190, 101, 115, 218, 189, 92, 246, 21, 189, 245, 109, 2, 190, 181, 129, 67, 60, 235, 205, 159, 60, 20, 89, 251, 61, 25, 205, 192, 189, 247, 14, 203, 61, 21, 19, 48, 61, 124, 212, 255, 61, 175, 88, 115, 61, 164, 10, 252, 190, 133, 248, 227, 189, 179, 135, 129, 188, 132, 134, 62, 189, 97, 154, 232, 190, 244, 100, 210, 188, 4, 33, 207, 189, 3, 59, 147, 61, 28, 210, 159, 61, 164, 137, 217, 187, 237, 99, 6, 62, 194, 162, 23, 190, 133, 125, 218, 62, 58, 100, 141, 62, 240, 244, 228, 62, 152, 81, 118, 187, 228, 75, 168, 187, 129, 103, 31, 188, 71, 13, 106, 62, 85, 99, 148, 191, 102, 25, 85, 60, 110, 120, 140, 189, 202, 199, 205, 61, 169, 110, 136, 62, 37, 38, 191, 62, 248, 144, 23, 190, 135, 217, 32, 191, 105, 212, 227, 61, 138, 8, 153, 62, 53, 144, 129, 60, 211, 226, 228, 189, 8, 213, 165, 189, 86, 105, 103, 189, 159, 22, 29, 62, 116, 179, 49, 61, 45, 242, 70, 61, 183, 130, 43, 62, 204, 231, 237, 61, 54, 157, 25, 191, 108, 107, 5, 190, 195, 138, 243, 188, 127, 54, 143, 189, 206, 4, 208, 60, 200, 77, 7, 191, 125, 125, 199, 62, 193, 132, 253, 61, 53, 112, 1, 191, 173, 10, 37, 191, 110, 122, 190, 62, 227, 187, 166, 188, 214, 32, 151, 61, 95, 124, 149, 190, 101, 161, 129, 61, 159, 92, 66, 191, 108, 64, 81, 61, 240, 164, 82, 60, 90, 168, 12, 58, 224, 182, 139, 191, 77, 45, 66, 190, 132, 102, 128, 62, 166, 36, 57, 62, 24, 35, 191, 188, 207, 137, 160, 190, 240, 12, 165, 62, 122, 152, 215, 61, 105, 51, 118, 190, 15, 182, 177, 62, 180, 175, 13, 62, 228, 49, 204, 62, 214, 10, 4, 189, 6, 104, 219, 189, 109, 106, 70, 62, 28, 43, 69, 191, 148, 110, 190, 190, 93, 170, 233, 189, 134, 184, 4, 60, 50, 180, 34, 62, 86, 254, 190, 190, 9, 240, 173, 61, 60, 113, 130, 61, 155, 150, 171, 189, 23, 205, 168, 189, 229, 11, 246, 61, 65, 152, 33, 190, 132, 219, 144, 190, 56, 32, 131, 190, 234, 30, 182, 62, 38, 57, 94, 61, 53, 47, 74, 189, 18, 2, 128, 191, 206, 177, 235, 189, 29, 82, 81, 189, 52, 166, 226, 61, 160, 145, 246, 190, 103, 69, 173, 190, 60, 5, 227, 186, 157, 212, 203, 190, 121, 153, 0, 191, 143, 116, 222, 188, 235, 108, 30, 191, 98, 202, 91, 190, 95, 82, 193, 190, 204, 14, 241, 60, 89, 90, 196, 62, 47, 113, 20, 191, 141, 76, 227, 190, 121, 47, 134, 189, 124, 38, 179, 61, 33, 241, 93, 61, 63, 246, 146, 62, 227, 74, 173, 62, 26, 51, 160, 62, 55, 74, 29, 62, 214, 55, 160, 190, 12, 56, 153, 62, 237, 242, 9, 189, 162, 166, 48, 190, 145, 110, 99, 62, 153, 166, 187, 61, 167, 180, 69, 62, 91, 6, 79, 62, 92, 81, 29, 190, 193, 180, 227, 62, 184, 49, 179, 62, 221, 247, 167, 189, 227, 132, 125, 62, 96, 135, 242, 189, 142, 233, 3, 62, 104, 57, 76, 189, 206, 30, 46, 190, 126, 46, 186, 61, 236, 65, 149, 62, 153, 252, 18, 189, 68, 73, 7, 190, 24, 247, 45, 190, 223, 83, 120, 190, 238, 174, 182, 190, 31, 44, 155, 190, 224, 3, 13, 62, 132, 33, 180, 189, 207, 207, 166, 190, 254, 190, 133, 189, 170, 231, 23, 60, 52, 91, 199, 61, 100, 117, 41, 190, 150, 17, 176, 190, 28, 16, 72, 190, 42, 123, 173, 189, 61, 155, 187, 60, 194, 138, 2, 61, 2, 39, 114, 61, 196, 236, 235, 189, 205, 58, 0, 62, 13, 25, 169, 62, 184, 177, 169, 61, 97, 145, 10, 63, 46, 49, 232, 62, 196, 106, 129, 189, 101, 8, 252, 189, 118, 196, 238, 59, 146, 249, 62, 191, 190, 54, 95, 190, 211, 130, 194, 61, 251, 145, 17, 62, 234, 102, 226, 190, 121, 246, 139, 190, 67, 63, 108, 190, 240, 52, 232, 191, 118, 175, 154, 60, 22, 96, 149, 189, 49, 12, 43, 62, 8, 217, 100, 190, 82, 155, 14, 62, 203, 21, 176, 61, 204, 91, 91, 63, 197, 28, 238, 189, 156, 102, 145, 62, 253, 100, 181, 190, 195, 172, 178, 62, 103, 111, 132, 189, 76, 117, 244, 61, 235, 76, 210, 62, 213, 224, 253, 188, 31, 158, 188, 62, 80, 232, 61, 62, 14, 130, 1, 187, 234, 197, 112, 62, 92, 160, 182, 62, 244, 92, 191, 189, 92, 190, 57, 61, 67, 230, 245, 186, 171, 169, 117, 190, 192, 193, 175, 189, 185, 49, 172, 190, 172, 56, 102, 62, 190, 2, 96, 62, 66, 196, 33, 62, 66, 14, 192, 190, 215, 244, 70, 61, 143, 204, 248, 190, 192, 143, 210, 190, 80, 125, 64, 190, 197, 52, 151, 189, 144, 180, 74, 61, 55, 88, 184, 62, 126, 159, 192, 61, 57, 31, 186, 62, 247, 237, 145, 62, 15, 160, 181, 60, 85, 71, 192, 187, 232, 67, 139, 61, 127, 204, 155, 190, 228, 248, 188, 190, 150, 98, 233, 61, 148, 113, 137, 62, 207, 70, 54, 188, 239, 52, 245, 188, 14, 141, 86, 190, 62, 38, 96, 190, 51, 50, 92, 190, 18, 87, 116, 60, 34, 27, 215, 190, 51, 196, 248, 190, 87, 154, 172, 61, 18, 246, 195, 189, 182, 154, 49, 189, 244, 195, 159, 190, 47, 49, 112, 62, 185, 100, 243, 189, 166, 16, 93, 61, 98, 139, 154, 189, 123, 196, 191, 61, 215, 212, 147, 189, 62, 242, 130, 191, 9, 125, 96, 189, 102, 115, 48, 61, 189, 13, 200, 62, 94, 193, 138, 188, 127, 9, 149, 62, 26, 181, 163, 62, 62, 107, 144, 190, 236, 116, 45, 62, 245, 37, 191, 190, 127, 157, 149, 191, 199, 7, 140, 190, 208, 114, 141, 61, 13, 244, 190, 61, 92, 246, 182, 189, 19, 232, 226, 62, 146, 82, 242, 60, 185, 204, 83, 191, 126, 187, 211, 62, 146, 178, 113, 62, 90, 206, 44, 62, 174, 177, 71, 59, 135, 199, 119, 190, 174, 157, 5, 62, 12, 65, 59, 62, 217, 38, 117, 190, 55, 66, 61, 62, 102, 69, 220, 190, 59, 237, 154, 61, 67, 199, 188, 190, 154, 14, 140, 62, 212, 193, 200, 61, 50, 128, 220, 189, 37, 115, 61, 61, 97, 250, 48, 188, 37, 234, 36, 62, 160, 198, 153, 61, 188, 157, 234, 190, 164, 2, 146, 62, 75, 123, 19, 61, 83, 113, 11, 190, 252, 218, 101, 62, 166, 30, 23, 190, 125, 120, 159, 190, 120, 249, 115, 62, 174, 158, 159, 188, 168, 209, 201, 62, 153, 147, 90, 62, 84, 225, 136, 61, 216, 128, 145, 62, 5, 187, 147, 62, 72, 51, 135, 62, 125, 75, 71, 188, 223, 101, 109, 190, 112, 124, 59, 61, 73, 208, 24, 62, 69, 153, 143, 189, 16, 200, 111, 61, 247, 137, 39, 61, 222, 231, 145, 190, 148, 153, 212, 189, 126, 45, 212, 189, 238, 250, 175, 60, 238, 36, 18, 62, 162, 64, 13, 191, 164, 96, 76, 61, 174, 104, 149, 188, 68, 131, 92, 62, 138, 19, 130, 62, 162, 223, 194, 189, 165, 160, 26, 190, 216, 126, 80, 191, 159, 105, 254, 61, 148, 104, 61, 191, 53, 65, 250, 62, 67, 4, 162, 62, 8, 17, 10, 191, 54, 230, 137, 62, 70, 52, 223, 191, 149, 162, 133, 190, 65, 46, 98, 191, 242, 141, 199, 61, 172, 225, 239, 189, 6, 182, 185, 61, 117, 9, 84, 190, 92, 134, 251, 61, 177, 120, 182, 190, 82, 35, 44, 62, 147, 192, 59, 189, 172, 202, 12, 191, 156, 97, 137, 191, 54, 24, 210, 189, 148, 215, 202, 62, 220, 148, 175, 62, 123, 106, 32, 62, 114, 28, 192, 189, 15, 228, 136, 189, 196, 132, 165, 189, 201, 226, 68, 189, 237, 246, 217, 189, 251, 45, 69, 62, 131, 233, 138, 189, 79, 88, 12, 190, 167, 73, 17, 60, 14, 104, 13, 62, 253, 2, 41, 189, 133, 238, 131, 62, 31, 3, 34, 190, 237, 67, 215, 62, 14, 22, 55, 61, 93, 7, 128, 189, 154, 28, 167, 62, 31, 92, 146, 62, 56, 141, 198, 189, 218, 38, 151, 62, 247, 216, 59, 62, 88, 67, 38, 190, 65, 185, 178, 61, 102, 254, 198, 189, 83, 205, 220, 190, 159, 52, 107, 62, 158, 38, 206, 60, 142, 130, 103, 62, 30, 120, 39, 191, 133, 204, 33, 62, 186, 14, 237, 189, 208, 92, 12, 190, 57, 116, 213, 60, 190, 149, 185, 60, 144, 109, 243, 61, 255, 169, 159, 61, 87, 247, 130, 62, 126, 10, 110, 62, 36, 65, 231, 190, 222, 38, 184, 61, 188, 253, 213, 62, 184, 196, 37, 62, 89, 85, 71, 60, 26, 141, 189, 190, 243, 147, 42, 190, 216, 138, 21, 191, 44, 178, 23, 190, 95, 193, 149, 189, 92, 63, 127, 191, 124, 38, 147, 191, 229, 174, 147, 190, 38, 152, 148, 190, 51, 130, 203, 62, 187, 178, 134, 62, 25, 158, 98, 190, 245, 108, 223, 58, 200, 58, 18, 62, 148, 145, 189, 190, 248, 100, 10, 62, 177, 102, 191, 61, 124, 96, 248, 62, 210, 17, 40, 61, 246, 37, 139, 188, 6, 73, 221, 62, 87, 133, 41, 191, 131, 163, 53, 190, 128, 180, 158, 187, 109, 71, 243, 190, 103, 54, 199, 61, 204, 82, 31, 190, 117, 6, 136, 190, 247, 62, 135, 62, 82, 73, 23, 191, 2, 227, 49, 190, 153, 189, 183, 62, 89, 177, 91, 190, 154, 179, 125, 191, 243, 12, 12, 190, 121, 64, 17, 62, 80, 136, 140, 62, 84, 37, 98, 61, 249, 24, 212, 61, 177, 104, 221, 190, 126, 189, 210, 61, 57, 210, 217, 62, 228, 30, 163, 189, 113, 255, 17, 191, 219, 175, 40, 61, 127, 64, 131, 62, 83, 185, 157, 62, 173, 167, 215, 188, 204, 200, 197, 190, 78, 186, 198, 189, 87, 212, 2, 191, 156, 72, 11, 190, 203, 57, 166, 190, 151, 133, 199, 62, 234, 63, 128, 62, 193, 191, 152, 61, 99, 119, 38, 63, 161, 120, 155, 62, 79, 204, 178, 190, 103, 62, 166, 191, 164, 107, 213, 190, 116, 242, 67, 190, 9, 26, 177, 62, 220, 97, 162, 191, 56, 61, 88, 63, 235, 236, 88, 62, 101, 130, 42, 190, 224, 147, 123, 61, 210, 52, 58, 192, 122, 191, 118, 190, 137, 5, 154, 190, 166, 3, 53, 63, 58, 196, 50, 61, 210, 86, 226, 190, 229, 243, 149, 62, 156, 244, 41, 62, 115, 146, 34, 191, 83, 31, 161, 60, 189, 106, 76, 62, 212, 213, 122, 190, 207, 0, 184, 190, 76, 46, 143, 189, 20, 240, 62, 62, 32, 2, 251, 62, 101, 230, 192, 190, 176, 53, 18, 63, 223, 126, 200, 62, 161, 195, 153, 61, 239, 233, 10, 188, 130, 210, 145, 62, 219, 157, 7, 62, 24, 112, 239, 61, 150, 68, 33, 62, 78, 250, 54, 63, 133, 88, 9, 189, 103, 211, 222, 61, 94, 169, 59, 190, 106, 158, 47, 189, 114, 52, 118, 191, 117, 128, 150, 189, 180, 253, 169, 189, 42, 88, 202, 59, 106, 144, 175, 191, 85, 16, 2, 190, 65, 243, 200, 61, 250, 220, 161, 62, 159, 218, 109, 62, 86, 111, 30, 191, 233, 36, 22, 62, 55, 253, 130, 62, 17, 79, 250, 190, 201, 58, 240, 61, 161, 231, 199, 61, 64, 168, 27, 63, 174, 103, 110, 190, 216, 207, 41, 190, 133, 235, 176, 62, 165, 110, 160, 191, 163, 116, 43, 188, 134, 37, 1, 190, 112, 0, 89, 62, 223, 226, 222, 62, 20, 160, 135, 188, 109, 105, 136, 191, 37, 0, 0, 190, 156, 197, 14, 190, 64, 106, 14, 61, 14, 65, 187, 191, 72, 177, 191, 62, 99, 252, 114, 62, 217, 209, 82, 191, 141, 210, 8, 62, 80, 27, 51, 192, 172, 35, 250, 189, 254, 6, 147, 191, 206, 177, 3, 63, 172, 197, 84, 62, 107, 16, 77, 189, 83, 75, 15, 62, 83, 6, 159, 62, 24, 178, 179, 190, 106, 179, 160, 62, 245, 53, 158, 189, 253, 218, 140, 190, 221, 255, 166, 189, 224, 143, 97, 62, 77, 239, 64, 62, 183, 133, 49, 62, 181, 139, 240, 61, 183, 11, 142, 189, 184, 79, 148, 62, 247, 141, 41, 190, 160, 101, 254, 190, 127, 60, 239, 61, 84, 108, 167, 189, 100, 199, 29, 62, 138, 133, 63, 191, 208, 71, 9, 191, 2, 136, 236, 189, 49, 45, 27, 62, 54, 67, 207, 62, 103, 219, 168, 190, 242, 9, 29, 190, 28, 186, 118, 191, 177, 243, 155, 190, 136, 122, 60, 190, 41, 151, 33, 59, 73, 191, 31, 62, 178, 56, 243, 188, 71, 19, 255, 60, 253, 22, 65, 191, 180, 207, 63, 61, 236, 184, 146, 188, 134, 80, 223, 189, 225, 128, 149, 190, 71, 93, 81, 58, 213, 192, 67, 188, 190, 254, 68, 61, 144, 35, 1, 190, 183, 34, 241, 60, 129, 149, 188, 190, 196, 37, 174, 190, 154, 218, 69, 189, 92, 61, 232, 61, 2, 72, 17, 190, 176, 116, 217, 188, 69, 47, 49, 61, 18, 143, 198, 61, 115, 130, 90, 188, 89, 77, 29, 190, 47, 202, 214, 189, 173, 191, 37, 190, 21, 242, 215, 61, 238, 59, 38, 190, 15, 125, 207, 61, 91, 129, 33, 190, 152, 185, 134, 61, 32, 213, 101, 190, 60, 200, 42, 190, 1, 170, 60, 189, 55, 251, 17, 62, 8, 75, 80, 62, 250, 58, 1, 61, 110, 112, 153, 61, 178, 220, 242, 61, 166, 242, 62, 61, 105, 2, 183, 189, 219, 48, 144, 61, 55, 255, 101, 61, 158, 107, 13, 190, 57, 136, 8, 190, 254, 36, 104, 61, 102, 203, 28, 190, 100, 52, 172, 61, 221, 228, 2, 190, 69, 195, 224, 61, 82, 2, 4, 190, 155, 236, 15, 62, 99, 28, 209, 61, 53, 204, 148, 191, 136, 56, 128, 190, 22, 88, 171, 190, 7, 87, 59, 60, 131, 207, 135, 191, 178, 163, 96, 62, 205, 204, 6, 189, 56, 29, 49, 190, 179, 46, 49, 62, 136, 173, 19, 192, 35, 55, 174, 61, 91, 96, 140, 190, 18, 245, 203, 62, 189, 73, 94, 61, 220, 184, 237, 61, 97, 208, 45, 62, 31, 17, 46, 61, 6, 172, 2, 191, 27, 16, 201, 61, 146, 190, 144, 189, 207, 170, 48, 190, 183, 78, 93, 190, 140, 158, 171, 61, 116, 2, 131, 62, 251, 241, 212, 62, 216, 40, 152, 62, 213, 53, 191, 61, 225, 225, 110, 62, 8, 115, 210, 189, 227, 222, 7, 63, 145, 195, 44, 191, 62, 177, 15, 191, 13, 46, 172, 61, 74, 5, 218, 62, 109, 138, 16, 191, 228, 131, 4, 60, 139, 227, 137, 191, 178, 28, 110, 190, 87, 155, 62, 190, 89, 163, 130, 190, 227, 135, 195, 62, 195, 146, 1, 192, 112, 35, 72, 191, 55, 165, 57, 191, 50, 123, 45, 62, 129, 225, 81, 189, 34, 132, 133, 190, 142, 40, 179, 189, 226, 27, 120, 61, 141, 188, 7, 191, 115, 22, 128, 189, 97, 72, 167, 61, 59, 117, 176, 190, 78, 255, 1, 191, 218, 18, 170, 190, 33, 98, 43, 62, 219, 151, 206, 188, 178, 39, 141, 189, 238, 232, 179, 62, 85, 64, 194, 190, 134, 51, 125, 189, 193, 28, 4, 61, 149, 60, 133, 190, 36, 125, 29, 190, 161, 95, 150, 61, 145, 20, 242, 61, 46, 42, 52, 189, 2, 167, 174, 190, 75, 61, 146, 61, 40, 248, 60, 190, 16, 118, 255, 189, 108, 170, 62, 62, 191, 140, 115, 61, 62, 40, 9, 62, 133, 185, 71, 62, 104, 220, 1, 62, 35, 155, 153, 189, 193, 175, 17, 61, 221, 27, 142, 62, 163, 26, 209, 189, 226, 85, 181, 190, 134, 105, 88, 190, 147, 195, 110, 191, 68, 86, 118, 190, 136, 202, 247, 61, 42, 147, 228, 61, 21, 122, 76, 191, 140, 216, 6, 190, 72, 233, 103, 190, 253, 119, 227, 191, 241, 21, 20, 188, 245, 37, 135, 190, 120, 86, 180, 61, 142, 221, 239, 189, 94, 55, 18, 190, 105, 151, 209, 62, 156, 94, 224, 189, 197, 146, 204, 62, 244, 240, 13, 62, 118, 188, 177, 190, 239, 183, 93, 62, 84, 30, 78, 190, 147, 16, 212, 190, 160, 25, 135, 62, 179, 187, 142, 62, 119, 41, 239, 62, 110, 250, 169, 61, 9, 175, 72, 62, 186, 141, 94, 189, 6, 54, 37, 63, 49, 244, 158, 190, 138, 194, 175, 186, 225, 2, 45, 191, 10, 111, 65, 189, 86, 98, 160, 62, 134, 241, 119, 188, 221, 210, 149, 62, 35, 51, 96, 62, 177, 118, 173, 61, 157, 105, 243, 190, 80, 191, 46, 190, 94, 29, 255, 190, 26, 243, 147, 62, 5, 136, 7, 191, 174, 67, 135, 189, 171, 119, 142, 61, 110, 71, 223, 62, 110, 127, 101, 59, 83, 110, 235, 190, 191, 237, 232, 61, 157, 107, 22, 63, 206, 200, 234, 61, 113, 214, 13, 190, 112, 112, 121, 190, 111, 63, 21, 59, 92, 52, 82, 191, 139, 47, 214, 60, 34, 104, 226, 190, 172, 111, 131, 191, 168, 139, 150, 191, 201, 24, 105, 190, 112, 78, 210, 190, 230, 162, 160, 62, 144, 41, 147, 62, 174, 88, 80, 190, 240, 28, 141, 61, 126, 101, 206, 60, 63, 74, 235, 190, 129, 65, 64, 62, 159, 223, 7, 189, 220, 129, 178, 62, 17, 86, 238, 189, 171, 58, 57, 189, 47, 12, 218, 62, 165, 67, 129, 191, 145, 140, 22, 190, 253, 214, 36, 189, 19, 133, 198, 189, 203, 186, 84, 63, 178, 199, 71, 62, 204, 6, 35, 63, 112, 215, 27, 62, 94, 3, 26, 62, 72, 156, 4, 61, 80, 180, 106, 62, 238, 209, 131, 190, 97, 101, 238, 189, 145, 188, 254, 186, 134, 138, 84, 62, 206, 46, 43, 62, 166, 163, 206, 62, 69, 175, 38, 190, 197, 164, 134, 189, 136, 117, 180, 62, 143, 98, 187, 62, 99, 95, 37, 62, 95, 226, 1, 62, 119, 192, 182, 61, 90, 85, 118, 62, 101, 64, 2, 62, 121, 71, 90, 62, 24, 4, 165, 61, 146, 125, 60, 61, 163, 254, 102, 61, 34, 223, 199, 189, 74, 108, 129, 61, 59, 104, 132, 188, 133, 87, 155, 190, 92, 240, 94, 61, 27, 83, 161, 62, 187, 71, 43, 62, 147, 255, 203, 189, 175, 183, 169, 191, 202, 94, 226, 189, 129, 95, 68, 189, 95, 60, 38, 190, 163, 2, 62, 191, 163, 174, 64, 63, 35, 244, 38, 62, 206, 184, 140, 190, 65, 165, 189, 61, 160, 84, 51, 192, 43, 49, 138, 188, 197, 215, 56, 187, 104, 152, 178, 62, 180, 94, 227, 189, 128, 190, 21, 191, 51, 19, 82, 62, 72, 104, 43, 189, 126, 140, 196, 190, 201, 165, 42, 62, 7, 188, 140, 62, 120, 205, 67, 190, 251, 239, 255, 188, 26, 18, 65, 62, 85, 6, 158, 60, 36, 104, 140, 62, 18, 162, 137, 190, 124, 77, 145, 62, 103, 244, 78, 62, 179, 45, 13, 190, 22, 183, 48, 190, 130, 131, 235, 190, 194, 193, 61, 190, 28, 106, 94, 61, 245, 229, 45, 191, 85, 126, 27, 191, 234, 186, 105, 62, 93, 140, 44, 60, 149, 70, 146, 62, 84, 79, 21, 191, 85, 51, 243, 61, 225, 174, 40, 191, 3, 19, 19, 190, 48, 61, 9, 62, 107, 70, 224, 188, 93, 153, 200, 61, 238, 68, 0, 191, 77, 123, 238, 190, 199, 42, 131, 191, 202, 162, 13, 61, 52, 187, 25, 62, 35, 199, 40, 62, 254, 66, 36, 63, 12, 4, 181, 189, 44, 251, 28, 62, 89, 174, 103, 62, 184, 5, 54, 190, 130, 213, 72, 62, 187, 83, 142, 191, 31, 192, 113, 191, 235, 180, 60, 190, 211, 221, 150, 189, 98, 71, 36, 62, 158, 203, 191, 62, 48, 176, 134, 190, 235, 157, 249, 61, 182, 52, 57, 62, 236, 245, 161, 190, 210, 193, 15, 187, 72, 194, 96, 62, 42, 150, 110, 189, 11, 22, 207, 59, 185, 79, 157, 61, 98, 241, 216, 61, 239, 254, 151, 61, 191, 6, 244, 60, 17, 120, 178, 191, 185, 9, 33, 62, 159, 94, 107, 190, 220, 219, 233, 62, 243, 213, 2, 191, 254, 119, 25, 61, 141, 176, 217, 187, 93, 2, 253, 190, 167, 159, 102, 191, 18, 63, 18, 186, 14, 102, 224, 61, 232, 83, 246, 187, 199, 174, 36, 189, 112, 148, 49, 62, 115, 102, 162, 62, 211, 152, 145, 191, 35, 105, 68, 190, 23, 50, 21, 190, 161, 182, 193, 189, 47, 229, 186, 61, 137, 2, 151, 60, 204, 140, 39, 62, 232, 233, 120, 188, 206, 201, 185, 189, 160, 137, 212, 61, 91, 236, 167, 188, 225, 63, 46, 190, 128, 71, 167, 60, 65, 156, 145, 188, 160, 214, 129, 187, 128, 225, 239, 61, 18, 73, 56, 190, 57, 202, 32, 190, 160, 196, 36, 190, 203, 169, 8, 190, 33, 177, 118, 186, 95, 101, 27, 62, 240, 218, 65, 189, 43, 77, 219, 189, 128, 245, 242, 189, 209, 1, 39, 190, 243, 56, 34, 190, 33, 181, 180, 189, 239, 55, 228, 189, 114, 213, 6, 190, 5, 218, 178, 189, 92, 109, 140, 59, 197, 116, 70, 189, 141, 25, 166, 61, 168, 110, 47, 62, 192, 92, 20, 190, 6, 122, 28, 63, 166, 110, 74, 189, 58, 230, 0, 63, 125, 233, 26, 189, 43, 148, 102, 62, 166, 166, 55, 190, 207, 55, 146, 190, 215, 103, 44, 191, 124, 141, 147, 189, 4, 210, 151, 191, 107, 202, 206, 189, 137, 48, 48, 190, 232, 87, 197, 61, 70, 193, 174, 191, 0, 64, 80, 191, 249, 169, 63, 62, 123, 29, 247, 61, 131, 163, 54, 62, 184, 141, 243, 190, 219, 128, 51, 62, 54, 204, 173, 62, 206, 196, 48, 190, 82, 181, 124, 60, 108, 170, 19, 62, 147, 45, 125, 62, 80, 106, 245, 190, 164, 153, 83, 190, 141, 162, 212, 61, 38, 110, 149, 191, 239, 216, 92, 190, 253, 177, 149, 60, 252, 106, 180, 189, 160, 142, 214, 62, 196, 192, 37, 189, 33, 70, 159, 189, 218, 142, 221, 188, 143, 217, 50, 62, 107, 88, 98, 189, 60, 3, 216, 190, 240, 85, 232, 189, 240, 188, 125, 60, 107, 80, 48, 191, 1, 240, 22, 189, 77, 186, 188, 190, 186, 163, 20, 189, 187, 206, 59, 191, 67, 79, 149, 190, 14, 25, 0, 62, 245, 198, 199, 62, 109, 23, 150, 58, 103, 168, 122, 189, 183, 253, 54, 188, 69, 91, 12, 190, 129, 92, 74, 191, 86, 246, 220, 61, 97, 80, 149, 62, 69, 178, 53, 62, 72, 10, 135, 189, 211, 40, 181, 189, 135, 209, 110, 62, 87, 119, 229, 191, 172, 130, 81, 190, 127, 201, 193, 61, 96, 197, 39, 189, 109, 39, 129, 189, 8, 213, 60, 189, 227, 194, 175, 189, 133, 230, 226, 62, 67, 140, 54, 191, 223, 46, 104, 190, 4, 0, 31, 62, 234, 166, 222, 190, 10, 0, 81, 191, 99, 158, 123, 62, 10, 245, 191, 62, 209, 178, 155, 62, 80, 169, 158, 62, 108, 144, 113, 62, 242, 214, 3, 62, 238, 120, 230, 62, 1, 133, 173, 62, 215, 107, 25, 62, 135, 254, 162, 190, 36, 220, 34, 62, 225, 176, 179, 62, 25, 176, 62, 62, 223, 194, 31, 62, 89, 110, 88, 190, 200, 1, 217, 189, 137, 76, 7, 191, 209, 28, 111, 190, 213, 252, 22, 62, 153, 117, 159, 62, 66, 248, 51, 190};
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
                alignas(float) const unsigned char memory[] = {16, 52, 149, 190, 81, 85, 51, 61, 35, 188, 144, 62, 145, 153, 21, 62, 131, 141, 39, 61, 91, 131, 161, 190, 167, 12, 224, 61, 54, 139, 39, 62, 244, 48, 221, 61, 228, 20, 45, 62, 201, 188, 113, 62, 225, 94, 90, 190, 43, 191, 72, 188, 79, 122, 153, 61, 157, 179, 128, 61, 64, 217, 45, 62, 153, 59, 91, 62, 71, 169, 65, 190, 182, 215, 41, 190, 146, 0, 52, 62, 50, 241, 135, 189, 135, 84, 4, 190, 192, 117, 146, 62, 43, 132, 114, 187, 8, 185, 152, 62, 239, 106, 24, 61, 179, 61, 0, 190, 176, 190, 58, 190, 170, 67, 195, 187, 102, 219, 119, 62, 79, 229, 169, 61, 130, 220, 56, 62};
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
                alignas(float) const unsigned char memory[] = {255, 226, 38, 190, 88, 118, 3, 62, 185, 201, 143, 190, 11, 164, 74, 190, 75, 32, 151, 62, 173, 147, 43, 191, 6, 117, 225, 62, 197, 173, 147, 190, 150, 204, 147, 62, 119, 70, 120, 62, 150, 227, 119, 191, 181, 50, 193, 190, 104, 43, 17, 191, 50, 217, 253, 62, 160, 13, 148, 191, 18, 83, 0, 191, 179, 241, 109, 191, 152, 20, 95, 63, 165, 126, 134, 61, 254, 80, 137, 190, 157, 147, 135, 191, 194, 53, 55, 191, 1, 202, 16, 63, 252, 99, 22, 191, 79, 201, 105, 62, 29, 116, 1, 191, 217, 48, 128, 63, 244, 221, 16, 191, 228, 41, 110, 61, 98, 220, 8, 191, 34, 85, 239, 190, 169, 82, 13, 63, 62, 3, 163, 61, 70, 221, 195, 189, 58, 99, 11, 191, 251, 151, 188, 190, 148, 105, 125, 60, 241, 161, 144, 62, 21, 86, 80, 62, 232, 7, 10, 190, 177, 30, 147, 190, 190, 197, 88, 188, 184, 34, 253, 62, 204, 143, 175, 62, 82, 159, 55, 62, 229, 153, 119, 189, 171, 69, 148, 62, 114, 251, 68, 190, 29, 102, 143, 189, 188, 202, 154, 61, 184, 150, 170, 189, 199, 17, 189, 190, 91, 62, 165, 61, 19, 67, 1, 62, 7, 232, 121, 62, 70, 30, 212, 62, 71, 15, 143, 190, 250, 153, 239, 189, 183, 22, 255, 61, 181, 105, 131, 190, 85, 91, 219, 61, 17, 182, 185, 190, 225, 53, 255, 60, 162, 98, 37, 190};
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
                alignas(float) const unsigned char memory[] = {37, 113, 210, 61, 23, 230, 233, 190};
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
    alignas(float) const unsigned char memory[] = {78, 54, 157, 191, 28, 55, 145, 63, 30, 64, 187, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {89, 107, 148, 191, 20, 205, 233, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0050/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}