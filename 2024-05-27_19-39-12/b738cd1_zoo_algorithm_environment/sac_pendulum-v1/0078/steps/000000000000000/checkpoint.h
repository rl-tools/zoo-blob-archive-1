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
                alignas(float) const unsigned char memory[] = {44, 79, 0, 190, 83, 254, 99, 62, 156, 163, 157, 190, 217, 28, 111, 190, 197, 2, 128, 62, 88, 21, 26, 62, 113, 114, 201, 62, 84, 109, 112, 190, 93, 200, 9, 191, 94, 175, 136, 62, 164, 124, 163, 190, 112, 190, 204, 62, 149, 197, 255, 61, 15, 128, 120, 190, 133, 191, 129, 190, 200, 209, 144, 190, 89, 228, 9, 61, 211, 160, 169, 59, 171, 155, 22, 62, 188, 204, 138, 190, 247, 181, 60, 62, 118, 137, 250, 189, 27, 142, 245, 62, 127, 75, 169, 190, 77, 159, 147, 62, 39, 165, 206, 190, 73, 132, 254, 62, 39, 154, 151, 62, 61, 255, 117, 190, 58, 223, 213, 62, 125, 161, 15, 62, 18, 75, 242, 190, 118, 240, 142, 60, 102, 46, 143, 62, 209, 249, 235, 62, 16, 172, 231, 62, 167, 72, 222, 188, 217, 21, 123, 61, 63, 94, 142, 62, 163, 171, 128, 62, 131, 154, 11, 190, 78, 132, 204, 190, 151, 66, 245, 62, 176, 149, 193, 62, 41, 63, 168, 62, 71, 62, 211, 62, 255, 182, 169, 62, 118, 59, 175, 190, 19, 169, 12, 191, 225, 73, 12, 191, 43, 87, 196, 190, 134, 214, 192, 62, 174, 25, 132, 61, 61, 163, 52, 190, 89, 87, 182, 190, 202, 242, 206, 62, 237, 25, 98, 62, 149, 251, 6, 63, 32, 59, 201, 190, 210, 166, 204, 62, 122, 196, 238, 62, 46, 180, 145, 190, 155, 119, 4, 190, 12, 77, 138, 62, 202, 251, 199, 190, 215, 142, 99, 190, 182, 3, 179, 190, 123, 133, 183, 189, 192, 179, 177, 190, 175, 247, 101, 61, 255, 21, 106, 62, 15, 154, 196, 62, 160, 108, 195, 188, 100, 100, 132, 190, 175, 236, 186, 62, 89, 152, 9, 63, 50, 101, 96, 62, 156, 164, 243, 190, 35, 148, 200, 190, 227, 0, 2, 190, 25, 138, 3, 62, 28, 249, 13, 190, 213, 171, 250, 188, 65, 139, 227, 190, 24, 197, 27, 190, 37, 225, 33, 190, 131, 222, 199, 60, 15, 184, 181, 62, 46, 80, 51, 189, 85, 11, 104, 190, 87, 146, 99, 62, 137, 129, 155, 190, 76, 124, 135, 62, 26, 210, 250, 190, 208, 24, 240, 190, 4, 229, 5, 63};
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
                alignas(float) const unsigned char memory[] = {112, 158, 19, 191, 41, 55, 243, 190, 99, 104, 66, 62, 75, 241, 44, 62, 25, 167, 13, 191, 19, 77, 14, 63, 249, 65, 205, 62, 79, 43, 215, 62, 86, 55, 138, 62, 52, 110, 13, 63, 157, 7, 152, 60, 55, 11, 14, 189, 148, 132, 80, 61, 96, 2, 168, 62, 115, 3, 154, 189, 139, 68, 25, 189, 118, 118, 3, 63, 4, 190, 220, 62, 175, 64, 230, 62, 183, 61, 64, 190, 171, 60, 242, 189, 223, 111, 216, 61, 71, 36, 7, 63, 54, 25, 136, 62, 245, 153, 128, 61, 232, 154, 122, 189, 165, 138, 210, 190, 0, 161, 164, 190, 161, 135, 184, 62, 112, 210, 15, 62, 13, 81, 184, 190, 48, 192, 222, 190};
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
                alignas(float) const unsigned char memory[] = {54, 5, 22, 190, 139, 219, 26, 190, 169, 100, 146, 59, 238, 75, 8, 62, 163, 77, 236, 61, 208, 25, 239, 187, 107, 178, 60, 61, 9, 4, 237, 187, 139, 158, 96, 61, 174, 144, 34, 189, 147, 145, 217, 61, 240, 184, 43, 61, 27, 130, 3, 188, 34, 175, 29, 62, 73, 177, 147, 61, 226, 33, 131, 61, 60, 50, 150, 189, 207, 127, 214, 189, 217, 232, 55, 61, 191, 83, 23, 62, 176, 43, 6, 61, 155, 103, 101, 61, 83, 106, 26, 62, 35, 63, 37, 62, 162, 85, 203, 61, 158, 55, 202, 189, 241, 177, 153, 61, 251, 77, 49, 190, 109, 148, 147, 188, 118, 134, 13, 190, 244, 195, 165, 188, 221, 64, 230, 60, 167, 59, 185, 61, 205, 118, 32, 190, 183, 18, 187, 189, 60, 231, 193, 189, 4, 246, 139, 61, 154, 252, 202, 189, 38, 123, 254, 61, 8, 248, 246, 188, 65, 26, 69, 189, 71, 202, 40, 62, 207, 13, 158, 189, 244, 33, 227, 61, 250, 30, 37, 61, 195, 250, 2, 62, 24, 244, 49, 62, 43, 117, 123, 61, 235, 160, 5, 62, 86, 229, 41, 62, 139, 200, 34, 61, 68, 199, 167, 61, 136, 54, 19, 62, 36, 29, 20, 61, 177, 66, 231, 187, 139, 88, 51, 190, 196, 250, 135, 61, 64, 184, 220, 61, 29, 52, 188, 61, 66, 38, 50, 190, 101, 179, 195, 189, 36, 88, 42, 62, 77, 138, 199, 188, 108, 3, 253, 60, 241, 10, 201, 59, 31, 157, 247, 189, 132, 20, 48, 62, 250, 243, 149, 61, 159, 162, 252, 189, 106, 54, 204, 188, 94, 185, 20, 188, 223, 103, 47, 62, 12, 150, 18, 189, 163, 204, 180, 189, 232, 224, 0, 62, 136, 52, 123, 188, 100, 59, 75, 61, 187, 4, 238, 189, 11, 202, 150, 61, 244, 142, 175, 60, 113, 247, 181, 189, 180, 120, 190, 61, 225, 81, 89, 61, 23, 216, 120, 61, 201, 13, 79, 60, 220, 4, 176, 189, 7, 7, 229, 61, 54, 97, 10, 61, 245, 79, 64, 59, 177, 188, 51, 62, 60, 148, 22, 188, 27, 110, 20, 61, 195, 50, 253, 189, 42, 55, 74, 189, 154, 52, 55, 61, 69, 151, 178, 61, 250, 192, 191, 61, 126, 219, 248, 188, 230, 246, 9, 189, 149, 129, 136, 189, 24, 218, 42, 62, 193, 183, 51, 62, 213, 79, 224, 60, 228, 114, 246, 189, 19, 60, 43, 190, 183, 67, 191, 189, 41, 85, 32, 62, 250, 242, 100, 61, 106, 10, 73, 61, 205, 143, 172, 61, 159, 125, 29, 62, 133, 42, 163, 61, 118, 155, 251, 61, 246, 13, 152, 61, 52, 193, 27, 62, 180, 59, 4, 190, 82, 110, 223, 61, 83, 202, 138, 61, 32, 0, 36, 190, 7, 225, 27, 190, 217, 177, 18, 190, 237, 206, 106, 188, 57, 87, 206, 189, 221, 244, 52, 190, 118, 252, 22, 62, 149, 113, 191, 61, 14, 221, 205, 189, 164, 20, 25, 190, 155, 199, 57, 188, 26, 131, 49, 188, 11, 131, 119, 188, 162, 250, 79, 189, 78, 2, 171, 61, 132, 194, 14, 62, 148, 6, 6, 62, 227, 78, 11, 189, 147, 38, 157, 61, 23, 76, 202, 189, 79, 232, 0, 62, 184, 22, 216, 61, 245, 2, 168, 189, 154, 79, 131, 61, 218, 88, 177, 188, 222, 200, 56, 189, 87, 254, 25, 62, 247, 254, 53, 189, 5, 212, 151, 189, 61, 179, 127, 189, 254, 162, 14, 62, 117, 120, 250, 189, 38, 86, 126, 61, 29, 23, 159, 189, 218, 18, 187, 61, 196, 178, 202, 61, 187, 27, 135, 188, 10, 10, 234, 187, 111, 113, 43, 62, 133, 182, 173, 188, 174, 72, 99, 188, 196, 254, 35, 190, 159, 65, 132, 188, 121, 100, 42, 190, 5, 52, 113, 189, 79, 93, 1, 190, 134, 111, 47, 62, 41, 173, 207, 61, 6, 222, 51, 190, 232, 36, 205, 187, 108, 247, 13, 62, 117, 48, 38, 190, 150, 149, 110, 188, 127, 107, 174, 189, 205, 251, 28, 62, 112, 52, 229, 189, 44, 73, 154, 189, 33, 24, 161, 189, 93, 6, 186, 189, 134, 155, 184, 60, 138, 136, 187, 61, 62, 143, 141, 188, 225, 55, 37, 190, 62, 123, 81, 60, 19, 102, 144, 189, 78, 233, 197, 61, 10, 181, 102, 189, 141, 192, 37, 62, 74, 121, 182, 189, 158, 104, 49, 62, 229, 183, 44, 189, 33, 50, 40, 62, 231, 121, 138, 61, 209, 221, 184, 61, 143, 136, 95, 188, 198, 43, 27, 62, 251, 161, 39, 190, 56, 239, 148, 188, 179, 142, 182, 189, 2, 128, 35, 190, 33, 18, 143, 189, 81, 188, 10, 61, 106, 207, 72, 61, 84, 203, 29, 190, 156, 174, 229, 189, 51, 66, 210, 189, 253, 88, 31, 190, 91, 85, 27, 190, 8, 214, 223, 188, 163, 57, 18, 61, 89, 244, 173, 60, 0, 137, 31, 62, 150, 47, 68, 61, 35, 237, 23, 189, 160, 114, 164, 189, 247, 28, 12, 189, 148, 8, 54, 189, 227, 85, 0, 62, 109, 33, 183, 189, 247, 64, 177, 61, 249, 49, 250, 61, 40, 5, 29, 62, 172, 250, 9, 62, 177, 125, 30, 62, 126, 9, 245, 189, 120, 173, 213, 61, 34, 105, 100, 59, 116, 233, 230, 189, 196, 108, 107, 61, 221, 215, 213, 61, 103, 153, 0, 190, 118, 1, 103, 59, 191, 104, 30, 190, 14, 45, 70, 61, 182, 64, 59, 187, 173, 14, 124, 61, 39, 103, 237, 61, 91, 111, 51, 190, 15, 186, 147, 60, 69, 30, 177, 61, 202, 53, 144, 61, 131, 188, 252, 61, 198, 110, 23, 62, 170, 226, 0, 187, 151, 240, 48, 190, 149, 101, 38, 189, 86, 148, 116, 189, 213, 12, 38, 62, 20, 138, 23, 190, 103, 192, 159, 60, 172, 3, 6, 60, 25, 105, 109, 189, 195, 122, 246, 189, 154, 22, 135, 189, 141, 206, 10, 62, 177, 151, 73, 189, 237, 4, 1, 62, 146, 140, 48, 62, 13, 43, 184, 57, 221, 136, 218, 189, 182, 118, 38, 62, 74, 122, 158, 189, 226, 250, 44, 62, 161, 25, 209, 61, 26, 212, 34, 190, 98, 68, 12, 188, 74, 111, 255, 59, 224, 104, 29, 190, 147, 227, 39, 190, 228, 25, 157, 60, 170, 79, 1, 190, 146, 147, 111, 188, 138, 134, 44, 189, 4, 193, 215, 189, 68, 16, 155, 58, 200, 168, 172, 61, 213, 59, 217, 189, 203, 49, 249, 189, 189, 195, 148, 189, 30, 202, 190, 188, 181, 145, 64, 189, 45, 39, 232, 60, 69, 20, 106, 61, 118, 162, 233, 189, 130, 53, 76, 188, 249, 38, 52, 62, 203, 131, 178, 61, 85, 25, 11, 190, 179, 98, 24, 190, 139, 153, 164, 189, 8, 137, 1, 61, 217, 167, 2, 62, 32, 219, 36, 62, 91, 249, 80, 61, 42, 232, 225, 61, 177, 36, 244, 189, 180, 222, 106, 60, 205, 229, 39, 62, 222, 190, 252, 61, 144, 157, 5, 190, 146, 155, 73, 61, 122, 255, 130, 189, 241, 101, 236, 61, 8, 34, 132, 61, 32, 164, 204, 59, 91, 13, 49, 189, 221, 49, 114, 61, 131, 100, 67, 189, 142, 127, 225, 61, 4, 235, 128, 61, 56, 10, 15, 62, 96, 83, 7, 62, 232, 11, 184, 61, 38, 100, 184, 59, 234, 139, 52, 190, 174, 113, 34, 62, 143, 8, 127, 61, 240, 202, 62, 189, 167, 87, 219, 189, 8, 246, 209, 189, 179, 175, 40, 62, 226, 106, 91, 188, 25, 136, 2, 60, 67, 237, 194, 189, 117, 145, 29, 62, 6, 169, 128, 189, 238, 225, 20, 190, 230, 132, 14, 62, 30, 25, 142, 61, 132, 12, 236, 61, 203, 144, 216, 60, 254, 159, 210, 189, 17, 133, 160, 60, 85, 234, 45, 62, 229, 63, 209, 189, 241, 146, 228, 187, 2, 135, 17, 62, 252, 28, 90, 189, 53, 77, 9, 190, 29, 186, 208, 59, 236, 167, 140, 189, 225, 125, 88, 61, 140, 46, 31, 190, 125, 149, 193, 61, 29, 197, 14, 62, 247, 251, 101, 189, 25, 70, 92, 189, 25, 156, 36, 190, 44, 195, 206, 61, 71, 212, 208, 61, 184, 230, 189, 61, 9, 18, 252, 188, 136, 68, 188, 61, 141, 135, 163, 186, 180, 235, 23, 190, 74, 149, 254, 61, 195, 63, 206, 61, 59, 14, 7, 62, 134, 59, 206, 189, 196, 193, 135, 59, 125, 171, 157, 188, 154, 120, 165, 60, 157, 170, 153, 61, 111, 80, 95, 189, 206, 191, 187, 61, 173, 69, 94, 188, 247, 161, 254, 60, 200, 209, 13, 190, 177, 206, 205, 61, 120, 5, 47, 61, 5, 194, 190, 61, 129, 162, 146, 189, 96, 48, 6, 62, 202, 3, 47, 62, 99, 213, 180, 189, 145, 90, 30, 190, 16, 115, 211, 189, 62, 155, 238, 188, 219, 59, 13, 62, 231, 238, 42, 190, 73, 132, 195, 189, 98, 234, 186, 189, 3, 211, 12, 62, 239, 167, 47, 190, 218, 19, 47, 62, 178, 232, 243, 189, 107, 57, 219, 189, 35, 124, 35, 62, 151, 93, 51, 62, 200, 157, 196, 189, 96, 80, 158, 61, 235, 81, 201, 189, 121, 185, 97, 60, 167, 117, 205, 188, 112, 124, 189, 189, 170, 99, 200, 189, 106, 189, 1, 190, 125, 150, 163, 60, 41, 173, 205, 61, 141, 179, 233, 60, 119, 65, 84, 61, 10, 104, 16, 62, 218, 220, 137, 189, 39, 124, 179, 187, 239, 223, 10, 190, 190, 148, 146, 187, 110, 34, 254, 61, 245, 0, 60, 189, 205, 27, 189, 60, 236, 40, 9, 62, 244, 83, 17, 62, 175, 253, 19, 190, 205, 195, 156, 189, 253, 180, 170, 61, 223, 13, 11, 62, 239, 17, 248, 61, 127, 124, 23, 61, 153, 9, 47, 61, 51, 52, 169, 61, 201, 34, 51, 62, 145, 179, 184, 60, 17, 103, 141, 189, 72, 197, 131, 189, 170, 193, 13, 62, 112, 51, 150, 189, 248, 205, 18, 190, 33, 129, 75, 189, 169, 214, 114, 61, 246, 223, 243, 61, 50, 28, 197, 189, 204, 121, 176, 189, 205, 97, 207, 189, 131, 125, 238, 61, 67, 41, 186, 189, 215, 161, 17, 189, 39, 108, 129, 189, 117, 229, 21, 189, 130, 3, 241, 61, 46, 226, 228, 61, 120, 88, 177, 189, 241, 138, 44, 190, 16, 98, 113, 59, 109, 121, 2, 61, 235, 165, 187, 61, 83, 138, 11, 190, 239, 4, 1, 61, 255, 228, 6, 62, 220, 251, 171, 61, 126, 87, 246, 59, 135, 112, 7, 62, 37, 123, 139, 188, 244, 3, 15, 190, 56, 155, 171, 189, 128, 121, 187, 189, 89, 109, 21, 62, 130, 188, 32, 189, 73, 219, 43, 190, 195, 252, 67, 189, 146, 46, 20, 62, 119, 65, 237, 60, 40, 239, 164, 189, 109, 130, 12, 190, 214, 29, 14, 61, 152, 104, 8, 62, 41, 252, 43, 190, 90, 182, 12, 189, 77, 153, 229, 188, 114, 216, 245, 189, 135, 1, 42, 190, 211, 125, 162, 189, 118, 200, 224, 61, 191, 143, 25, 190, 185, 178, 130, 61, 220, 253, 206, 189, 20, 136, 13, 62, 117, 23, 254, 61, 201, 145, 51, 189, 65, 44, 140, 188, 68, 76, 20, 190, 156, 199, 40, 190, 93, 230, 215, 189, 151, 167, 10, 190, 211, 184, 48, 189, 89, 130, 70, 185, 105, 242, 134, 57, 55, 127, 170, 61, 52, 251, 49, 190, 172, 184, 39, 190, 246, 37, 112, 189, 215, 121, 37, 189, 129, 49, 46, 190, 113, 160, 10, 62, 63, 136, 52, 62, 230, 73, 37, 189, 155, 19, 223, 189, 49, 197, 66, 60, 162, 40, 41, 61, 228, 90, 161, 61, 76, 172, 224, 61, 3, 105, 1, 60, 252, 4, 45, 62, 158, 155, 47, 61, 169, 190, 205, 60, 249, 0, 240, 188, 44, 163, 203, 61, 1, 199, 179, 189, 178, 31, 226, 60, 163, 24, 125, 61, 19, 132, 11, 62, 6, 247, 160, 189, 20, 181, 184, 189, 190, 91, 0, 190, 162, 175, 138, 61, 209, 57, 55, 61, 222, 127, 195, 61, 196, 198, 78, 189, 191, 230, 139, 61, 26, 26, 243, 61, 92, 230, 153, 189, 168, 144, 190, 189, 66, 227, 232, 189, 241, 16, 218, 61, 167, 82, 241, 189, 166, 4, 50, 190, 68, 17, 127, 189, 73, 123, 190, 189, 245, 249, 10, 190, 183, 65, 194, 61, 140, 163, 123, 59, 65, 128, 42, 190, 199, 65, 148, 189, 7, 102, 204, 189, 251, 192, 23, 190, 85, 90, 15, 61, 22, 0, 199, 189, 145, 251, 42, 189, 189, 177, 13, 190, 244, 123, 9, 61, 145, 122, 11, 190, 172, 10, 156, 188, 213, 31, 51, 190, 183, 188, 42, 62, 101, 15, 117, 61, 38, 71, 45, 61, 124, 38, 42, 60, 121, 121, 229, 189, 107, 202, 198, 61, 125, 144, 182, 61, 219, 15, 12, 190, 79, 204, 53, 189, 80, 130, 251, 60, 199, 198, 46, 62, 164, 74, 227, 189, 4, 145, 142, 61, 87, 196, 142, 61, 106, 251, 88, 189, 148, 68, 182, 189, 216, 248, 194, 61, 161, 107, 11, 190, 177, 201, 249, 189, 77, 86, 0, 60, 125, 176, 3, 62, 148, 132, 33, 62, 136, 30, 130, 61, 56, 27, 201, 61, 69, 199, 160, 57, 178, 225, 24, 190, 246, 19, 186, 189, 219, 28, 117, 189, 208, 72, 195, 61, 242, 178, 65, 189, 28, 165, 61, 188, 119, 192, 177, 189, 232, 226, 8, 61, 4, 96, 234, 189, 246, 239, 160, 189, 95, 86, 11, 62, 147, 138, 49, 62, 199, 39, 151, 188, 215, 155, 74, 189, 31, 85, 30, 190, 170, 126, 220, 189, 1, 68, 97, 188, 126, 216, 17, 62, 72, 144, 7, 190, 79, 255, 215, 189, 74, 144, 0, 62, 55, 99, 244, 61, 162, 155, 6, 190, 216, 178, 191, 60, 228, 244, 19, 62, 117, 211, 8, 190, 230, 51, 12, 61, 18, 117, 112, 61, 207, 197, 216, 189, 138, 80, 1, 62, 12, 197, 144, 61, 139, 151, 244, 61, 52, 11, 7, 62, 117, 218, 111, 61, 233, 131, 223, 189, 167, 180, 87, 189, 19, 131, 30, 190, 6, 47, 3, 62, 183, 208, 47, 188, 193, 38, 45, 189, 187, 233, 30, 62, 223, 28, 183, 61, 159, 0, 248, 61, 3, 56, 40, 190, 23, 251, 38, 190, 32, 64, 154, 61, 54, 97, 17, 62, 130, 160, 220, 186, 236, 51, 199, 187, 95, 173, 131, 59, 142, 22, 33, 60, 194, 248, 12, 62, 21, 81, 2, 62, 231, 159, 201, 189, 95, 245, 56, 188, 13, 237, 254, 61, 219, 105, 175, 61, 171, 252, 5, 190, 24, 29, 27, 189, 45, 63, 158, 189, 52, 47, 107, 189, 59, 153, 51, 62, 2, 70, 37, 190, 43, 107, 43, 62, 110, 207, 141, 189, 228, 172, 0, 62, 212, 66, 44, 190, 85, 25, 255, 60, 21, 111, 227, 61, 78, 171, 26, 61, 211, 25, 174, 60, 223, 154, 210, 61, 117, 200, 45, 62, 106, 97, 28, 190, 71, 101, 226, 61, 249, 189, 23, 59, 46, 59, 138, 188, 216, 210, 77, 189, 139, 237, 181, 61, 184, 75, 105, 189, 66, 53, 22, 62, 122, 139, 74, 61, 54, 246, 219, 189, 90, 154, 241, 61, 3, 112, 36, 187, 24, 162, 200, 189, 40, 76, 221, 187, 136, 96, 114, 188, 9, 110, 177, 189, 109, 91, 28, 190, 19, 84, 16, 62, 253, 152, 137, 61, 225, 180, 71, 189, 24, 24, 177, 61, 9, 110, 2, 190, 204, 230, 33, 60, 67, 33, 181, 189, 233, 134, 229, 189, 254, 214, 223, 61, 174, 236, 229, 189, 188, 84, 237, 60, 208, 27, 151, 61, 151, 186, 43, 62, 253, 217, 149, 61, 234, 86, 213, 61, 180, 218, 133, 188, 136, 214, 185, 61, 232, 47, 17, 190, 252, 226, 29, 189, 136, 101, 17, 190, 110, 61, 160, 61, 15, 143, 26, 62, 95, 172, 42, 61, 152, 72, 144, 189, 99, 124, 155, 188, 114, 254, 194, 189, 116, 231, 49, 189, 135, 87, 202, 61, 154, 209, 230, 189, 62, 156, 235, 61, 29, 154, 24, 189, 248, 78, 199, 188, 14, 156, 28, 62, 101, 161, 232, 61, 234, 181, 197, 189, 253, 78, 131, 189, 218, 12, 42, 61, 105, 17, 28, 190, 162, 181, 129, 189, 252, 40, 169, 61, 159, 55, 45, 62, 1, 199, 219, 61, 207, 224, 11, 62, 186, 198, 18, 190, 239, 230, 121, 61, 89, 223, 227, 61, 236, 124, 207, 61, 126, 178, 59, 61, 85, 202, 8, 62, 229, 137, 179, 61, 111, 142, 222, 61, 92, 171, 28, 189, 55, 110, 198, 189, 155, 120, 28, 61, 176, 207, 28, 188, 168, 13, 231, 59, 15, 238, 140, 61, 149, 199, 151, 61, 179, 60, 143, 60, 128, 161, 138, 61, 80, 211, 95, 189, 185, 198, 235, 61, 245, 230, 183, 189, 71, 37, 242, 61, 124, 143, 20, 190, 78, 104, 249, 61, 114, 200, 86, 61, 207, 49, 196, 189, 122, 7, 64, 59, 35, 72, 210, 61, 186, 68, 247, 187, 85, 152, 203, 61, 32, 198, 167, 189, 226, 44, 219, 189, 233, 39, 21, 190, 140, 6, 215, 189, 188, 163, 1, 189, 40, 20, 27, 62, 165, 16, 184, 61, 50, 77, 33, 62, 70, 227, 69, 61, 61, 107, 255, 189, 60, 91, 19, 190, 17, 178, 175, 61, 250, 76, 128, 61, 83, 75, 190, 60, 134, 141, 187, 61, 100, 185, 17, 62, 133, 27, 167, 187, 241, 139, 26, 190, 182, 206, 33, 62, 221, 55, 8, 190, 22, 189, 225, 61, 197, 159, 176, 189, 183, 227, 195, 61, 241, 254, 1, 189, 75, 133, 212, 61, 15, 204, 153, 188, 199, 249, 41, 190, 96, 135, 131, 61, 124, 226, 238, 186, 204, 197, 2, 62, 16, 70, 35, 189, 184, 12, 225, 60, 42, 135, 169, 188, 240, 200, 177, 61, 30, 187, 235, 189, 200, 142, 221, 61, 44, 139, 208, 189, 232, 179, 4, 62, 253, 7, 49, 62, 252, 174, 1, 62, 27, 173, 236, 61, 242, 42, 4, 190, 21, 162, 227, 189, 170, 107, 194, 61, 58, 181, 134, 189, 185, 239, 153, 61, 250, 5, 34, 61, 165, 196, 20, 62, 211, 5, 214, 61, 15, 244, 135, 189, 119, 231, 219, 61, 101, 104, 238, 61, 209, 167, 120, 189, 125, 9, 93, 61, 187, 211, 226, 61, 110, 183, 248, 59, 42, 135, 130, 189, 159, 143, 170, 61, 110, 208, 213, 186, 50, 38, 36, 62, 26, 248, 241, 61, 95, 170, 50, 62, 75, 102, 165, 61, 97, 219, 137, 61, 23, 101, 43, 189, 182, 98, 126, 189, 54, 29, 253, 189, 32, 87, 134, 189, 31, 251, 184, 189, 43, 99, 213, 61, 158, 181, 185, 60, 112, 99, 250, 189, 77, 115, 236, 60, 115, 200, 14, 61, 29, 87, 32, 190, 84, 177, 48, 62, 172, 48, 1, 190, 195, 176, 24, 190, 152, 208, 10, 190, 211, 220, 166, 189, 122, 8, 88, 189, 81, 127, 172, 189, 89, 222, 171, 60, 158, 231, 243, 61, 129, 155, 24, 62, 57, 143, 42, 190, 160, 84, 233, 60, 134, 143, 2, 187, 241, 149, 214, 61, 75, 80, 46, 189, 233, 112, 144, 188, 134, 92, 128, 189, 166, 4, 44, 190, 89, 180, 3, 62, 53, 194, 83, 61, 196, 37, 6, 190, 55, 134, 31, 62, 168, 140, 5, 190, 72, 187, 148, 61, 216, 147, 216, 61, 112, 88, 35, 61, 132, 61, 177, 189, 140, 121, 59, 188, 91, 94, 147, 60, 82, 45, 112, 61, 119, 236, 33, 62, 29, 39, 1, 62, 65, 139, 225, 189, 243, 123, 172, 189, 101, 254, 3, 62, 204, 89, 26, 190, 252, 109, 38, 190, 244, 216, 143, 189, 25, 250, 197, 60, 95, 232, 102, 189, 46, 244, 60, 61, 58, 18, 96, 188, 64, 92, 62, 189, 28, 83, 206, 189, 166, 19, 56, 189, 214, 236, 1, 190, 182, 83, 37, 62, 44, 12, 125, 59, 184, 112, 34, 190, 208, 234, 51, 186, 242, 73, 7, 62, 141, 44, 37, 190, 209, 87, 2, 61, 31, 9, 191, 189, 206, 244, 176, 189, 170, 56, 31, 190, 176, 183, 28, 62, 194, 249, 239, 61, 74, 165, 159, 61, 148, 229, 4, 190, 109, 222, 51, 190, 174, 142, 3, 189, 248, 91, 120, 61, 62, 112, 55, 189, 100, 187, 142, 60, 35, 69, 188, 61, 88, 51, 149, 60, 245, 155, 147, 189, 3, 34, 179, 189, 191, 248, 91, 60, 185, 122, 171, 61, 192, 162, 226, 61, 170, 17, 24, 190, 163, 43, 41, 62, 12, 71, 30, 62, 99, 96, 179, 189, 133, 107, 10, 62, 154, 42, 15, 189, 215, 199, 30, 62, 72, 92, 27, 61, 84, 30, 242, 60, 186, 215, 109, 187, 64, 0, 45, 62, 184, 218, 189, 61, 231, 97, 124, 189, 76, 88, 18, 189, 152, 24, 35, 190, 248, 199, 32, 190, 232, 37, 5, 60, 198, 126, 233, 61, 157, 5, 145, 189, 162, 59, 139, 189, 42, 190, 129, 61, 253, 144, 38, 190, 14, 43, 36, 62, 111, 13, 235, 189, 75, 82, 155, 60, 222, 112, 228, 61, 124, 42, 46, 62, 121, 82, 249, 61, 173, 21, 116, 61, 102, 209, 145, 189, 118, 56, 239, 61, 171, 72, 221, 189, 122, 86, 0, 190, 129, 19, 84, 61, 206, 45, 228, 61, 69, 177, 16, 62, 76, 46, 2, 61, 61, 82, 84, 189, 206, 152, 101, 189, 234, 175, 248, 61, 67, 107, 27, 62, 246, 123, 144, 60, 137, 242, 26, 62, 218, 215, 98, 61, 173, 81, 219, 189, 32, 138, 182, 61, 112, 202, 81, 60, 174, 181, 218, 189, 236, 104, 15, 62, 58, 7, 36, 190, 126, 40, 204, 61, 160, 134, 104, 189, 184, 170, 253, 61, 93, 80, 190, 59, 139, 179, 6, 61, 186, 189, 78, 61, 92, 147, 15, 62, 47, 175, 175, 61, 216, 163, 245, 188, 45, 206, 25, 190, 220, 62, 75, 189, 81, 37, 121, 61, 33, 181, 39, 190, 103, 125, 44, 62, 93, 152, 40, 190, 210, 57, 195, 61, 131, 218, 50, 190, 114, 63, 115, 60, 191, 117, 165, 189, 65, 214, 19, 62, 14, 239, 192, 60, 61, 96, 25, 190, 34, 47, 148, 189, 249, 207, 19, 62, 191, 173, 211, 188, 193, 32, 254, 189, 114, 214, 203, 61, 150, 219, 16, 62, 106, 62, 171, 189, 107, 26, 97, 61, 236, 204, 51, 190, 33, 180, 241, 60, 244, 248, 22, 190, 77, 160, 6, 62, 176, 13, 159, 189, 72, 202, 35, 61, 47, 36, 242, 188, 148, 191, 39, 190, 16, 99, 23, 190, 202, 188, 59, 61, 173, 72, 97, 189, 47, 148, 16, 62, 241, 44, 134, 189, 21, 212, 27, 190, 223, 187, 168, 188, 130, 227, 83, 189, 183, 66, 73, 189, 104, 245, 150, 61, 247, 241, 48, 187, 196, 35, 253, 189, 142, 71, 159, 61, 234, 65, 66, 61, 176, 203, 47, 190, 126, 4, 18, 56, 169, 235, 249, 189, 78, 111, 168, 188, 100, 153, 20, 190, 243, 180, 35, 190, 196, 91, 146, 61, 18, 42, 156, 61, 102, 234, 124, 189, 125, 135, 209, 189, 176, 254, 48, 62, 179, 120, 237, 189, 75, 138, 9, 189, 227, 209, 191, 189, 207, 37, 34, 190, 41, 27, 23, 190, 120, 74, 116, 61, 187, 25, 95, 189, 13, 227, 188, 189, 215, 191, 5, 190, 254, 151, 221, 188, 3, 211, 35, 61, 217, 121, 226, 61, 231, 181, 57, 189, 225, 33, 232, 189, 87, 212, 110, 189, 151, 245, 138, 61, 90, 72, 42, 62, 154, 4, 197, 60, 52, 218, 199, 61, 65, 145, 24, 189, 242, 0, 241, 61, 13, 143, 241, 60, 95, 204, 186, 189, 182, 212, 31, 61, 237, 175, 68, 188, 16, 7, 233, 61, 250, 92, 157, 188, 204, 13, 108, 189, 163, 110, 18, 62, 62, 131, 85, 189, 172, 24, 158, 59, 200, 40, 0, 62, 231, 184, 28, 190, 156, 35, 34, 62, 123, 91, 223, 59, 246, 205, 46, 60, 31, 131, 135, 61, 121, 64, 37, 62};
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
                alignas(float) const unsigned char memory[] = {105, 126, 151, 189, 22, 2, 72, 61, 56, 62, 153, 61, 104, 65, 10, 62, 186, 78, 51, 190, 234, 254, 132, 189, 128, 24, 140, 60, 94, 129, 143, 189, 5, 151, 1, 188, 172, 159, 7, 62, 89, 51, 6, 62, 25, 212, 223, 189, 198, 239, 45, 62, 125, 45, 35, 62, 156, 92, 38, 190, 141, 149, 148, 61, 146, 229, 46, 62, 121, 7, 43, 190, 56, 90, 96, 60, 165, 199, 186, 189, 127, 193, 195, 60, 119, 46, 157, 188, 236, 238, 9, 62, 147, 34, 229, 61, 131, 83, 251, 61, 6, 199, 33, 61, 245, 245, 224, 59, 233, 39, 20, 62, 62, 230, 155, 61, 243, 161, 229, 61, 142, 137, 49, 189, 8, 104, 139, 61};
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
                alignas(float) const unsigned char memory[] = {93, 255, 150, 189, 225, 36, 24, 61, 27, 253, 177, 189, 15, 45, 18, 190, 153, 50, 100, 60, 225, 124, 22, 61, 99, 135, 41, 190, 32, 211, 217, 188, 27, 118, 177, 187, 248, 7, 34, 190, 246, 9, 12, 187, 236, 86, 24, 62, 235, 24, 4, 61, 76, 45, 11, 61, 116, 201, 188, 61, 81, 46, 139, 60, 31, 34, 251, 189, 241, 107, 150, 189, 254, 187, 42, 62, 100, 213, 91, 60, 152, 3, 109, 189, 101, 52, 189, 61, 196, 15, 185, 189, 150, 10, 25, 62, 183, 106, 237, 189, 143, 56, 122, 61, 241, 124, 176, 59, 20, 166, 79, 60, 141, 211, 46, 62, 10, 107, 95, 58, 50, 124, 47, 190, 78, 76, 22, 62, 110, 20, 72, 61, 206, 200, 251, 60, 189, 150, 233, 60, 252, 144, 50, 62, 30, 3, 8, 190, 71, 174, 49, 189, 140, 24, 58, 189, 254, 49, 150, 61, 89, 189, 198, 61, 5, 92, 192, 60, 2, 101, 176, 61, 96, 76, 17, 62, 59, 84, 156, 61, 134, 226, 254, 189, 51, 46, 208, 189, 101, 107, 147, 189, 203, 222, 97, 61, 90, 70, 19, 62, 66, 26, 43, 188, 238, 117, 33, 190, 242, 110, 44, 62, 64, 80, 254, 188, 12, 116, 176, 61, 7, 176, 169, 189, 149, 27, 201, 61, 210, 60, 72, 60, 96, 61, 238, 187, 168, 103, 9, 62, 243, 151, 160, 189, 82, 76, 4, 62, 229, 246, 213, 189, 237, 9, 38, 190};
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
                alignas(float) const unsigned char memory[] = {90, 217, 44, 190, 226, 24, 231, 61};
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
    alignas(float) const unsigned char memory[] = {119, 183, 92, 190, 182, 32, 77, 63, 23, 252, 226, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {84, 165, 126, 190, 14, 78, 132, 62};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0078/steps/000000000000000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}