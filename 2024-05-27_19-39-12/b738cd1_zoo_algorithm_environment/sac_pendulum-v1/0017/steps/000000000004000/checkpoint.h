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
                alignas(float) const unsigned char memory[] = {254, 54, 131, 62, 247, 23, 83, 189, 185, 43, 235, 190, 57, 220, 12, 63, 79, 46, 100, 62, 4, 113, 8, 191, 106, 239, 29, 62, 132, 126, 202, 62, 160, 37, 217, 190, 2, 17, 4, 62, 172, 202, 120, 63, 255, 205, 16, 187, 131, 195, 35, 191, 199, 33, 19, 63, 79, 5, 66, 191, 2, 100, 166, 190, 133, 243, 63, 63, 131, 190, 166, 61, 205, 75, 172, 62, 14, 23, 17, 63, 59, 208, 179, 62, 38, 108, 89, 62, 35, 159, 97, 61, 147, 239, 77, 62, 213, 252, 16, 63, 16, 98, 65, 189, 191, 233, 215, 62, 24, 191, 148, 62, 241, 237, 50, 63, 39, 81, 5, 62, 157, 219, 146, 61, 229, 169, 66, 191, 79, 240, 228, 62, 93, 118, 7, 190, 204, 43, 218, 62, 129, 245, 249, 62, 95, 99, 154, 62, 68, 96, 237, 62, 80, 5, 174, 61, 130, 180, 41, 63, 97, 31, 1, 63, 14, 130, 29, 63, 237, 124, 34, 190, 130, 38, 11, 191, 173, 244, 24, 191, 140, 145, 251, 190, 30, 17, 253, 189, 76, 125, 238, 62, 233, 253, 59, 63, 78, 52, 170, 62, 176, 208, 27, 62, 72, 154, 237, 190, 124, 50, 186, 190, 37, 99, 78, 63, 138, 3, 16, 190, 224, 59, 200, 189, 18, 143, 102, 189, 35, 201, 64, 63, 244, 62, 155, 62, 205, 162, 150, 62, 69, 177, 12, 191, 158, 9, 5, 190, 8, 68, 136, 189, 21, 72, 185, 62, 225, 54, 0, 191, 117, 179, 249, 190, 40, 62, 28, 63, 135, 139, 68, 191, 250, 78, 89, 61, 239, 240, 218, 190, 1, 59, 129, 62, 26, 11, 69, 191, 223, 130, 159, 190, 77, 235, 231, 62, 127, 194, 192, 190, 230, 89, 153, 190, 157, 251, 71, 191, 64, 243, 24, 190, 170, 52, 7, 191, 140, 186, 210, 189, 45, 222, 141, 61, 250, 115, 54, 63, 169, 116, 41, 191, 42, 248, 137, 190, 63, 6, 12, 191, 76, 246, 231, 190, 36, 135, 205, 189, 42, 150, 157, 62, 61, 210, 80, 63, 226, 196, 229, 190, 117, 71, 11, 63, 184, 110, 73, 191, 153, 221, 30, 190, 72, 226, 154, 61, 104, 8, 214, 62, 170, 197, 198, 190};
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
                alignas(float) const unsigned char memory[] = {209, 130, 15, 191, 95, 251, 170, 61, 174, 194, 149, 189, 251, 28, 6, 63, 12, 103, 214, 190, 254, 33, 30, 62, 119, 155, 158, 190, 129, 144, 108, 61, 139, 218, 158, 62, 43, 223, 152, 190, 71, 195, 189, 188, 159, 156, 115, 62, 170, 3, 250, 62, 86, 217, 29, 190, 133, 142, 95, 62, 57, 43, 163, 190, 62, 159, 166, 62, 140, 45, 182, 190, 83, 127, 14, 63, 111, 108, 186, 62, 231, 122, 23, 63, 217, 197, 4, 61, 115, 76, 22, 63, 125, 143, 41, 190, 108, 201, 137, 190, 115, 255, 68, 62, 68, 237, 213, 62, 74, 38, 148, 61, 93, 214, 46, 63, 190, 86, 234, 62, 168, 232, 138, 62, 164, 87, 14, 61};
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
                alignas(float) const unsigned char memory[] = {112, 20, 229, 188, 165, 245, 83, 62, 34, 253, 67, 62, 11, 184, 144, 62, 204, 92, 87, 190, 99, 220, 78, 62, 32, 113, 148, 62, 111, 27, 84, 62, 108, 44, 201, 61, 27, 167, 58, 62, 243, 245, 96, 190, 73, 23, 15, 61, 163, 102, 29, 62, 17, 126, 64, 189, 84, 75, 178, 189, 45, 28, 15, 188, 25, 118, 139, 62, 172, 229, 13, 189, 255, 177, 169, 190, 198, 145, 36, 62, 170, 34, 244, 189, 30, 115, 93, 190, 254, 65, 29, 190, 120, 177, 62, 190, 33, 26, 180, 189, 125, 198, 181, 188, 32, 195, 55, 190, 159, 71, 29, 190, 230, 183, 186, 190, 6, 157, 7, 62, 142, 187, 112, 190, 192, 30, 167, 61, 154, 45, 82, 190, 104, 215, 204, 60, 112, 133, 27, 189, 38, 64, 116, 189, 237, 187, 129, 61, 229, 128, 201, 188, 185, 34, 42, 190, 179, 147, 34, 189, 176, 178, 130, 189, 144, 86, 30, 62, 174, 11, 3, 61, 197, 159, 173, 61, 221, 223, 215, 189, 31, 115, 235, 60, 106, 47, 195, 186, 180, 231, 150, 189, 152, 127, 67, 190, 159, 65, 254, 189, 245, 109, 185, 189, 77, 115, 30, 190, 33, 227, 43, 187, 116, 163, 146, 61, 2, 251, 190, 59, 196, 120, 243, 61, 229, 91, 67, 189, 16, 154, 166, 189, 53, 132, 110, 188, 156, 41, 170, 189, 244, 231, 226, 188, 182, 157, 16, 190, 191, 158, 53, 60, 62, 211, 104, 61, 205, 148, 181, 190, 96, 231, 108, 190, 231, 35, 75, 190, 228, 16, 145, 62, 239, 170, 110, 62, 54, 114, 10, 190, 69, 56, 165, 59, 200, 105, 225, 61, 203, 111, 182, 188, 161, 221, 153, 190, 87, 69, 48, 190, 175, 0, 71, 187, 81, 159, 152, 61, 98, 207, 230, 61, 52, 40, 13, 60, 171, 181, 180, 189, 89, 44, 147, 62, 225, 16, 9, 62, 22, 167, 202, 187, 59, 219, 33, 62, 68, 136, 115, 62, 77, 105, 211, 189, 242, 68, 62, 62, 217, 170, 89, 59, 148, 230, 113, 61, 173, 224, 40, 62, 48, 136, 186, 61, 31, 50, 111, 190, 123, 141, 155, 189, 13, 13, 136, 62, 245, 133, 241, 60, 179, 140, 144, 190, 141, 53, 5, 61, 15, 175, 90, 185, 32, 194, 248, 60, 212, 194, 69, 190, 192, 193, 210, 61, 227, 11, 21, 189, 227, 40, 68, 190, 194, 183, 109, 61, 207, 106, 167, 61, 157, 49, 53, 190, 247, 251, 123, 59, 203, 231, 3, 190, 6, 144, 196, 61, 212, 101, 170, 61, 221, 218, 7, 189, 97, 155, 42, 189, 101, 147, 104, 188, 95, 119, 69, 61, 185, 59, 23, 62, 51, 133, 65, 61, 255, 66, 167, 189, 112, 224, 18, 190, 229, 117, 103, 190, 137, 74, 47, 190, 33, 14, 7, 62, 181, 142, 22, 190, 152, 125, 70, 61, 38, 96, 157, 59, 196, 37, 179, 189, 168, 8, 200, 189, 136, 72, 122, 61, 190, 231, 32, 190, 11, 170, 243, 189, 197, 41, 185, 61, 119, 153, 141, 60, 179, 124, 117, 62, 158, 185, 239, 189, 3, 82, 108, 61, 253, 46, 210, 187, 66, 29, 29, 189, 175, 55, 85, 62, 2, 168, 243, 190, 98, 38, 151, 190, 88, 69, 95, 190, 221, 218, 134, 62, 1, 34, 137, 189, 18, 1, 83, 190, 46, 49, 47, 62, 12, 54, 203, 60, 70, 187, 60, 189, 101, 108, 180, 189, 201, 52, 233, 61, 248, 59, 160, 188, 92, 205, 36, 190, 152, 228, 13, 62, 174, 241, 199, 189, 141, 232, 31, 62, 247, 38, 23, 190, 238, 116, 105, 189, 156, 103, 9, 62, 183, 145, 24, 190, 117, 22, 130, 62, 4, 126, 46, 61, 124, 26, 178, 61, 241, 247, 168, 190, 26, 120, 114, 61, 42, 239, 78, 60, 33, 147, 61, 60, 244, 106, 144, 60, 66, 221, 22, 190, 143, 52, 155, 189, 23, 248, 51, 61, 195, 254, 173, 189, 208, 102, 150, 190, 127, 81, 231, 189, 5, 142, 102, 61, 178, 222, 224, 60, 229, 213, 2, 61, 196, 56, 133, 61, 57, 237, 5, 190, 118, 245, 145, 62, 230, 150, 242, 58, 229, 94, 149, 62, 125, 45, 36, 62, 98, 68, 141, 62, 174, 49, 0, 61, 29, 20, 63, 62, 152, 116, 33, 62, 162, 99, 115, 61, 26, 198, 7, 61, 131, 168, 24, 62, 14, 135, 46, 190, 176, 32, 139, 186, 41, 214, 213, 61, 21, 101, 106, 61, 171, 132, 139, 189, 115, 134, 82, 190, 125, 212, 204, 190, 49, 185, 200, 190, 162, 252, 73, 189, 119, 182, 15, 62, 41, 10, 76, 190, 15, 31, 225, 189, 89, 240, 64, 61, 157, 206, 89, 62, 226, 226, 213, 60, 214, 184, 251, 189, 31, 127, 6, 61, 71, 216, 27, 190, 76, 85, 13, 190, 203, 247, 221, 186, 138, 109, 198, 189, 202, 237, 157, 190, 153, 220, 53, 62, 196, 50, 212, 189, 236, 13, 9, 190, 201, 235, 119, 62, 204, 6, 161, 61, 251, 107, 227, 189, 132, 154, 73, 60, 90, 103, 136, 62, 79, 47, 59, 61, 60, 94, 148, 62, 120, 102, 192, 189, 132, 124, 20, 62, 250, 184, 139, 190, 213, 55, 180, 189, 27, 74, 175, 190, 17, 11, 196, 60, 231, 254, 148, 190, 12, 96, 177, 189, 123, 146, 59, 190, 11, 220, 93, 61, 244, 225, 10, 190, 163, 216, 6, 62, 102, 179, 8, 189, 186, 160, 213, 188, 25, 143, 35, 190, 210, 98, 16, 191, 74, 84, 164, 190, 155, 74, 167, 190, 168, 148, 238, 186, 74, 217, 83, 62, 98, 72, 159, 190, 163, 57, 165, 189, 89, 146, 208, 190, 33, 175, 151, 61, 139, 75, 168, 189, 202, 59, 99, 62, 58, 176, 134, 189, 117, 20, 229, 189, 224, 100, 55, 187, 252, 178, 56, 190, 149, 127, 22, 189, 138, 100, 149, 62, 98, 41, 79, 190, 164, 72, 136, 62, 155, 67, 129, 190, 196, 70, 16, 190, 205, 11, 159, 190, 246, 41, 176, 190, 156, 72, 198, 189, 6, 83, 114, 190, 147, 75, 42, 188, 120, 146, 88, 62, 87, 11, 113, 190, 123, 49, 6, 62, 111, 84, 79, 62, 81, 103, 16, 61, 175, 207, 250, 189, 150, 200, 14, 60, 203, 106, 228, 60, 116, 62, 142, 189, 51, 8, 178, 61, 17, 26, 248, 61, 222, 64, 128, 189, 77, 223, 26, 62, 172, 218, 196, 189, 5, 141, 129, 62, 115, 45, 146, 61, 247, 3, 149, 62, 209, 130, 3, 62, 133, 90, 120, 62, 206, 29, 8, 188, 19, 40, 145, 62, 224, 30, 238, 189, 202, 61, 176, 61, 244, 53, 93, 189, 197, 237, 216, 61, 147, 17, 127, 188, 110, 217, 6, 190, 244, 158, 143, 190, 212, 125, 132, 190, 210, 154, 151, 190, 175, 252, 22, 190, 82, 60, 20, 61, 116, 220, 130, 191, 45, 176, 167, 62, 188, 129, 192, 190, 208, 252, 42, 189, 77, 234, 183, 189, 151, 138, 23, 191, 199, 140, 125, 61, 81, 80, 182, 61, 94, 5, 107, 62, 71, 242, 207, 189, 151, 49, 174, 190, 76, 174, 117, 188, 175, 173, 23, 190, 9, 27, 30, 189, 96, 43, 249, 61, 148, 73, 233, 189, 9, 38, 25, 62, 91, 40, 14, 190, 7, 69, 68, 189, 51, 246, 93, 191, 137, 10, 181, 190, 8, 205, 179, 190, 17, 209, 135, 62, 93, 171, 129, 61, 218, 24, 160, 61, 1, 35, 49, 191, 209, 111, 217, 61, 149, 180, 241, 189, 92, 233, 71, 61, 202, 107, 215, 189, 37, 73, 66, 190, 114, 154, 39, 190, 125, 207, 129, 61, 246, 141, 75, 189, 234, 24, 13, 190, 132, 236, 179, 61, 90, 158, 40, 62, 161, 112, 112, 190, 193, 153, 243, 61, 22, 181, 59, 190, 80, 242, 67, 61, 93, 174, 1, 190, 243, 37, 72, 190, 204, 166, 162, 61, 7, 167, 129, 61, 146, 230, 89, 59, 243, 76, 30, 190, 241, 97, 132, 61, 150, 1, 133, 190, 197, 125, 94, 190, 210, 209, 56, 188, 94, 165, 24, 60, 117, 5, 90, 189, 62, 50, 91, 61, 152, 21, 140, 61, 69, 212, 16, 61, 96, 249, 184, 189, 191, 83, 53, 190, 216, 145, 147, 61, 207, 216, 143, 61, 230, 156, 131, 190, 81, 242, 127, 189, 101, 234, 234, 189, 166, 249, 26, 62, 176, 3, 26, 191, 7, 73, 145, 62, 86, 143, 60, 190, 252, 113, 154, 61, 191, 243, 31, 190, 43, 212, 5, 190, 233, 48, 40, 190, 7, 228, 56, 189, 36, 190, 152, 62, 40, 146, 13, 62, 161, 48, 173, 190, 161, 232, 79, 62, 17, 80, 120, 62, 162, 58, 22, 62, 162, 253, 22, 190, 47, 22, 152, 189, 172, 160, 125, 61, 173, 225, 87, 190, 152, 103, 175, 188, 8, 191, 40, 191, 218, 85, 52, 190, 200, 10, 155, 189, 219, 236, 98, 62, 18, 246, 179, 62, 172, 123, 60, 61, 179, 221, 15, 190, 68, 176, 236, 61, 35, 212, 111, 190, 53, 212, 236, 60, 117, 255, 118, 61, 58, 5, 67, 62, 176, 7, 172, 190, 204, 187, 114, 190, 198, 247, 198, 187, 135, 148, 173, 190, 4, 130, 121, 61, 100, 54, 98, 61, 9, 210, 4, 191, 12, 223, 149, 62, 218, 81, 34, 189, 203, 75, 157, 189, 240, 104, 99, 190, 52, 188, 192, 61, 24, 51, 193, 61, 106, 91, 44, 62, 229, 174, 17, 189, 160, 187, 55, 183, 85, 110, 140, 60, 245, 210, 142, 61, 81, 105, 34, 62, 103, 25, 180, 61, 67, 13, 54, 189, 192, 53, 136, 190, 6, 95, 77, 190, 143, 193, 88, 189, 210, 218, 177, 61, 172, 129, 50, 61, 151, 146, 57, 61, 209, 197, 95, 62, 50, 23, 7, 62, 200, 125, 59, 190, 216, 110, 175, 190, 121, 228, 194, 188, 157, 174, 44, 62, 90, 101, 95, 62, 177, 160, 179, 188, 82, 107, 140, 62, 129, 203, 57, 62, 92, 253, 90, 187, 63, 66, 0, 63, 10, 8, 198, 190, 73, 178, 157, 188, 179, 146, 94, 61, 254, 60, 112, 62, 51, 163, 185, 61, 47, 154, 71, 188, 217, 147, 9, 62, 114, 188, 64, 190, 79, 107, 64, 190, 118, 174, 151, 60, 161, 134, 160, 60, 121, 73, 92, 190, 206, 129, 71, 190, 153, 95, 115, 62, 72, 123, 223, 61, 168, 80, 237, 186, 247, 96, 136, 189, 2, 138, 212, 190, 89, 151, 64, 189, 189, 50, 34, 189, 33, 61, 11, 191, 253, 35, 237, 61, 43, 82, 201, 189, 36, 40, 233, 189, 186, 107, 10, 190, 32, 81, 133, 60, 86, 201, 48, 190, 118, 160, 109, 190, 20, 91, 30, 62, 152, 233, 91, 188, 101, 1, 40, 189, 187, 210, 155, 61, 103, 195, 190, 61, 244, 194, 103, 61, 95, 48, 123, 61, 14, 245, 231, 189, 241, 177, 156, 189, 251, 99, 109, 61, 42, 72, 55, 62, 123, 94, 148, 61, 134, 79, 160, 189, 239, 119, 213, 60, 93, 191, 37, 189, 136, 184, 230, 61, 212, 128, 128, 61, 58, 245, 205, 61, 240, 129, 138, 61, 113, 82, 203, 188, 104, 206, 74, 190, 140, 114, 220, 61, 4, 115, 223, 189, 156, 66, 78, 189, 75, 167, 150, 189, 70, 87, 90, 190, 212, 148, 243, 189, 210, 39, 91, 61, 159, 158, 76, 61, 127, 180, 157, 189, 20, 230, 227, 190, 14, 234, 97, 62, 51, 136, 113, 190, 155, 8, 134, 60, 150, 235, 114, 188, 208, 10, 100, 190, 228, 191, 144, 62, 34, 80, 213, 60, 150, 24, 53, 189, 139, 190, 186, 189, 73, 137, 173, 189, 200, 10, 52, 62, 196, 138, 27, 62, 4, 129, 64, 61, 162, 55, 149, 188, 177, 89, 20, 61, 83, 169, 146, 60, 160, 170, 73, 61, 76, 233, 31, 62, 162, 53, 196, 190, 141, 254, 154, 190, 239, 204, 138, 190, 115, 222, 43, 62, 212, 85, 165, 62, 196, 171, 208, 61, 6, 150, 168, 190, 135, 178, 169, 62, 226, 65, 168, 61, 158, 86, 146, 188, 127, 141, 12, 190, 65, 6, 6, 188, 156, 165, 203, 59, 21, 198, 1, 191, 20, 80, 6, 62, 216, 38, 56, 190, 86, 46, 40, 190, 193, 167, 7, 190, 158, 168, 33, 191, 60, 107, 147, 62, 12, 242, 13, 62, 11, 241, 199, 61, 49, 59, 54, 190, 245, 13, 38, 190, 155, 33, 184, 62, 159, 55, 77, 62, 73, 207, 45, 190, 127, 62, 48, 189, 202, 88, 173, 189, 64, 146, 114, 61, 234, 209, 149, 189, 99, 90, 93, 62, 87, 93, 173, 190, 131, 136, 108, 190, 171, 24, 127, 190, 222, 53, 59, 62, 27, 166, 133, 61, 55, 241, 198, 61, 170, 94, 183, 189, 85, 88, 13, 62, 233, 212, 85, 190, 113, 122, 142, 189, 232, 141, 42, 190, 46, 16, 181, 190, 20, 23, 159, 190, 5, 196, 95, 61, 140, 135, 81, 61, 33, 20, 140, 60, 213, 18, 103, 190, 77, 81, 165, 189, 70, 205, 62, 61, 170, 79, 228, 190, 154, 106, 162, 190, 183, 208, 148, 190, 10, 19, 14, 190, 89, 115, 112, 61, 243, 174, 98, 190, 159, 202, 70, 190, 17, 56, 109, 191, 42, 196, 115, 189, 242, 223, 150, 190, 78, 234, 145, 62, 29, 219, 48, 190, 48, 116, 125, 188, 20, 223, 184, 188, 247, 74, 10, 190, 151, 185, 91, 62, 197, 216, 206, 62, 215, 95, 152, 190, 150, 13, 92, 62, 203, 53, 201, 189, 35, 223, 146, 189, 94, 36, 112, 190, 31, 227, 225, 189, 231, 65, 71, 189, 250, 161, 176, 189, 51, 194, 21, 62, 254, 145, 41, 62, 223, 131, 183, 189, 134, 204, 177, 61, 23, 204, 133, 189, 46, 172, 60, 62, 227, 171, 212, 59, 111, 91, 142, 191, 199, 195, 143, 190, 166, 2, 237, 61, 43, 174, 21, 62, 154, 171, 113, 189, 202, 192, 39, 191, 97, 134, 131, 62, 200, 174, 143, 191, 113, 105, 239, 61, 103, 43, 137, 60, 178, 182, 113, 62, 181, 234, 232, 189, 3, 112, 86, 190, 102, 163, 133, 61, 155, 62, 221, 61, 198, 177, 14, 61, 255, 215, 138, 62, 77, 131, 212, 190, 139, 231, 93, 62, 128, 58, 151, 62, 178, 204, 172, 190, 121, 128, 152, 190, 150, 1, 7, 191, 84, 219, 140, 190, 239, 36, 10, 190, 64, 180, 111, 62, 248, 96, 134, 62, 54, 136, 84, 60, 207, 122, 137, 62, 142, 84, 1, 62, 101, 37, 116, 62, 39, 234, 159, 190, 194, 175, 204, 190, 62, 102, 162, 189, 161, 141, 124, 189, 217, 46, 178, 62, 166, 126, 237, 189, 37, 100, 146, 190, 107, 111, 139, 62, 177, 14, 244, 189, 84, 255, 18, 189, 56, 12, 23, 62, 148, 254, 54, 62, 39, 145, 66, 189, 199, 109, 36, 189, 147, 182, 14, 62, 226, 226, 224, 62, 0, 172, 13, 62, 169, 90, 134, 189, 98, 10, 105, 190, 201, 126, 23, 60, 185, 132, 178, 62, 52, 146, 229, 189, 221, 207, 175, 189, 194, 179, 203, 61, 55, 67, 4, 61, 76, 78, 90, 190, 147, 143, 126, 189, 113, 199, 32, 191, 189, 205, 58, 62, 44, 10, 168, 190, 121, 138, 139, 61, 57, 243, 129, 190, 246, 224, 17, 191, 87, 206, 176, 62, 30, 35, 64, 62, 151, 183, 139, 188, 150, 129, 127, 190, 105, 227, 2, 190, 124, 227, 169, 62, 198, 90, 235, 61, 71, 168, 169, 189, 144, 48, 71, 60, 115, 28, 168, 60, 25, 9, 50, 62, 215, 215, 245, 189, 51, 215, 56, 62, 109, 100, 224, 190, 9, 203, 153, 190, 201, 193, 215, 190, 189, 156, 128, 61, 78, 228, 100, 62, 240, 121, 12, 62, 227, 121, 32, 190, 131, 79, 160, 61, 148, 249, 210, 60, 127, 80, 66, 62, 143, 149, 98, 62, 193, 204, 132, 62, 124, 0, 46, 190, 77, 27, 23, 189, 161, 227, 153, 189, 227, 96, 108, 190, 76, 177, 65, 188, 206, 219, 133, 188, 109, 200, 139, 190, 84, 52, 13, 62, 49, 251, 165, 188, 149, 34, 167, 60, 49, 205, 133, 189, 152, 247, 7, 190, 49, 22, 140, 62, 115, 148, 217, 60, 235, 118, 25, 188, 237, 220, 187, 189, 179, 50, 25, 190, 210, 6, 46, 61, 206, 65, 30, 62, 190, 94, 44, 62, 140, 29, 217, 189, 82, 10, 207, 190, 173, 179, 232, 60, 44, 219, 228, 189, 240, 42, 32, 62, 40, 153, 162, 188, 145, 128, 129, 189, 248, 186, 23, 62, 162, 66, 128, 61, 92, 135, 180, 61, 188, 128, 166, 62, 211, 157, 84, 62, 114, 139, 155, 190, 229, 137, 50, 189, 39, 108, 36, 189, 37, 244, 234, 189, 132, 86, 40, 189, 250, 38, 20, 60, 249, 1, 251, 190, 234, 186, 116, 62, 125, 99, 57, 62, 241, 29, 27, 189, 50, 232, 148, 190, 218, 209, 230, 189, 192, 126, 44, 61, 78, 86, 131, 61, 97, 77, 147, 188, 35, 79, 34, 189, 13, 183, 233, 189, 183, 141, 222, 189, 207, 80, 79, 62, 64, 10, 94, 62, 99, 93, 105, 188, 193, 173, 130, 190, 149, 76, 131, 61, 50, 106, 125, 61, 241, 142, 243, 62, 79, 60, 86, 188, 135, 31, 113, 190, 82, 131, 206, 62, 148, 171, 250, 61, 235, 56, 154, 189, 5, 25, 182, 61, 16, 169, 158, 189, 133, 60, 171, 61, 183, 208, 236, 189, 126, 248, 68, 61, 249, 254, 140, 58, 172, 69, 70, 61, 185, 162, 28, 61, 214, 249, 41, 189, 188, 212, 211, 61, 15, 78, 179, 188, 172, 8, 49, 190, 5, 173, 46, 190, 238, 116, 178, 187, 189, 159, 28, 61, 102, 220, 182, 189, 137, 200, 51, 190, 155, 216, 47, 189, 82, 86, 110, 61, 143, 241, 8, 61, 90, 138, 246, 61, 78, 154, 16, 190, 101, 6, 217, 60, 53, 213, 7, 62, 215, 147, 146, 189, 36, 20, 217, 189, 246, 52, 184, 61, 251, 181, 189, 189, 193, 247, 50, 190, 226, 245, 188, 189, 18, 149, 222, 188, 207, 213, 1, 61, 225, 48, 118, 62, 20, 164, 138, 62, 20, 182, 159, 188, 205, 200, 154, 189, 238, 169, 140, 189, 124, 161, 197, 190, 71, 157, 9, 190, 199, 255, 66, 190, 72, 20, 91, 191, 128, 97, 186, 62, 181, 113, 57, 61, 20, 239, 56, 62, 31, 182, 198, 190, 16, 54, 48, 190, 30, 53, 88, 62, 254, 2, 189, 61, 125, 254, 146, 62, 72, 128, 140, 186, 67, 250, 12, 61, 87, 155, 79, 188, 199, 86, 131, 62, 248, 115, 50, 62, 147, 196, 127, 190, 74, 113, 174, 190, 95, 92, 71, 190, 60, 93, 242, 61, 221, 70, 189, 62, 95, 64, 141, 61, 104, 245, 182, 188, 13, 57, 255, 61, 148, 217, 132, 61, 101, 196, 151, 190, 70, 236, 2, 61, 99, 207, 181, 190, 192, 108, 2, 62, 103, 81, 200, 61, 92, 116, 95, 190, 222, 21, 133, 189, 183, 254, 55, 62, 157, 77, 151, 62, 100, 254, 15, 191, 246, 99, 29, 190, 80, 59, 25, 189, 0, 10, 41, 62, 95, 214, 121, 187, 185, 217, 203, 61, 155, 210, 63, 190, 255, 37, 49, 62, 35, 74, 20, 190, 56, 139, 197, 189, 226, 125, 158, 62, 53, 179, 180, 61, 154, 249, 80, 190, 113, 104, 214, 189, 88, 54, 83, 62, 52, 206, 198, 188, 118, 56, 209, 61, 60, 139, 158, 189, 131, 0, 18, 190, 90, 127, 55, 62, 154, 23, 86, 62, 188, 36, 141, 189, 123, 70, 52, 61, 207, 200, 45, 62, 28, 78, 150, 189, 7, 160, 1, 190, 98, 67, 21, 62, 128, 79, 37, 190, 227, 109, 134, 189, 181, 35, 50, 62, 194, 89, 163, 189, 201, 34, 246, 188, 200, 49, 177, 62, 163, 179, 14, 190, 43, 4, 143, 61, 254, 10, 169, 188, 84, 64, 220, 61, 130, 101, 164, 61, 199, 94, 86, 190, 62, 83, 76, 61, 233, 93, 107, 60, 146, 116, 6, 190, 105, 250, 10, 62, 75, 115, 205, 190, 100, 127, 241, 61, 33, 19, 179, 190, 141, 29, 28, 190, 48, 144, 31, 190, 125, 83, 36, 190, 167, 249, 208, 189, 216, 114, 162, 190, 203, 186, 135, 190, 93, 161, 76, 61, 205, 63, 205, 190, 62, 254, 49, 188, 88, 119, 204, 189, 189, 137, 45, 188, 42, 116, 180, 189, 173, 192, 135, 189, 102, 232, 201, 60, 14, 221, 18, 62, 61, 242, 51, 189, 115, 81, 24, 190, 67, 49, 16, 189, 29, 215, 41, 190, 113, 39, 41, 62, 66, 235, 234, 189, 154, 83, 23, 61, 47, 34, 253, 189, 154, 26, 199, 61, 228, 24, 141, 61, 197, 112, 246, 60, 66, 35, 183, 188, 180, 70, 133, 61, 195, 97, 182, 189, 66, 8, 38, 190, 205, 25, 167, 61, 135, 125, 31, 189, 15, 100, 176, 60, 11, 80, 0, 61, 31, 237, 228, 61, 185, 136, 57, 190, 228, 20, 246, 188, 70, 70, 26, 190, 142, 238, 213, 187, 113, 241, 140, 189, 142, 168, 223, 189, 57, 207, 8, 62, 176, 213, 100, 190, 172, 191, 47, 190, 55, 161, 164, 62, 68, 214, 140, 191, 16, 243, 163, 62, 10, 158, 130, 190, 17, 67, 143, 190, 161, 155, 221, 190, 159, 8, 66, 190, 235, 115, 114, 190, 8, 154, 118, 62, 159, 181, 63, 188, 72, 148, 154, 190, 120, 31, 12, 191, 77, 161, 71, 60, 210, 189, 29, 191, 205, 20, 184, 61, 169, 6, 34, 62, 99, 68, 142, 190, 251, 137, 158, 62, 25, 60, 45, 190, 7, 69, 250, 190, 18, 93, 145, 191, 155, 182, 1, 191, 126, 228, 156, 190, 30, 217, 165, 61, 124, 190, 21, 190, 192, 90, 81, 62, 48, 50, 46, 191, 87, 216, 214, 190, 197, 173, 102, 190, 198, 142, 167, 62, 208, 191, 21, 61, 43, 122, 136, 189, 51, 75, 131, 189, 6, 10, 43, 191, 121, 103, 31, 189, 1, 50, 174, 190, 131, 143, 72, 190, 33, 87, 52, 190, 26, 255, 175, 190, 127, 26, 241, 62, 166, 50, 237, 61, 46, 8, 229, 61, 13, 205, 31, 190, 235, 240, 209, 190, 160, 25, 136, 62, 2, 75, 127, 189, 31, 98, 201, 188, 1, 82, 139, 61, 93, 130, 92, 190, 13, 20, 83, 61, 96, 185, 200, 189, 208, 185, 156, 62, 27, 37, 209, 190, 191, 180, 26, 191, 238, 165, 172, 189, 68, 173, 30, 62, 84, 95, 204, 62, 253, 127, 195, 61, 48, 168, 58, 190, 214, 98, 49, 62, 224, 194, 187, 61, 233, 104, 200, 61, 170, 79, 135, 61, 127, 179, 163, 189, 189, 178, 9, 61, 204, 233, 243, 61, 123, 18, 38, 190, 159, 111, 232, 61, 205, 110, 162, 61, 168, 17, 136, 61, 67, 125, 139, 61, 14, 140, 26, 190, 99, 200, 123, 189, 140, 83, 56, 189, 86, 199, 134, 189, 108, 100, 7, 60, 47, 196, 42, 190, 162, 4, 226, 189, 152, 165, 150, 60, 138, 180, 160, 189, 42, 145, 232, 188, 55, 103, 54, 190, 68, 58, 21, 190, 142, 103, 159, 61, 187, 106, 213, 189, 69, 240, 252, 61, 242, 236, 229, 61, 62, 237, 15, 62, 190, 47, 130, 189, 199, 78, 17, 189, 213, 203, 9, 190, 165, 59, 37, 190, 191, 46, 251, 189, 224, 182, 211, 189, 192, 19, 62, 190, 235, 6, 101, 190, 137, 138, 173, 62, 245, 92, 27, 62, 148, 131, 25, 190, 190, 209, 234, 60, 9, 182, 150, 189, 85, 193, 110, 62, 237, 48, 9, 190, 177, 203, 159, 189, 73, 8, 208, 185, 182, 105, 166, 61, 139, 253, 70, 62, 163, 211, 168, 188, 14, 72, 72, 190, 142, 125, 230, 187, 92, 29, 49, 189, 200, 26, 43, 189, 174, 128, 214, 60, 46, 155, 26, 62, 102, 36, 95, 61, 72, 109, 36, 189, 80, 17, 128, 189, 111, 255, 110, 62, 248, 198, 32, 61, 124, 67, 114, 62, 63, 103, 199, 190, 207, 78, 170, 61, 190, 39, 84, 62, 23, 83, 37, 190, 21, 56, 106, 190};
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
                alignas(float) const unsigned char memory[] = {212, 62, 2, 190, 70, 54, 40, 60, 136, 213, 75, 62, 27, 131, 235, 189, 244, 138, 102, 62, 141, 208, 80, 62, 58, 155, 172, 61, 123, 141, 162, 60, 193, 102, 143, 62, 60, 153, 68, 62, 37, 126, 114, 189, 115, 99, 64, 61, 174, 142, 253, 61, 116, 45, 33, 190, 109, 217, 84, 190, 15, 50, 147, 61, 12, 238, 167, 185, 142, 160, 51, 187, 111, 193, 159, 61, 201, 200, 167, 59, 81, 145, 64, 60, 201, 239, 167, 61, 122, 217, 94, 61, 96, 131, 181, 189, 16, 4, 112, 62, 81, 233, 196, 189, 70, 228, 166, 189, 139, 63, 15, 190, 136, 19, 133, 61, 117, 61, 63, 62, 184, 172, 255, 61, 243, 230, 109, 62};
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
                alignas(float) const unsigned char memory[] = {22, 164, 152, 190, 126, 66, 106, 189, 198, 54, 108, 190, 38, 143, 88, 189, 82, 158, 91, 189, 186, 71, 96, 189, 51, 80, 123, 190, 23, 55, 205, 190, 245, 14, 223, 189, 8, 243, 42, 63, 116, 190, 210, 189, 8, 49, 47, 62, 126, 152, 53, 62, 11, 128, 248, 62, 220, 211, 232, 188, 90, 105, 145, 62, 109, 16, 91, 62, 15, 104, 171, 190, 192, 19, 32, 191, 201, 46, 170, 190, 9, 119, 210, 62, 66, 103, 121, 62, 182, 184, 183, 62, 63, 79, 184, 61, 40, 109, 195, 62, 95, 111, 49, 190, 95, 160, 129, 62, 119, 250, 9, 62, 248, 26, 64, 63, 113, 79, 232, 62, 225, 153, 21, 190, 74, 85, 140, 190, 204, 112, 83, 62, 128, 57, 229, 60, 60, 143, 132, 190, 9, 167, 233, 189, 113, 131, 201, 190, 110, 248, 131, 190, 114, 210, 124, 189, 213, 240, 249, 61, 69, 221, 29, 190, 228, 155, 234, 187, 12, 71, 45, 62, 157, 15, 75, 190, 51, 31, 0, 190, 183, 99, 87, 62, 82, 177, 63, 62, 26, 182, 104, 190, 143, 66, 20, 62, 30, 147, 64, 61, 34, 180, 142, 61, 42, 14, 154, 61, 224, 60, 85, 62, 82, 57, 150, 61, 85, 207, 214, 61, 189, 240, 21, 190, 181, 134, 3, 190, 89, 46, 19, 190, 31, 178, 175, 59, 51, 214, 68, 188, 70, 225, 133, 188, 90, 148, 90, 62, 234, 107, 113, 61, 250, 183, 56, 62};
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
                alignas(float) const unsigned char memory[] = {156, 254, 45, 188, 55, 56, 129, 190};
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
    alignas(float) const unsigned char memory[] = {79, 34, 217, 62, 187, 1, 128, 190, 157, 58, 154, 190};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 3, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

// NOTE: This code export assumes that the endianness of the target platform is the same as the endianness of the source platform
#include <rl_tools/containers.h>
namespace rl_tools::checkpoint::example::output {
    static_assert(sizeof(unsigned char) == 1);
    alignas(float) const unsigned char memory[] = {193, 77, 91, 63, 211, 155, 143, 191};
    using CONTAINER_SPEC = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::Specification<float, unsigned long, 1, 2, RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::matrix::layouts::RowMajorAlignment<unsigned long, 1>>;
    using CONTAINER_TYPE = RL_TOOLS_NAMESPACE_WRAPPER ::rl_tools::MatrixDynamic<CONTAINER_SPEC>;
    const CONTAINER_TYPE container = {(float*)memory}; 
}

namespace rl_tools::checkpoint::meta{
   char name[] = "experiments/2024-05-27_19-39-12/b738cd1_zoo_algorithm_environment/sac_pendulum-v1/0017/steps/000000000004000";
   char commit_hash[] = "b738cd18dcbee2b66aa05c642653771cd0e46c8b";
}