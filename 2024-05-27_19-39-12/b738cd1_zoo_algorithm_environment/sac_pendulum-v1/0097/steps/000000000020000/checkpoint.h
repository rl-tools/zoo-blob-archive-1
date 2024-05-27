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
                alignas(float) const unsigned char memory[] = {84, 141, 76, 58, 172, 223, 33, 191, 152, 27, 17, 63, 210, 57, 74, 189, 109, 163, 255, 61, 31, 188, 92, 60, 199, 48, 58, 63, 34, 111, 52, 63, 144, 161, 196, 62, 163, 147, 46, 62, 234, 33, 168, 62, 113, 242, 206, 62, 112, 225, 43, 63, 239, 4, 224, 62, 73, 20, 122, 61, 165, 139, 107, 61, 210, 31, 44, 62, 49, 255, 184, 190, 184, 4, 142, 62, 24, 168, 150, 191, 6, 68, 203, 190, 105, 251, 163, 62, 140, 90, 251, 62, 181, 113, 164, 62, 244, 105, 62, 63, 249, 13, 140, 191, 86, 57, 62, 190, 219, 85, 31, 191, 63, 10, 162, 190, 157, 230, 174, 62, 84, 85, 97, 63, 111, 155, 202, 62, 10, 0, 153, 62, 238, 204, 48, 191, 210, 160, 138, 62, 205, 240, 85, 61, 7, 241, 11, 61, 10, 193, 69, 191, 2, 232, 163, 62, 54, 152, 77, 63, 252, 40, 109, 191, 79, 120, 146, 190, 112, 133, 63, 185, 83, 183, 162, 62, 255, 136, 37, 63, 1, 233, 133, 190, 67, 230, 107, 189, 132, 172, 161, 190, 249, 221, 66, 190, 154, 69, 98, 63, 48, 83, 31, 63, 209, 239, 75, 191, 48, 3, 145, 190, 156, 5, 11, 62, 68, 220, 25, 190, 18, 21, 116, 63, 113, 234, 66, 60, 44, 67, 92, 63, 211, 85, 12, 190, 109, 158, 166, 186, 233, 59, 187, 190, 74, 151, 192, 191, 111, 250, 173, 190, 87, 167, 144, 62, 149, 180, 142, 191, 123, 17, 223, 190, 207, 231, 56, 191, 240, 27, 139, 191, 118, 32, 24, 191, 36, 129, 32, 63, 127, 238, 108, 63, 226, 117, 177, 62, 167, 24, 17, 63, 15, 216, 210, 62, 192, 146, 91, 62, 16, 6, 206, 62, 155, 86, 19, 191, 21, 204, 230, 188, 192, 134, 178, 191, 199, 6, 196, 190, 139, 100, 61, 190, 182, 63, 76, 62, 158, 243, 6, 190, 73, 124, 5, 191, 177, 88, 207, 190, 110, 0, 38, 190, 121, 112, 179, 62, 138, 226, 57, 62, 124, 127, 82, 191, 86, 99, 0, 63, 88, 157, 162, 62, 154, 175, 112, 189, 21, 6, 127, 62, 225, 214, 126, 62, 196, 119, 101, 63, 93, 147, 2, 190};
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
                alignas(float) const unsigned char memory[] = {7, 230, 68, 191, 172, 41, 172, 190, 50, 10, 30, 189, 5, 131, 35, 189, 220, 207, 215, 60, 99, 242, 83, 188, 239, 101, 236, 62, 161, 174, 71, 62, 101, 31, 32, 61, 189, 25, 1, 63, 66, 40, 91, 191, 240, 4, 31, 63, 42, 126, 169, 62, 115, 120, 238, 190, 151, 195, 223, 61, 162, 119, 169, 189, 30, 150, 226, 60, 79, 92, 68, 63, 203, 9, 171, 190, 97, 18, 227, 61, 202, 248, 75, 190, 116, 49, 75, 191, 129, 192, 183, 62, 231, 252, 18, 191, 127, 92, 231, 190, 172, 47, 23, 62, 243, 132, 9, 191, 170, 62, 145, 189, 212, 168, 104, 190, 193, 192, 189, 62, 82, 5, 39, 63, 57, 75, 142, 61};
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
                alignas(float) const unsigned char memory[] = {46, 101, 142, 190, 227, 229, 25, 62, 47, 221, 131, 61, 189, 137, 156, 190, 254, 88, 189, 62, 182, 34, 94, 62, 179, 209, 248, 61, 1, 210, 146, 61, 208, 198, 21, 61, 60, 35, 177, 190, 106, 144, 154, 190, 228, 217, 95, 190, 31, 135, 203, 190, 255, 139, 11, 191, 253, 182, 140, 190, 28, 159, 227, 189, 144, 108, 222, 190, 29, 163, 187, 190, 80, 187, 177, 190, 101, 19, 7, 63, 249, 248, 21, 190, 22, 35, 2, 191, 254, 105, 169, 190, 79, 84, 35, 191, 18, 194, 30, 190, 37, 240, 225, 190, 8, 232, 129, 190, 107, 27, 156, 61, 106, 62, 81, 190, 8, 147, 52, 190, 72, 200, 47, 189, 4, 145, 141, 188, 32, 202, 142, 190, 106, 134, 23, 62, 110, 77, 124, 189, 193, 250, 71, 189, 43, 47, 234, 189, 62, 232, 56, 62, 125, 70, 103, 62, 67, 150, 134, 189, 25, 205, 195, 62, 242, 193, 46, 62, 27, 17, 97, 191, 138, 104, 175, 188, 187, 207, 69, 62, 95, 108, 54, 63, 49, 221, 177, 61, 5, 54, 195, 189, 28, 70, 120, 62, 244, 84, 192, 60, 214, 172, 2, 191, 94, 188, 156, 189, 109, 46, 18, 191, 6, 219, 4, 62, 107, 71, 223, 188, 101, 117, 255, 190, 156, 84, 156, 190, 43, 226, 128, 61, 131, 25, 138, 190, 222, 2, 45, 62, 25, 134, 64, 62, 184, 27, 17, 190, 61, 8, 97, 62, 173, 163, 67, 190, 255, 45, 152, 189, 228, 152, 192, 189, 221, 139, 60, 190, 171, 80, 45, 190, 38, 87, 114, 61, 4, 21, 216, 188, 236, 145, 152, 61, 201, 66, 77, 61, 229, 59, 241, 188, 54, 100, 71, 189, 191, 89, 91, 189, 132, 19, 79, 61, 26, 147, 129, 189, 154, 71, 43, 190, 187, 39, 23, 188, 71, 125, 153, 188, 62, 54, 253, 61, 174, 170, 31, 190, 6, 240, 176, 59, 140, 29, 241, 189, 1, 227, 4, 190, 140, 237, 199, 188, 107, 253, 240, 189, 106, 246, 135, 61, 40, 67, 2, 62, 98, 110, 156, 61, 235, 99, 148, 188, 145, 244, 110, 189, 113, 52, 111, 189, 244, 186, 232, 61, 255, 199, 208, 61, 186, 146, 253, 188, 53, 120, 72, 62, 225, 253, 238, 61, 246, 32, 213, 62, 58, 217, 156, 188, 148, 82, 153, 62, 87, 251, 38, 62, 194, 81, 78, 190, 197, 160, 75, 62, 216, 82, 19, 190, 87, 113, 88, 190, 33, 186, 35, 63, 207, 171, 217, 190, 187, 19, 254, 189, 158, 24, 84, 191, 169, 98, 196, 61, 72, 235, 131, 189, 74, 148, 7, 190, 76, 199, 219, 190, 109, 117, 179, 62, 210, 97, 228, 62, 58, 99, 9, 190, 161, 32, 21, 191, 244, 98, 135, 189, 19, 170, 20, 62, 18, 124, 215, 62, 144, 252, 151, 190, 224, 126, 106, 190, 71, 193, 145, 61, 117, 22, 244, 190, 229, 26, 119, 62, 121, 72, 238, 189, 241, 207, 182, 62, 95, 231, 247, 190, 104, 151, 169, 189, 186, 28, 15, 191, 114, 51, 233, 190, 85, 72, 110, 190, 50, 117, 2, 62, 148, 232, 83, 189, 113, 8, 23, 62, 88, 34, 33, 190, 114, 148, 222, 188, 166, 186, 49, 189, 176, 126, 167, 189, 40, 196, 22, 190, 117, 207, 8, 62, 248, 177, 50, 190, 142, 72, 223, 190, 103, 79, 136, 62, 250, 130, 228, 60, 45, 237, 163, 190, 205, 142, 5, 191, 180, 235, 24, 191, 204, 104, 50, 62, 55, 170, 160, 190, 12, 202, 79, 189, 225, 106, 230, 190, 243, 33, 138, 189, 10, 40, 230, 190, 52, 135, 243, 187, 236, 198, 23, 189, 80, 116, 54, 191, 29, 116, 249, 189, 54, 125, 100, 189, 143, 108, 196, 62, 252, 168, 38, 62, 60, 114, 166, 61, 124, 10, 238, 188, 31, 28, 24, 62, 222, 237, 191, 62, 49, 60, 199, 190, 17, 161, 40, 189, 1, 149, 140, 190, 129, 18, 61, 190, 193, 196, 230, 62, 133, 109, 64, 190, 156, 245, 8, 190, 248, 164, 208, 191, 0, 116, 164, 189, 13, 232, 62, 62, 115, 110, 61, 189, 179, 188, 46, 190, 128, 165, 141, 189, 203, 104, 227, 62, 254, 171, 106, 62, 72, 112, 158, 190, 100, 9, 229, 187, 224, 249, 169, 62, 172, 211, 132, 62, 39, 54, 166, 189, 100, 228, 244, 62, 128, 127, 3, 190, 140, 94, 17, 190, 147, 166, 125, 62, 197, 54, 131, 190, 174, 214, 250, 62, 142, 39, 8, 60, 78, 235, 196, 61, 229, 51, 97, 190, 84, 103, 33, 190, 131, 171, 14, 188, 65, 78, 9, 189, 244, 202, 111, 62, 195, 190, 105, 61, 161, 20, 173, 190, 27, 213, 160, 61, 215, 121, 201, 62, 102, 122, 34, 61, 3, 30, 117, 62, 38, 98, 11, 190, 35, 126, 15, 189, 128, 119, 145, 57, 197, 13, 142, 59, 65, 132, 152, 62, 204, 56, 70, 63, 147, 45, 28, 191, 95, 224, 238, 62, 59, 7, 231, 61, 126, 155, 49, 62, 125, 163, 21, 62, 222, 99, 67, 62, 160, 58, 52, 62, 87, 105, 181, 62, 121, 133, 127, 190, 186, 72, 183, 62, 77, 27, 117, 61, 37, 81, 41, 62, 176, 93, 26, 191, 170, 92, 183, 189, 230, 214, 73, 188, 78, 12, 237, 61, 60, 20, 66, 190, 120, 249, 28, 188, 252, 187, 9, 62, 23, 122, 11, 190, 221, 221, 54, 190, 139, 208, 231, 189, 194, 233, 229, 60, 169, 130, 63, 190, 7, 67, 158, 60, 150, 204, 52, 190, 174, 36, 243, 189, 24, 202, 121, 61, 192, 152, 181, 189, 128, 16, 178, 189, 180, 103, 82, 61, 53, 249, 31, 190, 234, 177, 114, 61, 22, 198, 238, 189, 163, 50, 234, 189, 36, 120, 104, 189, 142, 170, 240, 61, 158, 246, 175, 61, 49, 123, 18, 189, 27, 136, 168, 60, 217, 73, 240, 61, 92, 194, 33, 62, 79, 215, 194, 187, 232, 78, 117, 61, 0, 217, 7, 190, 164, 201, 170, 61, 223, 30, 138, 189, 197, 89, 236, 61, 187, 217, 86, 61, 11, 234, 13, 189, 19, 207, 182, 61, 181, 236, 194, 60, 109, 221, 50, 62, 97, 192, 95, 62, 132, 72, 34, 61, 107, 53, 197, 190, 73, 210, 106, 189, 162, 154, 39, 188, 112, 89, 239, 62, 101, 182, 37, 188, 98, 155, 31, 61, 143, 44, 104, 61, 178, 215, 21, 62, 22, 22, 236, 61, 5, 113, 86, 190, 131, 4, 159, 190, 18, 151, 134, 62, 140, 199, 105, 59, 159, 54, 38, 190, 175, 117, 23, 189, 134, 68, 163, 62, 130, 235, 194, 190, 169, 205, 209, 62, 117, 245, 147, 62, 176, 88, 60, 61, 254, 78, 145, 62, 112, 19, 249, 61, 148, 156, 215, 190, 42, 110, 145, 61, 155, 31, 100, 191, 128, 39, 29, 191, 242, 228, 124, 190, 234, 184, 194, 61, 10, 220, 18, 190, 104, 91, 205, 190, 238, 212, 117, 190, 119, 205, 172, 189, 118, 67, 60, 188, 94, 124, 114, 62, 15, 136, 11, 63, 59, 6, 139, 62, 165, 48, 252, 190, 230, 82, 137, 189, 211, 79, 169, 190, 198, 156, 33, 63, 172, 224, 18, 190, 1, 59, 148, 188, 138, 118, 11, 190, 93, 180, 80, 189, 235, 164, 164, 61, 68, 237, 158, 190, 26, 79, 161, 190, 208, 188, 133, 189, 245, 85, 187, 189, 66, 186, 53, 62, 195, 243, 180, 61, 200, 66, 20, 190, 172, 52, 11, 191, 205, 57, 16, 190, 217, 139, 112, 62, 148, 118, 129, 61, 197, 22, 185, 62, 225, 185, 168, 62, 60, 26, 73, 62, 214, 156, 133, 190, 23, 58, 8, 191, 197, 67, 52, 62, 12, 176, 5, 191, 121, 78, 129, 190, 82, 213, 148, 62, 105, 12, 37, 188, 185, 243, 8, 190, 50, 47, 246, 189, 26, 228, 21, 189, 80, 169, 56, 62, 42, 186, 189, 188, 12, 35, 78, 191, 221, 205, 126, 63, 94, 1, 72, 61, 101, 21, 1, 62, 127, 60, 177, 190, 1, 207, 189, 187, 108, 105, 219, 62, 237, 153, 218, 62, 45, 166, 93, 190, 162, 95, 149, 61, 119, 33, 28, 191, 6, 55, 145, 190, 72, 155, 175, 189, 159, 127, 112, 189, 130, 128, 228, 62, 127, 22, 13, 62, 161, 138, 219, 61, 89, 89, 245, 189, 24, 62, 168, 189, 23, 187, 159, 62, 13, 34, 32, 62, 57, 96, 159, 190, 83, 198, 192, 61, 38, 199, 49, 190, 83, 1, 109, 188, 16, 183, 62, 189, 156, 49, 250, 61, 62, 184, 146, 61, 74, 228, 110, 191, 56, 181, 145, 61, 94, 57, 12, 189, 41, 184, 229, 189, 124, 77, 83, 62, 9, 5, 174, 62, 223, 10, 70, 62, 154, 211, 139, 189, 91, 109, 56, 190, 59, 149, 254, 189, 127, 189, 177, 189, 224, 202, 184, 189, 135, 31, 47, 190, 41, 120, 8, 190, 120, 175, 83, 190, 235, 199, 6, 191, 75, 246, 24, 62, 64, 179, 201, 188, 239, 222, 78, 62, 206, 39, 111, 62, 20, 54, 245, 61, 147, 77, 99, 62, 148, 157, 28, 62, 137, 254, 221, 62, 97, 213, 67, 188, 86, 147, 21, 62, 227, 247, 245, 188, 51, 133, 131, 190, 230, 158, 70, 190, 234, 41, 37, 63, 150, 230, 60, 189, 21, 20, 121, 190, 242, 156, 82, 191, 217, 144, 41, 189, 233, 218, 114, 62, 92, 65, 192, 190, 165, 79, 38, 190, 210, 246, 136, 189, 3, 208, 12, 63, 70, 222, 16, 190, 217, 243, 132, 190, 138, 36, 92, 62, 189, 204, 206, 62, 33, 15, 167, 62, 62, 120, 107, 189, 87, 249, 145, 62, 16, 44, 236, 190, 142, 123, 9, 191, 41, 114, 250, 61, 135, 22, 43, 190, 52, 216, 133, 62, 43, 17, 61, 190, 67, 243, 182, 60, 42, 252, 105, 191, 226, 18, 4, 190, 210, 167, 230, 189, 37, 191, 3, 62, 101, 137, 39, 191, 112, 255, 12, 191, 183, 77, 173, 190, 130, 255, 150, 62, 162, 220, 29, 190, 39, 165, 240, 62, 115, 50, 26, 60, 130, 197, 46, 191, 126, 93, 198, 61, 77, 220, 68, 62, 134, 178, 156, 62, 102, 52, 69, 62, 125, 249, 248, 62, 173, 122, 144, 189, 90, 76, 35, 191, 110, 57, 96, 190, 113, 22, 221, 190, 17, 41, 213, 190, 40, 15, 185, 190, 138, 134, 196, 190, 188, 21, 125, 190, 185, 230, 164, 62, 41, 27, 13, 62, 247, 182, 174, 189, 15, 75, 15, 190, 113, 96, 186, 62, 123, 232, 68, 190, 108, 103, 106, 61, 29, 194, 197, 61, 69, 244, 224, 61, 150, 201, 213, 60, 190, 6, 245, 189, 113, 48, 239, 189, 205, 73, 20, 189, 63, 194, 209, 61, 183, 77, 112, 189, 81, 160, 49, 190, 51, 59, 67, 190, 36, 137, 55, 190, 94, 52, 47, 190, 134, 83, 120, 61, 181, 222, 29, 190, 48, 215, 149, 187, 233, 159, 60, 190, 225, 253, 147, 61, 81, 8, 75, 188, 42, 46, 193, 189, 77, 118, 195, 187, 146, 164, 103, 61, 30, 87, 114, 61, 200, 157, 66, 190, 21, 31, 155, 59, 124, 255, 213, 61, 247, 86, 164, 61, 116, 138, 50, 190, 40, 237, 196, 189, 87, 224, 127, 60, 31, 140, 118, 186, 2, 150, 200, 61, 115, 159, 16, 190, 136, 46, 176, 62, 252, 188, 102, 62, 149, 70, 169, 62, 128, 59, 184, 61, 29, 17, 226, 61, 134, 234, 116, 186, 201, 178, 40, 190, 179, 36, 51, 190, 175, 202, 250, 62, 199, 186, 209, 189, 44, 161, 16, 190, 141, 77, 142, 191, 254, 11, 242, 188, 168, 188, 20, 62, 127, 47, 28, 190, 162, 197, 148, 189, 158, 250, 184, 62, 71, 175, 172, 62, 105, 177, 20, 60, 171, 34, 130, 190, 149, 199, 239, 60, 23, 219, 232, 61, 200, 98, 171, 62, 8, 221, 31, 190, 238, 188, 190, 188, 232, 66, 123, 190, 4, 184, 36, 191, 120, 251, 45, 62, 158, 144, 122, 61, 174, 30, 30, 62, 6, 157, 26, 190, 252, 197, 43, 190, 160, 84, 254, 61, 74, 200, 140, 60, 90, 33, 11, 190, 63, 154, 213, 60, 87, 150, 103, 188, 59, 96, 62, 189, 237, 119, 159, 62, 64, 228, 138, 60, 197, 129, 204, 190, 67, 193, 179, 190, 47, 145, 188, 60, 49, 24, 150, 62, 14, 181, 188, 60, 113, 48, 135, 189, 198, 48, 253, 59, 248, 125, 159, 190, 77, 159, 147, 62, 0, 44, 115, 60, 236, 231, 211, 190, 255, 106, 232, 62, 234, 133, 15, 190, 0, 103, 151, 190, 99, 169, 239, 189, 61, 1, 242, 187, 170, 236, 15, 191, 66, 197, 146, 62, 28, 129, 223, 61, 175, 81, 146, 190, 171, 14, 129, 62, 82, 133, 52, 62, 233, 188, 189, 189, 39, 18, 231, 61, 128, 97, 218, 61, 59, 175, 0, 190, 194, 195, 196, 62, 74, 86, 78, 189, 243, 116, 225, 61, 220, 161, 77, 60, 232, 241, 82, 62, 151, 240, 21, 62, 159, 241, 76, 62, 36, 123, 176, 189, 94, 2, 140, 60, 237, 152, 252, 190, 140, 223, 183, 61, 239, 15, 214, 189, 53, 174, 196, 60, 32, 11, 193, 61, 235, 151, 211, 62, 65, 243, 172, 61, 73, 143, 160, 62, 239, 139, 51, 190, 137, 247, 204, 61, 38, 104, 129, 190, 187, 212, 238, 189, 226, 35, 55, 61, 195, 124, 177, 189, 100, 201, 254, 189, 191, 76, 80, 190, 230, 4, 76, 62, 44, 57, 20, 62, 234, 98, 215, 61, 64, 132, 129, 62, 81, 225, 153, 61, 194, 19, 19, 60, 252, 190, 148, 62, 181, 124, 158, 62, 198, 185, 211, 189, 33, 229, 151, 61, 235, 73, 225, 190, 86, 158, 213, 190, 49, 36, 80, 60, 64, 128, 194, 62, 119, 84, 86, 62, 66, 173, 253, 61, 114, 63, 47, 191, 49, 4, 156, 190, 6, 232, 174, 60, 222, 240, 61, 190, 65, 127, 75, 62, 118, 0, 91, 63, 209, 101, 103, 191, 42, 186, 111, 190, 217, 64, 80, 190, 127, 167, 118, 187, 176, 137, 17, 62, 46, 3, 144, 189, 207, 8, 23, 190, 175, 180, 96, 189, 45, 242, 218, 190, 216, 238, 62, 190, 29, 28, 201, 62, 105, 232, 254, 190, 234, 134, 147, 62, 132, 182, 137, 188, 134, 64, 35, 190, 156, 60, 215, 62, 177, 97, 154, 62, 104, 222, 245, 62, 123, 3, 137, 62, 192, 221, 180, 190, 223, 174, 244, 61, 186, 233, 147, 190, 175, 222, 162, 61, 218, 109, 177, 186, 4, 222, 50, 62, 11, 32, 96, 190, 145, 155, 154, 191, 152, 184, 20, 189, 206, 54, 25, 62, 133, 155, 222, 190, 45, 15, 191, 60, 190, 199, 5, 62, 62, 226, 141, 62, 248, 182, 172, 190, 60, 61, 194, 190, 52, 3, 148, 61, 201, 130, 3, 63, 197, 17, 44, 62, 63, 73, 63, 190, 55, 163, 144, 62, 9, 68, 167, 190, 124, 160, 134, 190, 239, 129, 117, 189, 20, 19, 13, 190, 123, 46, 218, 62, 0, 174, 236, 61, 223, 145, 205, 189, 147, 105, 248, 61, 117, 128, 226, 61, 63, 247, 6, 62, 97, 230, 41, 190, 198, 58, 156, 189, 58, 27, 142, 188, 181, 124, 158, 61, 237, 131, 31, 190, 49, 71, 29, 190, 109, 195, 50, 61, 160, 244, 233, 189, 163, 221, 176, 188, 145, 156, 242, 189, 9, 8, 5, 190, 35, 145, 142, 59, 213, 1, 6, 190, 201, 132, 20, 60, 5, 181, 181, 59, 104, 34, 14, 190, 26, 124, 243, 189, 43, 11, 183, 61, 15, 160, 96, 189, 53, 159, 132, 189, 21, 31, 5, 190, 131, 209, 170, 60, 140, 4, 198, 61, 105, 236, 132, 188, 128, 188, 247, 189, 110, 85, 29, 190, 160, 36, 56, 187, 239, 88, 101, 190, 220, 71, 221, 61, 247, 8, 196, 190, 11, 64, 150, 61, 42, 139, 128, 62, 78, 48, 137, 60, 184, 28, 181, 189, 147, 240, 77, 191, 203, 49, 176, 190, 161, 160, 10, 62, 174, 212, 177, 185, 179, 117, 158, 62, 220, 150, 120, 191, 169, 31, 71, 191, 150, 82, 36, 191, 16, 110, 114, 62, 134, 222, 222, 190, 245, 38, 8, 62, 48, 227, 214, 62, 249, 190, 155, 62, 113, 200, 240, 190, 18, 65, 171, 190, 171, 124, 129, 61, 171, 57, 86, 190, 239, 54, 136, 189, 32, 139, 39, 191, 9, 111, 165, 189, 131, 90, 167, 190, 149, 40, 84, 191, 157, 1, 210, 190, 100, 187, 128, 191, 238, 153, 128, 62, 8, 70, 214, 189, 152, 110, 4, 62, 27, 11, 233, 188, 137, 125, 237, 189, 140, 220, 40, 62, 19, 166, 8, 61, 67, 150, 235, 188, 26, 19, 255, 188, 15, 72, 122, 189, 69, 13, 204, 61, 218, 132, 6, 62, 139, 225, 142, 189, 28, 132, 52, 190, 159, 162, 68, 189, 108, 187, 31, 189, 224, 169, 130, 61, 92, 91, 255, 188, 55, 253, 136, 61, 104, 157, 189, 189, 144, 214, 192, 189, 8, 170, 241, 188, 43, 16, 0, 190, 222, 114, 22, 189, 61, 254, 225, 188, 120, 168, 22, 190, 197, 212, 62, 188, 215, 162, 226, 61, 65, 10, 21, 190, 242, 21, 235, 60, 208, 206, 129, 61, 247, 171, 142, 60, 208, 151, 1, 189, 172, 69, 228, 189, 240, 235, 134, 189, 133, 204, 127, 61, 115, 49, 90, 61, 113, 104, 6, 62, 71, 29, 52, 190, 144, 154, 175, 60, 110, 54, 162, 189, 202, 151, 254, 189, 224, 184, 176, 189, 195, 247, 41, 62, 38, 163, 40, 190, 39, 38, 22, 190, 98, 214, 173, 61, 95, 64, 1, 62, 94, 60, 220, 189, 107, 176, 10, 60, 83, 61, 123, 189, 126, 170, 164, 61, 219, 150, 207, 61, 174, 106, 7, 190, 118, 158, 45, 190, 253, 0, 128, 60, 23, 126, 201, 189, 168, 204, 255, 188, 158, 160, 157, 60, 42, 212, 185, 61, 132, 5, 5, 62, 207, 78, 208, 59, 106, 11, 2, 61, 130, 33, 29, 190, 162, 249, 232, 189, 41, 50, 249, 61, 242, 245, 26, 62, 146, 6, 255, 189, 101, 143, 11, 190, 136, 215, 231, 190, 158, 88, 108, 62, 198, 197, 198, 190, 216, 35, 127, 62, 166, 59, 222, 61, 1, 56, 28, 62, 140, 2, 75, 191, 64, 93, 109, 62, 234, 204, 72, 61, 115, 231, 104, 62, 53, 175, 214, 61, 167, 194, 4, 190, 229, 187, 14, 62, 29, 174, 73, 62, 193, 1, 129, 62, 23, 120, 178, 189, 83, 140, 14, 192, 7, 53, 2, 191, 77, 85, 140, 191, 73, 65, 226, 190, 22, 18, 163, 190, 190, 71, 26, 62, 139, 90, 167, 191, 245, 85, 156, 61, 126, 221, 125, 62, 64, 7, 58, 190, 228, 45, 4, 188, 126, 129, 147, 62, 27, 13, 70, 62, 223, 213, 33, 62, 79, 144, 37, 191, 50, 3, 131, 190, 248, 195, 86, 190, 37, 93, 97, 60, 130, 111, 239, 62, 136, 212, 125, 191, 149, 94, 12, 59, 229, 233, 103, 62, 236, 62, 12, 60, 250, 139, 224, 62, 82, 50, 7, 62, 194, 216, 6, 191, 24, 141, 199, 190, 83, 41, 14, 190, 91, 207, 183, 190, 240, 156, 239, 62, 251, 13, 190, 62, 245, 213, 66, 190, 98, 133, 230, 62, 234, 171, 218, 190, 187, 0, 144, 62, 237, 25, 122, 61, 138, 192, 202, 190, 231, 235, 14, 189, 124, 3, 174, 62, 64, 60, 14, 191, 12, 6, 165, 190, 154, 67, 21, 63, 75, 249, 83, 190, 211, 77, 47, 190, 22, 184, 220, 186, 50, 56, 165, 189, 87, 230, 88, 62, 97, 61, 16, 62, 139, 61, 182, 62, 183, 121, 138, 61, 44, 24, 22, 61, 207, 181, 126, 188, 106, 6, 18, 190, 95, 7, 163, 190, 111, 138, 116, 62, 238, 119, 27, 62, 231, 57, 217, 61, 9, 135, 140, 191, 203, 131, 206, 60, 134, 117, 163, 61, 148, 52, 241, 190, 6, 14, 156, 61, 225, 9, 210, 61, 223, 119, 6, 63, 249, 130, 30, 61, 99, 97, 16, 191, 245, 108, 101, 188, 5, 1, 17, 62, 27, 127, 161, 62, 10, 146, 161, 190, 174, 123, 34, 190, 15, 44, 227, 189, 222, 83, 7, 191, 209, 97, 106, 61, 175, 204, 36, 190, 229, 220, 70, 62, 180, 87, 218, 190, 11, 115, 244, 189, 236, 60, 166, 190, 222, 192, 9, 61, 126, 225, 164, 190, 36, 142, 180, 62, 14, 125, 143, 189, 83, 58, 107, 62, 251, 93, 225, 62, 203, 27, 62, 62, 56, 185, 97, 191, 233, 188, 227, 189, 181, 197, 121, 62, 9, 161, 24, 63, 193, 225, 51, 190, 162, 177, 118, 190, 173, 81, 160, 61, 87, 168, 80, 62, 76, 6, 114, 190, 59, 32, 58, 62, 162, 9, 90, 192, 32, 57, 233, 62, 112, 21, 39, 191, 244, 112, 252, 190, 167, 16, 20, 191, 184, 106, 215, 62, 177, 38, 157, 191, 30, 241, 243, 62, 170, 28, 178, 62, 143, 18, 55, 190, 13, 46, 93, 62, 47, 55, 133, 190, 232, 85, 145, 189, 237, 61, 135, 61, 16, 102, 129, 61, 206, 126, 28, 62, 165, 58, 22, 190, 34, 102, 0, 62, 82, 76, 222, 189, 103, 51, 213, 188, 54, 154, 83, 61, 42, 41, 212, 61, 208, 135, 230, 189, 205, 49, 167, 189, 76, 10, 235, 187, 89, 254, 5, 61, 147, 115, 247, 60, 167, 78, 47, 185, 15, 16, 89, 60, 179, 246, 224, 189, 222, 127, 16, 62, 69, 135, 65, 189, 112, 28, 152, 188, 124, 116, 227, 61, 167, 180, 17, 190, 24, 92, 56, 189, 151, 252, 117, 59, 21, 72, 151, 61, 200, 100, 237, 189, 158, 153, 209, 189, 214, 231, 110, 189, 154, 40, 253, 188, 139, 26, 68, 189, 103, 93, 7, 189, 70, 139, 3, 184, 56, 140, 29, 62, 179, 46, 51, 61, 246, 31, 84, 61, 182, 158, 56, 62, 1, 96, 1, 62, 185, 109, 99, 62, 46, 96, 116, 62, 237, 7, 105, 62, 234, 239, 78, 62, 71, 202, 89, 190, 121, 101, 203, 189, 206, 191, 59, 62, 183, 133, 156, 62, 72, 39, 23, 62, 3, 27, 79, 61, 126, 218, 45, 61, 208, 38, 227, 61, 123, 68, 14, 63, 92, 83, 143, 189, 200, 192, 132, 190, 207, 64, 160, 60, 165, 221, 93, 61, 12, 127, 129, 190, 30, 89, 1, 62, 233, 101, 139, 61, 223, 12, 129, 190, 149, 78, 169, 62, 190, 20, 188, 62, 186, 183, 187, 187, 117, 170, 188, 61, 137, 205, 99, 189, 215, 106, 96, 190, 19, 179, 187, 189, 101, 206, 10, 61, 157, 132, 22, 190, 30, 249, 247, 61, 29, 154, 67, 61, 136, 53, 214, 189, 151, 68, 133, 189, 173, 144, 13, 62, 100, 135, 145, 61, 36, 73, 152, 189, 215, 48, 60, 189, 67, 212, 200, 61, 192, 146, 223, 61, 145, 50, 158, 189, 184, 245, 4, 190, 178, 115, 27, 189, 83, 217, 163, 189, 142, 57, 138, 61, 241, 163, 140, 189, 211, 49, 245, 189, 191, 22, 29, 61, 73, 154, 48, 190, 252, 180, 200, 61, 139, 191, 21, 189, 106, 222, 90, 190, 35, 204, 130, 188, 226, 217, 165, 61, 242, 201, 57, 188, 193, 249, 245, 61, 27, 142, 175, 188, 255, 165, 116, 188, 52, 250, 40, 190, 232, 13, 146, 61, 209, 16, 71, 61, 129, 177, 126, 189, 63, 136, 251, 188, 229, 105, 138, 188, 5, 2, 217, 61, 243, 192, 67, 190, 166, 243, 61, 190, 98, 181, 122, 61, 51, 222, 98, 189, 70, 61, 22, 190, 239, 246, 17, 62, 106, 69, 237, 60, 4, 103, 80, 188, 142, 154, 230, 189, 115, 28, 202, 60, 160, 45, 52, 190, 66, 122, 106, 189, 99, 194, 27, 62, 228, 166, 178, 188, 75, 236, 34, 190, 35, 98, 85, 61, 143, 53, 45, 62, 233, 240, 185, 61, 58, 75, 145, 61, 56, 102, 13, 61, 32, 25, 153, 189, 204, 246, 154, 60, 119, 69, 57, 190, 190, 4, 52, 59, 233, 68, 138, 189};
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
                alignas(float) const unsigned char memory[] = {11, 224, 100, 61, 94, 4, 8, 61, 136, 104, 63, 190, 176, 200, 193, 61, 191, 147, 183, 188, 124, 45, 142, 190, 216, 234, 219, 61, 233, 57, 7, 190, 64, 208, 7, 62, 186, 35, 201, 61, 235, 178, 156, 189, 234, 132, 253, 61, 36, 163, 141, 61, 44, 113, 38, 62, 226, 104, 34, 190, 176, 5, 112, 61, 125, 252, 77, 61, 154, 30, 213, 62, 145, 224, 135, 60, 200, 32, 29, 62, 166, 61, 138, 189, 2, 141, 39, 62, 32, 79, 42, 190, 255, 131, 75, 189, 126, 245, 147, 62, 91, 48, 213, 62, 92, 16, 145, 62, 39, 147, 98, 62, 166, 97, 56, 190, 77, 219, 161, 61, 228, 83, 137, 189, 91, 191, 49, 189};
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
                alignas(float) const unsigned char memory[] = {147, 206, 77, 61, 100, 70, 165, 62, 156, 67, 15, 62, 155, 215, 172, 190, 143, 226, 31, 63, 141, 252, 48, 191, 71, 89, 216, 190, 140, 69, 26, 62, 145, 179, 183, 61, 39, 25, 7, 63, 67, 226, 187, 63, 124, 229, 207, 188, 119, 141, 236, 190, 181, 216, 24, 191, 165, 77, 233, 61, 139, 180, 174, 190, 148, 19, 57, 62, 95, 57, 165, 188, 143, 88, 213, 190, 224, 181, 51, 191, 28, 91, 133, 61, 116, 72, 97, 191, 125, 254, 169, 189, 208, 15, 62, 61, 61, 107, 43, 63, 33, 119, 153, 191, 53, 150, 236, 190, 184, 79, 95, 63, 105, 250, 132, 187, 192, 155, 5, 62, 134, 220, 1, 61, 30, 115, 148, 61, 237, 37, 22, 191, 25, 42, 178, 60, 7, 36, 220, 61, 26, 179, 187, 190, 27, 65, 89, 62, 145, 0, 123, 62, 103, 173, 249, 60, 74, 90, 167, 188, 242, 133, 62, 190, 205, 213, 15, 190, 73, 162, 171, 62, 80, 203, 163, 190, 194, 127, 93, 62, 149, 244, 58, 188, 156, 221, 48, 188, 101, 131, 130, 190, 255, 14, 224, 189, 48, 23, 215, 190, 130, 59, 255, 61, 249, 127, 134, 62, 191, 36, 175, 61, 3, 115, 100, 61, 198, 37, 34, 62, 236, 182, 21, 62, 170, 196, 36, 62, 86, 208, 170, 62, 112, 61, 166, 189, 151, 20, 201, 61, 99, 75, 236, 188, 255, 40, 111, 190, 243, 14, 24, 60, 9, 139, 18, 62};
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
                alignas(float) const unsigned char memory[] = {92, 209, 230, 61, 232, 247, 237, 190};
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
    alignas(float) const unsigned char memory[] = {193, 81, 247, 62, 160, 98, 52, 62, 187, 118, 31, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {246, 140, 236, 189, 146, 186, 166, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0097/steps/000000000020000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}